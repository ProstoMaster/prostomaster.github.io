import type {YMapLocationRequest, LngLat} from '@yandex/ymaps3-types';

export const LOCATION: YMapLocationRequest = {
    center: [37.623082, 55.75254], // starting position [lng, lat]
    zoom: 9 // starting zoom
};

// The initial coordinates of the starting and ending points of the route
export const INITIAL_ROUTE_POINTS: LngLat[] = [
    [37.620028, 55.741556],
    [38.130492, 56.31112]
];
