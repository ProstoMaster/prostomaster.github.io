import type {LngLat, RouteFeature} from '@yandex/ymaps3-types';
import {getPointStr, fetchRoute, lineStyle, InfoMessage} from '../common';
import {INITIAL_ROUTE_POINTS, LOCATION} from '../variables';

window.map = null;

main();
async function main() {
    // Waiting for all api elements to be loaded
    await ymaps3.ready;
    const {YMap, YMapDefaultSchemeLayer, YMapDefaultFeaturesLayer, YMapFeature, YMapControls, YMapControlButton} =
        ymaps3;
    const {YMapDefaultMarker} = await ymaps3.import('@yandex/ymaps3-default-ui-theme');

    // Initialize the map
    map = new YMap(
        // Pass the link to the HTMLElement of the container
        document.getElementById('app'),
        // Pass the map initialization parameters
        {location: LOCATION, showScaleInCopyrights: true, margin: [100, 100, 100, 100]},
        [
            // Add a map scheme layer
            new YMapDefaultSchemeLayer({}),
            // Add a layer of geo objects to display markers and line
            new YMapDefaultFeaturesLayer({})
        ]
    );

    // Create and add route start and end markers to the map.
    const pointA = new YMapDefaultMarker({
        coordinates: INITIAL_ROUTE_POINTS[0],
        draggable: true,
        title: 'Point A',
        subtitle: getPointStr(INITIAL_ROUTE_POINTS[0]),
        onDragMove: onDragMovePointAHandler,
        onDragEnd: onDragEndHandler
    });
    const pointB = new YMapDefaultMarker({
        coordinates: INITIAL_ROUTE_POINTS[1],
        draggable: true,
        title: 'Point B',
        subtitle: getPointStr(INITIAL_ROUTE_POINTS[1]),
        onDragMove: onDragMovePointBHandler,
        onDragEnd: onDragEndHandler
    });
    map.addChild(pointA).addChild(pointB);

    // Create and add a route line to the map
    const routeLine = new YMapFeature({geometry: {type: 'LineString', coordinates: []}, style: lineStyle});
    map.addChild(routeLine);

    // Get and process data about the initial route
    fetchRoute(pointA.coordinates, pointB.coordinates).then(routeHandler);

    /* Create and add a shared container for controls to the map.
    Using YMapControls you can change the position of the control */
    const topRightControls = new YMapControls({position: 'top right'});
    map.addChild(topRightControls);
    // Add a custom information message control to the map
    topRightControls.addChild(new InfoMessage({text: 'Drag any marker to rebuild the route.'}));

    const topLeftControls = new YMapControls({position: 'top left'}, [
        new YMapControlButton({
            text: 'Driving',
            onClick: () => fetchRoute(pointA.coordinates, pointB.coordinates, 'driving').then(routeHandler)
        }),
        new YMapControlButton({
            text: 'Truck',
            onClick: () => fetchRoute(pointA.coordinates, pointB.coordinates, 'truck').then(routeHandler)
        }),
        new YMapControlButton({
            text: 'Walking',
            onClick: () => fetchRoute(pointA.coordinates, pointB.coordinates, 'walking').then(routeHandler)
        }),
        new YMapControlButton({
            text: 'Transit',
            onClick: () => fetchRoute(pointA.coordinates, pointB.coordinates, 'transit').then(routeHandler)
        })
    ]);
    map.addChild(topLeftControls);

    // The handler functions for updating the coordinates and subtitle of the marker when dragging
    function onDragMovePointAHandler(coordinates: LngLat) {
        pointA.update({coordinates, subtitle: getPointStr(coordinates)});
    }
    function onDragMovePointBHandler(coordinates: LngLat) {
        pointB.update({coordinates, subtitle: getPointStr(coordinates)});
    }

    // The handler function for updating route data after dragging the marker
    function onDragEndHandler() {
        fetchRoute(pointA.coordinates, pointB.coordinates).then(routeHandler);
    }

    /* A handler function that updates the route line 
    and shifts the map to the new route boundaries, if they are available. */
    function routeHandler(newRoute: RouteFeature) {
        // If the route is not found, then we alert a message and clear the route line
        if (!newRoute) {
            alert('Route not found');
            routeLine.update({geometry: {type: 'LineString', coordinates: []}});
            return;
        }

        routeLine.update({...newRoute});
        if (newRoute.properties.bounds) {
            map.setLocation({bounds: newRoute.properties.bounds, duration: 300});
        }
    }
}
