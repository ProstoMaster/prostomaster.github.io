@import url("themeTemplate/css/themeforest.css"); 
/*
Theme Name: style
Author: the philip team
Version: 1.0
*/
@charset "UTF-8";
/**
* Template Style
*
* [Table of contents]
*   1 Bootstrap Framework
*     1.1  Normalize
*     1.2  Glyphicons
*     1.3  Scaffolding
*     1.4  Type
*     1.5  Code
*     1.6  Tables
*     1.7  Forms
*     1.8  Buttons
*     1.9  Grids
*     1.10 Component animations
*     1.11 Dropdowns
*     1.12 Button Groups
*     1.13 Input Groups
*     1.14 Navs
*     1.15 Navbar
*     1.16 Breadcrumbs
*     1.17 Pagination
*     1.18 Pager
*     1.19 Labels
*     1.20 Badges
*     1.21 Jumbotron
*     1.22 Thumbnails
*     1.23 Alerts
*     1.24 Progress bars
*     1.25 Media
*     1.26 List Group
*     1.27 Panels
*     1.28 Responsive Embed
*     1.29 Wells
*     1.30 Close
*     1.31 Modals
*     1.32 Tooltip
*     1.33 Popovers
*     1.34 Carousel
*     1.35 Utilities
*     1.36 Responsive Utilities
*
*   2 Bootstrap Toolkit Styles
*     2.1  Reset
*     2.2  Flex Grid System
*     2.3  Responsive Text System
*     2.4  Responsive Pulls System
*     2.5  Responsive Visibility System
*     2.6  Bootstrap Grid Addons
*     2.7  Dividers
*     2.8  Type Addons
*     2.9  Buttons Addons
*     2.10 Buttons Effects
*     2.11 Dropdowns Addons
*     2.12 Sections
*     2.13 Font Awesome
*     2.14 Flaticon
*     2.15 Material Design Icons
*     2.16 Thumbnail Addons
*     2.17 Wells Addons
*     2.18 Scaffolding Addons
*     2.19 Text Alignment System
*     2.20 Text Styling System
*     2.21 Navs Addons
*     2.22 Navbar Addons
*     2.23 Panels Addons
*     2.24 Icons
*     2.25 Progress Bars Addons
*     2.26 Media Addons
*     2.27 List Groups Addons
*     2.28 Breadcrumbs Addons
*     2.29 Input Groups Addons
*     2.30 Dropcaps
*     2.31 Alerts Addons
*     2.32 Animations Addons
*     2.33 Groups
*     2.34 Comment Boxes
*     2.35 Quotes
*     2.36 Pagination Addons
*     2.37 Pager Addons
*     2.38 Labels Addons
*     2.39 Posts
*     2.40 Form Addons
*     2.41 Offsets
*     2.42 Responsive Units
*     2.43 Icon Boxes
*     2.44 Floating Groups
*     2.45 Pricing and Plans
*     2.46 Tables Addons
*     2.47 Stacktables
*     2.48 Text Rotators
*     2.49 Jumbotron Addons
*     2.50 Shop Toolbar
*     2.51 Shop Product
*     2.52 Badges Addons
*     2.53 Member Boxes
*     2.54 Context Styling
*     2.55 Page Loaders
*     2.56 Testimonials
*
*   3 Plugins
*     3.1  RD Navbar
*     3.2  RD Twitterfeed
*     3.3  RD Instafeed
*     3.4  RD Search
*     3.5  RD Video
*     3.6  RD Parallax
*     3.7  RD Flickrfeed
*     3.8  Swiper Slider
*     3.9  Animate
*     3.10 Scroll To
*     3.11 Counter
*     3.12 Owl Carousel
*     3.13 Isotope
*     3.14 Photoswipe
*     3.15 Responsive Tabs
*     3.16 RD Google Maps
*     3.17 Select 2
*     3.18 FS Stepper
*     3.19 Countdown
*     3.20 RD Audio Player
*     3.21 RD Video Player
*     3.22 RD Event Calendar
*     3.23 RD Facebook Feed
*     3.24 Soundcloud Player
*     3.25 Material Datetime Picker
*     3.26 ToTop Button
*/
/** 1 Bootstrap Framework */
/** 1.1  Normalize */
/*! normalize.css v3.0.3 | MIT License | github.com/necolas/normalize.css */

#msk { position: absolute;
    top: 20px;
   opacity: 0.85;
   width: 125px;}

html {
  font-family: sans-serif;
  -ms-text-size-adjust: 100%;
  -webkit-text-size-adjust: 100%;
}

body {
  margin: 0;
}

article,
aside,
details,
figcaption,
figure,
footer,
header,
hgroup,
main,
menu,
nav,
section,
summary {
  display: block;
}

audio,
canvas,
progress,
video {
  display: inline-block;
  vertical-align: baseline;
}

audio:not([controls]) {
  display: none;
  height: 0;
}

[hidden],
template {
  display: none;
}

a {
  background-color: transparent;
}

a:active,
a:hover {
  outline: 0;
}

abbr[title] {
  border-bottom: 1px dotted;
}

b,
strong {
  font-weight: bold;
}

dfn {
  font-style: italic;
}

h1 {
  font-size: 2em;
  margin: 0.67em 0;
}

mark {
  background: #ff0;
  color: #000;
}

small {
  font-size: 80%;
}

sub,
sup {
  font-size: 75%;
  line-height: 0;
  position: relative;
  vertical-align: baseline;
}

sup {
  top: -0.5em;
}

sub {
  bottom: -0.25em;
}

img {
  border: 0;
}

svg:not(:root) {
  overflow: hidden;
}

figure {
  margin: 1em 40px;
}

hr {
  box-sizing: content-box;
  height: 0;
}

pre {
  overflow: auto;
}

code,
kbd,
pre,
samp {
  font-family: monospace, monospace;
  font-size: 1em;
}

button,
input,
optgroup,
select,
textarea {
  color: inherit;
  font: inherit;
  margin: 0;
}

button {
  overflow: visible;
}

button,
select {
  text-transform: none;
}

button,
html input[type="button"],
input[type="reset"],
input[type="submit"] {
  -webkit-appearance: button;
  cursor: pointer;
}

button[disabled],
html input[disabled] {
  cursor: default;
}

button::-moz-focus-inner,
input::-moz-focus-inner {
  border: 0;
  padding: 0;
}

input {
  line-height: normal;
}

input[type="checkbox"],
input[type="radio"] {
  box-sizing: border-box;
  padding: 0;
}

input[type="number"]::-webkit-inner-spin-button,
input[type="number"]::-webkit-outer-spin-button {
  height: auto;
}

input[type="search"] {
  -webkit-appearance: textfield;
  box-sizing: content-box;
}

input[type="search"]::-webkit-search-cancel-button,
input[type="search"]::-webkit-search-decoration {
  -webkit-appearance: none;
}

fieldset {
  border: 1px solid #c0c0c0;
  margin: 0 2px;
  padding: 0.35em 0.625em 0.75em;
}

legend {
  border: 0;
  padding: 0;
}

textarea {
  overflow: auto;
}

optgroup {
  font-weight: bold;
}

table {
  border-collapse: collapse;
  border-spacing: 0;
}

td,
th {
  padding: 0;
}

/*! Source: https://github.com/h5bp/html5-boilerplate/blob/master/src/css/main.css */
@media print {
  *,
  *:before,
  *:after {
    background: transparent !important;
    color: #000 !important;
    box-shadow: none !important;
    text-shadow: none !important;
  }
  a,
  a:visited {
    text-decoration: underline;
  }
  a[href]:after {
    content: " (" attr(href) ")";
  }
  abbr[title]:after {
    content: " (" attr(title) ")";
  }
  a[href^="#"]:after,
  a[href^="javascript:"]:after {
    content: "";
  }
  pre,
  blockquote {
    border: 1px solid #999;
    page-break-inside: avoid;
  }
  thead {
    display: table-header-group;
  }
  tr,
  img {
    page-break-inside: avoid;
  }
  img {
    max-width: 100% !important;
  }
  p,
  h2,
  h3 {
    orphans: 3;
    widows: 3;
  }
  h2,
  h3 {
    page-break-after: avoid;
  }
  .navbar {
    display: none;
  }
  .btn > .caret,
  .dropup > .btn > .caret {
    border-top-color: #000 !important;
  }
  .label {
    border: 1px solid #000;
  }
  .table {
    border-collapse: collapse !important;
  }
  .table td,
  .table th {
    background-color: #fff !important;
  }
  .table-bordered th,
  .table-bordered td {
    border: 1px solid #ddd !important;
  }
}

/** 1.2  Glyphicons */
@font-face {
  font-family: 'Glyphicons Halflings';
  src: url("../fonts/glyphicons-halflings-regular.html");
  src: url("../fonts/glyphicons-halflings-regulard41d.html?#iefix") format("embedded-opentype"), url("../fonts/glyphicons-halflings-regular-2.html") format("woff2"), url("../fonts/glyphicons-halflings-regular-3.html") format("woff"), url("../fonts/glyphicons-halflings-regular-4.html") format("truetype"), url("../fonts/glyphicons-halflings-regular-5.html#glyphicons_halflingsregular") format("svg");
}

.glyphicon {
  position: relative;
  top: 1px;
  display: inline-block;
  font-family: 'Glyphicons Halflings';
  font-style: normal;
  font-weight: normal;
  line-height: 1;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
}

.glyphicon-asterisk:before {
  content: "\002a";
}

.glyphicon-plus:before {
  content: "\002b";
}

.glyphicon-euro:before,
.glyphicon-eur:before {
  content: "\20ac";
}

.glyphicon-minus:before {
  content: "\2212";
}

.glyphicon-cloud:before {
  content: "\2601";
}

.glyphicon-envelope:before {
  content: "\2709";
}

.glyphicon-pencil:before {
  content: "\270f";
}

.glyphicon-glass:before {
  content: "\e001";
}

.glyphicon-music:before {
  content: "\e002";
}

.glyphicon-search:before {
  content: "\e003";
}

.glyphicon-heart:before {
  content: "\e005";
}

.glyphicon-star:before {
  content: "\e006";
}

.glyphicon-star-empty:before {
  content: "\e007";
}

.glyphicon-user:before {
  content: "\e008";
}

.glyphicon-film:before {
  content: "\e009";
}

.glyphicon-th-large:before {
  content: "\e010";
}

.glyphicon-th:before {
  content: "\e011";
}

.glyphicon-th-list:before {
  content: "\e012";
}

.glyphicon-ok:before {
  content: "\e013";
}

.glyphicon-remove:before {
  content: "\e014";
}

.glyphicon-zoom-in:before {
  content: "\e015";
}

.glyphicon-zoom-out:before {
  content: "\e016";
}

.glyphicon-off:before {
  content: "\e017";
}

.glyphicon-signal:before {
  content: "\e018";
}

.glyphicon-cog:before {
  content: "\e019";
}

.glyphicon-trash:before {
  content: "\e020";
}

.glyphicon-home:before {
  content: "\e021";
}

.glyphicon-file:before {
  content: "\e022";
}

.glyphicon-time:before {
  content: "\e023";
}

.glyphicon-road:before {
  content: "\e024";
}

.glyphicon-download-alt:before {
  content: "\e025";
}

.glyphicon-download:before {
  content: "\e026";
}

.glyphicon-upload:before {
  content: "\e027";
}

.glyphicon-inbox:before {
  content: "\e028";
}

.glyphicon-play-circle:before {
  content: "\e029";
}

.glyphicon-repeat:before {
  content: "\e030";
}

.glyphicon-refresh:before {
  content: "\e031";
}

.glyphicon-list-alt:before {
  content: "\e032";
}

.glyphicon-lock:before {
  content: "\e033";
}

.glyphicon-flag:before {
  content: "\e034";
}

.glyphicon-headphones:before {
  content: "\e035";
}

.glyphicon-volume-off:before {
  content: "\e036";
}

.glyphicon-volume-down:before {
  content: "\e037";
}

.glyphicon-volume-up:before {
  content: "\e038";
}

.glyphicon-qrcode:before {
  content: "\e039";
}

.glyphicon-barcode:before {
  content: "\e040";
}

.glyphicon-tag:before {
  content: "\e041";
}

.glyphicon-tags:before {
  content: "\e042";
}

.glyphicon-book:before {
  content: "\e043";
}

.glyphicon-bookmark:before {
  content: "\e044";
}

.glyphicon-print:before {
  content: "\e045";
}

.glyphicon-camera:before {
  content: "\e046";
}

.glyphicon-font:before {
  content: "\e047";
}

.glyphicon-bold:before {
  content: "\e048";
}

.glyphicon-italic:before {
  content: "\e049";
}

.glyphicon-text-height:before {
  content: "\e050";
}

.glyphicon-text-width:before {
  content: "\e051";
}

.glyphicon-align-left:before {
  content: "\e052";
}

.glyphicon-align-center:before {
  content: "\e053";
}

.glyphicon-align-right:before {
  content: "\e054";
}

.glyphicon-align-justify:before {
  content: "\e055";
}

.glyphicon-list:before {
  content: "\e056";
}

.glyphicon-indent-left:before {
  content: "\e057";
}

.glyphicon-indent-right:before {
  content: "\e058";
}

.glyphicon-facetime-video:before {
  content: "\e059";
}

.glyphicon-picture:before {
  content: "\e060";
}

.glyphicon-map-marker:before {
  content: "\e062";
}

.glyphicon-adjust:before {
  content: "\e063";
}

.glyphicon-tint:before {
  content: "\e064";
}

.glyphicon-edit:before {
  content: "\e065";
}

.glyphicon-share:before {
  content: "\e066";
}

.glyphicon-check:before {
  content: "\e067";
}

.glyphicon-move:before {
  content: "\e068";
}

.glyphicon-step-backward:before {
  content: "\e069";
}

.glyphicon-fast-backward:before {
  content: "\e070";
}

.glyphicon-backward:before {
  content: "\e071";
}

.glyphicon-play:before {
  content: "\e072";
}

.glyphicon-pause:before {
  content: "\e073";
}

.glyphicon-stop:before {
  content: "\e074";
}

.glyphicon-forward:before {
  content: "\e075";
}

.glyphicon-fast-forward:before {
  content: "\e076";
}

.glyphicon-step-forward:before {
  content: "\e077";
}

.glyphicon-eject:before {
  content: "\e078";
}

.glyphicon-chevron-left:before {
  content: "\e079";
}

.glyphicon-chevron-right:before {
  content: "\e080";
}

.glyphicon-plus-sign:before {
  content: "\e081";
}

.glyphicon-minus-sign:before {
  content: "\e082";
}

.glyphicon-remove-sign:before {
  content: "\e083";
}

.glyphicon-ok-sign:before {
  content: "\e084";
}

.glyphicon-question-sign:before {
  content: "\e085";
}

.glyphicon-info-sign:before {
  content: "\e086";
}

.glyphicon-screenshot:before {
  content: "\e087";
}

.glyphicon-remove-circle:before {
  content: "\e088";
}

.glyphicon-ok-circle:before {
  content: "\e089";
}

.glyphicon-ban-circle:before {
  content: "\e090";
}

.glyphicon-arrow-left:before {
  content: "\e091";
}

.glyphicon-arrow-right:before {
  content: "\e092";
}

.glyphicon-arrow-up:before {
  content: "\e093";
}

.glyphicon-arrow-down:before {
  content: "\e094";
}

.glyphicon-share-alt:before {
  content: "\e095";
}

.glyphicon-resize-full:before {
  content: "\e096";
}

.glyphicon-resize-small:before {
  content: "\e097";
}

.glyphicon-exclamation-sign:before {
  content: "\e101";
}

.glyphicon-gift:before {
  content: "\e102";
}

.glyphicon-leaf:before {
  content: "\e103";
}

.glyphicon-fire:before {
  content: "\e104";
}

.glyphicon-eye-open:before {
  content: "\e105";
}

.glyphicon-eye-close:before {
  content: "\e106";
}

.glyphicon-warning-sign:before {
  content: "\e107";
}

.glyphicon-plane:before {
  content: "\e108";
}

.glyphicon-calendar:before {
  content: "\e109";
}

.glyphicon-random:before {
  content: "\e110";
}

.glyphicon-comment:before {
  content: "\e111";
}

.glyphicon-magnet:before {
  content: "\e112";
}

.glyphicon-chevron-up:before {
  content: "\e113";
}

.glyphicon-chevron-down:before {
  content: "\e114";
}

.glyphicon-retweet:before {
  content: "\e115";
}

.glyphicon-shopping-cart:before {
  content: "\e116";
}

.glyphicon-folder-close:before {
  content: "\e117";
}

.glyphicon-folder-open:before {
  content: "\e118";
}

.glyphicon-resize-vertical:before {
  content: "\e119";
}

.glyphicon-resize-horizontal:before {
  content: "\e120";
}

.glyphicon-hdd:before {
  content: "\e121";
}

.glyphicon-bullhorn:before {
  content: "\e122";
}

.glyphicon-bell:before {
  content: "\e123";
}

.glyphicon-certificate:before {
  content: "\e124";
}

.glyphicon-thumbs-up:before {
  content: "\e125";
}

.glyphicon-thumbs-down:before {
  content: "\e126";
}

.glyphicon-hand-right:before {
  content: "\e127";
}

.glyphicon-hand-left:before {
  content: "\e128";
}

.glyphicon-hand-up:before {
  content: "\e129";
}

.glyphicon-hand-down:before {
  content: "\e130";
}

.glyphicon-circle-arrow-right:before {
  content: "\e131";
}

.glyphicon-circle-arrow-left:before {
  content: "\e132";
}

.glyphicon-circle-arrow-up:before {
  content: "\e133";
}

.glyphicon-circle-arrow-down:before {
  content: "\e134";
}

.glyphicon-globe:before {
  content: "\e135";
}

.glyphicon-wrench:before {
  content: "\e136";
}

.glyphicon-tasks:before {
  content: "\e137";
}

.glyphicon-filter:before {
  content: "\e138";
}

.glyphicon-briefcase:before {
  content: "\e139";
}

.glyphicon-fullscreen:before {
  content: "\e140";
}

.glyphicon-dashboard:before {
  content: "\e141";
}

.glyphicon-paperclip:before {
  content: "\e142";
}

.glyphicon-heart-empty:before {
  content: "\e143";
}

.glyphicon-link:before {
  content: "\e144";
}

.glyphicon-phone:before {
  content: "\e145";
}

.glyphicon-pushpin:before {
  content: "\e146";
}

.glyphicon-usd:before {
  content: "\e148";
}

.glyphicon-gbp:before {
  content: "\e149";
}

.glyphicon-sort:before {
  content: "\e150";
}

.glyphicon-sort-by-alphabet:before {
  content: "\e151";
}

.glyphicon-sort-by-alphabet-alt:before {
  content: "\e152";
}

.glyphicon-sort-by-order:before {
  content: "\e153";
}

.glyphicon-sort-by-order-alt:before {
  content: "\e154";
}

.glyphicon-sort-by-attributes:before {
  content: "\e155";
}

.glyphicon-sort-by-attributes-alt:before {
  content: "\e156";
}

.glyphicon-unchecked:before {
  content: "\e157";
}

.glyphicon-expand:before {
  content: "\e158";
}

.glyphicon-collapse-down:before {
  content: "\e159";
}

.glyphicon-collapse-up:before {
  content: "\e160";
}

.glyphicon-log-in:before {
  content: "\e161";
}

.glyphicon-flash:before {
  content: "\e162";
}

.glyphicon-log-out:before {
  content: "\e163";
}

.glyphicon-new-window:before {
  content: "\e164";
}

.glyphicon-record:before {
  content: "\e165";
}

.glyphicon-save:before {
  content: "\e166";
}

.glyphicon-open:before {
  content: "\e167";
}

.glyphicon-saved:before {
  content: "\e168";
}

.glyphicon-import:before {
  content: "\e169";
}

.glyphicon-export:before {
  content: "\e170";
}

.glyphicon-send:before {
  content: "\e171";
}

.glyphicon-floppy-disk:before {
  content: "\e172";
}

.glyphicon-floppy-saved:before {
  content: "\e173";
}

.glyphicon-floppy-remove:before {
  content: "\e174";
}

.glyphicon-floppy-save:before {
  content: "\e175";
}

.glyphicon-floppy-open:before {
  content: "\e176";
}

.glyphicon-credit-card:before {
  content: "\e177";
}

.glyphicon-transfer:before {
  content: "\e178";
}

.glyphicon-cutlery:before {
  content: "\e179";
}

.glyphicon-header:before {
  content: "\e180";
}

.glyphicon-compressed:before {
  content: "\e181";
}

.glyphicon-earphone:before {
  content: "\e182";
}

.glyphicon-phone-alt:before {
  content: "\e183";
}

.glyphicon-tower:before {
  content: "\e184";
}

.glyphicon-stats:before {
  content: "\e185";
}

.glyphicon-sd-video:before {
  content: "\e186";
}

.glyphicon-hd-video:before {
  content: "\e187";
}

.glyphicon-subtitles:before {
  content: "\e188";
}

.glyphicon-sound-stereo:before {
  content: "\e189";
}

.glyphicon-sound-dolby:before {
  content: "\e190";
}

.glyphicon-sound-5-1:before {
  content: "\e191";
}

.glyphicon-sound-6-1:before {
  content: "\e192";
}

.glyphicon-sound-7-1:before {
  content: "\e193";
}

.glyphicon-copyright-mark:before {
  content: "\e194";
}

.glyphicon-registration-mark:before {
  content: "\e195";
}

.glyphicon-cloud-download:before {
  content: "\e197";
}

.glyphicon-cloud-upload:before {
  content: "\e198";
}

.glyphicon-tree-conifer:before {
  content: "\e199";
}

.glyphicon-tree-deciduous:before {
  content: "\e200";
}

.glyphicon-cd:before {
  content: "\e201";
}

.glyphicon-save-file:before {
  content: "\e202";
}

.glyphicon-open-file:before {
  content: "\e203";
}

.glyphicon-level-up:before {
  content: "\e204";
}

.glyphicon-copy:before {
  content: "\e205";
}

.glyphicon-paste:before {
  content: "\e206";
}

.glyphicon-alert:before {
  content: "\e209";
}

.glyphicon-equalizer:before {
  content: "\e210";
}

.glyphicon-king:before {
  content: "\e211";
}

.glyphicon-queen:before {
  content: "\e212";
}

.glyphicon-pawn:before {
  content: "\e213";
}

.glyphicon-bishop:before {
  content: "\e214";
}

.glyphicon-knight:before {
  content: "\e215";
}

.glyphicon-baby-formula:before {
  content: "\e216";
}

.glyphicon-tent:before {
  content: "\26fa";
}

.glyphicon-blackboard:before {
  content: "\e218";
}

.glyphicon-bed:before {
  content: "\e219";
}

.glyphicon-apple:before {
  content: "\f8ff";
}

.glyphicon-erase:before {
  content: "\e221";
}

.glyphicon-hourglass:before {
  content: "\231b";
}

.glyphicon-lamp:before {
  content: "\e223";
}

.glyphicon-duplicate:before {
  content: "\e224";
}

.glyphicon-piggy-bank:before {
  content: "\e225";
}

.glyphicon-scissors:before {
  content: "\e226";
}

.glyphicon-bitcoin:before {
  content: "\e227";
}

.glyphicon-btc:before {
  content: "\e227";
}

.glyphicon-xbt:before {
  content: "\e227";
}

.glyphicon-yen:before {
  content: "\00a5";
}

.glyphicon-jpy:before {
  content: "\00a5";
}

.glyphicon-ruble:before {
  content: "\20bd";
}

.glyphicon-rub:before {
  content: "\20bd";
}

.glyphicon-scale:before {
  content: "\e230";
}

.glyphicon-ice-lolly:before {
  content: "\e231";
}

.glyphicon-ice-lolly-tasted:before {
  content: "\e232";
}

.glyphicon-education:before {
  content: "\e233";
}

.glyphicon-option-horizontal:before {
  content: "\e234";
}

.glyphicon-option-vertical:before {
  content: "\e235";
}

.glyphicon-menu-hamburger:before {
  content: "\e236";
}

.glyphicon-modal-window:before {
  content: "\e237";
}

.glyphicon-oil:before {
  content: "\e238";
}

.glyphicon-grain:before {
  content: "\e239";
}

.glyphicon-sunglasses:before {
  content: "\e240";
}

.glyphicon-text-size:before {
  content: "\e241";
}

.glyphicon-text-color:before {
  content: "\e242";
}

.glyphicon-text-background:before {
  content: "\e243";
}

.glyphicon-object-align-top:before {
  content: "\e244";
}

.glyphicon-object-align-bottom:before {
  content: "\e245";
}

.glyphicon-object-align-horizontal:before {
  content: "\e246";
}

.glyphicon-object-align-left:before {
  content: "\e247";
}

.glyphicon-object-align-vertical:before {
  content: "\e248";
}

.glyphicon-object-align-right:before {
  content: "\e249";
}

.glyphicon-triangle-right:before {
  content: "\e250";
}

.glyphicon-triangle-left:before {
  content: "\e251";
}

.glyphicon-triangle-bottom:before {
  content: "\e252";
}

.glyphicon-triangle-top:before {
  content: "\e253";
}

.glyphicon-console:before {
  content: "\e254";
}

.glyphicon-superscript:before {
  content: "\e255";
}

.glyphicon-subscript:before {
  content: "\e256";
}

.glyphicon-menu-left:before {
  content: "\e257";
}

.glyphicon-menu-right:before {
  content: "\e258";
}

.glyphicon-menu-down:before {
  content: "\e259";
}

.glyphicon-menu-up:before {
  content: "\e260";
}

/** 1.3  Scaffolding */
* {
  -webkit-box-sizing: border-box;
  -moz-box-sizing: border-box;
  box-sizing: border-box;
}

*:before,
*:after {
  -webkit-box-sizing: border-box;
  -moz-box-sizing: border-box;
  box-sizing: border-box;
}

html {
  font-size: 10px;
  -webkit-tap-highlight-color: transparent;
}

body {
  font-family: "Lato", Helvetica, Arial, sans-serif;
  font-size: 16px;
  line-height: 1.5;
  color: #565656;
  background-color: #000000;
}

input,
button,
select,
textarea {
  font-family: inherit;
  font-size: inherit;
  line-height: inherit;
}

a {
  color: inherit;
  text-decoration: none;
}

a:hover, a:focus {
  color: inherit;
  text-decoration: underline;
}

a:focus {
  outline: thin dotted;
  outline: 5px auto -webkit-focus-ring-color;
  outline-offset: -2px;
}

figure {
  margin: 0;
}

img {
  vertical-align: middle;
}

.img-responsive {
  display: block;
  max-width: 100%;
  height: auto;
}

.img-rounded {
  border-radius: 10px;
}

.img-thumbnail {
  padding: 0;
  line-height: 1.5;
  background-color: #000000;
  border: 1px solid #ddd;
  border-radius: 5px;
  -webkit-transition: all 0.2s ease-in-out;
  -o-transition: all 0.2s ease-in-out;
  transition: all 0.2s ease-in-out;
  display: inline-block;
  max-width: 100%;
  height: auto;
}

.img-circle {
  border-radius: 50%;
}

hr {
  margin-top: 24px;
  margin-bottom: 24px;
  border: 0;
  border-top: 1px solid #f5f5f5;
}

.sr-only {
  position: absolute;
  width: 1px;
  height: 1px;
  margin: -1px;
  padding: 0;
  overflow: hidden;
  clip: rect(0, 0, 0, 0);
  border: 0;
}

.sr-only-focusable:active, .sr-only-focusable:focus {
  position: static;
  width: auto;
  height: auto;
  margin: 0;
  overflow: visible;
  clip: auto;
}

[role="button"] {
  cursor: pointer;
}

/** 1.4  Type */
h1, h2, h3, h4, h5, h6,
.h1, .h2, .h3, .h4, .h5, .h6 {
  font-weight: 400;
  line-height: 1.1;
  color: inherit;
}

h1 small,
h1 .small, h2 small,
h2 .small, h3 small,
h3 .small, h4 small,
h4 .small, h5 small,
h5 .small, h6 small,
h6 .small,
.h1 small,
.h1 .small, .h2 small,
.h2 .small, .h3 small,
.h3 .small, .h4 small,
.h4 .small, .h5 small,
.h5 .small, .h6 small,
.h6 .small {
  font-weight: normal;
  line-height: 1;
  color: #f2f2f2;
}

h1, .h1,
h2, .h2,
h3, .h3 {
  margin-top: 24px;
  margin-bottom: 12px;
}

h1 small,
h1 .small, .h1 small,
.h1 .small,
h2 small,
h2 .small, .h2 small,
.h2 .small,
h3 small,
h3 .small, .h3 small,
.h3 .small {
  font-size: 65%;
}

h4, .h4,
h5, .h5,
h6, .h6 {
  margin-top: 12px;
  margin-bottom: 12px;
}

h4 small,
h4 .small, .h4 small,
.h4 .small,
h5 small,
h5 .small, .h5 small,
.h5 .small,
h6 small,
h6 .small, .h6 small,
.h6 .small {
  font-size: 75%;
}

h1, .h1 {
  font-size: 54px;
}

h2, .h2 {
  font-size: 36px;
}

h3, .h3 {
  font-size: 28px;
}

h4, .h4 {
  font-size: 22px;
}

h5, .h5 {
  font-size: 20px;
}

h6, .h6 {
  font-size: 16px;
}

p {
  margin: 0 0 12px;
}

.lead {
  margin-bottom: 24px;
  font-size: 18px;
  font-weight: 300;
  line-height: 1.4;
}

@media (min-width: 768px) {
  .lead {
    font-size: 24px;
  }
}

small,
.small {
  font-size: 93%;
}

mark,
.mark {
  background-color: #00B7FF;
  padding: .2em;
}

.text-left {
  text-align: left;
}

.text-right {
  text-align: right;
}

.text-center {
  text-align: center;
}

.text-justify {
  text-align: justify;
}

.text-nowrap {
  white-space: nowrap;
}

.text-lowercase {
  text-transform: lowercase;
}

.text-uppercase, .initialism {
  text-transform: uppercase;
}

.text-capitalize {
  text-transform: capitalize;
}

.text-muted {
  color: #b7b7b7;
}

blockquote.quote .text-primary,
.text-primary {
  color: #FF304D;
}

a.text-primary:hover,
a.text-primary:focus {
  color: #13a4e6;
}

blockquote.quote .text-success,
.text-success {
  color: #abcc37;
}

a.text-success:hover,
a.text-success:focus {
  color: #8aa62a;
}

blockquote.quote .text-info,
.text-info {
  color: #79ccf2;
}

a.text-info:hover,
a.text-info:focus {
  color: #4bbaed;
}

blockquote.quote .text-warning,
.text-warning {
  color: #00B7FF;
}

a.text-warning:hover,
a.text-warning:focus {
  color: #e6aa0b;
}

blockquote.quote .text-danger,
.text-danger {
  color: #f54b0f;
}

a.text-danger:hover,
a.text-danger:focus {
  color: #c93b08;
}

.bg-primary {
  color: #fff;
}

.bg-primary {
  background-color: #FF304D;
}

a.bg-primary:hover,
a.bg-primary:focus {
  background-color: #13a4e6;
}

.bg-success {
  background-color: #abcc37;
}

a.bg-success:hover,
a.bg-success:focus {
  background-color: #8aa62a;
}

.bg-info {
  background-color: #79ccf2;
}

a.bg-info:hover,
a.bg-info:focus {
  background-color: #4bbaed;
}

.bg-warning {
  background-color: #00B7FF;
}

a.bg-warning:hover,
a.bg-warning:focus {
  background-color: #e6aa0b;
}

.bg-danger {
  background-color: #f54b0f;
}

a.bg-danger:hover,
a.bg-danger:focus {
  background-color: #c93b08;
}

.page-header {
  padding-bottom: 11px;
  margin: 48px 0 24px;
  border-bottom: 1px solid #f5f5f5;
}

ul,
ol {
  margin-top: 0;
  margin-bottom: 12px;
}

ul ul,
ul ol,
ol ul,
ol ol {
  margin-bottom: 0;
}

.list-unstyled {
  padding-left: 0;
  list-style: none;
}

.list-inline {
  padding-left: 0;
  list-style: none;
  margin-left: -5px;
}

.list-inline > li {
  display: inline-block;
  padding-left: 5px;
  padding-right: 5px;
}

dl {
  margin-top: 0;
  margin-bottom: 24px;
}

dt,
dd {
  line-height: 1.5;
}

dt {
  font-weight: bold;
}

dd {
  margin-left: 0;
}

.dl-horizontal dd:before, .dl-horizontal dd:after {
  content: " ";
  display: table;
}

.dl-horizontal dd:after {
  clear: both;
}

@media (min-width: 768px) {
  .dl-horizontal dt {
    float: left;
    width: 160px;
    clear: left;
    text-align: right;
    overflow: hidden;
    text-overflow: ellipsis;
    white-space: nowrap;
  }
  .dl-horizontal dd {
    margin-left: 180px;
  }
}

abbr[title],
abbr[data-original-title] {
  cursor: help;
  border-bottom: 1px dotted #f2f2f2;
}

.initialism {
  font-size: 90%;
}

blockquote {
  padding: 12px 24px;
  margin: 0 0 24px;
  font-size: 20px;
  border-left: 5px solid #f5f5f5;
}

blockquote p:last-child,
blockquote ul:last-child,
blockquote ol:last-child {
  margin-bottom: 0;
}

blockquote footer,
blockquote small,
blockquote .small {
  display: block;
  font-size: 80%;
  line-height: 1.5;
  color: #f2f2f2;
}

blockquote footer:before,
blockquote small:before,
blockquote .small:before {
  content: '\2014 \00A0';
}

.blockquote-reverse,
blockquote.pull-right {
  padding-right: 15px;
  padding-left: 0;
  border-right: 5px solid #f5f5f5;
  border-left: 0;
  text-align: right;
}

.blockquote-reverse footer:before,
.blockquote-reverse small:before,
.blockquote-reverse .small:before,
blockquote.pull-right footer:before,
blockquote.pull-right small:before,
blockquote.pull-right .small:before {
  content: '';
}

.blockquote-reverse footer:after,
.blockquote-reverse small:after,
.blockquote-reverse .small:after,
blockquote.pull-right footer:after,
blockquote.pull-right small:after,
blockquote.pull-right .small:after {
  content: '\00A0 \2014';
}

address {
  margin-bottom: 24px;
  font-style: normal;
  line-height: 1.5;
}

/** 1.5  Code */
code,
kbd,
pre,
samp {
  font-family: Menlo, Monaco, Consolas, "Courier New", monospace;
}

code {
  padding: 2px 4px;
  font-size: 90%;
  color: #c7254e;
  background-color: #f9f2f4;
  border-radius: 5px;
}

kbd {
  padding: 2px 4px;
  font-size: 90%;
  color: #fff;
  background-color: #333;
  border-radius: 4px;
  box-shadow: inset 0 -1px 0 rgba(0, 0, 0, 0.25);
}

kbd kbd {
  padding: 0;
  font-size: 100%;
  font-weight: bold;
  box-shadow: none;
}

pre {
  display: block;
  padding: 11.5px;
  margin: 0 0 12px;
  font-size: 15px;
  line-height: 1.5;
  word-break: break-all;
  word-wrap: break-word;
  color: #9b9b9b;
  background-color: #f5f5f5;
  border: 1px solid #ccc;
  border-radius: 5px;
}

pre code {
  padding: 0;
  font-size: inherit;
  color: inherit;
  white-space: pre-wrap;
  background-color: transparent;
  border-radius: 0;
}

.pre-scrollable {
  max-height: 340px;
  overflow-y: scroll;
}

/** 1.6  Tables */
table {
  background-color: transparent;
}

caption {
  padding-top: 8px;
  padding-bottom: 8px;
  color: #b7b7b7;
  text-align: left;
}

th {
  text-align: left;
}

.table {
  width: 100%;
  max-width: 100%;
  margin-bottom: 24px;
}

.table > thead > tr > th,
.table > thead > tr > td,
.table > tbody > tr > th,
.table > tbody > tr > td,
.table > tfoot > tr > th,
.table > tfoot > tr > td {
  padding: 8px;
  line-height: 1.5;
  vertical-align: top;
  border-top: 1px solid #ddd;
}

.table > thead > tr > th {
  vertical-align: bottom;
  border-bottom: 2px solid #ddd;
}

.table > caption + thead > tr:first-child > th,
.table > caption + thead > tr:first-child > td,
.table > colgroup + thead > tr:first-child > th,
.table > colgroup + thead > tr:first-child > td,
.table > thead:first-child > tr:first-child > th,
.table > thead:first-child > tr:first-child > td {
  border-top: 0;
}

.table > tbody + tbody {
  border-top: 2px solid #ddd;
}

.table .table {
  background-color: #000000;
}

.table-condensed > thead > tr > th,
.table-condensed > thead > tr > td,
.table-condensed > tbody > tr > th,
.table-condensed > tbody > tr > td,
.table-condensed > tfoot > tr > th,
.table-condensed > tfoot > tr > td {
  padding: 5px;
}

.table-bordered {
  border: 1px solid #ddd;
}

.table-bordered > thead > tr > th,
.table-bordered > thead > tr > td,
.table-bordered > tbody > tr > th,
.table-bordered > tbody > tr > td,
.table-bordered > tfoot > tr > th,
.table-bordered > tfoot > tr > td {
  border: 1px solid #ddd;
}

.table-bordered > thead > tr > th,
.table-bordered > thead > tr > td {
  border-bottom-width: 2px;
}

.table-striped > tbody > tr:nth-of-type(odd) {
  background-color: #f9f9f9;
}

.table-hover > tbody > tr:hover {
  background-color: #f5f5f5;
}

table col[class*="col-"] {
  position: static;
  float: none;
  display: table-column;
}

table td[class*="col-"],
table th[class*="col-"] {
  position: static;
  float: none;
  display: table-cell;
}

.table > thead > tr > td.active,
.table > thead > tr > th.active,
.table > thead > tr.active > td,
.table > thead > tr.active > th,
.table > tbody > tr > td.active,
.table > tbody > tr > th.active,
.table > tbody > tr.active > td,
.table > tbody > tr.active > th,
.table > tfoot > tr > td.active,
.table > tfoot > tr > th.active,
.table > tfoot > tr.active > td,
.table > tfoot > tr.active > th {
  background-color: #f5f5f5;
}

.table-hover > tbody > tr > td.active:hover,
.table-hover > tbody > tr > th.active:hover,
.table-hover > tbody > tr.active:hover > td,
.table-hover > tbody > tr:hover > .active,
.table-hover > tbody > tr.active:hover > th {
  background-color: #e8e8e8;
}

.table > thead > tr > td.success,
.table > thead > tr > th.success,
.table > thead > tr.success > td,
.table > thead > tr.success > th,
.table > tbody > tr > td.success,
.table > tbody > tr > th.success,
.table > tbody > tr.success > td,
.table > tbody > tr.success > th,
.table > tfoot > tr > td.success,
.table > tfoot > tr > th.success,
.table > tfoot > tr.success > td,
.table > tfoot > tr.success > th {
  background-color: #abcc37;
}

.table-hover > tbody > tr > td.success:hover,
.table-hover > tbody > tr > th.success:hover,
.table-hover > tbody > tr.success:hover > td,
.table-hover > tbody > tr:hover > .success,
.table-hover > tbody > tr.success:hover > th {
  background-color: #9bba2f;
}

.table > thead > tr > td.info,
.table > thead > tr > th.info,
.table > thead > tr.info > td,
.table > thead > tr.info > th,
.table > tbody > tr > td.info,
.table > tbody > tr > th.info,
.table > tbody > tr.info > td,
.table > tbody > tr.info > th,
.table > tfoot > tr > td.info,
.table > tfoot > tr > th.info,
.table > tfoot > tr.info > td,
.table > tfoot > tr.info > th {
  background-color: #79ccf2;
}

.table-hover > tbody > tr > td.info:hover,
.table-hover > tbody > tr > th.info:hover,
.table-hover > tbody > tr.info:hover > td,
.table-hover > tbody > tr:hover > .info,
.table-hover > tbody > tr.info:hover > th {
  background-color: #62c3f0;
}

.table > thead > tr > td.warning,
.table > thead > tr > th.warning,
.table > thead > tr.warning > td,
.table > thead > tr.warning > th,
.table > tbody > tr > td.warning,
.table > tbody > tr > th.warning,
.table > tbody > tr.warning > td,
.table > tbody > tr.warning > th,
.table > tfoot > tr > td.warning,
.table > tfoot > tr > th.warning,
.table > tfoot > tr.warning > td,
.table > tfoot > tr.warning > th {
  background-color: #00B7FF;
}

.table-hover > tbody > tr > td.warning:hover,
.table-hover > tbody > tr > th.warning:hover,
.table-hover > tbody > tr.warning:hover > td,
.table-hover > tbody > tr:hover > .warning,
.table-hover > tbody > tr.warning:hover > th {
  background-color: #f4b817;
}

.table > thead > tr > td.danger,
.table > thead > tr > th.danger,
.table > thead > tr.danger > td,
.table > thead > tr.danger > th,
.table > tbody > tr > td.danger,
.table > tbody > tr > th.danger,
.table > tbody > tr.danger > td,
.table > tbody > tr.danger > th,
.table > tfoot > tr > td.danger,
.table > tfoot > tr > th.danger,
.table > tfoot > tr.danger > td,
.table > tfoot > tr.danger > th {
  background-color: #f54b0f;
}

.table-hover > tbody > tr > td.danger:hover,
.table-hover > tbody > tr > th.danger:hover,
.table-hover > tbody > tr.danger:hover > td,
.table-hover > tbody > tr:hover > .danger,
.table-hover > tbody > tr.danger:hover > th {
  background-color: #e14209;
}

.table-responsive {
  overflow-x: auto;
  min-height: 0.01%;
}

@media screen and (max-width: 767px) {
  .table-responsive {
    width: 100%;
    margin-bottom: 18px;
    overflow-y: hidden;
    -ms-overflow-style: -ms-autohiding-scrollbar;
    border: 1px solid #ddd;
  }
  .table-responsive > .table {
    margin-bottom: 0;
  }
  .table-responsive > .table > thead > tr > th,
  .table-responsive > .table > thead > tr > td,
  .table-responsive > .table > tbody > tr > th,
  .table-responsive > .table > tbody > tr > td,
  .table-responsive > .table > tfoot > tr > th,
  .table-responsive > .table > tfoot > tr > td {
    white-space: nowrap;
  }
  .table-responsive > .table-bordered {
    border: 0;
  }
  .table-responsive > .table-bordered > thead > tr > th:first-child,
  .table-responsive > .table-bordered > thead > tr > td:first-child,
  .table-responsive > .table-bordered > tbody > tr > th:first-child,
  .table-responsive > .table-bordered > tbody > tr > td:first-child,
  .table-responsive > .table-bordered > tfoot > tr > th:first-child,
  .table-responsive > .table-bordered > tfoot > tr > td:first-child {
    border-left: 0;
  }
  .table-responsive > .table-bordered > thead > tr > th:last-child,
  .table-responsive > .table-bordered > thead > tr > td:last-child,
  .table-responsive > .table-bordered > tbody > tr > th:last-child,
  .table-responsive > .table-bordered > tbody > tr > td:last-child,
  .table-responsive > .table-bordered > tfoot > tr > th:last-child,
  .table-responsive > .table-bordered > tfoot > tr > td:last-child {
    border-right: 0;
  }
  .table-responsive > .table-bordered > tbody > tr:last-child > th,
  .table-responsive > .table-bordered > tbody > tr:last-child > td,
  .table-responsive > .table-bordered > tfoot > tr:last-child > th,
  .table-responsive > .table-bordered > tfoot > tr:last-child > td {
    border-bottom: 0;
  }
}

/** 1.7  Forms */
fieldset {
  padding: 0;
  margin: 0;
  border: 0;
  min-width: 0;
}

legend {
  display: block;
  width: 100%;
  padding: 0;
  margin-bottom: 24px;
  font-size: 24px;
  line-height: inherit;
  color: #9b9b9b;
  border: 0;
  border-bottom: 1px solid #f5f5f5;
}

label {
  display: inline-block;
  max-width: 100%;
  margin-bottom: 5px;
  font-weight: bold;
}

input[type="search"] {
  -webkit-box-sizing: border-box;
  -moz-box-sizing: border-box;
  box-sizing: border-box;
}

input[type="radio"],
input[type="checkbox"] {
  margin: 4px 0 0;
  margin-top: 1px \9;
  line-height: normal;
}

input[type="file"] {
  display: block;
}

input[type="range"] {
  display: block;
  width: 100%;
}

select[multiple],
select[size] {
  height: auto;
}

input[type="file"]:focus,
input[type="radio"]:focus,
input[type="checkbox"]:focus {
  outline: thin dotted;
  outline: 5px auto -webkit-focus-ring-color;
  outline-offset: -2px;
}

output {
  display: block;
  padding-top: 19px;
  font-size: 16px;
  line-height: 1.5;
  color: #212121;
}

.form-control {
  display: block;
  width: 100%;
  height: 54px;
  padding: 18px 38px;
  font-size: 16px;
  line-height: 1.5;
  color: #212121;
  background-color:#ffffff;
  background-image: none;
  border: 1px solid #e1e1e1;
  border-radius: 0;
  -webkit-box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.075);
  box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.075);
  -webkit-transition: border-color ease-in-out 0.15s, box-shadow ease-in-out 0.15s;
  -o-transition: border-color ease-in-out 0.15s, box-shadow ease-in-out 0.15s;
  transition: border-color ease-in-out 0.15s, box-shadow ease-in-out 0.15s;
}

.form-control:focus {
  border-color: #b7b7b7;
  outline: 0;
  -webkit-box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.075), 0 0 8px rgba(183, 183, 183, 0.6);
  box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.075), 0 0 8px rgba(183, 183, 183, 0.6);
}

.form-control::-moz-placeholder {
  color: #b7b7b7;
  opacity: 1;
}

.form-control:-ms-input-placeholder {
  color: #b7b7b7;
}

.form-control::-webkit-input-placeholder {
  color: #b7b7b7;
}

.form-control::-ms-expand {
  border: 0;
  background-color: transparent;
}

.form-control[disabled], .form-control[readonly],
fieldset[disabled] .form-control {
  background-color: #f5f5f5;
  opacity: 1;
}

.form-control[disabled],
fieldset[disabled] .form-control {
  cursor: not-allowed;
}

textarea.form-control {
  height: auto;
}

input[type="search"] {
  -webkit-appearance: none;
}

@media screen and (-webkit-min-device-pixel-ratio: 0) {
  input[type="date"].form-control,
  input[type="time"].form-control,
  input[type="datetime-local"].form-control,
  input[type="month"].form-control {
    line-height: 54px;
  }
  input[type="date"].input-sm, .input-group-sm > input[type="date"].form-control,
  .input-group-sm > input[type="date"].input-group-addon,
  .input-group-sm > .input-group-btn > input[type="date"].btn,
  .input-group-sm input[type="date"],
  input[type="time"].input-sm,
  .input-group-sm > input[type="time"].form-control,
  .input-group-sm > input[type="time"].input-group-addon,
  .input-group-sm > .input-group-btn > input[type="time"].btn,
  .input-group-sm
  input[type="time"],
  input[type="datetime-local"].input-sm,
  .input-group-sm > input[type="datetime-local"].form-control,
  .input-group-sm > input[type="datetime-local"].input-group-addon,
  .input-group-sm > .input-group-btn > input[type="datetime-local"].btn,
  .input-group-sm
  input[type="datetime-local"],
  input[type="month"].input-sm,
  .input-group-sm > input[type="month"].form-control,
  .input-group-sm > input[type="month"].input-group-addon,
  .input-group-sm > .input-group-btn > input[type="month"].btn,
  .input-group-sm
  input[type="month"] {
    line-height: 56px;
  }
  input[type="date"].input-lg, .input-group-lg > input[type="date"].form-control,
  .input-group-lg > input[type="date"].input-group-addon,
  .input-group-lg > .input-group-btn > input[type="date"].btn,
  .input-group-lg input[type="date"],
  input[type="time"].input-lg,
  .input-group-lg > input[type="time"].form-control,
  .input-group-lg > input[type="time"].input-group-addon,
  .input-group-lg > .input-group-btn > input[type="time"].btn,
  .input-group-lg
  input[type="time"],
  input[type="datetime-local"].input-lg,
  .input-group-lg > input[type="datetime-local"].form-control,
  .input-group-lg > input[type="datetime-local"].input-group-addon,
  .input-group-lg > .input-group-btn > input[type="datetime-local"].btn,
  .input-group-lg
  input[type="datetime-local"],
  input[type="month"].input-lg,
  .input-group-lg > input[type="month"].form-control,
  .input-group-lg > input[type="month"].input-group-addon,
  .input-group-lg > .input-group-btn > input[type="month"].btn,
  .input-group-lg
  input[type="month"] {
    line-height: 72px;
  }
}

.form-group {
  margin-bottom: 10px;
}

.radio,
.checkbox {
  position: relative;
  display: block;
  margin-top: 10px;
  margin-bottom: 10px;
}

.radio label,
.checkbox label {
  min-height: 24px;
  padding-left: 20px;
  margin-bottom: 0;
  font-weight: normal;
  cursor: pointer;
}

.radio input[type="radio"],
.radio-inline input[type="radio"],
.checkbox input[type="checkbox"],
.checkbox-inline input[type="checkbox"] {
  position: absolute;
  margin-left: -20px;
  margin-top: 4px \9;
}

.radio + .radio,
.checkbox + .checkbox {
  margin-top: -5px;
}

.radio-inline,
.checkbox-inline {
  position: relative;
  display: inline-block;
  padding-left: 20px;
  margin-bottom: 0;
  vertical-align: middle;
  font-weight: normal;
  cursor: pointer;
}

.radio-inline + .radio-inline,
.checkbox-inline + .checkbox-inline {
  margin-top: 0;
  margin-left: 10px;
}

input[type="radio"][disabled], input[type="radio"].disabled,
fieldset[disabled] input[type="radio"],
input[type="checkbox"][disabled],
input[type="checkbox"].disabled,
fieldset[disabled]
input[type="checkbox"] {
  cursor: not-allowed;
}

.radio-inline.disabled,
fieldset[disabled] .radio-inline,
.checkbox-inline.disabled,
fieldset[disabled]
.checkbox-inline {
  cursor: not-allowed;
}

.radio.disabled label,
fieldset[disabled] .radio label,
.checkbox.disabled label,
fieldset[disabled]
.checkbox label {
  cursor: not-allowed;
}

.form-control-static {
  padding-top: 19px;
  padding-bottom: 19px;
  margin-bottom: 0;
  min-height: 40px;
}

.form-control-static.input-lg, .input-group-lg > .form-control-static.form-control,
.input-group-lg > .form-control-static.input-group-addon,
.input-group-lg > .input-group-btn > .form-control-static.btn, .form-control-static.input-sm, .input-group-sm > .form-control-static.form-control,
.input-group-sm > .form-control-static.input-group-addon,
.input-group-sm > .input-group-btn > .form-control-static.btn {
  padding-left: 0;
  padding-right: 0;
}

.input-sm, .input-group-sm > .form-control,
.input-group-sm > .input-group-addon,
.input-group-sm > .input-group-btn > .btn {
  height: 56px;
  padding: 14px 36px;
  font-size: 15px;
  line-height: 1.5;
  border-radius: 0;
}

select.input-sm, .input-group-sm > select.form-control,
.input-group-sm > select.input-group-addon,
.input-group-sm > .input-group-btn > select.btn {
  height: 56px;
  line-height: 56px;
}

textarea.input-sm, .input-group-sm > textarea.form-control,
.input-group-sm > textarea.input-group-addon,
.input-group-sm > .input-group-btn > textarea.btn,
select[multiple].input-sm,
.input-group-sm > select[multiple].form-control,
.input-group-sm > select[multiple].input-group-addon,
.input-group-sm > .input-group-btn > select[multiple].btn {
  height: auto;
}

.form-group-sm .form-control {
  height: 56px;
  padding: 14px 36px;
  font-size: 15px;
  line-height: 1.5;
  border-radius: 0;
}

.form-group-sm select.form-control {
  height: 56px;
  line-height: 56px;
}

.form-group-sm textarea.form-control,
.form-group-sm select[multiple].form-control {
  height: auto;
}

.form-group-sm .form-control-static {
  height: 56px;
  min-height: 39px;
  padding: 15px 36px;
  font-size: 15px;
  line-height: 1.5;
}

.input-lg, .input-group-lg > .form-control,
.input-group-lg > .input-group-addon,
.input-group-lg > .input-group-btn > .btn {
  height: 72px;
  padding: 21px 43px;
  font-size: 17px;
  line-height: 1.33333;
  border-radius: 10px;
}

select.input-lg, .input-group-lg > select.form-control,
.input-group-lg > select.input-group-addon,
.input-group-lg > .input-group-btn > select.btn {
  height: 72px;
  line-height: 72px;
}

textarea.input-lg, .input-group-lg > textarea.form-control,
.input-group-lg > textarea.input-group-addon,
.input-group-lg > .input-group-btn > textarea.btn,
select[multiple].input-lg,
.input-group-lg > select[multiple].form-control,
.input-group-lg > select[multiple].input-group-addon,
.input-group-lg > .input-group-btn > select[multiple].btn {
  height: auto;
}

.form-group-lg .form-control {
  height: 72px;
  padding: 21px 43px;
  font-size: 17px;
  line-height: 1.33333;
  border-radius: 10px;
}

.form-group-lg select.form-control {
  height: 72px;
  line-height: 72px;
}

.form-group-lg textarea.form-control,
.form-group-lg select[multiple].form-control {
  height: auto;
}

.form-group-lg .form-control-static {
  height: 72px;
  min-height: 41px;
  padding: 22px 43px;
  font-size: 17px;
  line-height: 1.33333;
}

.has-feedback {
  position: relative;
}

.has-feedback .form-control {
  padding-right: 67.5px;
}

.form-control-feedback {
  position: absolute;
  top: 0;
  right: 0;
  z-index: 2;
  display: block;
  width: 54px;
  height: 54px;
  line-height: 54px;
  text-align: center;
  pointer-events: none;
}

.input-lg + .form-control-feedback, .input-group-lg > .form-control + .form-control-feedback,
.input-group-lg > .input-group-addon + .form-control-feedback,
.input-group-lg > .input-group-btn > .btn + .form-control-feedback,
.input-group-lg + .form-control-feedback,
.form-group-lg .form-control + .form-control-feedback {
  width: 72px;
  height: 72px;
  line-height: 72px;
}

.input-sm + .form-control-feedback, .input-group-sm > .form-control + .form-control-feedback,
.input-group-sm > .input-group-addon + .form-control-feedback,
.input-group-sm > .input-group-btn > .btn + .form-control-feedback,
.input-group-sm + .form-control-feedback,
.form-group-sm .form-control + .form-control-feedback {
  width: 56px;
  height: 56px;
  line-height: 56px;
}

.has-success .help-block,
.has-success .control-label,
.has-success .radio,
.has-success .checkbox,
.has-success .radio-inline,
.has-success .checkbox-inline,
.has-success.radio label,
.has-success.checkbox label,
.has-success.radio-inline label,
.has-success.checkbox-inline label {
  color: #abcc37;
}

.has-success .form-control {
  border-color: #abcc37;
  -webkit-box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.075);
  box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.075);
}

.has-success .form-control:focus {
  border-color: #8aa62a;
  -webkit-box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.075), 0 0 6px #cde188;
  box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.075), 0 0 6px #cde188;
}

.has-success .input-group-addon {
  color: #abcc37;
  border-color: #abcc37;
  background-color: #abcc37;
}

.has-success .form-control-feedback {
  color: #abcc37;
}

.has-warning .help-block,
.has-warning .control-label,
.has-warning .radio,
.has-warning .checkbox,
.has-warning .radio-inline,
.has-warning .checkbox-inline,
.has-warning.radio label,
.has-warning.checkbox label,
.has-warning.radio-inline label,
.has-warning.checkbox-inline label {
  color: #00B7FF;
}

.has-warning .form-control {
  border-color: #00B7FF;
  -webkit-box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.075);
  box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.075);
}

.has-warning .form-control:focus {
  border-color: #e6aa0b;
  -webkit-box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.075), 0 0 6px #fadd90;
  box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.075), 0 0 6px #fadd90;
}

.has-warning .input-group-addon {
  color: #00B7FF;
  border-color: #00B7FF;
  background-color: #00B7FF;
}

.has-warning .form-control-feedback {
  color: #00B7FF;
}

.has-error .help-block,
.has-error .control-label,
.has-error .radio,
.has-error .checkbox,
.has-error .radio-inline,
.has-error .checkbox-inline,
.has-error.radio label,
.has-error.checkbox label,
.has-error.radio-inline label,
.has-error.checkbox-inline label {
  color: #f54b0f;
}

.has-error .form-control {
  border-color: #f54b0f;
  -webkit-box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.075);
  box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.075);
}

.has-error .form-control:focus {
  border-color: #c93b08;
  -webkit-box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.075), 0 0 6px #f99471;
  box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.075), 0 0 6px #f99471;
}

.has-error .input-group-addon {
  color: #f54b0f;
  border-color: #f54b0f;
  background-color: #f54b0f;
}

.has-error .form-control-feedback {
  color: #f54b0f;
}

.has-feedback label ~ .form-control-feedback {
  top: 29px;
}

.has-feedback label.sr-only ~ .form-control-feedback {
  top: 0;
}

.help-block {
  display: block;
  margin-top: 5px;
  margin-bottom: 10px;
  color: #404040;
}

@media (min-width: 768px) {
  .form-inline .form-group {
    display: inline-block;
    margin-bottom: 0;
    vertical-align: middle;
  }
  .form-inline .form-control {
    display: inline-block;
    width: auto;
    vertical-align: middle;
  }
  .form-inline .form-control-static {
    display: inline-block;
  }
  .form-inline .input-group {
    display: inline-table;
    vertical-align: middle;
  }
  .form-inline .input-group .input-group-addon,
  .form-inline .input-group .input-group-btn,
  .form-inline .input-group .form-control {
    width: auto;
  }
  .form-inline .input-group > .form-control {
    width: 100%;
  }
  .form-inline .control-label {
    margin-bottom: 0;
    vertical-align: middle;
  }
  .form-inline .radio,
  .form-inline .checkbox {
    display: inline-block;
    margin-top: 0;
    margin-bottom: 0;
    vertical-align: middle;
  }
  .form-inline .radio label,
  .form-inline .checkbox label {
    padding-left: 0;
  }
  .form-inline .radio input[type="radio"],
  .form-inline .checkbox input[type="checkbox"] {
    position: relative;
    margin-left: 0;
  }
  .form-inline .has-feedback .form-control-feedback {
    top: 0;
  }
}

.form-horizontal .radio,
.form-horizontal .checkbox,
.form-horizontal .radio-inline,
.form-horizontal .checkbox-inline {
  margin-top: 0;
  margin-bottom: 0;
  padding-top: 19px;
}

.form-horizontal .radio,
.form-horizontal .checkbox {
  min-height: 43px;
}

.form-horizontal .form-group {
  margin-left: -15px;
  margin-right: -15px;
}

.form-horizontal .form-group:before, .form-horizontal .form-group:after {
  content: " ";
  display: table;
}

.form-horizontal .form-group:after {
  clear: both;
}

@media (min-width: 768px) {
  .form-horizontal .control-label {
    text-align: right;
    margin-bottom: 0;
    padding-top: 19px;
  }
}

.form-horizontal .has-feedback .form-control-feedback {
  right: 15px;
}

@media (min-width: 768px) {
  .form-horizontal .form-group-lg .control-label {
    padding-top: 22px;
    font-size: 17px;
  }
}

@media (min-width: 768px) {
  .form-horizontal .form-group-sm .control-label {
    padding-top: 15px;
    font-size: 15px;
  }
}

/** 1.8  Buttons */
.btn {
  display: inline-block;
  margin-bottom: 0;
  font-weight: 700;
  text-align: center;
  vertical-align: middle;
  touch-action: manipulation;
  cursor: pointer;
  background-image: none;
  border: 1px solid transparent;
  white-space: nowrap;
  padding: 18px 38px;
  font-size: 16px;
  line-height: 1.5;
  border-radius: 4px;
  -webkit-user-select: none;
  -moz-user-select: none;
  -ms-user-select: none;
  user-select: none;
}

.btn:focus, .btn.focus, .btn:active:focus, .btn:active.focus, .btn.active:focus, .btn.active.focus {
  outline: thin dotted;
  outline: 5px auto -webkit-focus-ring-color;
  outline-offset: -2px;
}

.btn:hover, .btn:focus, .btn.focus {
  color: #333;
  text-decoration: none;
}

.btn:active, .btn.active {
  outline: 0;
  background-image: none;
  -webkit-box-shadow: inset 0 3px 5px rgba(0, 0, 0, 0.125);
  box-shadow: inset 0 3px 5px rgba(0, 0, 0, 0.125);
}

.btn.disabled, .btn[disabled],
fieldset[disabled] .btn {
  cursor: not-allowed;
  opacity: 0.65;
  filter: alpha(opacity=65);
  -webkit-box-shadow: none;
  box-shadow: none;
}

a.btn.disabled,
fieldset[disabled] a.btn {
  pointer-events: none;
}

.btn-default {
  color: #333;
  background-color: #fff;
  border-color: #ccc;
}

.btn-default:focus, .btn-default.focus {
  color: #333;
  background-color: #e6e6e6;
  border-color: #8c8c8c;
}

.btn-default:hover {
  color: #333;
  background-color: #e6e6e6;
  border-color: #adadad;
}

.btn-default:active, .btn-default.active,
.open > .btn-default.dropdown-toggle {
  color: #333;
  background-color: #e6e6e6;
  border-color: #adadad;
}

.btn-default:active:hover, .btn-default:active:focus, .btn-default:active.focus, .btn-default.active:hover, .btn-default.active:focus, .btn-default.active.focus,
.open > .btn-default.dropdown-toggle:hover,
.open > .btn-default.dropdown-toggle:focus,
.open > .btn-default.dropdown-toggle.focus {
  color: #333;
  background-color: #d4d4d4;
  border-color: #8c8c8c;
}

.btn-default:active, .btn-default.active,
.open > .btn-default.dropdown-toggle {
  background-image: none;
}

.btn-default.disabled:hover, .btn-default.disabled:focus, .btn-default.disabled.focus, .btn-default[disabled]:hover, .btn-default[disabled]:focus, .btn-default[disabled].focus,
fieldset[disabled] .btn-default:hover,
fieldset[disabled] .btn-default:focus,
fieldset[disabled] .btn-default.focus {
  background-color: #fff;
  border-color: #ccc;
}

.btn-default .badge {
  color: #fff;
  background-color: #333;
}

.btn-primary {
  color: #fff;
  background-color: #337ab7;
  border-color: #2e6da4;
}

.btn-primary:focus, .btn-primary.focus {
  color: #fff;
  background-color: #286090;
  border-color: #122b40;
}

.btn-primary:hover {
  color: #fff;
  background-color: #286090;
  border-color: #204d74;
}

.btn-primary:active, .btn-primary.active,
.open > .btn-primary.dropdown-toggle {
  color: #fff;
  background-color: #286090;
  border-color: #204d74;
}

.btn-primary:active:hover, .btn-primary:active:focus, .btn-primary:active.focus, .btn-primary.active:hover, .btn-primary.active:focus, .btn-primary.active.focus,
.open > .btn-primary.dropdown-toggle:hover,
.open > .btn-primary.dropdown-toggle:focus,
.open > .btn-primary.dropdown-toggle.focus {
  color: #fff;
  background-color: #204d74;
  border-color: #122b40;
}

.btn-primary:active, .btn-primary.active,
.open > .btn-primary.dropdown-toggle {
  background-image: none;
}

.btn-primary.disabled:hover, .btn-primary.disabled:focus, .btn-primary.disabled.focus, .btn-primary[disabled]:hover, .btn-primary[disabled]:focus, .btn-primary[disabled].focus,
fieldset[disabled] .btn-primary:hover,
fieldset[disabled] .btn-primary:focus,
fieldset[disabled] .btn-primary.focus {
  background-color: #337ab7;
  border-color: #2e6da4;
}

.btn-primary .badge {
  color: #337ab7;
  background-color: #fff;
}

.btn-success {
  color: #fff;
  background-color: #5cb85c;
  border-color: #4cae4c;
}

.btn-success:focus, .btn-success.focus {
  color: #fff;
  background-color: #449d44;
  border-color: #255625;
}

.btn-success:hover {
  color: #fff;
  background-color: #449d44;
  border-color: #398439;
}

.btn-success:active, .btn-success.active,
.open > .btn-success.dropdown-toggle {
  color: #fff;
  background-color: #449d44;
  border-color: #398439;
}

.btn-success:active:hover, .btn-success:active:focus, .btn-success:active.focus, .btn-success.active:hover, .btn-success.active:focus, .btn-success.active.focus,
.open > .btn-success.dropdown-toggle:hover,
.open > .btn-success.dropdown-toggle:focus,
.open > .btn-success.dropdown-toggle.focus {
  color: #fff;
  background-color: #398439;
  border-color: #255625;
}

.btn-success:active, .btn-success.active,
.open > .btn-success.dropdown-toggle {
  background-image: none;
}

.btn-success.disabled:hover, .btn-success.disabled:focus, .btn-success.disabled.focus, .btn-success[disabled]:hover, .btn-success[disabled]:focus, .btn-success[disabled].focus,
fieldset[disabled] .btn-success:hover,
fieldset[disabled] .btn-success:focus,
fieldset[disabled] .btn-success.focus {
  background-color: #5cb85c;
  border-color: #4cae4c;
}

.btn-success .badge {
  color: #5cb85c;
  background-color: #fff;
}

.btn-info {
  color: #fff;
  background-color: #5bc0de;
  border-color: #46b8da;
}

.btn-info:focus, .btn-info.focus {
  color: #fff;
  background-color: #31b0d5;
  border-color: #1b6d85;
}

.btn-info:hover {
  color: #fff;
  background-color: #31b0d5;
  border-color: #269abc;
}

.btn-info:active, .btn-info.active,
.open > .btn-info.dropdown-toggle {
  color: #fff;
  background-color: #31b0d5;
  border-color: #269abc;
}

.btn-info:active:hover, .btn-info:active:focus, .btn-info:active.focus, .btn-info.active:hover, .btn-info.active:focus, .btn-info.active.focus,
.open > .btn-info.dropdown-toggle:hover,
.open > .btn-info.dropdown-toggle:focus,
.open > .btn-info.dropdown-toggle.focus {
  color: #fff;
  background-color: #269abc;
  border-color: #1b6d85;
}

.btn-info:active, .btn-info.active,
.open > .btn-info.dropdown-toggle {
  background-image: none;
}

.btn-info.disabled:hover, .btn-info.disabled:focus, .btn-info.disabled.focus, .btn-info[disabled]:hover, .btn-info[disabled]:focus, .btn-info[disabled].focus,
fieldset[disabled] .btn-info:hover,
fieldset[disabled] .btn-info:focus,
fieldset[disabled] .btn-info.focus {
  background-color: #5bc0de;
  border-color: #46b8da;
}

.btn-info .badge {
  color: #5bc0de;
  background-color: #fff;
}

.btn-warning {
  color: #fff;
  background-color: #f0ad4e;
  border-color: #eea236;
}

.btn-warning:focus, .btn-warning.focus {
  color: #fff;
  background-color: #ec971f;
  border-color: #985f0d;
}

.btn-warning:hover {
  color: #fff;
  background-color: #ec971f;
  border-color: #d58512;
}

.btn-warning:active, .btn-warning.active,
.open > .btn-warning.dropdown-toggle {
  color: #fff;
  background-color: #ec971f;
  border-color: #d58512;
}

.btn-warning:active:hover, .btn-warning:active:focus, .btn-warning:active.focus, .btn-warning.active:hover, .btn-warning.active:focus, .btn-warning.active.focus,
.open > .btn-warning.dropdown-toggle:hover,
.open > .btn-warning.dropdown-toggle:focus,
.open > .btn-warning.dropdown-toggle.focus {
  color: #fff;
  background-color: #d58512;
  border-color: #985f0d;
}

.btn-warning:active, .btn-warning.active,
.open > .btn-warning.dropdown-toggle {
  background-image: none;
}

.btn-warning.disabled:hover, .btn-warning.disabled:focus, .btn-warning.disabled.focus, .btn-warning[disabled]:hover, .btn-warning[disabled]:focus, .btn-warning[disabled].focus,
fieldset[disabled] .btn-warning:hover,
fieldset[disabled] .btn-warning:focus,
fieldset[disabled] .btn-warning.focus {
  background-color: #f0ad4e;
  border-color: #eea236;
}

.btn-warning .badge {
  color: #f0ad4e;
  background-color: #fff;
}

.btn-danger {
  color: #fff;
  background-color: #d9534f;
  border-color: #d43f3a;
}

.btn-danger:focus, .btn-danger.focus {
  color: #fff;
  background-color: #c9302c;
  border-color: #761c19;
}

.btn-danger:hover {
  color: #fff;
  background-color: #c9302c;
  border-color: #ac2925;
}

.btn-danger:active, .btn-danger.active,
.open > .btn-danger.dropdown-toggle {
  color: #fff;
  background-color: #c9302c;
  border-color: #ac2925;
}

.btn-danger:active:hover, .btn-danger:active:focus, .btn-danger:active.focus, .btn-danger.active:hover, .btn-danger.active:focus, .btn-danger.active.focus,
.open > .btn-danger.dropdown-toggle:hover,
.open > .btn-danger.dropdown-toggle:focus,
.open > .btn-danger.dropdown-toggle.focus {
  color: #fff;
  background-color: #ac2925;
  border-color: #761c19;
}

.btn-danger:active, .btn-danger.active,
.open > .btn-danger.dropdown-toggle {
  background-image: none;
}

.btn-danger.disabled:hover, .btn-danger.disabled:focus, .btn-danger.disabled.focus, .btn-danger[disabled]:hover, .btn-danger[disabled]:focus, .btn-danger[disabled].focus,
fieldset[disabled] .btn-danger:hover,
fieldset[disabled] .btn-danger:focus,
fieldset[disabled] .btn-danger.focus {
  background-color: #d9534f;
  border-color: #d43f3a;
}

.btn-danger .badge {
  color: #d9534f;
  background-color: #fff;
}

.btn-link {
  color: inherit;
  font-weight: normal;
  border-radius: 0;
}

.btn-link, .btn-link:active, .btn-link.active, .btn-link[disabled],
fieldset[disabled] .btn-link {
  background-color: transparent;
  -webkit-box-shadow: none;
  box-shadow: none;
}

.btn-link, .btn-link:hover, .btn-link:focus, .btn-link:active {
  border-color: transparent;
}

.btn-link:hover, .btn-link:focus {
  color: inherit;
  text-decoration: underline;
  background-color: transparent;
}

.btn-link[disabled]:hover, .btn-link[disabled]:focus,
fieldset[disabled] .btn-link:hover,
fieldset[disabled] .btn-link:focus {
  color: #777777;
  text-decoration: none;
}

.btn-lg, .btn-group-lg > .btn {
  padding: 21px 43px;
  font-size: 17px;
  line-height: 1.33333;
  border-radius: 6px;
}

.btn-sm, .btn-group-sm > .btn {
  padding: 14px 36px;
  font-size: 15px;
  line-height: 1.5;
  border-radius: 3px;
}

.btn-xs, .btn-group-xs > .btn {
  padding: 11px 40px;
  font-size: 15px;
  line-height: 1.5;
  border-radius: 3px;
}

.btn-block {
  display: block;
  width: 100%;
}

.btn-block + .btn-block {
  margin-top: 5px;
}

input[type="submit"].btn-block,
input[type="reset"].btn-block,
input[type="button"].btn-block {
  width: 100%;
}

/** 1.9  Grids */
.container {
  margin-right: auto;
  margin-left: auto;
  padding-left: 15px;
  padding-right: 15px;
}

.container:before, .container:after {
  content: " ";
  display: table;
}

.container:after {
  clear: both;
}

@media (min-width: 768px) {
  .container {
    width: 750px;
  }
}

@media (min-width: 992px) {
  .container {
    width: 970px;
  }
}

@media (min-width: 1200px) {
  .container {
    width: 1200px;
  }
}

.container-fluid {
  margin-right: auto;
  margin-left: auto;
  padding-left: 15px;
  padding-right: 15px;
}

.container-fluid:before, .container-fluid:after {
  content: " ";
  display: table;
}

.container-fluid:after {
  clear: both;
}

.row {
  margin-left: -15px;
  margin-right: -15px;
}

.row:before, .row:after {
  content: " ";
  display: table;
}

.row:after {
  clear: both;
}

.col-xs-1, .col-sm-1, .col-md-1, .col-lg-1, .col-xs-2, .col-sm-2, .col-md-2, .col-lg-2, .col-xs-3, .col-sm-3, .col-md-3, .col-lg-3, .col-xs-4, .col-sm-4, .col-md-4, .col-lg-4, .col-xs-5, .col-sm-5, .col-md-5, .col-lg-5, .col-xs-6, .col-sm-6, .col-md-6, .col-lg-6, .col-xs-7, .col-sm-7, .col-md-7, .col-lg-7, .col-xs-8, .col-sm-8, .col-md-8, .col-lg-8, .col-xs-9, .col-sm-9, .col-md-9, .col-lg-9, .col-xs-10, .col-sm-10, .col-md-10, .col-lg-10, .col-xs-11, .col-sm-11, .col-md-11, .col-lg-11, .col-xs-12, .col-sm-12, .col-md-12, .col-lg-12 {
  position: relative;
  min-height: 1px;
  padding-left: 15px;
  padding-right: 15px;
}

.col-xs-1, .col-xs-2, .col-xs-3, .col-xs-4, .col-xs-5, .col-xs-6, .col-xs-7, .col-xs-8, .col-xs-9, .col-xs-10, .col-xs-11, .col-xs-12 {
  float: left;
}

.col-xs-1 {
  width: 8.33333%;
}

.col-xs-2 {
  width: 16.66667%;
}

.col-xs-3 {
  width: 25%;
}

.col-xs-4 {
  width: 33.33333%;
}

.col-xs-5 {
  width: 41.66667%;
}

.col-xs-6 {
  width: 50%;
}

.col-xs-7 {
  width: 58.33333%;
}

.col-xs-8 {
  width: 66.66667%;
}

.col-xs-9 {
  width: 75%;
}

.col-xs-10 {
  width: 83.33333%;
}

.col-xs-11 {
  width: 91.66667%;
}

.col-xs-12 {
  width: 100%;
}

.col-xs-pull-0 {
  right: auto;
}

.col-xs-pull-1 {
  right: 8.33333%;
}

.col-xs-pull-2 {
  right: 16.66667%;
}

.col-xs-pull-3 {
  right: 25%;
}

.col-xs-pull-4 {
  right: 33.33333%;
}

.col-xs-pull-5 {
  right: 41.66667%;
}

.col-xs-pull-6 {
  right: 50%;
}

.col-xs-pull-7 {
  right: 58.33333%;
}

.col-xs-pull-8 {
  right: 66.66667%;
}

.col-xs-pull-9 {
  right: 75%;
}

.col-xs-pull-10 {
  right: 83.33333%;
}

.col-xs-pull-11 {
  right: 91.66667%;
}

.col-xs-pull-12 {
  right: 100%;
}

.col-xs-push-0 {
  left: auto;
}

.col-xs-push-1 {
  left: 8.33333%;
}

.col-xs-push-2 {
  left: 16.66667%;
}

.col-xs-push-3 {
  left: 25%;
}

.col-xs-push-4 {
  left: 33.33333%;
}

.col-xs-push-5 {
  left: 41.66667%;
}

.col-xs-push-6 {
  left: 50%;
}

.col-xs-push-7 {
  left: 58.33333%;
}

.col-xs-push-8 {
  left: 66.66667%;
}

.col-xs-push-9 {
  left: 75%;
}

.col-xs-push-10 {
  left: 83.33333%;
}

.col-xs-push-11 {
  left: 91.66667%;
}

.col-xs-push-12 {
  left: 100%;
}

.col-xs-offset-0 {
  margin-left: 0%;
}

.col-xs-offset-1 {
  margin-left: 8.33333%;
}

.col-xs-offset-2 {
  margin-left: 16.66667%;
}

.col-xs-offset-3 {
  margin-left: 25%;
}

.col-xs-offset-4 {
  margin-left: 33.33333%;
}

.col-xs-offset-5 {
  margin-left: 41.66667%;
}

.col-xs-offset-6 {
  margin-left: 50%;
}

.col-xs-offset-7 {
  margin-left: 58.33333%;
}

.col-xs-offset-8 {
  margin-left: 66.66667%;
}

.col-xs-offset-9 {
  margin-left: 75%;
}

.col-xs-offset-10 {
  margin-left: 83.33333%;
}

.col-xs-offset-11 {
  margin-left: 91.66667%;
}

.col-xs-offset-12 {
  margin-left: 100%;
}

@media (min-width: 768px) {
  .col-sm-1, .col-sm-2, .col-sm-3, .col-sm-4, .col-sm-5, .col-sm-6, .col-sm-7, .col-sm-8, .col-sm-9, .col-sm-10, .col-sm-11, .col-sm-12 {
    float: left;
  }
  .col-sm-1 {
    width: 8.33333%;
  }
  .col-sm-2 {
    width: 16.66667%;
  }
  .col-sm-3 {
    width: 25%;
  }
  .col-sm-4 {
    width: 33.33333%;
  }
  .col-sm-5 {
    width: 41.66667%;
  }
  .col-sm-6 {
    width: 50%;
  }
  .col-sm-7 {
    width: 58.33333%;
  }
  .col-sm-8 {
    width: 66.66667%;
  }
  .col-sm-9 {
    width: 75%;
  }
  .col-sm-10 {
    width: 83.33333%;
  }
  .col-sm-11 {
    width: 91.66667%;
  }
  .col-sm-12 {
    width: 100%;
  }
  .col-sm-pull-0 {
    right: auto;
  }
  .col-sm-pull-1 {
    right: 8.33333%;
  }
  .col-sm-pull-2 {
    right: 16.66667%;
  }
  .col-sm-pull-3 {
    right: 25%;
  }
  .col-sm-pull-4 {
    right: 33.33333%;
  }
  .col-sm-pull-5 {
    right: 41.66667%;
  }
  .col-sm-pull-6 {
    right: 50%;
  }
  .col-sm-pull-7 {
    right: 58.33333%;
  }
  .col-sm-pull-8 {
    right: 66.66667%;
  }
  .col-sm-pull-9 {
    right: 75%;
  }
  .col-sm-pull-10 {
    right: 83.33333%;
  }
  .col-sm-pull-11 {
    right: 91.66667%;
  }
  .col-sm-pull-12 {
    right: 100%;
  }
  .col-sm-push-0 {
    left: auto;
  }
  .col-sm-push-1 {
    left: 8.33333%;
  }
  .col-sm-push-2 {
    left: 16.66667%;
  }
  .col-sm-push-3 {
    left: 25%;
  }
  .col-sm-push-4 {
    left: 33.33333%;
  }
  .col-sm-push-5 {
    left: 41.66667%;
  }
  .col-sm-push-6 {
    left: 50%;
  }
  .col-sm-push-7 {
    left: 58.33333%;
  }
  .col-sm-push-8 {
    left: 66.66667%;
  }
  .col-sm-push-9 {
    left: 75%;
  }
  .col-sm-push-10 {
    left: 83.33333%;
  }
  .col-sm-push-11 {
    left: 91.66667%;
  }
  .col-sm-push-12 {
    left: 100%;
  }
  .col-sm-offset-0 {
    margin-left: 0%;
  }
  .col-sm-offset-1 {
    margin-left: 8.33333%;
  }
  .col-sm-offset-2 {
    margin-left: 16.66667%;
  }
  .col-sm-offset-3 {
    margin-left: 25%;
  }
  .col-sm-offset-4 {
    margin-left: 33.33333%;
  }
  .col-sm-offset-5 {
    margin-left: 41.66667%;
  }
  .col-sm-offset-6 {
    margin-left: 50%;
  }
  .col-sm-offset-7 {
    margin-left: 58.33333%;
  }
  .col-sm-offset-8 {
    margin-left: 66.66667%;
  }
  .col-sm-offset-9 {
    margin-left: 75%;
  }
  .col-sm-offset-10 {
    margin-left: 83.33333%;
  }
  .col-sm-offset-11 {
    margin-left: 91.66667%;
  }
  .col-sm-offset-12 {
    margin-left: 100%;
  }
}

@media (min-width: 992px) {
  .col-md-1, .col-md-2, .col-md-3, .col-md-4, .col-md-5, .col-md-6, .col-md-7, .col-md-8, .col-md-9, .col-md-10, .col-md-11, .col-md-12 {
    float: left;
  }
  .col-md-1 {
    width: 8.33333%;
  }
  .col-md-2 {
    width: 16.66667%;
  }
  .col-md-3 {
    width: 25%;
  }
  .col-md-4 {
    width: 33.33333%;
  }
  .col-md-5 {
    width: 41.66667%;
  }
  .col-md-6 {
    width: 50%;
  }
  .col-md-7 {
    width: 58.33333%;
  }
  .col-md-8 {
    width: 66.66667%;
  }
  .col-md-9 {
    width: 75%;
  }
  .col-md-10 {
    width: 83.33333%;
  }
  .col-md-11 {
    width: 91.66667%;
  }
  .col-md-12 {
    width: 100%;
  }
  .col-md-pull-0 {
    right: auto;
  }
  .col-md-pull-1 {
    right: 8.33333%;
  }
  .col-md-pull-2 {
    right: 16.66667%;
  }
  .col-md-pull-3 {
    right: 25%;
  }
  .col-md-pull-4 {
    right: 33.33333%;
  }
  .col-md-pull-5 {
    right: 41.66667%;
  }
  .col-md-pull-6 {
    right: 50%;
  }
  .col-md-pull-7 {
    right: 58.33333%;
  }
  .col-md-pull-8 {
    right: 66.66667%;
  }
  .col-md-pull-9 {
    right: 75%;
  }
  .col-md-pull-10 {
    right: 83.33333%;
  }
  .col-md-pull-11 {
    right: 91.66667%;
  }
  .col-md-pull-12 {
    right: 100%;
  }
  .col-md-push-0 {
    left: auto;
  }
  .col-md-push-1 {
    left: 8.33333%;
  }
  .col-md-push-2 {
    left: 16.66667%;
  }
  .col-md-push-3 {
    left: 25%;
  }
  .col-md-push-4 {
    left: 33.33333%;
  }
  .col-md-push-5 {
    left: 41.66667%;
  }
  .col-md-push-6 {
    left: 50%;
  }
  .col-md-push-7 {
    left: 58.33333%;
  }
  .col-md-push-8 {
    left: 66.66667%;
  }
  .col-md-push-9 {
    left: 75%;
  }
  .col-md-push-10 {
    left: 83.33333%;
  }
  .col-md-push-11 {
    left: 91.66667%;
  }
  .col-md-push-12 {
    left: 100%;
  }
  .col-md-offset-0 {
    margin-left: 0%;
  }
  .col-md-offset-1 {
    margin-left: 8.33333%;
  }
  .col-md-offset-2 {
    margin-left: 16.66667%;
  }
  .col-md-offset-3 {
    margin-left: 25%;
  }
  .col-md-offset-4 {
    margin-left: 33.33333%;
  }
  .col-md-offset-5 {
    margin-left: 41.66667%;
  }
  .col-md-offset-6 {
    margin-left: 50%;
  }
  .col-md-offset-7 {
    margin-left: 58.33333%;
  }
  .col-md-offset-8 {
    margin-left: 66.66667%;
  }
  .col-md-offset-9 {
    margin-left: 75%;
  }
  .col-md-offset-10 {
    margin-left: 83.33333%;
  }
  .col-md-offset-11 {
    margin-left: 91.66667%;
  }
  .col-md-offset-12 {
    margin-left: 100%;
  }
}

@media (min-width: 1200px) {
  .col-lg-1, .col-lg-2, .col-lg-3, .col-lg-4, .col-lg-5, .col-lg-6, .col-lg-7, .col-lg-8, .col-lg-9, .col-lg-10, .col-lg-11, .col-lg-12 {
    float: left;
  }
  .col-lg-1 {
    width: 8.33333%;
  }
  .col-lg-2 {
    width: 16.66667%;
  }
  .col-lg-3 {
    width: 25%;
  }
  .col-lg-4 {
    width: 33.33333%;
  }
  .col-lg-5 {
    width: 41.66667%;
  }
  .col-lg-6 {
    width: 50%;
  }
  .col-lg-7 {
    width: 58.33333%;
  }
  .col-lg-8 {
    width: 66.66667%;
  }
  .col-lg-9 {
    width: 75%;
  }
  .col-lg-10 {
    width: 83.33333%;
  }
  .col-lg-11 {
    width: 91.66667%;
  }
  .col-lg-12 {
    width: 100%;
  }
  .col-lg-pull-0 {
    right: auto;
  }
  .col-lg-pull-1 {
    right: 8.33333%;
  }
  .col-lg-pull-2 {
    right: 16.66667%;
  }
  .col-lg-pull-3 {
    right: 25%;
  }
  .col-lg-pull-4 {
    right: 33.33333%;
  }
  .col-lg-pull-5 {
    right: 41.66667%;
  }
  .col-lg-pull-6 {
    right: 50%;
  }
  .col-lg-pull-7 {
    right: 58.33333%;
  }
  .col-lg-pull-8 {
    right: 66.66667%;
  }
  .col-lg-pull-9 {
    right: 75%;
  }
  .col-lg-pull-10 {
    right: 83.33333%;
  }
  .col-lg-pull-11 {
    right: 91.66667%;
  }
  .col-lg-pull-12 {
    right: 100%;
  }
  .col-lg-push-0 {
    left: auto;
  }
  .col-lg-push-1 {
    left: 8.33333%;
  }
  .col-lg-push-2 {
    left: 16.66667%;
  }
  .col-lg-push-3 {
    left: 25%;
  }
  .col-lg-push-4 {
    left: 33.33333%;
  }
  .col-lg-push-5 {
    left: 41.66667%;
  }
  .col-lg-push-6 {
    left: 50%;
  }
  .col-lg-push-7 {
    left: 58.33333%;
  }
  .col-lg-push-8 {
    left: 66.66667%;
  }
  .col-lg-push-9 {
    left: 75%;
  }
  .col-lg-push-10 {
    left: 83.33333%;
  }
  .col-lg-push-11 {
    left: 91.66667%;
  }
  .col-lg-push-12 {
    left: 100%;
  }
  .col-lg-offset-0 {
    margin-left: 0%;
  }
  .col-lg-offset-1 {
    margin-left: 8.33333%;
  }
  .col-lg-offset-2 {
    margin-left: 16.66667%;
  }
  .col-lg-offset-3 {
    margin-left: 25%;
  }
  .col-lg-offset-4 {
    margin-left: 33.33333%;
  }
  .col-lg-offset-5 {
    margin-left: 41.66667%;
  }
  .col-lg-offset-6 {
    margin-left: 50%;
  }
  .col-lg-offset-7 {
    margin-left: 58.33333%;
  }
  .col-lg-offset-8 {
    margin-left: 66.66667%;
  }
  .col-lg-offset-9 {
    margin-left: 75%;
  }
  .col-lg-offset-10 {
    margin-left: 83.33333%;
  }
  .col-lg-offset-11 {
    margin-left: 91.66667%;
  }
  .col-lg-offset-12 {
    margin-left: 100%;
  }
}

/** 1.10 Component animations */
.fade {
  opacity: 0;
  -webkit-transition: opacity 0.15s linear;
  -o-transition: opacity 0.15s linear;
  transition: opacity 0.15s linear;
}

.fade.in {
  opacity: 1;
}

.collapse {
  display: none;
}

.collapse.in {
  display: block;
}

tr.collapse.in {
  display: table-row;
}

tbody.collapse.in {
  display: table-row-group;
}

.collapsing {
  position: relative;
  height: 0;
  overflow: hidden;
  -webkit-transition-property: height, visibility;
  transition-property: height, visibility;
  -webkit-transition-duration: 0.35s;
  transition-duration: 0.35s;
  -webkit-transition-timing-function: ease;
  transition-timing-function: ease;
}

/** 1.11 Dropdowns */
.caret {
  display: inline-block;
  width: 0;
  height: 0;
  margin-left: 2px;
  vertical-align: middle;
  border-top: 4px dashed;
  border-top: 4px solid \9;
  border-right: 4px solid transparent;
  border-left: 4px solid transparent;
}

.dropup,
.dropdown {
  position: relative;
}

.dropdown-toggle:focus {
  outline: 0;
}

.dropdown-menu {
  position: absolute;
  top: 100%;
  left: 0;
  z-index: 1000;
  display: none;
  float: left;
  min-width: 160px;
  padding: 5px 0;
  margin: 2px 0 0;
  list-style: none;
  font-size: 16px;
  text-align: left;
  background-color: #fff;
  border: 1px solid #ccc;
  border: 1px solid rgba(0, 0, 0, 0.15);
  border-radius: 5px;
  -webkit-box-shadow: 0 6px 12px rgba(0, 0, 0, 0.175);
  box-shadow: 0 6px 12px rgba(0, 0, 0, 0.175);
  background-clip: padding-box;
}

.dropdown-menu.pull-right {
  right: 0;
  left: auto;
}

.dropdown-menu .divider {
  height: 1px;
  margin: 11px 0;
  overflow: hidden;
  background-color: #b7b7b7;
}

.dropdown-menu > li > a {
  display: block;
  padding: 3px 20px;
  clear: both;
  font-weight: normal;
  line-height: 1.5;
  color: #434345;
  white-space: nowrap;
}

.dropdown-menu > li > a:hover, .dropdown-menu > li > a:focus {
  text-decoration: none;
  color: #434345;
  background-color: #f5f5f5;
}

.dropdown-menu > .active > a, .dropdown-menu > .active > a:hover, .dropdown-menu > .active > a:focus {
  color: #fff;
  text-decoration: none;
  outline: 0;
  background-color: #FF304D;
}

.dropdown-menu > .disabled > a, .dropdown-menu > .disabled > a:hover, .dropdown-menu > .disabled > a:focus {
  color: #b7b7b7;
}

.dropdown-menu > .disabled > a:hover, .dropdown-menu > .disabled > a:focus {
  text-decoration: none;
  background-color: transparent;
  background-image: none;
  filter: progid:DXImageTransform.Microsoft.gradient(enabled = false);
  cursor: not-allowed;
}

.open > .dropdown-menu {
  display: block;
}

.open > a {
  outline: 0;
}

.dropdown-menu-right {
  left: auto;
  right: 0;
}

.dropdown-menu-left {
  left: 0;
  right: auto;
}

.dropdown-header {
  display: block;
  padding: 3px 20px;
  font-size: 15px;
  line-height: 1.5;
  color: #9b9b9b;
  white-space: nowrap;
}

.dropdown-backdrop {
  position: fixed;
  left: 0;
  right: 0;
  bottom: 0;
  top: 0;
  z-index: 990;
}

.pull-right > .dropdown-menu {
  right: 0;
  left: auto;
}

.dropup .caret,
.navbar-fixed-bottom .dropdown .caret {
  border-top: 0;
  border-bottom: 4px dashed;
  border-bottom: 4px solid \9;
  content: "";
}

.dropup .dropdown-menu,
.navbar-fixed-bottom .dropdown .dropdown-menu {
  top: auto;
  bottom: 100%;
  margin-bottom: 2px;
}

@media (min-width: 768px) {
  .navbar-right .dropdown-menu {
    right: 0;
    left: auto;
  }
  .navbar-right .dropdown-menu-left {
    left: 0;
    right: auto;
  }
}

/** 1.12 Button Groups */
.btn-group,
.btn-group-vertical {
  position: relative;
  display: inline-block;
  vertical-align: middle;
}

.btn-group > .btn,
.btn-group-vertical > .btn {
  position: relative;
  float: left;
}

.btn-group > .btn:hover, .btn-group > .btn:focus, .btn-group > .btn:active, .btn-group > .btn.active,
.btn-group-vertical > .btn:hover,
.btn-group-vertical > .btn:focus,
.btn-group-vertical > .btn:active,
.btn-group-vertical > .btn.active {
  z-index: 2;
}

.btn-group .btn + .btn,
.btn-group .btn + .btn-group,
.btn-group .btn-group + .btn,
.btn-group .btn-group + .btn-group {
  margin-left: -1px;
}

.btn-toolbar {
  margin-left: -5px;
}

.btn-toolbar:before, .btn-toolbar:after {
  content: " ";
  display: table;
}

.btn-toolbar:after {
  clear: both;
}

.btn-toolbar .btn,
.btn-toolbar .btn-group,
.btn-toolbar .input-group {
  float: left;
}

.btn-toolbar > .btn,
.btn-toolbar > .btn-group,
.btn-toolbar > .input-group {
  margin-left: 5px;
}

.btn-group > .btn:not(:first-child):not(:last-child):not(.dropdown-toggle) {
  border-radius: 0;
}

.btn-group > .btn:first-child {
  margin-left: 0;
}

.btn-group > .btn:first-child:not(:last-child):not(.dropdown-toggle) {
  border-bottom-right-radius: 0;
  border-top-right-radius: 0;
}

.btn-group > .btn:last-child:not(:first-child),
.btn-group > .dropdown-toggle:not(:first-child) {
  border-bottom-left-radius: 0;
  border-top-left-radius: 0;
}

.btn-group > .btn-group {
  float: left;
}

.btn-group > .btn-group:not(:first-child):not(:last-child) > .btn {
  border-radius: 0;
}

.btn-group > .btn-group:first-child:not(:last-child) > .btn:last-child,
.btn-group > .btn-group:first-child:not(:last-child) > .dropdown-toggle {
  border-bottom-right-radius: 0;
  border-top-right-radius: 0;
}

.btn-group > .btn-group:last-child:not(:first-child) > .btn:first-child {
  border-bottom-left-radius: 0;
  border-top-left-radius: 0;
}

.btn-group .dropdown-toggle:active,
.btn-group.open .dropdown-toggle {
  outline: 0;
}

.btn-group > .btn + .dropdown-toggle {
  padding-left: 8px;
  padding-right: 8px;
}

.btn-group > .btn-lg + .dropdown-toggle, .btn-group-lg.btn-group > .btn + .dropdown-toggle {
  padding-left: 12px;
  padding-right: 12px;
}

.btn-group.open .dropdown-toggle {
  -webkit-box-shadow: inset 0 3px 5px rgba(0, 0, 0, 0.125);
  box-shadow: inset 0 3px 5px rgba(0, 0, 0, 0.125);
}

.btn-group.open .dropdown-toggle.btn-link {
  -webkit-box-shadow: none;
  box-shadow: none;
}

.btn .caret {
  margin-left: 0;
}

.btn-lg .caret, .btn-group-lg > .btn .caret {
  border-width: 5px 5px 0;
  border-bottom-width: 0;
}

.dropup .btn-lg .caret, .dropup .btn-group-lg > .btn .caret {
  border-width: 0 5px 5px;
}

.btn-group-vertical > .btn,
.btn-group-vertical > .btn-group,
.btn-group-vertical > .btn-group > .btn {
  display: block;
  float: none;
  width: 100%;
  max-width: 100%;
}

.btn-group-vertical > .btn-group:before, .btn-group-vertical > .btn-group:after {
  content: " ";
  display: table;
}

.btn-group-vertical > .btn-group:after {
  clear: both;
}

.btn-group-vertical > .btn-group > .btn {
  float: none;
}

.btn-group-vertical > .btn + .btn,
.btn-group-vertical > .btn + .btn-group,
.btn-group-vertical > .btn-group + .btn,
.btn-group-vertical > .btn-group + .btn-group {
  margin-top: -1px;
  margin-left: 0;
}

.btn-group-vertical > .btn:not(:first-child):not(:last-child) {
  border-radius: 0;
}

.btn-group-vertical > .btn:first-child:not(:last-child) {
  border-top-right-radius: 4px;
  border-top-left-radius: 4px;
  border-bottom-right-radius: 0;
  border-bottom-left-radius: 0;
}

.btn-group-vertical > .btn:last-child:not(:first-child) {
  border-top-right-radius: 0;
  border-top-left-radius: 0;
  border-bottom-right-radius: 4px;
  border-bottom-left-radius: 4px;
}

.btn-group-vertical > .btn-group:not(:first-child):not(:last-child) > .btn {
  border-radius: 0;
}

.btn-group-vertical > .btn-group:first-child:not(:last-child) > .btn:last-child,
.btn-group-vertical > .btn-group:first-child:not(:last-child) > .dropdown-toggle {
  border-bottom-right-radius: 0;
  border-bottom-left-radius: 0;
}

.btn-group-vertical > .btn-group:last-child:not(:first-child) > .btn:first-child {
  border-top-right-radius: 0;
  border-top-left-radius: 0;
}

.btn-group-justified {
  display: table;
  width: 100%;
  table-layout: fixed;
  border-collapse: separate;
}

.btn-group-justified > .btn,
.btn-group-justified > .btn-group {
  float: none;
  display: table-cell;
  width: 1%;
}

.btn-group-justified > .btn-group .btn {
  width: 100%;
}

.btn-group-justified > .btn-group .dropdown-menu {
  left: auto;
}

[data-toggle="buttons"] > .btn input[type="radio"],
[data-toggle="buttons"] > .btn input[type="checkbox"],
[data-toggle="buttons"] > .btn-group > .btn input[type="radio"],
[data-toggle="buttons"] > .btn-group > .btn input[type="checkbox"] {
  position: absolute;
  clip: rect(0, 0, 0, 0);
  pointer-events: none;
}

/** 1.13 Input Groups */
.input-group {
  position: relative;
  display: table;
  border-collapse: separate;
}

.input-group[class*="col-"] {
  float: none;
  padding-left: 0;
  padding-right: 0;
}

.input-group .form-control {
  position: relative;
  z-index: 2;
  float: left;
  width: 100%;
  margin-bottom: 0;
}

.input-group .form-control:focus {
  z-index: 3;
}

.input-group-addon,
.input-group-btn,
.input-group .form-control {
  display: table-cell;
}

.input-group-addon:not(:first-child):not(:last-child),
.input-group-btn:not(:first-child):not(:last-child),
.input-group .form-control:not(:first-child):not(:last-child) {
  border-radius: 0;
}

.input-group-addon,
.input-group-btn {
  width: 1%;
  white-space: nowrap;
  vertical-align: middle;
}

.input-group-addon {
  padding: 18px 38px;
  font-size: 16px;
  font-weight: normal;
  line-height: 1;
  color: #212121;
  text-align: center;
  background-color: #212121;
  border: 1px solid #212121;
  border-radius: 0;
}

.input-group-addon.input-sm,
.input-group-sm > .input-group-addon,
.input-group-sm > .input-group-btn > .input-group-addon.btn {
  padding: 14px 36px;
  font-size: 15px;
  border-radius: 0;
}

.input-group-addon.input-lg,
.input-group-lg > .input-group-addon,
.input-group-lg > .input-group-btn > .input-group-addon.btn {
  padding: 21px 43px;
  font-size: 17px;
  border-radius: 10px;
}

.input-group-addon input[type="radio"],
.input-group-addon input[type="checkbox"] {
  margin-top: 0;
}

.input-group .form-control:first-child,
.input-group-addon:first-child,
.input-group-btn:first-child > .btn,
.input-group-btn:first-child > .element-groups-custom > .btn,
.input-group-btn:first-child > .dropdown-toggle,
.input-group-btn:last-child > .btn:not(:last-child):not(.dropdown-toggle),
.input-group-btn:last-child > .element-groups-custom:not(:last-child) > .btn {
  border-bottom-right-radius: 0;
  border-top-right-radius: 0;
}

.input-group-addon:first-child {
  border-right: 0;
}

.input-group .form-control:last-child,
.input-group-addon:last-child,
.input-group-btn:last-child > .btn,
.input-group-btn:last-child > .element-groups-custom > .btn,
.input-group-btn:last-child > .dropdown-toggle,
.input-group-btn:first-child > .btn:not(:first-child),
.input-group-btn:first-child > .element-groups-custom:not(:first-child) > .btn {
  border-bottom-left-radius: 0;
  border-top-left-radius: 0;
}

.input-group-addon:last-child {
  border-left: 0;
}

.input-group-btn {
  position: relative;
  font-size: 0;
  white-space: nowrap;
}

.input-group-btn > .btn {
  position: relative;
}

.input-group-btn > .btn + .btn {
  margin-left: -1px;
}

.input-group-btn > .btn:hover, .input-group-btn > .btn:focus, .input-group-btn > .btn:active {
  z-index: 2;
}

.input-group-btn:first-child > .btn,
.input-group-btn:first-child > .element-groups-custom {
  margin-right: -1px;
}

.input-group-btn:last-child > .btn,
.input-group-btn:last-child > .element-groups-custom {
  z-index: 2;
  margin-left: -1px;
}

/** 1.14 Navs */
.nav {
  margin-bottom: 0;
  padding-left: 0;
  list-style: none;
}

.nav:before, .nav:after {
  content: " ";
  display: table;
}

.nav:after {
  clear: both;
}

.nav > li {
  position: relative;
  display: block;
}

.nav > li > a {
  position: relative;
  display: block;
  padding: 10px 18px;
}

.nav > li > a:hover, .nav > li > a:focus {
  text-decoration: none;
  background-color: #f9f9f9;
}

.nav > li.disabled > a {
  color: #b7b7b7;
}

.nav > li.disabled > a:hover, .nav > li.disabled > a:focus {
  color: #b7b7b7;
  text-decoration: none;
  background-color: transparent;
  cursor: not-allowed;
}

.nav .open > a, .nav .open > a:hover, .nav .open > a:focus {
  background-color: #f9f9f9;
  border-color: inherit;
}

.nav .nav-divider {
  height: 1px;
  margin: 11px 0;
  overflow: hidden;
  background-color: #e5e5e5;
}

.nav > li > a > img {
  max-width: none;
}

.nav-tabs {
  border-bottom: 1px solid #b7b7b7;
}

.nav-tabs > li {
  float: left;
  margin-bottom: -1px;
}

.nav-tabs > li > a {
  margin-right: 2px;
  line-height: 1.5;
  border: 1px solid transparent;
  border-radius: 5px 5px 0 0;
}

.nav-tabs > li > a:hover {
  border-color: #f9f9f9 #f9f9f9 #b7b7b7;
}

.nav-tabs > li.active > a, .nav-tabs > li.active > a:hover, .nav-tabs > li.active > a:focus {
  color: #434345;
  background-color: #fff;
  border: 1px solid #b7b7b7;
  border-bottom-color: transparent;
  cursor: default;
}

.nav-pills > li {
  float: left;
}

.nav-pills > li > a {
  border-radius: 4px;
}

.nav-pills > li + li {
  margin-left: 2px;
}

.nav-pills > li.active > a, .nav-pills > li.active > a:hover, .nav-pills > li.active > a:focus {
  color: #fff;
  background-color: #FF304D;
}

.nav-stacked > li {
  float: none;
}

.nav-stacked > li + li {
  margin-top: 2px;
  margin-left: 0;
}

.nav-justified, .nav-tabs.nav-justified {
  width: 100%;
}

.nav-justified > li, .nav-tabs.nav-justified > li {
  float: none;
}

.nav-justified > li > a, .nav-tabs.nav-justified > li > a {
  text-align: center;
  margin-bottom: 5px;
}

.nav-justified > .dropdown .dropdown-menu {
  top: auto;
  left: auto;
}

@media (min-width: 768px) {
  .nav-justified > li, .nav-tabs.nav-justified > li {
    display: table-cell;
    width: 1%;
  }
  .nav-justified > li > a, .nav-tabs.nav-justified > li > a {
    margin-bottom: 0;
  }
}

.nav-tabs-justified, .nav-tabs.nav-justified {
  border-bottom: 0;
}

.nav-tabs-justified > li > a, .nav-tabs.nav-justified > li > a {
  margin-right: 0;
  border-radius: 5px;
}

.nav-tabs-justified > .active > a, .nav-tabs.nav-justified > .active > a,
.nav-tabs-justified > .active > a:hover, .nav-tabs.nav-justified > .active > a:hover,
.nav-tabs-justified > .active > a:focus, .nav-tabs.nav-justified > .active > a:focus {
  border: 1px solid #b7b7b7;
}

@media (min-width: 768px) {
  .nav-tabs-justified > li > a, .nav-tabs.nav-justified > li > a {
    border-bottom: 1px solid #b7b7b7;
    border-radius: 5px 5px 0 0;
  }
  .nav-tabs-justified > .active > a, .nav-tabs.nav-justified > .active > a,
  .nav-tabs-justified > .active > a:hover, .nav-tabs.nav-justified > .active > a:hover,
  .nav-tabs-justified > .active > a:focus, .nav-tabs.nav-justified > .active > a:focus {
    border-bottom-color: #fff;
  }
}

.tab-content > .tab-pane {
  display: none;
}

.tab-content > .active {
  display: block;
}

.nav-tabs .dropdown-menu {
  margin-top: -1px;
  border-top-right-radius: 0;
  border-top-left-radius: 0;
}

/** 1.15 Navbar */
.navbar {
  position: relative;
  min-height: 52px;
  margin-bottom: 24px;
  border: 1px solid transparent;
}

.navbar:before, .navbar:after {
  content: " ";
  display: table;
}

.navbar:after {
  clear: both;
}

@media (min-width: 768px) {
  .navbar {
    border-radius: 5px;
  }
}

.navbar-header:before, .navbar-header:after {
  content: " ";
  display: table;
}

.navbar-header:after {
  clear: both;
}

@media (min-width: 768px) {
  .navbar-header {
    float: left;
  }
}

.navbar-collapse {
  overflow-x: visible;
  padding-right: 15px;
  padding-left: 15px;
  border-top: 1px solid transparent;
  box-shadow: inset 0 1px 0 rgba(255, 255, 255, 0.1);
  -webkit-overflow-scrolling: touch;
}

.navbar-collapse:before, .navbar-collapse:after {
  content: " ";
  display: table;
}

.navbar-collapse:after {
  clear: both;
}

.navbar-collapse.in {
  overflow-y: auto;
}

@media (min-width: 768px) {
  .navbar-collapse {
    width: auto;
    border-top: 0;
    box-shadow: none;
  }
  .navbar-collapse.collapse {
    display: block !important;
    height: auto !important;
    padding-bottom: 0;
    overflow: visible !important;
  }
  .navbar-collapse.in {
    overflow-y: visible;
  }
  .navbar-fixed-top .navbar-collapse,
  .navbar-static-top .navbar-collapse,
  .navbar-fixed-bottom .navbar-collapse {
    padding-left: 0;
    padding-right: 0;
  }
}

.navbar-fixed-top .navbar-collapse,
.navbar-fixed-bottom .navbar-collapse {
  max-height: 340px;
}

@media (max-device-width: 480px) and (orientation: landscape) {
  .navbar-fixed-top .navbar-collapse,
  .navbar-fixed-bottom .navbar-collapse {
    max-height: 200px;
  }
}

.container > .navbar-header,
.container > .navbar-collapse,
.container-fluid > .navbar-header,
.container-fluid > .navbar-collapse {
  margin-right: -15px;
  margin-left: -15px;
}

@media (min-width: 768px) {
  .container > .navbar-header,
  .container > .navbar-collapse,
  .container-fluid > .navbar-header,
  .container-fluid > .navbar-collapse {
    margin-right: 0;
    margin-left: 0;
  }
}

.navbar-static-top {
  z-index: 1000;
  border-width: 0 0 1px;
}

@media (min-width: 768px) {
  .navbar-static-top {
    border-radius: 0;
  }
}

.navbar-fixed-top,
.navbar-fixed-bottom {
  position: fixed;
  right: 0;
  left: 0;
  z-index: 1030;
}

@media (min-width: 768px) {
  .navbar-fixed-top,
  .navbar-fixed-bottom {
    border-radius: 0;
  }
}

.navbar-fixed-top {
  top: 0;
  border-width: 0 0 1px;
}

.navbar-fixed-bottom {
  bottom: 0;
  margin-bottom: 0;
  border-width: 1px 0 0;
}

.navbar-brand {
  float: left;
  padding: 14px 15px;
  font-size: 17px;
  line-height: 24px;
  height: 52px;
}

.navbar-brand:hover, .navbar-brand:focus {
  text-decoration: none;
}

.navbar-brand > img {
  display: block;
}

@media (min-width: 768px) {
  .navbar > .container .navbar-brand,
  .navbar > .container-fluid .navbar-brand {
    margin-left: -15px;
  }
}

.navbar-toggle {
  position: relative;
  float: right;
  margin-right: 15px;
  padding: 9px 10px;
  margin-top: 9px;
  margin-bottom: 9px;
  background-color: transparent;
  background-image: none;
  border: 1px solid transparent;
  border-radius: 5px;
}

.navbar-toggle:focus {
  outline: 0;
}

.navbar-toggle .icon-bar {
  display: block;
  width: 22px;
  height: 2px;
  border-radius: 1px;
}

.navbar-toggle .icon-bar + .icon-bar {
  margin-top: 4px;
}

@media (min-width: 768px) {
  .navbar-toggle {
    display: none;
  }
}

.navbar-nav {
  margin: 7px -15px;
}

.navbar-nav > li > a {
  padding-top: 10px;
  padding-bottom: 10px;
  line-height: 24px;
}

@media (max-width: 767px) {
  .navbar-nav .open .dropdown-menu {
    position: static;
    float: none;
    width: auto;
    margin-top: 0;
    background-color: transparent;
    border: 0;
    box-shadow: none;
  }
  .navbar-nav .open .dropdown-menu > li > a,
  .navbar-nav .open .dropdown-menu .dropdown-header {
    padding: 5px 15px 5px 25px;
  }
  .navbar-nav .open .dropdown-menu > li > a {
    line-height: 24px;
  }
  .navbar-nav .open .dropdown-menu > li > a:hover, .navbar-nav .open .dropdown-menu > li > a:focus {
    background-image: none;
  }
}

@media (min-width: 768px) {
  .navbar-nav {
    float: left;
    margin: 0;
  }
  .navbar-nav > li {
    float: left;
  }
  .navbar-nav > li > a {
    padding-top: 14px;
    padding-bottom: 14px;
  }
}

.navbar-form {
  margin-left: -15px;
  margin-right: -15px;
  padding: 10px 15px;
  border-top: 1px solid transparent;
  border-bottom: 1px solid transparent;
  -webkit-box-shadow: inset 0 1px 0 rgba(255, 255, 255, 0.1), 0 1px 0 rgba(255, 255, 255, 0.1);
  box-shadow: inset 0 1px 0 rgba(255, 255, 255, 0.1), 0 1px 0 rgba(255, 255, 255, 0.1);
  margin-top: -1px;
  margin-bottom: -1px;
}

@media (min-width: 768px) {
  .navbar-form .form-group {
    display: inline-block;
    margin-bottom: 0;
    vertical-align: middle;
  }
  .navbar-form .form-control {
    display: inline-block;
    width: auto;
    vertical-align: middle;
  }
  .navbar-form .form-control-static {
    display: inline-block;
  }
  .navbar-form .input-group {
    display: inline-table;
    vertical-align: middle;
  }
  .navbar-form .input-group .input-group-addon,
  .navbar-form .input-group .input-group-btn,
  .navbar-form .input-group .form-control {
    width: auto;
  }
  .navbar-form .input-group > .form-control {
    width: 100%;
  }
  .navbar-form .control-label {
    margin-bottom: 0;
    vertical-align: middle;
  }
  .navbar-form .radio,
  .navbar-form .checkbox {
    display: inline-block;
    margin-top: 0;
    margin-bottom: 0;
    vertical-align: middle;
  }
  .navbar-form .radio label,
  .navbar-form .checkbox label {
    padding-left: 0;
  }
  .navbar-form .radio input[type="radio"],
  .navbar-form .checkbox input[type="checkbox"] {
    position: relative;
    margin-left: 0;
  }
  .navbar-form .has-feedback .form-control-feedback {
    top: 0;
  }
}

@media (max-width: 767px) {
  .navbar-form .form-group {
    margin-bottom: 5px;
  }
  .navbar-form .form-group:last-child {
    margin-bottom: 0;
  }
}

@media (min-width: 768px) {
  .navbar-form {
    width: auto;
    border: 0;
    margin-left: 0;
    margin-right: 0;
    padding-top: 0;
    padding-bottom: 0;
    -webkit-box-shadow: none;
    box-shadow: none;
  }
}

.navbar-nav > li > .dropdown-menu {
  margin-top: 0;
  border-top-right-radius: 0;
  border-top-left-radius: 0;
}

.navbar-fixed-bottom .navbar-nav > li > .dropdown-menu {
  margin-bottom: 0;
  border-top-right-radius: 5px;
  border-top-left-radius: 5px;
  border-bottom-right-radius: 0;
  border-bottom-left-radius: 0;
}

.navbar-btn {
  margin-top: -1px;
  margin-bottom: -1px;
}

.navbar-btn.btn-sm, .btn-group-sm > .navbar-btn.btn {
  margin-top: -2px;
  margin-bottom: -2px;
}

.navbar-btn.btn-xs, .btn-group-xs > .navbar-btn.btn {
  margin-top: 15px;
  margin-bottom: 15px;
}

.navbar-text {
  margin-top: 14px;
  margin-bottom: 14px;
}

@media (min-width: 768px) {
  .navbar-text {
    float: left;
    margin-left: 15px;
    margin-right: 15px;
  }
}

@media (min-width: 768px) {
  .navbar-left {
    float: left !important;
  }
  .navbar-right {
    float: right !important;
    margin-right: -15px;
  }
  .navbar-right ~ .navbar-right {
    margin-right: 0;
  }
}

.navbar-default {
  background-color: #fff;
  border-color: #e7e7e7;
}

.navbar-default .navbar-brand {
  color: #434345;
}

.navbar-default .navbar-brand:hover, .navbar-default .navbar-brand:focus {
  color: #2a2a2b;
  background-color: transparent;
}

.navbar-default .navbar-text {
  color: #434345;
}

.navbar-default .navbar-nav > li > a {
  color: #434345;
}

.navbar-default .navbar-nav > li > a:hover, .navbar-default .navbar-nav > li > a:focus {
  color: #434345;
  background-color: #f5f5f5;
}

.navbar-default .navbar-nav > .active > a, .navbar-default .navbar-nav > .active > a:hover, .navbar-default .navbar-nav > .active > a:focus {
  color: #fff;
  background-color: #FF304D;
}

.navbar-default .navbar-nav > .disabled > a, .navbar-default .navbar-nav > .disabled > a:hover, .navbar-default .navbar-nav > .disabled > a:focus {
  color: #b7b7b7;
  background-color: transparent;
}

.navbar-default .navbar-toggle {
  border-color: #ddd;
}

.navbar-default .navbar-toggle:hover, .navbar-default .navbar-toggle:focus {
  background-color: #ddd;
}

.navbar-default .navbar-toggle .icon-bar {
  background-color: #888;
}

.navbar-default .navbar-collapse,
.navbar-default .navbar-form {
  border-color: #e7e7e7;
}

.navbar-default .navbar-nav > .open > a, .navbar-default .navbar-nav > .open > a:hover, .navbar-default .navbar-nav > .open > a:focus {
  background-color: #FF304D;
  color: #fff;
}

@media (max-width: 767px) {
  .navbar-default .navbar-nav .open .dropdown-menu > li > a {
    color: #434345;
  }
  .navbar-default .navbar-nav .open .dropdown-menu > li > a:hover, .navbar-default .navbar-nav .open .dropdown-menu > li > a:focus {
    color: #434345;
    background-color: #f5f5f5;
  }
  .navbar-default .navbar-nav .open .dropdown-menu > .active > a, .navbar-default .navbar-nav .open .dropdown-menu > .active > a:hover, .navbar-default .navbar-nav .open .dropdown-menu > .active > a:focus {
    color: #fff;
    background-color: #FF304D;
  }
  .navbar-default .navbar-nav .open .dropdown-menu > .disabled > a, .navbar-default .navbar-nav .open .dropdown-menu > .disabled > a:hover, .navbar-default .navbar-nav .open .dropdown-menu > .disabled > a:focus {
    color: #b7b7b7;
    background-color: transparent;
  }
}

.navbar-default .navbar-link {
  color: #434345;
}

.navbar-default .navbar-link:hover {
  color: #434345;
}

.navbar-default .btn-link {
  color: #434345;
}

.navbar-default .btn-link:hover, .navbar-default .btn-link:focus {
  color: #434345;
}

.navbar-default .btn-link[disabled]:hover, .navbar-default .btn-link[disabled]:focus,
fieldset[disabled] .navbar-default .btn-link:hover,
fieldset[disabled] .navbar-default .btn-link:focus {
  color: #b7b7b7;
}

.navbar-inverse {
  background-color: #212121;
  border-color: #090909;
}

.navbar-inverse .navbar-brand {
  color: #fff;
}

.navbar-inverse .navbar-brand:hover, .navbar-inverse .navbar-brand:focus {
  color: #fff;
  background-color: transparent;
}

.navbar-inverse .navbar-text {
  color: #434345;
}

.navbar-inverse .navbar-nav > li > a {
  color: #fff;
}

.navbar-inverse .navbar-nav > li > a:hover, .navbar-inverse .navbar-nav > li > a:focus {
  color: #fff;
  background-color: #000000;
}

.navbar-inverse .navbar-nav > .active > a, .navbar-inverse .navbar-nav > .active > a:hover, .navbar-inverse .navbar-nav > .active > a:focus {
  color: #fff;
  background-color: #FF304D;
}

.navbar-inverse .navbar-nav > .disabled > a, .navbar-inverse .navbar-nav > .disabled > a:hover, .navbar-inverse .navbar-nav > .disabled > a:focus {
  color: #434345;
  background-color: transparent;
}

.navbar-inverse .navbar-toggle {
  border-color: #333;
}

.navbar-inverse .navbar-toggle:hover, .navbar-inverse .navbar-toggle:focus {
  background-color: #333;
}

.navbar-inverse .navbar-toggle .icon-bar {
  background-color: #fff;
}

.navbar-inverse .navbar-collapse,
.navbar-inverse .navbar-form {
  border-color: #0f0f0f;
}

.navbar-inverse .navbar-nav > .open > a, .navbar-inverse .navbar-nav > .open > a:hover, .navbar-inverse .navbar-nav > .open > a:focus {
  background-color: #FF304D;
  color: #fff;
}

@media (max-width: 767px) {
  .navbar-inverse .navbar-nav .open .dropdown-menu > .dropdown-header {
    border-color: #090909;
  }
  .navbar-inverse .navbar-nav .open .dropdown-menu .divider {
    background-color: #090909;
  }
  .navbar-inverse .navbar-nav .open .dropdown-menu > li > a {
    color: #fff;
  }
  .navbar-inverse .navbar-nav .open .dropdown-menu > li > a:hover, .navbar-inverse .navbar-nav .open .dropdown-menu > li > a:focus {
    color: #fff;
    background-color: #000000;
  }
  .navbar-inverse .navbar-nav .open .dropdown-menu > .active > a, .navbar-inverse .navbar-nav .open .dropdown-menu > .active > a:hover, .navbar-inverse .navbar-nav .open .dropdown-menu > .active > a:focus {
    color: #fff;
    background-color: #FF304D;
  }
  .navbar-inverse .navbar-nav .open .dropdown-menu > .disabled > a, .navbar-inverse .navbar-nav .open .dropdown-menu > .disabled > a:hover, .navbar-inverse .navbar-nav .open .dropdown-menu > .disabled > a:focus {
    color: #434345;
    background-color: transparent;
  }
}

.navbar-inverse .navbar-link {
  color: #fff;
}

.navbar-inverse .navbar-link:hover {
  color: #fff;
}

.navbar-inverse .btn-link {
  color: #fff;
}

.navbar-inverse .btn-link:hover, .navbar-inverse .btn-link:focus {
  color: #fff;
}

.navbar-inverse .btn-link[disabled]:hover, .navbar-inverse .btn-link[disabled]:focus,
fieldset[disabled] .navbar-inverse .btn-link:hover,
fieldset[disabled] .navbar-inverse .btn-link:focus {
  color: #434345;
}

/** 1.16 Breadcrumbs */
.breadcrumb {
  padding: 8px 15px;
  margin-bottom: 24px;
  list-style: none;
  background-color: #f5f5f5;
  border-radius: 5px;
}

.breadcrumb > li {
  display: inline-block;
}

.breadcrumb > li + li:before {
  content: "/ ";
  padding: 0 5px;
  color: #ccc;
}

.breadcrumb > .active {
  color: #777777;
}

/** 1.17 Pagination */
.pagination {
  display: inline-block;
  padding-left: 0;
  margin: 24px 0;
  border-radius: 5px;
}

.pagination > li {
  display: inline;
}

.pagination > li > a,
.pagination > li > span {
  position: relative;
  float: left;
  padding: 18px 38px;
  line-height: 1.5;
  text-decoration: none;
  color: #434345;
  background-color: transparent;
  border: 1px solid #b7b7b7;
  margin-left: -1px;
}

.pagination > li:first-child > a,
.pagination > li:first-child > span {
  margin-left: 0;
  border-bottom-left-radius: 5px;
  border-top-left-radius: 5px;
}

.pagination > li:last-child > a,
.pagination > li:last-child > span {
  border-bottom-right-radius: 5px;
  border-top-right-radius: 5px;
}

.pagination > li > a:hover, .pagination > li > a:focus, .pagination > li > a:active, .pagination > li > a:active:focus,
.pagination > li > span:hover,
.pagination > li > span:focus,
.pagination > li > span:active,
.pagination > li > span:active:focus {
  z-index: 2;
  color: #fff;
  background-color: #212121;
  border-color: #212121;
}

.pagination > .active > a, .pagination > .active > a:hover, .pagination > .active > a:focus, .pagination > .active > a:active, .pagination > .active > a:active:focus,
.pagination > .active > span,
.pagination > .active > span:hover,
.pagination > .active > span:focus,
.pagination > .active > span:active,
.pagination > .active > span:active:focus {
  z-index: 3;
  color: #fff;
  background-color: #FF304D;
  border-color: #FF304D;
  cursor: default;
}

.pagination > .disabled > span,
.pagination > .disabled > span:hover,
.pagination > .disabled > span:focus,
.pagination > .disabled > a,
.pagination > .disabled > a:hover,
.pagination > .disabled > a:focus {
  color: #b7b7b7;
  background-color: transparent;
  border-color: #b7b7b7;
  cursor: not-allowed;
}

.pagination-lg > li > a,
.pagination-lg > li > span {
  padding: 21px 43px;
  font-size: 17px;
  line-height: 1.33333;
}

.pagination-lg > li:first-child > a,
.pagination-lg > li:first-child > span {
  border-bottom-left-radius: 10px;
  border-top-left-radius: 10px;
}

.pagination-lg > li:last-child > a,
.pagination-lg > li:last-child > span {
  border-bottom-right-radius: 10px;
  border-top-right-radius: 10px;
}

.pagination-sm > li > a,
.pagination-sm > li > span {
  padding: 14px 36px;
  font-size: 15px;
  line-height: 1.5;
}

.pagination-sm > li:first-child > a,
.pagination-sm > li:first-child > span {
  border-bottom-left-radius: 4px;
  border-top-left-radius: 4px;
}

.pagination-sm > li:last-child > a,
.pagination-sm > li:last-child > span {
  border-bottom-right-radius: 4px;
  border-top-right-radius: 4px;
}

/** 1.18 Pager */
.pager {
  padding-left: 0;
  margin: 24px 0;
  list-style: none;
  text-align: center;
}

.pager:before, .pager:after {
  content: " ";
  display: table;
}

.pager:after {
  clear: both;
}

.pager li {
  display: inline;
}

.pager li > a,
.pager li > span {
  display: inline-block;
  padding: 5px 14px;
  background-color: transparent;
  border: 1px solid #b7b7b7;
  border-radius: 4px;
}

.pager li > a:hover,
.pager li > a:focus,
.pager li > a:active,
.pager li > a:active:focus {
  text-decoration: none;
  background-color: #212121;
}

.pager .next > a,
.pager .next > span {
  float: right;
}

.pager .previous > a,
.pager .previous > span {
  float: left;
}

.pager .disabled > a,
.pager .disabled > a:hover,
.pager .disabled > a:focus,
.pager .disabled > span {
  color: #b7b7b7;
  background-color: transparent;
  cursor: not-allowed;
}

/** 1.19 Labels */
.label {
  display: inline;
  padding: .2em .6em .3em;
  font-size: 75%;
  font-weight: bold;
  line-height: 1;
  color: #fff;
  text-align: center;
  white-space: nowrap;
  vertical-align: baseline;
  border-radius: .25em;
}

.label:empty {
  display: none;
}

.btn .label {
  position: relative;
  top: -1px;
}

a.label:hover, a.label:focus {
  color: #fff;
  text-decoration: none;
  cursor: pointer;
}

.label-default {
  background-color: #b7b7b7;
}

.label-default[href]:hover, .label-default[href]:focus {
  background-color: #c4c4c4;
}

.label-primary {
  background-color: #FF304D;
}

.label-primary[href]:hover, .label-primary[href]:focus {
  background-color: #55c0f1;
}

.label-success {
  background-color: #abcc37;
}

.label-success[href]:hover, .label-success[href]:focus {
  background-color: #b4d14b;
}

.label-info {
  background-color: #79ccf2;
}

.label-info[href]:hover, .label-info[href]:focus {
  background-color: #90d5f4;
}

.label-warning {
  background-color: #00B7FF;
}

.label-warning[href]:hover, .label-warning[href]:focus {
  background-color: #f6c647;
}

.label-danger {
  background-color: #f54b0f;
}

.label-danger[href]:hover, .label-danger[href]:focus {
  background-color: #f65d27;
}

/** 1.20 Badges */
.badge {
  display: inline-block;
  min-width: 10px;
  padding: 3px 7px;
  font-size: 15px;
  font-weight: bold;
  color: #fff;
  line-height: 1;
  vertical-align: middle;
  white-space: nowrap;
  text-align: center;
  background-color: #FF304D;
  border-radius: 10px;
}

.badge:empty {
  display: none;
}

.btn .badge {
  position: relative;
  top: -1px;
}

.btn-xs .badge, .btn-group-xs > .btn .badge,
.element-groups-xs-custom > .btn .badge {
  top: 0;
  padding: 1px 5px;
}

.list-group-item.active > .badge,
.nav-pills > .active > a > .badge {
  color: #FF304D;
  background-color: #fff;
}

.list-group-item > .badge {
  float: right;
}

.list-group-item > .badge + .badge {
  margin-right: 5px;
}

.nav-pills > li > a > .badge {
  margin-left: 3px;
}

a.badge:hover, a.badge:focus {
  color: #fff;
  text-decoration: none;
  cursor: pointer;
}

/** 1.21 Jumbotron */
.jumbotron {
  padding-top: 38px;
  padding-bottom: 38px;
  margin-bottom: 38px;
  color: inherit;
  background-color: #212121;
}

.jumbotron h1,
.jumbotron .h1 {
  color: inherit;
}

.jumbotron p {
  margin-bottom: 19px;
  font-size: 16px;
  font-weight: 200;
}

.jumbotron > hr {
  border-top-color: #080808;
}

.container .jumbotron,
.container-fluid .jumbotron {
  border-radius: 10px;
  padding-left: 15px;
  padding-right: 15px;
}

.jumbotron .container {
  max-width: 100%;
}

@media screen and (min-width: 768px) {
  .jumbotron {
    padding-top: 60.8px;
    padding-bottom: 60.8px;
  }
  .container .jumbotron,
  .container-fluid .jumbotron {
    padding-left: 76px;
    padding-right: 76px;
  }
  .jumbotron h1,
  .jumbotron .h1 {
    font-size: 72px;
  }
}

/** 1.22 Thumbnails */
.thumbnail {
  display: block;
  padding: 0;
  margin-bottom: 24px;
  line-height: 1.5;
  background-color: #000000;
  border: 1px solid #ddd;
  border-radius: 5px;
  -webkit-transition: border 0.2s ease-in-out;
  -o-transition: border 0.2s ease-in-out;
  transition: border 0.2s ease-in-out;
}

.thumbnail > img,
.thumbnail a > img {
  display: block;
  max-width: 100%;
  height: auto;
  margin-left: auto;
  margin-right: auto;
}

.thumbnail .caption {
  padding: 20px;
  color: #000000;
}

a.thumbnail:hover,
a.thumbnail:focus,
a.thumbnail.active {
  border-color: inherit;
}

/** 1.23 Alerts */
.alert {
  padding: 12px 15px;
  margin-bottom: 24px;
  border: 1px solid transparent;
  border-radius: 5px;
}

.alert h4 {
  margin-top: 0;
  color: inherit;
}

.alert .alert-link {
  font-weight: bold;
}

.alert > p,
.alert > ul {
  margin-bottom: 0;
}

.alert > p + p {
  margin-top: 5px;
}

.alert-dismissable,
.alert-dismissible {
  padding-right: 12px 15px20;
}

.alert-dismissable .close,
.alert-dismissible .close {
  position: relative;
  top: -2px;
  right: -21px;
  color: inherit;
}

.alert-success {
  background-color: #abcc37;
  border-color: #abcc37;
  color: #abcc37;
}

.alert-success hr {
  border-top-color: #9bba2f;
}

.alert-success .alert-link {
  color: #8aa62a;
}

.alert-info {
  background-color: #79ccf2;
  border-color: #79ccf2;
  color: #79ccf2;
}

.alert-info hr {
  border-top-color: #62c3f0;
}

.alert-info .alert-link {
  color: #4bbaed;
}

.alert-warning {
  background-color: #00B7FF;
  border-color: #00B7FF;
  color: #00B7FF;
}

.alert-warning hr {
  border-top-color: #f4b817;
}

.alert-warning .alert-link {
  color: #e6aa0b;
}

.alert-danger {
  background-color: #f54b0f;
  border-color: #f54b0f;
  color: #f54b0f;
}

.alert-danger hr {
  border-top-color: #e14209;
}

.alert-danger .alert-link {
  color: #c93b08;
}

/** 1.24 Progress bars */
@-webkit-keyframes progress-bar-stripes {
  from {
    background-position: 40px 0;
  }
  to {
    background-position: 0 0;
  }
}

@keyframes progress-bar-stripes {
  from {
    background-position: 40px 0;
  }
  to {
    background-position: 0 0;
  }
}

.progress {
  overflow: hidden;
  height: 24px;
  margin-bottom: 24px;
  background-color: #f5f5f5;
  border-radius: 5px;
  -webkit-box-shadow: inset 0 1px 2px rgba(0, 0, 0, 0.1);
  box-shadow: inset 0 1px 2px rgba(0, 0, 0, 0.1);
}

.progress-bar {
  float: left;
  width: 0;
  height: 100%;
  font-size: 15px;
  line-height: 24px;
  color: #fff;
  text-align: center;
  background-color: #FF304D;
  -webkit-box-shadow: inset 0 -1px 0 rgba(0, 0, 0, 0.15);
  box-shadow: inset 0 -1px 0 rgba(0, 0, 0, 0.15);
  -webkit-transition: width 0.6s ease;
  -o-transition: width 0.6s ease;
  transition: width 0.6s ease;
}

.progress-striped .progress-bar,
.progress-bar-striped {
  background-image: -webkit-linear-gradient(45deg, rgba(255, 255, 255, 0.15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, 0.15) 50%, rgba(255, 255, 255, 0.15) 75%, transparent 75%, transparent);
  background-image: -o-linear-gradient(45deg, rgba(255, 255, 255, 0.15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, 0.15) 50%, rgba(255, 255, 255, 0.15) 75%, transparent 75%, transparent);
  background-image: linear-gradient(45deg, rgba(255, 255, 255, 0.15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, 0.15) 50%, rgba(255, 255, 255, 0.15) 75%, transparent 75%, transparent);
  background-size: 40px 40px;
}

.progress.active .progress-bar,
.progress-bar.active {
  -webkit-animation: progress-bar-stripes 2s linear infinite;
  -o-animation: progress-bar-stripes 2s linear infinite;
  animation: progress-bar-stripes 2s linear infinite;
}

.progress-bar-success {
  background-color: #abcc37;
}

.progress-striped .progress-bar-success {
  background-image: -webkit-linear-gradient(45deg, rgba(255, 255, 255, 0.15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, 0.15) 50%, rgba(255, 255, 255, 0.15) 75%, transparent 75%, transparent);
  background-image: -o-linear-gradient(45deg, rgba(255, 255, 255, 0.15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, 0.15) 50%, rgba(255, 255, 255, 0.15) 75%, transparent 75%, transparent);
  background-image: linear-gradient(45deg, rgba(255, 255, 255, 0.15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, 0.15) 50%, rgba(255, 255, 255, 0.15) 75%, transparent 75%, transparent);
}

.progress-bar-info {
  background-color: #79ccf2;
}

.progress-striped .progress-bar-info {
  background-image: -webkit-linear-gradient(45deg, rgba(255, 255, 255, 0.15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, 0.15) 50%, rgba(255, 255, 255, 0.15) 75%, transparent 75%, transparent);
  background-image: -o-linear-gradient(45deg, rgba(255, 255, 255, 0.15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, 0.15) 50%, rgba(255, 255, 255, 0.15) 75%, transparent 75%, transparent);
  background-image: linear-gradient(45deg, rgba(255, 255, 255, 0.15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, 0.15) 50%, rgba(255, 255, 255, 0.15) 75%, transparent 75%, transparent);
}

.progress-bar-warning {
  background-color: #00B7FF;
}

.progress-striped .progress-bar-warning {
  background-image: -webkit-linear-gradient(45deg, rgba(255, 255, 255, 0.15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, 0.15) 50%, rgba(255, 255, 255, 0.15) 75%, transparent 75%, transparent);
  background-image: -o-linear-gradient(45deg, rgba(255, 255, 255, 0.15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, 0.15) 50%, rgba(255, 255, 255, 0.15) 75%, transparent 75%, transparent);
  background-image: linear-gradient(45deg, rgba(255, 255, 255, 0.15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, 0.15) 50%, rgba(255, 255, 255, 0.15) 75%, transparent 75%, transparent);
}

.progress-bar-danger {
  background-color: #f54b0f;
}

.progress-striped .progress-bar-danger {
  background-image: -webkit-linear-gradient(45deg, rgba(255, 255, 255, 0.15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, 0.15) 50%, rgba(255, 255, 255, 0.15) 75%, transparent 75%, transparent);
  background-image: -o-linear-gradient(45deg, rgba(255, 255, 255, 0.15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, 0.15) 50%, rgba(255, 255, 255, 0.15) 75%, transparent 75%, transparent);
  background-image: linear-gradient(45deg, rgba(255, 255, 255, 0.15) 25%, transparent 25%, transparent 50%, rgba(255, 255, 255, 0.15) 50%, rgba(255, 255, 255, 0.15) 75%, transparent 75%, transparent);
}

/** 1.25 Media */
.media {
  margin-top: 15px;
}

.media:first-child {
  margin-top: 0;
}

.media,
.media-body {
  zoom: 1;
  overflow: hidden;
}

.media-body {
  width: 10000px;
}

.media-object {
  display: block;
}

.media-object.img-thumbnail {
  max-width: none;
}

.media-right,
.media > .pull-right {
  padding-left: 10px;
}

.media-left,
.media > .pull-left {
  padding-right: 10px;
}

.media-left,
.media-right,
.media-body {
  display: table-cell;
  vertical-align: top;
}

.media-middle {
  vertical-align: middle;
}

.media-bottom {
  vertical-align: bottom;
}

.media-heading {
  margin-top: 0;
  margin-bottom: 5px;
}

.media-list {
  padding-left: 0;
  list-style: none;
}

/** 1.26 List Group */
.list-group {
  margin-bottom: 20px;
  padding-left: 0;
}

.list-group-item {
  position: relative;
  display: block;
  padding: 10px 15px;
  margin-bottom: -1px;
  background-color: #fff;
  border: 1px solid #b7b7b7;
}

.list-group-item:first-child {
  border-top-right-radius: 4px;
  border-top-left-radius: 4px;
}

.list-group-item:last-child {
  margin-bottom: 0;
  border-bottom-right-radius: 4px;
  border-bottom-left-radius: 4px;
}

a.list-group-item,
button.list-group-item {
  color: #555;
}

a.list-group-item .list-group-item-heading,
button.list-group-item .list-group-item-heading {
  color: #333;
}

a.list-group-item:hover, a.list-group-item:focus,
button.list-group-item:hover,
button.list-group-item:focus {
  text-decoration: none;
  color: #555;
  background-color: #f9f9f9;
}

button.list-group-item {
  width: 100%;
  text-align: left;
}

.list-group-item.disabled, .list-group-item.disabled:hover, .list-group-item.disabled:focus {
  background-color: #f5f5f5;
  color: #f2f2f2;
  cursor: not-allowed;
}

.list-group-item.disabled .list-group-item-heading, .list-group-item.disabled:hover .list-group-item-heading, .list-group-item.disabled:focus .list-group-item-heading {
  color: inherit;
}

.list-group-item.disabled .list-group-item-text, .list-group-item.disabled:hover .list-group-item-text, .list-group-item.disabled:focus .list-group-item-text {
  color: #f2f2f2;
}

.list-group-item.active, .list-group-item.active:hover, .list-group-item.active:focus {
  z-index: 2;
  color: #fff;
  background-color: #FF304D;
  border-color: #FF304D;
}

.list-group-item.active .list-group-item-heading,
.list-group-item.active .list-group-item-heading > small,
.list-group-item.active .list-group-item-heading > .small, .list-group-item.active:hover .list-group-item-heading,
.list-group-item.active:hover .list-group-item-heading > small,
.list-group-item.active:hover .list-group-item-heading > .small, .list-group-item.active:focus .list-group-item-heading,
.list-group-item.active:focus .list-group-item-heading > small,
.list-group-item.active:focus .list-group-item-heading > .small {
  color: inherit;
}

.list-group-item.active .list-group-item-text, .list-group-item.active:hover .list-group-item-text, .list-group-item.active:focus .list-group-item-text {
  color: #fff;
}

.list-group-item-success {
  color: #abcc37;
  background-color: #abcc37;
}

a.list-group-item-success,
button.list-group-item-success {
  color: #abcc37;
}

a.list-group-item-success .list-group-item-heading,
button.list-group-item-success .list-group-item-heading {
  color: inherit;
}

a.list-group-item-success:hover, a.list-group-item-success:focus,
button.list-group-item-success:hover,
button.list-group-item-success:focus {
  color: #abcc37;
  background-color: #9bba2f;
}

a.list-group-item-success.active, a.list-group-item-success.active:hover, a.list-group-item-success.active:focus,
button.list-group-item-success.active,
button.list-group-item-success.active:hover,
button.list-group-item-success.active:focus {
  color: #fff;
  background-color: #abcc37;
  border-color: #abcc37;
}

.list-group-item-info {
  color: #79ccf2;
  background-color: #79ccf2;
}

a.list-group-item-info,
button.list-group-item-info {
  color: #79ccf2;
}

a.list-group-item-info .list-group-item-heading,
button.list-group-item-info .list-group-item-heading {
  color: inherit;
}

a.list-group-item-info:hover, a.list-group-item-info:focus,
button.list-group-item-info:hover,
button.list-group-item-info:focus {
  color: #79ccf2;
  background-color: #62c3f0;
}

a.list-group-item-info.active, a.list-group-item-info.active:hover, a.list-group-item-info.active:focus,
button.list-group-item-info.active,
button.list-group-item-info.active:hover,
button.list-group-item-info.active:focus {
  color: #fff;
  background-color: #79ccf2;
  border-color: #79ccf2;
}

.list-group-item-warning {
  color: #00B7FF;
  background-color: #00B7FF;
}

a.list-group-item-warning,
button.list-group-item-warning {
  color: #00B7FF;
}

a.list-group-item-warning .list-group-item-heading,
button.list-group-item-warning .list-group-item-heading {
  color: inherit;
}

a.list-group-item-warning:hover, a.list-group-item-warning:focus,
button.list-group-item-warning:hover,
button.list-group-item-warning:focus {
  color: #00B7FF;
  background-color: #f4b817;
}

a.list-group-item-warning.active, a.list-group-item-warning.active:hover, a.list-group-item-warning.active:focus,
button.list-group-item-warning.active,
button.list-group-item-warning.active:hover,
button.list-group-item-warning.active:focus {
  color: #fff;
  background-color: #00B7FF;
  border-color: #00B7FF;
}

.list-group-item-danger {
  color: #f54b0f;
  background-color: #f54b0f;
}

a.list-group-item-danger,
button.list-group-item-danger {
  color: #f54b0f;
}

a.list-group-item-danger .list-group-item-heading,
button.list-group-item-danger .list-group-item-heading {
  color: inherit;
}

a.list-group-item-danger:hover, a.list-group-item-danger:focus,
button.list-group-item-danger:hover,
button.list-group-item-danger:focus {
  color: #f54b0f;
  background-color: #e14209;
}

a.list-group-item-danger.active, a.list-group-item-danger.active:hover, a.list-group-item-danger.active:focus,
button.list-group-item-danger.active,
button.list-group-item-danger.active:hover,
button.list-group-item-danger.active:focus {
  color: #fff;
  background-color: #f54b0f;
  border-color: #f54b0f;
}

.list-group-item-heading {
  margin-top: 0;
  margin-bottom: 5px;
}

.list-group-item-text {
  margin-bottom: 0;
  line-height: 1.3;
}

/** 1.27 Panels */
.panel {
  margin-bottom: 24px;
  background-color: #fff;
  border: 1px solid transparent;
  border-radius: 5px;
  -webkit-box-shadow: 0 1px 1px rgba(0, 0, 0, 0.05);
  box-shadow: 0 1px 1px rgba(0, 0, 0, 0.05);
}

.panel-body {
  padding: 15px;
}

.panel-body:before, .panel-body:after {
  content: " ";
  display: table;
}

.panel-body:after {
  clear: both;
}

.panel-heading {
  padding: 10px 15px;
  border-bottom: 1px solid transparent;
  border-top-right-radius: 4px;
  border-top-left-radius: 4px;
}

.panel-heading > .dropdown .dropdown-toggle {
  color: inherit;
}

.panel-title {
  margin-top: 0;
  margin-bottom: 0;
  font-size: 18px;
  color: inherit;
}

.panel-title > a,
.panel-title > small,
.panel-title > .small,
.panel-title > small > a,
.panel-title > .small > a {
  color: inherit;
}

.panel-footer {
  padding: 10px 15px;
  background-color: #f5f5f5;
  border-top: 1px solid #ddd;
  border-bottom-right-radius: 4px;
  border-bottom-left-radius: 4px;
}

.panel > .list-group,
.panel > .panel-collapse > .list-group {
  margin-bottom: 0;
}

.panel > .list-group .list-group-item,
.panel > .panel-collapse > .list-group .list-group-item {
  border-width: 1px 0;
  border-radius: 0;
}

.panel > .list-group:first-child .list-group-item:first-child,
.panel > .panel-collapse > .list-group:first-child .list-group-item:first-child {
  border-top: 0;
  border-top-right-radius: 4px;
  border-top-left-radius: 4px;
}

.panel > .list-group:last-child .list-group-item:last-child,
.panel > .panel-collapse > .list-group:last-child .list-group-item:last-child {
  border-bottom: 0;
  border-bottom-right-radius: 4px;
  border-bottom-left-radius: 4px;
}

.panel > .panel-heading + .panel-collapse > .list-group .list-group-item:first-child {
  border-top-right-radius: 0;
  border-top-left-radius: 0;
}

.panel-heading + .list-group .list-group-item:first-child {
  border-top-width: 0;
}

.list-group + .panel-footer {
  border-top-width: 0;
}

.panel > .table,
.panel > .table-responsive > .table,
.panel > .panel-collapse > .table {
  margin-bottom: 0;
}

.panel > .table caption,
.panel > .table-responsive > .table caption,
.panel > .panel-collapse > .table caption {
  padding-left: 15px;
  padding-right: 15px;
}

.panel > .table:first-child,
.panel > .table-responsive:first-child > .table:first-child {
  border-top-right-radius: 4px;
  border-top-left-radius: 4px;
}

.panel > .table:first-child > thead:first-child > tr:first-child,
.panel > .table:first-child > tbody:first-child > tr:first-child,
.panel > .table-responsive:first-child > .table:first-child > thead:first-child > tr:first-child,
.panel > .table-responsive:first-child > .table:first-child > tbody:first-child > tr:first-child {
  border-top-left-radius: 4px;
  border-top-right-radius: 4px;
}

.panel > .table:first-child > thead:first-child > tr:first-child td:first-child,
.panel > .table:first-child > thead:first-child > tr:first-child th:first-child,
.panel > .table:first-child > tbody:first-child > tr:first-child td:first-child,
.panel > .table:first-child > tbody:first-child > tr:first-child th:first-child,
.panel > .table-responsive:first-child > .table:first-child > thead:first-child > tr:first-child td:first-child,
.panel > .table-responsive:first-child > .table:first-child > thead:first-child > tr:first-child th:first-child,
.panel > .table-responsive:first-child > .table:first-child > tbody:first-child > tr:first-child td:first-child,
.panel > .table-responsive:first-child > .table:first-child > tbody:first-child > tr:first-child th:first-child {
  border-top-left-radius: 4px;
}

.panel > .table:first-child > thead:first-child > tr:first-child td:last-child,
.panel > .table:first-child > thead:first-child > tr:first-child th:last-child,
.panel > .table:first-child > tbody:first-child > tr:first-child td:last-child,
.panel > .table:first-child > tbody:first-child > tr:first-child th:last-child,
.panel > .table-responsive:first-child > .table:first-child > thead:first-child > tr:first-child td:last-child,
.panel > .table-responsive:first-child > .table:first-child > thead:first-child > tr:first-child th:last-child,
.panel > .table-responsive:first-child > .table:first-child > tbody:first-child > tr:first-child td:last-child,
.panel > .table-responsive:first-child > .table:first-child > tbody:first-child > tr:first-child th:last-child {
  border-top-right-radius: 4px;
}

.panel > .table:last-child,
.panel > .table-responsive:last-child > .table:last-child {
  border-bottom-right-radius: 4px;
  border-bottom-left-radius: 4px;
}

.panel > .table:last-child > tbody:last-child > tr:last-child,
.panel > .table:last-child > tfoot:last-child > tr:last-child,
.panel > .table-responsive:last-child > .table:last-child > tbody:last-child > tr:last-child,
.panel > .table-responsive:last-child > .table:last-child > tfoot:last-child > tr:last-child {
  border-bottom-left-radius: 4px;
  border-bottom-right-radius: 4px;
}

.panel > .table:last-child > tbody:last-child > tr:last-child td:first-child,
.panel > .table:last-child > tbody:last-child > tr:last-child th:first-child,
.panel > .table:last-child > tfoot:last-child > tr:last-child td:first-child,
.panel > .table:last-child > tfoot:last-child > tr:last-child th:first-child,
.panel > .table-responsive:last-child > .table:last-child > tbody:last-child > tr:last-child td:first-child,
.panel > .table-responsive:last-child > .table:last-child > tbody:last-child > tr:last-child th:first-child,
.panel > .table-responsive:last-child > .table:last-child > tfoot:last-child > tr:last-child td:first-child,
.panel > .table-responsive:last-child > .table:last-child > tfoot:last-child > tr:last-child th:first-child {
  border-bottom-left-radius: 4px;
}

.panel > .table:last-child > tbody:last-child > tr:last-child td:last-child,
.panel > .table:last-child > tbody:last-child > tr:last-child th:last-child,
.panel > .table:last-child > tfoot:last-child > tr:last-child td:last-child,
.panel > .table:last-child > tfoot:last-child > tr:last-child th:last-child,
.panel > .table-responsive:last-child > .table:last-child > tbody:last-child > tr:last-child td:last-child,
.panel > .table-responsive:last-child > .table:last-child > tbody:last-child > tr:last-child th:last-child,
.panel > .table-responsive:last-child > .table:last-child > tfoot:last-child > tr:last-child td:last-child,
.panel > .table-responsive:last-child > .table:last-child > tfoot:last-child > tr:last-child th:last-child {
  border-bottom-right-radius: 4px;
}

.panel > .panel-body + .table,
.panel > .panel-body + .table-responsive,
.panel > .table + .panel-body,
.panel > .table-responsive + .panel-body {
  border-top: 1px solid #ddd;
}

.panel > .table > tbody:first-child > tr:first-child th,
.panel > .table > tbody:first-child > tr:first-child td {
  border-top: 0;
}

.panel > .table-bordered,
.panel > .table-responsive > .table-bordered {
  border: 0;
}

.panel > .table-bordered > thead > tr > th:first-child,
.panel > .table-bordered > thead > tr > td:first-child,
.panel > .table-bordered > tbody > tr > th:first-child,
.panel > .table-bordered > tbody > tr > td:first-child,
.panel > .table-bordered > tfoot > tr > th:first-child,
.panel > .table-bordered > tfoot > tr > td:first-child,
.panel > .table-responsive > .table-bordered > thead > tr > th:first-child,
.panel > .table-responsive > .table-bordered > thead > tr > td:first-child,
.panel > .table-responsive > .table-bordered > tbody > tr > th:first-child,
.panel > .table-responsive > .table-bordered > tbody > tr > td:first-child,
.panel > .table-responsive > .table-bordered > tfoot > tr > th:first-child,
.panel > .table-responsive > .table-bordered > tfoot > tr > td:first-child {
  border-left: 0;
}

.panel > .table-bordered > thead > tr > th:last-child,
.panel > .table-bordered > thead > tr > td:last-child,
.panel > .table-bordered > tbody > tr > th:last-child,
.panel > .table-bordered > tbody > tr > td:last-child,
.panel > .table-bordered > tfoot > tr > th:last-child,
.panel > .table-bordered > tfoot > tr > td:last-child,
.panel > .table-responsive > .table-bordered > thead > tr > th:last-child,
.panel > .table-responsive > .table-bordered > thead > tr > td:last-child,
.panel > .table-responsive > .table-bordered > tbody > tr > th:last-child,
.panel > .table-responsive > .table-bordered > tbody > tr > td:last-child,
.panel > .table-responsive > .table-bordered > tfoot > tr > th:last-child,
.panel > .table-responsive > .table-bordered > tfoot > tr > td:last-child {
  border-right: 0;
}

.panel > .table-bordered > thead > tr:first-child > td,
.panel > .table-bordered > thead > tr:first-child > th,
.panel > .table-bordered > tbody > tr:first-child > td,
.panel > .table-bordered > tbody > tr:first-child > th,
.panel > .table-responsive > .table-bordered > thead > tr:first-child > td,
.panel > .table-responsive > .table-bordered > thead > tr:first-child > th,
.panel > .table-responsive > .table-bordered > tbody > tr:first-child > td,
.panel > .table-responsive > .table-bordered > tbody > tr:first-child > th {
  border-bottom: 0;
}

.panel > .table-bordered > tbody > tr:last-child > td,
.panel > .table-bordered > tbody > tr:last-child > th,
.panel > .table-bordered > tfoot > tr:last-child > td,
.panel > .table-bordered > tfoot > tr:last-child > th,
.panel > .table-responsive > .table-bordered > tbody > tr:last-child > td,
.panel > .table-responsive > .table-bordered > tbody > tr:last-child > th,
.panel > .table-responsive > .table-bordered > tfoot > tr:last-child > td,
.panel > .table-responsive > .table-bordered > tfoot > tr:last-child > th {
  border-bottom: 0;
}

.panel > .table-responsive {
  border: 0;
  margin-bottom: 0;
}

.panel-group {
  margin-bottom: 24px;
}

.panel-group .panel {
  margin-bottom: 0;
  border-radius: 5px;
}

.panel-group .panel + .panel {
  margin-top: 5px;
}

.panel-group .panel-heading {
  border-bottom: 0;
}

.panel-group .panel-heading + .panel-collapse > .panel-body,
.panel-group .panel-heading + .panel-collapse > .list-group {
  border-top: 1px solid #ddd;
}

.panel-group .panel-footer {
  border-top: 0;
}

.panel-group .panel-footer + .panel-collapse .panel-body {
  border-bottom: 1px solid #ddd;
}

.panel-default {
  border-color: #ddd;
}

.panel-default > .panel-heading {
  color: #434345;
  background-color: #f5f5f5;
  border-color: #ddd;
}

.panel-default > .panel-heading + .panel-collapse > .panel-body {
  border-top-color: #ddd;
}

.panel-default > .panel-heading .badge {
  color: #f5f5f5;
  background-color: #434345;
}

.panel-default > .panel-footer + .panel-collapse > .panel-body {
  border-bottom-color: #ddd;
}

.panel-primary {
  border-color: #FF304D;
}

.panel-primary > .panel-heading {
  color: #fff;
  background-color: #FF304D;
  border-color: #FF304D;
}

.panel-primary > .panel-heading + .panel-collapse > .panel-body {
  border-top-color: #FF304D;
}

.panel-primary > .panel-heading .badge {
  color: #FF304D;
  background-color: #fff;
}

.panel-primary > .panel-footer + .panel-collapse > .panel-body {
  border-bottom-color: #FF304D;
}

.panel-success {
  border-color: #abcc37;
}

.panel-success > .panel-heading {
  color: #abcc37;
  background-color: #abcc37;
  border-color: #abcc37;
}

.panel-success > .panel-heading + .panel-collapse > .panel-body {
  border-top-color: #abcc37;
}

.panel-success > .panel-heading .badge {
  color: #abcc37;
  background-color: #abcc37;
}

.panel-success > .panel-footer + .panel-collapse > .panel-body {
  border-bottom-color: #abcc37;
}

.panel-info {
  border-color: #79ccf2;
}

.panel-info > .panel-heading {
  color: #79ccf2;
  background-color: #79ccf2;
  border-color: #79ccf2;
}

.panel-info > .panel-heading + .panel-collapse > .panel-body {
  border-top-color: #79ccf2;
}

.panel-info > .panel-heading .badge {
  color: #79ccf2;
  background-color: #79ccf2;
}

.panel-info > .panel-footer + .panel-collapse > .panel-body {
  border-bottom-color: #79ccf2;
}

.panel-warning {
  border-color: #00B7FF;
}

.panel-warning > .panel-heading {
  color: #00B7FF;
  background-color: #00B7FF;
  border-color: #00B7FF;
}

.panel-warning > .panel-heading + .panel-collapse > .panel-body {
  border-top-color: #00B7FF;
}

.panel-warning > .panel-heading .badge {
  color: #00B7FF;
  background-color: #00B7FF;
}

.panel-warning > .panel-footer + .panel-collapse > .panel-body {
  border-bottom-color: #00B7FF;
}

.panel-danger {
  border-color: #f54b0f;
}

.panel-danger > .panel-heading {
  color: #f54b0f;
  background-color: #f54b0f;
  border-color: #f54b0f;
}

.panel-danger > .panel-heading + .panel-collapse > .panel-body {
  border-top-color: #f54b0f;
}

.panel-danger > .panel-heading .badge {
  color: #f54b0f;
  background-color: #f54b0f;
}

.panel-danger > .panel-footer + .panel-collapse > .panel-body {
  border-bottom-color: #f54b0f;
}

/** 1.28 Responsive Embed */
.embed-responsive {
  position: relative;
  display: block;
  height: 0;
  padding: 0;
  overflow: hidden;
}

.embed-responsive .embed-responsive-item,
.embed-responsive iframe,
.embed-responsive embed,
.embed-responsive object,
.embed-responsive video {
  position: absolute;
  top: 0;
  left: 0;
  bottom: 0;
  height: 100%;
  width: 100%;
  border: 0;
}

.embed-responsive-16by9 {
  padding-bottom: 56.25%;
}

.embed-responsive-4by3 {
  padding-bottom: 75%;
}

/** 1.29 Wells */
.well {
  min-height: 20px;
  padding: 19px;
  margin-bottom: 20px;
  background-color: #f5f5f5;
  border: 1px solid #e3e3e3;
  border-radius: 5px;
  -webkit-box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.05);
  box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.05);
}

.well blockquote {
  border-color: #ddd;
  border-color: rgba(0, 0, 0, 0.15);
}

.well-lg {
  padding: 24px;
  border-radius: 10px;
}

.well-sm {
  padding: 9px;
  border-radius: 4px;
}

/** 1.30 Close */
.close {
  float: right;
  font-size: 24px;
  font-weight: bold;
  line-height: 1;
  color: #000;
  text-shadow: 0 1px 0 #fff;
  opacity: 0.2;
  filter: alpha(opacity=20);
}

.close:hover, .close:focus {
  color: #000;
  text-decoration: none;
  cursor: pointer;
  opacity: 0.5;
  filter: alpha(opacity=50);
}

button.close {
  padding: 0;
  cursor: pointer;
  background: transparent;
  border: 0;
  -webkit-appearance: none;
}

/** 1.31 Modals */
.modal-open {
  overflow: hidden;
}

.modal {
  display: none;
  overflow: hidden;
  position: fixed;
  top: 0;
  right: 0;
  bottom: 0;
  left: 0;
  z-index: 1050;
  -webkit-overflow-scrolling: touch;
  outline: 0;
}

.modal.fade .modal-dialog {
  -webkit-transform: translate(0, -25%);
  -ms-transform: translate(0, -25%);
  -o-transform: translate(0, -25%);
  transform: translate(0, -25%);
  -webkit-transition: -webkit-transform 0.3s ease-out;
  -moz-transition: -moz-transform 0.3s ease-out;
  -o-transition: -o-transform 0.3s ease-out;
  transition: transform 0.3s ease-out;
}

.modal.in .modal-dialog {
  -webkit-transform: translate(0, 0);
  -ms-transform: translate(0, 0);
  -o-transform: translate(0, 0);
  transform: translate(0, 0);
}

.modal-open .modal {
  overflow-x: hidden;
  overflow-y: auto;
}

.modal-dialog {
  position: relative;
  width: auto;
  margin: 10px;
}

.modal-content {
  position: relative;
  background-color: #fff;
  border: 1px solid #999;
  border: 1px solid rgba(0, 0, 0, 0.2);
  border-radius: 10px;
  -webkit-box-shadow: 0 3px 9px rgba(0, 0, 0, 0.5);
  box-shadow: 0 3px 9px rgba(0, 0, 0, 0.5);
  background-clip: padding-box;
  outline: 0;
}

.modal-backdrop {
  position: fixed;
  top: 0;
  right: 0;
  bottom: 0;
  left: 0;
  z-index: 1040;
  background-color: #000;
}

.modal-backdrop.fade {
  opacity: 0;
  filter: alpha(opacity=0);
}

.modal-backdrop.in {
  opacity: 0.5;
  filter: alpha(opacity=50);
}

.modal-header {
  padding: 15px;
  border-bottom: 1px solid #e5e5e5;
}

.modal-header:before, .modal-header:after {
  content: " ";
  display: table;
}

.modal-header:after {
  clear: both;
}

.modal-header .close {
  margin-top: -2px;
}

.modal-title {
  margin: 0;
  line-height: 1.5;
}

.modal-body {
  position: relative;
  padding: 15px;
}

.modal-footer {
  padding: 15px;
  text-align: right;
  border-top: 1px solid #e5e5e5;
}

.modal-footer:before, .modal-footer:after {
  content: " ";
  display: table;
}

.modal-footer:after {
  clear: both;
}

.modal-footer .btn + .btn {
  margin-left: 5px;
  margin-bottom: 0;
}

.modal-footer .element-groups-custom .btn + .btn {
  margin-left: -1px;
}

.modal-footer .btn-block + .btn-block {
  margin-left: 0;
}

.modal-scrollbar-measure {
  position: absolute;
  top: -9999px;
  width: 50px;
  height: 50px;
  overflow: scroll;
}

@media (min-width: 768px) {
  .modal-dialog {
    width: 600px;
    margin: 30px auto;
  }
  .modal-content {
    -webkit-box-shadow: 0 5px 15px rgba(0, 0, 0, 0.5);
    box-shadow: 0 5px 15px rgba(0, 0, 0, 0.5);
  }
  .modal-sm {
    width: 300px;
  }
}

@media (min-width: 992px) {
  .modal-lg {
    width: 900px;
  }
}

/** 1.32 Tooltip */
.tooltip {
  position: absolute;
  z-index: 1070;
  display: block;
  font-family: "Hind", Helvetica, Arial, sans-serif;
  font-style: normal;
  font-weight: normal;
  letter-spacing: normal;
  line-break: auto;
  line-height: 1.5;
  text-align: left;
  text-align: start;
  text-decoration: none;
  text-shadow: none;
  text-transform: none;
  white-space: normal;
  word-break: normal;
  word-spacing: normal;
  word-wrap: normal;
  font-size: 15px;
  opacity: 0;
  filter: alpha(opacity=0);
}

.tooltip.in {
  opacity: 1;
  filter: alpha(opacity=100);
}

.tooltip.top {
  margin-top: -3px;
  padding: 5px 0;
}

.tooltip.right {
  margin-left: 3px;
  padding: 0 5px;
}

.tooltip.bottom {
  margin-top: 3px;
  padding: 5px 0;
}

.tooltip.left {
  margin-left: -3px;
  padding: 0 5px;
}

.tooltip-inner {
  max-width: 200px;
  padding: 3px 8px;
  color: #fff;
  text-align: center;
  background-color: #FF304D;
  border-radius: 5px;
}

.tooltip-arrow {
  position: absolute;
  width: 0;
  height: 0;
  border-color: transparent;
  border-style: solid;
}

.tooltip.top .tooltip-arrow {
  bottom: 0;
  left: 50%;
  margin-left: -5px;
  border-width: 5px 5px 0;
  border-top-color: #FF304D;
}

.tooltip.top-left .tooltip-arrow {
  bottom: 0;
  right: 5px;
  margin-bottom: -5px;
  border-width: 5px 5px 0;
  border-top-color: #FF304D;
}

.tooltip.top-right .tooltip-arrow {
  bottom: 0;
  left: 5px;
  margin-bottom: -5px;
  border-width: 5px 5px 0;
  border-top-color: #FF304D;
}

.tooltip.right .tooltip-arrow {
  top: 50%;
  left: 0;
  margin-top: -5px;
  border-width: 5px 5px 5px 0;
  border-right-color: #FF304D;
}

.tooltip.left .tooltip-arrow {
  top: 50%;
  right: 0;
  margin-top: -5px;
  border-width: 5px 0 5px 5px;
  border-left-color: #FF304D;
}

.tooltip.bottom .tooltip-arrow {
  top: 0;
  left: 50%;
  margin-left: -5px;
  border-width: 0 5px 5px;
  border-bottom-color: #FF304D;
}

.tooltip.bottom-left .tooltip-arrow {
  top: 0;
  right: 5px;
  margin-top: -5px;
  border-width: 0 5px 5px;
  border-bottom-color: #FF304D;
}

.tooltip.bottom-right .tooltip-arrow {
  top: 0;
  left: 5px;
  margin-top: -5px;
  border-width: 0 5px 5px;
  border-bottom-color: #FF304D;
}

/** 1.33 Popovers */
.popover {
  position: absolute;
  top: 0;
  left: 0;
  z-index: 1060;
  display: none;
  max-width: 276px;
  padding: 1px;
  font-family: "Hind", Helvetica, Arial, sans-serif;
  font-style: normal;
  font-weight: normal;
  letter-spacing: normal;
  line-break: auto;
  line-height: 1.5;
  text-align: left;
  text-align: start;
  text-decoration: none;
  text-shadow: none;
  text-transform: none;
  white-space: normal;
  word-break: normal;
  word-spacing: normal;
  word-wrap: normal;
  font-size: 16px;
  background-color: #fff;
  background-clip: padding-box;
  border: 1px solid #ccc;
  border: 1px solid rgba(0, 0, 0, 0.2);
  border-radius: 10px;
  -webkit-box-shadow: 0 5px 10px rgba(0, 0, 0, 0.2);
  box-shadow: 0 5px 10px rgba(0, 0, 0, 0.2);
}

.popover.top {
  margin-top: -10px;
}

.popover.right {
  margin-left: 10px;
}

.popover.bottom {
  margin-top: 10px;
}

.popover.left {
  margin-left: -10px;
}

.popover-title {
  margin: 0;
  padding: 8px 14px;
  font-size: 16px;
  background-color: #f7f7f7;
  border-bottom: 1px solid #ebebeb;
  border-radius: 9px 9px 0 0;
}

.popover-content {
  padding: 9px 14px;
}

.popover > .arrow, .popover > .arrow:after {
  position: absolute;
  display: block;
  width: 0;
  height: 0;
  border-color: transparent;
  border-style: solid;
}

.popover > .arrow {
  border-width: 11px;
}

.popover > .arrow:after {
  border-width: 10px;
  content: "";
}

.popover.top > .arrow {
  left: 50%;
  margin-left: -11px;
  border-bottom-width: 0;
  border-top-color: #999999;
  border-top-color: rgba(0, 0, 0, 0.25);
  bottom: -11px;
}

.popover.top > .arrow:after {
  content: " ";
  bottom: 1px;
  margin-left: -10px;
  border-bottom-width: 0;
  border-top-color: #fff;
}

.popover.right > .arrow {
  top: 50%;
  left: -11px;
  margin-top: -11px;
  border-left-width: 0;
  border-right-color: #999999;
  border-right-color: rgba(0, 0, 0, 0.25);
}

.popover.right > .arrow:after {
  content: " ";
  left: 1px;
  bottom: -10px;
  border-left-width: 0;
  border-right-color: #fff;
}

.popover.bottom > .arrow {
  left: 50%;
  margin-left: -11px;
  border-top-width: 0;
  border-bottom-color: #999999;
  border-bottom-color: rgba(0, 0, 0, 0.25);
  top: -11px;
}

.popover.bottom > .arrow:after {
  content: " ";
  top: 1px;
  margin-left: -10px;
  border-top-width: 0;
  border-bottom-color: #fff;
}

.popover.left > .arrow {
  top: 50%;
  right: -11px;
  margin-top: -11px;
  border-right-width: 0;
  border-left-color: #999999;
  border-left-color: rgba(0, 0, 0, 0.25);
}

.popover.left > .arrow:after {
  content: " ";
  right: 1px;
  border-right-width: 0;
  border-left-color: #fff;
  bottom: -10px;
}

/** 1.34 Carousel */
.carousel {
  position: relative;
}

.carousel-inner {
  position: relative;
  overflow: hidden;
  width: 100%;
}

.carousel-inner > .item {
  display: none;
  position: relative;
  -webkit-transition: 0.6s ease-in-out left;
  -o-transition: 0.6s ease-in-out left;
  transition: 0.6s ease-in-out left;
}

.carousel-inner > .item > img,
.carousel-inner > .item > a > img {
  display: block;
  max-width: 100%;
  height: auto;
  line-height: 1;
}

@media all and (transform-3d), (-webkit-transform-3d) {
  .carousel-inner > .item {
    -webkit-transition: -webkit-transform 0.6s ease-in-out;
    -moz-transition: -moz-transform 0.6s ease-in-out;
    -o-transition: -o-transform 0.6s ease-in-out;
    transition: transform 0.6s ease-in-out;
    -webkit-backface-visibility: hidden;
    -moz-backface-visibility: hidden;
    backface-visibility: hidden;
    -webkit-perspective: 1000px;
    -moz-perspective: 1000px;
    perspective: 1000px;
  }
  .carousel-inner > .item.next, .carousel-inner > .item.active.right {
    -webkit-transform: translate3d(100%, 0, 0);
    transform: translate3d(100%, 0, 0);
    left: 0;
  }
  .carousel-inner > .item.prev, .carousel-inner > .item.active.left {
    -webkit-transform: translate3d(-100%, 0, 0);
    transform: translate3d(-100%, 0, 0);
    left: 0;
  }
  .carousel-inner > .item.next.left, .carousel-inner > .item.prev.right, .carousel-inner > .item.active {
    -webkit-transform: translate3d(0, 0, 0);
    transform: translate3d(0, 0, 0);
    left: 0;
  }
}

.carousel-inner > .active,
.carousel-inner > .next,
.carousel-inner > .prev {
  display: block;
}

.carousel-inner > .active {
  left: 0;
}

.carousel-inner > .next,
.carousel-inner > .prev {
  position: absolute;
  top: 0;
  width: 100%;
}

.carousel-inner > .next {
  left: 100%;
}

.carousel-inner > .prev {
  left: -100%;
}

.carousel-inner > .next.left,
.carousel-inner > .prev.right {
  left: 0;
}

.carousel-inner > .active.left {
  left: -100%;
}

.carousel-inner > .active.right {
  left: 100%;
}

.carousel-control {
  position: absolute;
  top: 0;
  left: 0;
  bottom: 0;
  width: 15%;
  opacity: 0.5;
  filter: alpha(opacity=50);
  font-size: 20px;
  color: #fff;
  text-align: center;
  text-shadow: 0 1px 2px rgba(0, 0, 0, 0.6);
  background-color: transparent;
}

.carousel-control.left {
  background-image: -webkit-linear-gradient(left, rgba(0, 0, 0, 0.5) 0%, rgba(0, 0, 0, 0.0001) 100%);
  background-image: -o-linear-gradient(left, rgba(0, 0, 0, 0.5) 0%, rgba(0, 0, 0, 0.0001) 100%);
  background-image: linear-gradient(to right, rgba(0, 0, 0, 0.5) 0%, rgba(0, 0, 0, 0.0001) 100%);
  background-repeat: repeat-x;
  filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#80000000', endColorstr='#00000000', GradientType=1);
}

.carousel-control.right {
  left: auto;
  right: 0;
  background-image: -webkit-linear-gradient(left, rgba(0, 0, 0, 0.0001) 0%, rgba(0, 0, 0, 0.5) 100%);
  background-image: -o-linear-gradient(left, rgba(0, 0, 0, 0.0001) 0%, rgba(0, 0, 0, 0.5) 100%);
  background-image: linear-gradient(to right, rgba(0, 0, 0, 0.0001) 0%, rgba(0, 0, 0, 0.5) 100%);
  background-repeat: repeat-x;
  filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#00000000', endColorstr='#80000000', GradientType=1);
}

.carousel-control:hover, .carousel-control:focus {
  outline: 0;
  color: #fff;
  text-decoration: none;
  opacity: 0.9;
  filter: alpha(opacity=90);
}

.carousel-control .icon-prev,
.carousel-control .icon-next,
.carousel-control .glyphicon-chevron-left,
.carousel-control .glyphicon-chevron-right {
  position: absolute;
  top: 50%;
  margin-top: -10px;
  z-index: 5;
  display: inline-block;
}

.carousel-control .icon-prev,
.carousel-control .glyphicon-chevron-left {
  left: 50%;
  margin-left: -10px;
}

.carousel-control .icon-next,
.carousel-control .glyphicon-chevron-right {
  right: 50%;
  margin-right: -10px;
}

.carousel-control .icon-prev,
.carousel-control .icon-next {
  width: 20px;
  height: 20px;
  line-height: 1;
  font-family: serif;
}

.carousel-control .icon-prev:before {
  content: '\2039';
}

.carousel-control .icon-next:before {
  content: '\203a';
}

.carousel-indicators {
  position: absolute;
  bottom: 10px;
  left: 50%;
  z-index: 15;
  width: 60%;
  margin-left: -30%;
  padding-left: 0;
  list-style: none;
  text-align: center;
}

.carousel-indicators li {
  display: inline-block;
  width: 10px;
  height: 10px;
  margin: 1px;
  text-indent: -999px;
  border: 1px solid #fff;
  border-radius: 10px;
  cursor: pointer;
  background-color: #000 \9;
  background-color: transparent;
}

.carousel-indicators .active {
  margin: 0;
  width: 12px;
  height: 12px;
  background-color: #fff;
}

.carousel-caption {
  position: absolute;
  left: 15%;
  right: 15%;
  bottom: 20px;
  z-index: 10;
  padding-top: 20px;
  padding-bottom: 20px;
  color: #fff;
  text-align: center;
  text-shadow: 0 1px 2px rgba(0, 0, 0, 0.6);
}

.carousel-caption .btn {
  text-shadow: none;
}

@media screen and (min-width: 768px) {
  .carousel-control .glyphicon-chevron-left,
  .carousel-control .glyphicon-chevron-right,
  .carousel-control .icon-prev,
  .carousel-control .icon-next {
    width: 30px;
    height: 30px;
    margin-top: -10px;
    font-size: 30px;
  }
  .carousel-control .glyphicon-chevron-left,
  .carousel-control .icon-prev {
    margin-left: -10px;
  }
  .carousel-control .glyphicon-chevron-right,
  .carousel-control .icon-next {
    margin-right: -10px;
  }
  .carousel-caption {
    left: 20%;
    right: 20%;
    padding-bottom: 30px;
  }
  .carousel-indicators {
    bottom: 20px;
  }
}

/** 1.35 Utilities */
.clearfix:before, .clearfix:after {
  content: " ";
  display: table;
}

.clearfix:after {
  clear: both;
}

.center-block {
  display: block;
  margin-left: auto;
  margin-right: auto;
}

.pull-right {
  float: right !important;
}

.pull-left {
  float: left !important;
}

.hide {
  display: none !important;
}

.show {
  display: block !important;
}

.invisible {
  visibility: hidden;
}

.text-hide {
  font: 0/0 a;
  color: transparent;
  text-shadow: none;
  background-color: transparent;
  border: 0;
}

.hidden {
  display: none !important;
}

.affix {
  position: fixed;
}

/** 1.36 Responsive Utilities */
@-ms-viewport {
  width: device-width;
}

.visible-xs {
  display: none !important;
}

.visible-sm {
  display: none !important;
}

.visible-md {
  display: none !important;
}

.visible-lg {
  display: none !important;
}

.visible-xs-block,
.visible-xs-inline,
.visible-xs-inline-block,
.visible-sm-block,
.visible-sm-inline,
.visible-sm-inline-block,
.visible-md-block,
.visible-md-inline,
.visible-md-inline-block,
.visible-lg-block,
.visible-lg-inline,
.visible-lg-inline-block {
  display: none !important;
}

@media (max-width: 767px) {
  .visible-xs {
    display: block !important;
  }
  table.visible-xs {
    display: table !important;
  }
  tr.visible-xs {
    display: table-row !important;
  }
  th.visible-xs,
  td.visible-xs {
    display: table-cell !important;
  }
}

@media (max-width: 767px) {
  .visible-xs-block {
    display: block !important;
  }
}

@media (max-width: 767px) {
  .visible-xs-inline {
    display: inline !important;
  }
}

@media (max-width: 767px) {
  .visible-xs-inline-block {
    display: inline-block !important;
  }
}

@media (min-width: 768px) and (max-width: 991px) {
  .visible-sm {
    display: block !important;
  }
  table.visible-sm {
    display: table !important;
  }
  tr.visible-sm {
    display: table-row !important;
  }
  th.visible-sm,
  td.visible-sm {
    display: table-cell !important;
  }
}

@media (min-width: 768px) and (max-width: 991px) {
  .visible-sm-block {
    display: block !important;
  }
}

@media (min-width: 768px) and (max-width: 991px) {
  .visible-sm-inline {
    display: inline !important;
  }
}

@media (min-width: 768px) and (max-width: 991px) {
  .visible-sm-inline-block {
    display: inline-block !important;
  }
}

@media (min-width: 992px) and (max-width: 1199px) {
  .visible-md {
    display: block !important;
  }
  table.visible-md {
    display: table !important;
  }
  tr.visible-md {
    display: table-row !important;
  }
  th.visible-md,
  td.visible-md {
    display: table-cell !important;
  }
}

@media (min-width: 992px) and (max-width: 1199px) {
  .visible-md-block {
    display: block !important;
  }
}

@media (min-width: 992px) and (max-width: 1199px) {
  .visible-md-inline {
    display: inline !important;
  }
}

@media (min-width: 992px) and (max-width: 1199px) {
  .visible-md-inline-block {
    display: inline-block !important;
  }
}

@media (min-width: 1200px) {
  .visible-lg {
    display: block !important;
  }
  table.visible-lg {
    display: table !important;
  }
  tr.visible-lg {
    display: table-row !important;
  }
  th.visible-lg,
  td.visible-lg {
    display: table-cell !important;
  }
}

@media (min-width: 1200px) {
  .visible-lg-block {
    display: block !important;
  }
}

@media (min-width: 1200px) {
  .visible-lg-inline {
    display: inline !important;
  }
}

@media (min-width: 1200px) {
  .visible-lg-inline-block {
    display: inline-block !important;
  }
}

@media (max-width: 767px) {
  .hidden-xs {
    display: none !important;
  }
}

@media (min-width: 768px) and (max-width: 991px) {
  .hidden-sm {
    display: none !important;
  }
}

@media (min-width: 992px) and (max-width: 1199px) {
  .hidden-md {
    display: none !important;
  }
}

@media (min-width: 1200px) {
  .hidden-lg {
    display: none !important;
  }
}

.visible-print {
  display: none !important;
}

@media print {
  .visible-print {
    display: block !important;
  }
  table.visible-print {
    display: table !important;
  }
  tr.visible-print {
    display: table-row !important;
  }
  th.visible-print,
  td.visible-print {
    display: table-cell !important;
  }
}

.visible-print-block {
  display: none !important;
}

@media print {
  .visible-print-block {
    display: block !important;
  }
}

.visible-print-inline {
  display: none !important;
}

@media print {
  .visible-print-inline {
    display: inline !important;
  }
}

.visible-print-inline-block {
  display: none !important;
}

@media print {
  .visible-print-inline-block {
    display: inline-block !important;
  }
}

@media print {
  .hidden-print {
    display: none !important;
  }
}
/** 2 Bootstrap Toolkit Styles */
/** 2.1  Reset */
.page a:focus {
  outline: 0;
}

input, select, textarea {
  outline: 0;
}

p {
  margin: 0;
}

dl {
  margin-bottom: 0;
}

dt {
  font-weight: 400;
}

address {
  margin: 0;
}

html p a:hover {
  text-decoration: none;
}

.shell,
.shell-wide,
.shell-fluid {
  margin-right: auto;
  margin-left: auto;
  padding-left: 15px;
  padding-right: 15px;
}

.shell,
.shell-wide {
  min-width: 300px;
  max-width: 480px;
}

@media (min-width: 768px) {
  .shell,
  .shell-wide {
    max-width: 750px;
  }
}

@media (min-width: 992px) {
  .shell,
  .shell-wide {
    max-width: 970px;
  }
}

@media (min-width: 1200px) {
  .shell,
  .shell-wide {
    max-width: 1200px;
  }
}

@media (min-width: 1800px) {
  .shell-wide {
    max-width: 1800px;
  }
}

.range {
  margin-left: -15px;
  margin-right: -15px;
}

.range > .range {
  margin-left: 0;
  margin-right: 0;
}

.range-spacer {
  -webkit-flex-basis: 100%;
  -ms-flex-preferred-size: 100%;
  flex-basis: 100%;
  max-width: 100%;
}

[class*="cell-"] {
  padding-left: 15px;
  padding-right: 15px;
}

html.lt-ie-10 * + .range,
* + .range {
  margin-top: 60px;
}

html.lt-ie-10 * + [class*='cell-'],
* + [class*='cell-'],
html.lt-ie-10 * + .range-sm,
* + .range-sm {
  margin-top: 30px;
}

html.lt-ie-10 * + .range-lg,
* + .range-lg {
  margin-top: 66px;
}

html.lt-ie-10 .range-condensed,
.range-condensed {
  margin-left: 0;
  margin-right: 0;
}

html.lt-ie-10 .range-condensed > [class*='cell'],
.range-condensed > [class*='cell'] {
  padding-left: 0;
  padding-right: 0;
}

html.lt-ie-10 .range-condensed > * + [class*='cell'],
.range-condensed > * + [class*='cell'] {
  margin-top: 0;
}

html.lt-ie-10 .range-narrow,
.range-narrow {
  margin-left: -5px;
  margin-right: -5px;
}

html.lt-ie-10 .range-narrow > [class*='cell'],
.range-narrow > [class*='cell'] {
  padding-left: 5px;
  padding-right: 5px;
}

html.lt-ie-10 .range-narrow > * + [class*='cell'],
.range-narrow > * + [class*='cell'] {
  padding-left: 5px;
  padding-right: 5px;
}

@media (min-width: 480px) {
  .range {
    display: -ms-flexbox;
    display: -webkit-flex;
    display: flex;
    -ms-flex: 0 1 auto;
    -webkit-flex: 0 1 auto;
    flex: 0 1 auto;
    -webkit-flex-direction: row;
    -ms-flex-direction: row;
    flex-direction: row;
    -webkit-flex-wrap: wrap;
    -ms-flex-wrap: wrap;
    flex-wrap: wrap;
  }
  .range > .range {
    -webkit-flex-basis: 100%;
    -ms-flex-preferred-size: 100%;
    flex-basis: 100%;
    max-width: 100%;
  }
  .range-vertical {
    -webkit-flex-direction: column;
    -ms-flex-direction: column;
    flex-direction: column;
  }
  .range > [class*='cell'] {
    -ms-flex: 0 0 auto;
    -webkit-flex: 0 0 auto;
    flex: 0 0 auto;
    -webkit-flex-basis: 100%;
    -ms-flex-preferred-size: 100%;
    flex-basis: 100%;
    max-width: 100%;
  }
}

@media (min-width: 480px) {
  * + [class*='cell-xs-'] {
    margin-top: 0;
  }
  .range-xs-center {
    -webkit-justify-content: center;
    -ms-flex-pack: center;
    justify-content: center;
  }
  .range-xs-left {
    -webkit-justify-content: flex-start;
    -ms-flex-pack: start;
    justify-content: flex-start;
  }
  .range-xs-right {
    -webkit-justify-content: flex-end;
    -ms-flex-pack: end;
    justify-content: flex-end;
  }
  .range-xs-justify {
    -webkit-justify-content: space-between;
    -ms-flex-pack: justify;
    justify-content: space-between;
  }
  .range-xs-around {
    -webkit-justify-content: space-around;
    -ms-flex-pack: distribute;
    justify-content: space-around;
  }
  .range-xs-top {
    -webkit-align-items: flex-start;
    -ms-flex-align: start;
    align-items: flex-start;
  }
  .range-xs {
    -webkit-flex-direction: row;
    -ms-flex-direction: row;
    flex-direction: row;
  }
  .range-xs-reverse {
    -webkit-flex-direction: row-reverse;
    -ms-flex-direction: row-reverse;
    flex-direction: row-reverse;
  }
  .range-xs-middle {
    -webkit-align-items: center;
    -ms-flex-align: center;
    align-items: center;
  }
  .range-xs-bottom {
    -webkit-align-items: flex-end;
    -ms-flex-align: end;
    align-items: flex-end;
  }
  .cell-xs-top {
    -webkit-align-self: flex-start;
    -ms-flex-item-align: start;
    align-self: flex-start;
  }
  .cell-xs-middle {
    -webkit-align-self: center;
    -ms-flex-item-align: center;
    align-self: center;
  }
  .cell-xs-bottom {
    -webkit-align-self: flex-end;
    -ms-flex-item-align: end;
    align-self: flex-end;
  }
  .range > .cell-xs-preffix-0 {
    margin-left: 0%;
  }
  .range > .cell-xs-1 {
    -webkit-flex-basis: 8.33333%;
    -ms-flex-preferred-size: 8.33333%;
    flex-basis: 8.33333%;
    max-width: 8.33333%;
  }
  .range > .cell-xs-preffix-1 {
    margin-left: 8.33333%;
  }
  .range > .cell-xs-push-1 {
    -webkit-order: 1;
    -ms-flex-order: 1;
    order: 1;
  }
  .range > .cell-xs-2 {
    -webkit-flex-basis: 16.66667%;
    -ms-flex-preferred-size: 16.66667%;
    flex-basis: 16.66667%;
    max-width: 16.66667%;
  }
  .range > .cell-xs-preffix-2 {
    margin-left: 16.66667%;
  }
  .range > .cell-xs-push-2 {
    -webkit-order: 2;
    -ms-flex-order: 2;
    order: 2;
  }
  .range > .cell-xs-3 {
    -webkit-flex-basis: 25%;
    -ms-flex-preferred-size: 25%;
    flex-basis: 25%;
    max-width: 25%;
  }
  .range > .cell-xs-preffix-3 {
    margin-left: 25%;
  }
  .range > .cell-xs-push-3 {
    -webkit-order: 3;
    -ms-flex-order: 3;
    order: 3;
  }
  .range > .cell-xs-4 {
    -webkit-flex-basis: 33.33333%;
    -ms-flex-preferred-size: 33.33333%;
    flex-basis: 33.33333%;
    max-width: 33.33333%;
  }
  .range > .cell-xs-preffix-4 {
    margin-left: 33.33333%;
  }
  .range > .cell-xs-push-4 {
    -webkit-order: 4;
    -ms-flex-order: 4;
    order: 4;
  }
  .range > .cell-xs-5 {
    -webkit-flex-basis: 41.66667%;
    -ms-flex-preferred-size: 41.66667%;
    flex-basis: 41.66667%;
    max-width: 41.66667%;
  }
  .range > .cell-xs-preffix-5 {
    margin-left: 41.66667%;
  }
  .range > .cell-xs-push-5 {
    -webkit-order: 5;
    -ms-flex-order: 5;
    order: 5;
  }
  .range > .cell-xs-6 {
    -webkit-flex-basis: 50%;
    -ms-flex-preferred-size: 50%;
    flex-basis: 50%;
    max-width: 50%;
  }
  .range > .cell-xs-preffix-6 {
    margin-left: 50%;
  }
  .range > .cell-xs-push-6 {
    -webkit-order: 6;
    -ms-flex-order: 6;
    order: 6;
  }
  .range > .cell-xs-7 {
    -webkit-flex-basis: 58.33333%;
    -ms-flex-preferred-size: 58.33333%;
    flex-basis: 58.33333%;
    max-width: 58.33333%;
  }
  .range > .cell-xs-preffix-7 {
    margin-left: 58.33333%;
  }
  .range > .cell-xs-push-7 {
    -webkit-order: 7;
    -ms-flex-order: 7;
    order: 7;
  }
  .range > .cell-xs-8 {
    -webkit-flex-basis: 66.66667%;
    -ms-flex-preferred-size: 66.66667%;
    flex-basis: 66.66667%;
    max-width: 66.66667%;
  }
  .range > .cell-xs-preffix-8 {
    margin-left: 66.66667%;
  }
  .range > .cell-xs-push-8 {
    -webkit-order: 8;
    -ms-flex-order: 8;
    order: 8;
  }
  .range > .cell-xs-9 {
    -webkit-flex-basis: 75%;
    -ms-flex-preferred-size: 75%;
    flex-basis: 75%;
    max-width: 75%;
  }
  .range > .cell-xs-preffix-9 {
    margin-left: 75%;
  }
  .range > .cell-xs-push-9 {
    -webkit-order: 9;
    -ms-flex-order: 9;
    order: 9;
  }
  .range > .cell-xs-10 {
    -webkit-flex-basis: 83.33333%;
    -ms-flex-preferred-size: 83.33333%;
    flex-basis: 83.33333%;
    max-width: 83.33333%;
  }
  .range > .cell-xs-preffix-10 {
    margin-left: 83.33333%;
  }
  .range > .cell-xs-push-10 {
    -webkit-order: 10;
    -ms-flex-order: 10;
    order: 10;
  }
  .range > .cell-xs-11 {
    -webkit-flex-basis: 91.66667%;
    -ms-flex-preferred-size: 91.66667%;
    flex-basis: 91.66667%;
    max-width: 91.66667%;
  }
  .range > .cell-xs-preffix-11 {
    margin-left: 91.66667%;
  }
  .range > .cell-xs-push-11 {
    -webkit-order: 11;
    -ms-flex-order: 11;
    order: 11;
  }
  .range > .cell-xs-12 {
    -webkit-flex-basis: 100%;
    -ms-flex-preferred-size: 100%;
    flex-basis: 100%;
    max-width: 100%;
  }
  .range > .cell-xs-preffix-12 {
    margin-left: 100%;
  }
  .range > .cell-xs-push-12 {
    -webkit-order: 12;
    -ms-flex-order: 12;
    order: 12;
  }
  .range > .cell-xs-1-5 {
    -webkit-flex-basis: 20%;
    -ms-flex-preferred-size: 20%;
    flex-basis: 20%;
    max-width: 20%;
  }
}

@media (min-width: 768px) {
  * + [class*='cell-sm-'] {
    margin-top: 0;
  }
  .range-sm-center {
    -webkit-justify-content: center;
    -ms-flex-pack: center;
    justify-content: center;
  }
  .range-sm-left {
    -webkit-justify-content: flex-start;
    -ms-flex-pack: start;
    justify-content: flex-start;
  }
  .range-sm-right {
    -webkit-justify-content: flex-end;
    -ms-flex-pack: end;
    justify-content: flex-end;
  }
  .range-sm-justify {
    -webkit-justify-content: space-between;
    -ms-flex-pack: justify;
    justify-content: space-between;
  }
  .range-sm-around {
    -webkit-justify-content: space-around;
    -ms-flex-pack: distribute;
    justify-content: space-around;
  }
  .range-sm-top {
    -webkit-align-items: flex-start;
    -ms-flex-align: start;
    align-items: flex-start;
  }
  .range-sm {
    -webkit-flex-direction: row;
    -ms-flex-direction: row;
    flex-direction: row;
  }
  .range-sm-reverse {
    -webkit-flex-direction: row-reverse;
    -ms-flex-direction: row-reverse;
    flex-direction: row-reverse;
  }
  .range-sm-middle {
    -webkit-align-items: center;
    -ms-flex-align: center;
    align-items: center;
  }
  .range-sm-bottom {
    -webkit-align-items: flex-end;
    -ms-flex-align: end;
    align-items: flex-end;
  }
  .cell-sm-top {
    -webkit-align-self: flex-start;
    -ms-flex-item-align: start;
    align-self: flex-start;
  }
  .cell-sm-middle {
    -webkit-align-self: center;
    -ms-flex-item-align: center;
    align-self: center;
  }
  .cell-sm-bottom {
    -webkit-align-self: flex-end;
    -ms-flex-item-align: end;
    align-self: flex-end;
  }
  .range > .cell-sm-preffix-0 {
    margin-left: 0%;
  }
  .range > .cell-sm-1 {
    -webkit-flex-basis: 8.33333%;
    -ms-flex-preferred-size: 8.33333%;
    flex-basis: 8.33333%;
    max-width: 8.33333%;
  }
  .range > .cell-sm-preffix-1 {
    margin-left: 8.33333%;
  }
  .range > .cell-sm-push-1 {
    -webkit-order: 1;
    -ms-flex-order: 1;
    order: 1;
  }
  .range > .cell-sm-2 {
    -webkit-flex-basis: 16.66667%;
    -ms-flex-preferred-size: 16.66667%;
    flex-basis: 16.66667%;
    max-width: 16.66667%;
  }
  .range > .cell-sm-preffix-2 {
    margin-left: 16.66667%;
  }
  .range > .cell-sm-push-2 {
    -webkit-order: 2;
    -ms-flex-order: 2;
    order: 2;
  }
  .range > .cell-sm-3 {
    -webkit-flex-basis: 25%;
    -ms-flex-preferred-size: 25%;
    flex-basis: 25%;
    max-width: 25%;
  }
  .range > .cell-sm-preffix-3 {
    margin-left: 25%;
  }
  .range > .cell-sm-push-3 {
    -webkit-order: 3;
    -ms-flex-order: 3;
    order: 3;
  }
  .range > .cell-sm-4 {
    -webkit-flex-basis: 33.33333%;
    -ms-flex-preferred-size: 33.33333%;
    flex-basis: 33.33333%;
    max-width: 33.33333%;
  }
  .range > .cell-sm-preffix-4 {
    margin-left: 33.33333%;
  }
  .range > .cell-sm-push-4 {
    -webkit-order: 4;
    -ms-flex-order: 4;
    order: 4;
  }
  .range > .cell-sm-5 {
    -webkit-flex-basis: 41.66667%;
    -ms-flex-preferred-size: 41.66667%;
    flex-basis: 41.66667%;
    max-width: 41.66667%;
  }
  .range > .cell-sm-preffix-5 {
    margin-left: 41.66667%;
  }
  .range > .cell-sm-push-5 {
    -webkit-order: 5;
    -ms-flex-order: 5;
    order: 5;
  }
  .range > .cell-sm-6 {
    -webkit-flex-basis: 50%;
    -ms-flex-preferred-size: 50%;
    flex-basis: 50%;
    max-width: 50%;
  }
  .range > .cell-sm-preffix-6 {
    margin-left: 50%;
  }
  .range > .cell-sm-push-6 {
    -webkit-order: 6;
    -ms-flex-order: 6;
    order: 6;
  }
  .range > .cell-sm-7 {
    -webkit-flex-basis: 58.33333%;
    -ms-flex-preferred-size: 58.33333%;
    flex-basis: 58.33333%;
    max-width: 58.33333%;
  }
  .range > .cell-sm-preffix-7 {
    margin-left: 58.33333%;
  }
  .range > .cell-sm-push-7 {
    -webkit-order: 7;
    -ms-flex-order: 7;
    order: 7;
  }
  .range > .cell-sm-8 {
    -webkit-flex-basis: 66.66667%;
    -ms-flex-preferred-size: 66.66667%;
    flex-basis: 66.66667%;
    max-width: 66.66667%;
  }
  .range > .cell-sm-preffix-8 {
    margin-left: 66.66667%;
  }
  .range > .cell-sm-push-8 {
    -webkit-order: 8;
    -ms-flex-order: 8;
    order: 8;
  }
  .range > .cell-sm-9 {
    -webkit-flex-basis: 75%;
    -ms-flex-preferred-size: 75%;
    flex-basis: 75%;
    max-width: 75%;
  }
  .range > .cell-sm-preffix-9 {
    margin-left: 75%;
  }
  .range > .cell-sm-push-9 {
    -webkit-order: 9;
    -ms-flex-order: 9;
    order: 9;
  }
  .range > .cell-sm-10 {
    -webkit-flex-basis: 83.33333%;
    -ms-flex-preferred-size: 83.33333%;
    flex-basis: 83.33333%;
    max-width: 83.33333%;
  }
  .range > .cell-sm-preffix-10 {
    margin-left: 83.33333%;
  }
  .range > .cell-sm-push-10 {
    -webkit-order: 10;
    -ms-flex-order: 10;
    order: 10;
  }
  .range > .cell-sm-11 {
    -webkit-flex-basis: 91.66667%;
    -ms-flex-preferred-size: 91.66667%;
    flex-basis: 91.66667%;
    max-width: 91.66667%;
  }
  .range > .cell-sm-preffix-11 {
    margin-left: 91.66667%;
  }
  .range > .cell-sm-push-11 {
    -webkit-order: 11;
    -ms-flex-order: 11;
    order: 11;
  }
  .range > .cell-sm-12 {
    -webkit-flex-basis: 100%;
    -ms-flex-preferred-size: 100%;
    flex-basis: 100%;
    max-width: 100%;
  }
  .range > .cell-sm-preffix-12 {
    margin-left: 100%;
  }
  .range > .cell-sm-push-12 {
    -webkit-order: 12;
    -ms-flex-order: 12;
    order: 12;
  }
  .range > .cell-sm-1-5 {
    -webkit-flex-basis: 20%;
    -ms-flex-preferred-size: 20%;
    flex-basis: 20%;
    max-width: 20%;
  }
}

@media (min-width: 992px) {
  * + [class*='cell-md-'] {
    margin-top: 0;
  }
  .range-md-center {
    -webkit-justify-content: center;
    -ms-flex-pack: center;
    justify-content: center;
  }
  .range-md-left {
    -webkit-justify-content: flex-start;
    -ms-flex-pack: start;
    justify-content: flex-start;
  }
  .range-md-right {
    -webkit-justify-content: flex-end;
    -ms-flex-pack: end;
    justify-content: flex-end;
  }
  .range-md-justify {
    -webkit-justify-content: space-between;
    -ms-flex-pack: justify;
    justify-content: space-between;
  }
  .range-md-around {
    -webkit-justify-content: space-around;
    -ms-flex-pack: distribute;
    justify-content: space-around;
  }
  .range-md-top {
    -webkit-align-items: flex-start;
    -ms-flex-align: start;
    align-items: flex-start;
  }
  .range-md {
    -webkit-flex-direction: row;
    -ms-flex-direction: row;
    flex-direction: row;
  }
  .range-md-reverse {
    -webkit-flex-direction: row-reverse;
    -ms-flex-direction: row-reverse;
    flex-direction: row-reverse;
  }
  .range-md-middle {
    -webkit-align-items: center;
    -ms-flex-align: center;
    align-items: center;
  }
  .range-md-bottom {
    -webkit-align-items: flex-end;
    -ms-flex-align: end;
    align-items: flex-end;
  }
  .cell-md-top {
    -webkit-align-self: flex-start;
    -ms-flex-item-align: start;
    align-self: flex-start;
  }
  .cell-md-middle {
    -webkit-align-self: center;
    -ms-flex-item-align: center;
    align-self: center;
  }
  .cell-md-bottom {
    -webkit-align-self: flex-end;
    -ms-flex-item-align: end;
    align-self: flex-end;
  }
  .range > .cell-md-preffix-0 {
    margin-left: 0%;
  }
  .range > .cell-md-1 {
    -webkit-flex-basis: 8.33333%;
    -ms-flex-preferred-size: 8.33333%;
    flex-basis: 8.33333%;
    max-width: 8.33333%;
  }
  .range > .cell-md-preffix-1 {
    margin-left: 8.33333%;
  }
  .range > .cell-md-push-1 {
    -webkit-order: 1;
    -ms-flex-order: 1;
    order: 1;
  }
  .range > .cell-md-2 {
    -webkit-flex-basis: 16.66667%;
    -ms-flex-preferred-size: 16.66667%;
    flex-basis: 16.66667%;
    max-width: 16.66667%;
  }
  .range > .cell-md-preffix-2 {
    margin-left: 16.66667%;
  }
  .range > .cell-md-push-2 {
    -webkit-order: 2;
    -ms-flex-order: 2;
    order: 2;
  }
  .range > .cell-md-3 {
    -webkit-flex-basis: 25%;
    -ms-flex-preferred-size: 25%;
    flex-basis: 25%;
    max-width: 25%;
  }
  .range > .cell-md-preffix-3 {
    margin-left: 25%;
  }
  .range > .cell-md-push-3 {
    -webkit-order: 3;
    -ms-flex-order: 3;
    order: 3;
  }
  .range > .cell-md-4 {
    -webkit-flex-basis: 33.33333%;
    -ms-flex-preferred-size: 33.33333%;
    flex-basis: 33.33333%;
    max-width: 33.33333%;
  }
  .range > .cell-md-preffix-4 {
    margin-left: 33.33333%;
  }
  .range > .cell-md-push-4 {
    -webkit-order: 4;
    -ms-flex-order: 4;
    order: 4;
  }
  .range > .cell-md-5 {
    -webkit-flex-basis: 41.66667%;
    -ms-flex-preferred-size: 41.66667%;
    flex-basis: 41.66667%;
    max-width: 41.66667%;
  }
  .range > .cell-md-preffix-5 {
    margin-left: 41.66667%;
  }
  .range > .cell-md-push-5 {
    -webkit-order: 5;
    -ms-flex-order: 5;
    order: 5;
  }
  .range > .cell-md-6 {
    -webkit-flex-basis: 50%;
    -ms-flex-preferred-size: 50%;
    flex-basis: 50%;
    max-width: 50%;
  }
  .range > .cell-md-preffix-6 {
    margin-left: 50%;
  }
  .range > .cell-md-push-6 {
    -webkit-order: 6;
    -ms-flex-order: 6;
    order: 6;
  }
  .range > .cell-md-7 {
    -webkit-flex-basis: 58.33333%;
    -ms-flex-preferred-size: 58.33333%;
    flex-basis: 58.33333%;
    max-width: 58.33333%;
  }
  .range > .cell-md-preffix-7 {
    margin-left: 58.33333%;
  }
  .range > .cell-md-push-7 {
    -webkit-order: 7;
    -ms-flex-order: 7;
    order: 7;
  }
  .range > .cell-md-8 {
    -webkit-flex-basis: 66.66667%;
    -ms-flex-preferred-size: 66.66667%;
    flex-basis: 66.66667%;
    max-width: 66.66667%;
  }
  .range > .cell-md-preffix-8 {
    margin-left: 66.66667%;
  }
  .range > .cell-md-push-8 {
    -webkit-order: 8;
    -ms-flex-order: 8;
    order: 8;
  }
  .range > .cell-md-9 {
    -webkit-flex-basis: 75%;
    -ms-flex-preferred-size: 75%;
    flex-basis: 75%;
    max-width: 75%;
  }
  .range > .cell-md-preffix-9 {
    margin-left: 75%;
  }
  .range > .cell-md-push-9 {
    -webkit-order: 9;
    -ms-flex-order: 9;
    order: 9;
  }
  .range > .cell-md-10 {
    -webkit-flex-basis: 83.33333%;
    -ms-flex-preferred-size: 83.33333%;
    flex-basis: 83.33333%;
    max-width: 83.33333%;
  }
  .range > .cell-md-preffix-10 {
    margin-left: 83.33333%;
  }
  .range > .cell-md-push-10 {
    -webkit-order: 10;
    -ms-flex-order: 10;
    order: 10;
  }
  .range > .cell-md-11 {
    -webkit-flex-basis: 91.66667%;
    -ms-flex-preferred-size: 91.66667%;
    flex-basis: 91.66667%;
    max-width: 91.66667%;
  }
  .range > .cell-md-preffix-11 {
    margin-left: 91.66667%;
  }
  .range > .cell-md-push-11 {
    -webkit-order: 11;
    -ms-flex-order: 11;
    order: 11;
  }
  .range > .cell-md-12 {
    -webkit-flex-basis: 100%;
    -ms-flex-preferred-size: 100%;
    flex-basis: 100%;
    max-width: 100%;
  }
  .range > .cell-md-preffix-12 {
    margin-left: 100%;
  }
  .range > .cell-md-push-12 {
    -webkit-order: 12;
    -ms-flex-order: 12;
    order: 12;
  }
  .range > .cell-md-1-5 {
    -webkit-flex-basis: 20%;
    -ms-flex-preferred-size: 20%;
    flex-basis: 20%;
    max-width: 20%;
  }
}

@media (min-width: 1200px) {
  * + [class*='cell-lg-'] {
    margin-top: 0;
  }
  .range-lg-center {
    -webkit-justify-content: center;
    -ms-flex-pack: center;
    justify-content: center;
  }
  .range-lg-left {
    -webkit-justify-content: flex-start;
    -ms-flex-pack: start;
    justify-content: flex-start;
  }
  .range-lg-right {
    -webkit-justify-content: flex-end;
    -ms-flex-pack: end;
    justify-content: flex-end;
  }
  .range-lg-justify {
    -webkit-justify-content: space-between;
    -ms-flex-pack: justify;
    justify-content: space-between;
  }
  .range-lg-around {
    -webkit-justify-content: space-around;
    -ms-flex-pack: distribute;
    justify-content: space-around;
  }
  .range-lg-top {
    -webkit-align-items: flex-start;
    -ms-flex-align: start;
    align-items: flex-start;
  }
  .range-lg {
    -webkit-flex-direction: row;
    -ms-flex-direction: row;
    flex-direction: row;
  }
  .range-lg-reverse {
    -webkit-flex-direction: row-reverse;
    -ms-flex-direction: row-reverse;
    flex-direction: row-reverse;
  }
  .range-lg-middle {
    -webkit-align-items: center;
    -ms-flex-align: center;
    align-items: center;
  }
  .range-lg-bottom {
    -webkit-align-items: flex-end;
    -ms-flex-align: end;
    align-items: flex-end;
  }
  .cell-lg-top {
    -webkit-align-self: flex-start;
    -ms-flex-item-align: start;
    align-self: flex-start;
  }
  .cell-lg-middle {
    -webkit-align-self: center;
    -ms-flex-item-align: center;
    align-self: center;
  }
  .cell-lg-bottom {
    -webkit-align-self: flex-end;
    -ms-flex-item-align: end;
    align-self: flex-end;
  }
  .range > .cell-lg-preffix-0 {
    margin-left: 0%;
  }
  .range > .cell-lg-1 {
    -webkit-flex-basis: 8.33333%;
    -ms-flex-preferred-size: 8.33333%;
    flex-basis: 8.33333%;
    max-width: 8.33333%;
  }
  .range > .cell-lg-preffix-1 {
    margin-left: 8.33333%;
  }
  .range > .cell-lg-push-1 {
    -webkit-order: 1;
    -ms-flex-order: 1;
    order: 1;
  }
  .range > .cell-lg-2 {
    -webkit-flex-basis: 16.66667%;
    -ms-flex-preferred-size: 16.66667%;
    flex-basis: 16.66667%;
    max-width: 16.66667%;
  }
  .range > .cell-lg-preffix-2 {
    margin-left: 16.66667%;
  }
  .range > .cell-lg-push-2 {
    -webkit-order: 2;
    -ms-flex-order: 2;
    order: 2;
  }
  .range > .cell-lg-3 {
    -webkit-flex-basis: 25%;
    -ms-flex-preferred-size: 25%;
    flex-basis: 25%;
    max-width: 25%;
  }
  .range > .cell-lg-preffix-3 {
    margin-left: 25%;
  }
  .range > .cell-lg-push-3 {
    -webkit-order: 3;
    -ms-flex-order: 3;
    order: 3;
  }
  .range > .cell-lg-4 {
    -webkit-flex-basis: 33.33333%;
    -ms-flex-preferred-size: 33.33333%;
    flex-basis: 33.33333%;
    max-width: 33.33333%;
  }
  .range > .cell-lg-preffix-4 {
    margin-left: 33.33333%;
  }
  .range > .cell-lg-push-4 {
    -webkit-order: 4;
    -ms-flex-order: 4;
    order: 4;
  }
  .range > .cell-lg-5 {
    -webkit-flex-basis: 41.66667%;
    -ms-flex-preferred-size: 41.66667%;
    flex-basis: 41.66667%;
    max-width: 41.66667%;
  }
  .range > .cell-lg-preffix-5 {
    margin-left: 41.66667%;
  }
  .range > .cell-lg-push-5 {
    -webkit-order: 5;
    -ms-flex-order: 5;
    order: 5;
  }
  .range > .cell-lg-6 {
    -webkit-flex-basis: 50%;
    -ms-flex-preferred-size: 50%;
    flex-basis: 50%;
    max-width: 50%;
  }
  .range > .cell-lg-preffix-6 {
    margin-left: 50%;
  }
  .range > .cell-lg-push-6 {
    -webkit-order: 6;
    -ms-flex-order: 6;
    order: 6;
  }
  .range > .cell-lg-7 {
    -webkit-flex-basis: 58.33333%;
    -ms-flex-preferred-size: 58.33333%;
    flex-basis: 58.33333%;
    max-width: 58.33333%;
  }
  .range > .cell-lg-preffix-7 {
    margin-left: 58.33333%;
  }
  .range > .cell-lg-push-7 {
    -webkit-order: 7;
    -ms-flex-order: 7;
    order: 7;
  }
  .range > .cell-lg-8 {
    -webkit-flex-basis: 66.66667%;
    -ms-flex-preferred-size: 66.66667%;
    flex-basis: 66.66667%;
    max-width: 66.66667%;
  }
  .range > .cell-lg-preffix-8 {
    margin-left: 66.66667%;
  }
  .range > .cell-lg-push-8 {
    -webkit-order: 8;
    -ms-flex-order: 8;
    order: 8;
  }
  .range > .cell-lg-9 {
    -webkit-flex-basis: 75%;
    -ms-flex-preferred-size: 75%;
    flex-basis: 75%;
    max-width: 75%;
  }
  .range > .cell-lg-preffix-9 {
    margin-left: 75%;
  }
  .range > .cell-lg-push-9 {
    -webkit-order: 9;
    -ms-flex-order: 9;
    order: 9;
  }
  .range > .cell-lg-10 {
    -webkit-flex-basis: 83.33333%;
    -ms-flex-preferred-size: 83.33333%;
    flex-basis: 83.33333%;
    max-width: 83.33333%;
  }
  .range > .cell-lg-preffix-10 {
    margin-left: 83.33333%;
  }
  .range > .cell-lg-push-10 {
    -webkit-order: 10;
    -ms-flex-order: 10;
    order: 10;
  }
  .range > .cell-lg-11 {
    -webkit-flex-basis: 91.66667%;
    -ms-flex-preferred-size: 91.66667%;
    flex-basis: 91.66667%;
    max-width: 91.66667%;
  }
  .range > .cell-lg-preffix-11 {
    margin-left: 91.66667%;
  }
  .range > .cell-lg-push-11 {
    -webkit-order: 11;
    -ms-flex-order: 11;
    order: 11;
  }
  .range > .cell-lg-12 {
    -webkit-flex-basis: 100%;
    -ms-flex-preferred-size: 100%;
    flex-basis: 100%;
    max-width: 100%;
  }
  .range > .cell-lg-preffix-12 {
    margin-left: 100%;
  }
  .range > .cell-lg-push-12 {
    -webkit-order: 12;
    -ms-flex-order: 12;
    order: 12;
  }
  .range > .cell-lg-1-5 {
    -webkit-flex-basis: 20%;
    -ms-flex-preferred-size: 20%;
    flex-basis: 20%;
    max-width: 20%;
  }
}

@media (min-width: 1800px) {
  * + [class*='cell-xl-'] {
    margin-top: 0;
  }
  .range-xl-center {
    -webkit-justify-content: center;
    -ms-flex-pack: center;
    justify-content: center;
  }
  .range-xl-left {
    -webkit-justify-content: flex-start;
    -ms-flex-pack: start;
    justify-content: flex-start;
  }
  .range-xl-right {
    -webkit-justify-content: flex-end;
    -ms-flex-pack: end;
    justify-content: flex-end;
  }
  .range-xl-justify {
    -webkit-justify-content: space-between;
    -ms-flex-pack: justify;
    justify-content: space-between;
  }
  .range-xl-around {
    -webkit-justify-content: space-around;
    -ms-flex-pack: distribute;
    justify-content: space-around;
  }
  .range-xl-top {
    -webkit-align-items: flex-start;
    -ms-flex-align: start;
    align-items: flex-start;
  }
  .range-xl {
    -webkit-flex-direction: row;
    -ms-flex-direction: row;
    flex-direction: row;
  }
  .range-xl-reverse {
    -webkit-flex-direction: row-reverse;
    -ms-flex-direction: row-reverse;
    flex-direction: row-reverse;
  }
  .range-xl-middle {
    -webkit-align-items: center;
    -ms-flex-align: center;
    align-items: center;
  }
  .range-xl-bottom {
    -webkit-align-items: flex-end;
    -ms-flex-align: end;
    align-items: flex-end;
  }
  .cell-xl-top {
    -webkit-align-self: flex-start;
    -ms-flex-item-align: start;
    align-self: flex-start;
  }
  .cell-xl-middle {
    -webkit-align-self: center;
    -ms-flex-item-align: center;
    align-self: center;
  }
  .cell-xl-bottom {
    -webkit-align-self: flex-end;
    -ms-flex-item-align: end;
    align-self: flex-end;
  }
  .range > .cell-xl-preffix-0 {
    margin-left: 0%;
  }
  .range > .cell-xl-1 {
    -webkit-flex-basis: 8.33333%;
    -ms-flex-preferred-size: 8.33333%;
    flex-basis: 8.33333%;
    max-width: 8.33333%;
  }
  .range > .cell-xl-preffix-1 {
    margin-left: 8.33333%;
  }
  .range > .cell-xl-push-1 {
    -webkit-order: 1;
    -ms-flex-order: 1;
    order: 1;
  }
  .range > .cell-xl-2 {
    -webkit-flex-basis: 16.66667%;
    -ms-flex-preferred-size: 16.66667%;
    flex-basis: 16.66667%;
    max-width: 16.66667%;
  }
  .range > .cell-xl-preffix-2 {
    margin-left: 16.66667%;
  }
  .range > .cell-xl-push-2 {
    -webkit-order: 2;
    -ms-flex-order: 2;
    order: 2;
  }
  .range > .cell-xl-3 {
    -webkit-flex-basis: 25%;
    -ms-flex-preferred-size: 25%;
    flex-basis: 25%;
    max-width: 25%;
  }
  .range > .cell-xl-preffix-3 {
    margin-left: 25%;
  }
  .range > .cell-xl-push-3 {
    -webkit-order: 3;
    -ms-flex-order: 3;
    order: 3;
  }
  .range > .cell-xl-4 {
    -webkit-flex-basis: 33.33333%;
    -ms-flex-preferred-size: 33.33333%;
    flex-basis: 33.33333%;
    max-width: 33.33333%;
  }
  .range > .cell-xl-preffix-4 {
    margin-left: 33.33333%;
  }
  .range > .cell-xl-push-4 {
    -webkit-order: 4;
    -ms-flex-order: 4;
    order: 4;
  }
  .range > .cell-xl-5 {
    -webkit-flex-basis: 41.66667%;
    -ms-flex-preferred-size: 41.66667%;
    flex-basis: 41.66667%;
    max-width: 41.66667%;
  }
  .range > .cell-xl-preffix-5 {
    margin-left: 41.66667%;
  }
  .range > .cell-xl-push-5 {
    -webkit-order: 5;
    -ms-flex-order: 5;
    order: 5;
  }
  .range > .cell-xl-6 {
    -webkit-flex-basis: 50%;
    -ms-flex-preferred-size: 50%;
    flex-basis: 50%;
    max-width: 50%;
  }
  .range > .cell-xl-preffix-6 {
    margin-left: 50%;
  }
  .range > .cell-xl-push-6 {
    -webkit-order: 6;
    -ms-flex-order: 6;
    order: 6;
  }
  .range > .cell-xl-7 {
    -webkit-flex-basis: 58.33333%;
    -ms-flex-preferred-size: 58.33333%;
    flex-basis: 58.33333%;
    max-width: 58.33333%;
  }
  .range > .cell-xl-preffix-7 {
    margin-left: 58.33333%;
  }
  .range > .cell-xl-push-7 {
    -webkit-order: 7;
    -ms-flex-order: 7;
    order: 7;
  }
  .range > .cell-xl-8 {
    -webkit-flex-basis: 66.66667%;
    -ms-flex-preferred-size: 66.66667%;
    flex-basis: 66.66667%;
    max-width: 66.66667%;
  }
  .range > .cell-xl-preffix-8 {
    margin-left: 66.66667%;
  }
  .range > .cell-xl-push-8 {
    -webkit-order: 8;
    -ms-flex-order: 8;
    order: 8;
  }
  .range > .cell-xl-9 {
    -webkit-flex-basis: 75%;
    -ms-flex-preferred-size: 75%;
    flex-basis: 75%;
    max-width: 75%;
  }
  .range > .cell-xl-preffix-9 {
    margin-left: 75%;
  }
  .range > .cell-xl-push-9 {
    -webkit-order: 9;
    -ms-flex-order: 9;
    order: 9;
  }
  .range > .cell-xl-10 {
    -webkit-flex-basis: 83.33333%;
    -ms-flex-preferred-size: 83.33333%;
    flex-basis: 83.33333%;
    max-width: 83.33333%;
  }
  .range > .cell-xl-preffix-10 {
    margin-left: 83.33333%;
  }
  .range > .cell-xl-push-10 {
    -webkit-order: 10;
    -ms-flex-order: 10;
    order: 10;
  }
  .range > .cell-xl-11 {
    -webkit-flex-basis: 91.66667%;
    -ms-flex-preferred-size: 91.66667%;
    flex-basis: 91.66667%;
    max-width: 91.66667%;
  }
  .range > .cell-xl-preffix-11 {
    margin-left: 91.66667%;
  }
  .range > .cell-xl-push-11 {
    -webkit-order: 11;
    -ms-flex-order: 11;
    order: 11;
  }
  .range > .cell-xl-12 {
    -webkit-flex-basis: 100%;
    -ms-flex-preferred-size: 100%;
    flex-basis: 100%;
    max-width: 100%;
  }
  .range > .cell-xl-preffix-12 {
    margin-left: 100%;
  }
  .range > .cell-xl-push-12 {
    -webkit-order: 12;
    -ms-flex-order: 12;
    order: 12;
  }
  .range > .cell-xl-1-5 {
    -webkit-flex-basis: 20%;
    -ms-flex-preferred-size: 20%;
    flex-basis: 20%;
    max-width: 20%;
  }
}

html.lt-ie-10 .range > .cell-xs-1 {
  margin-left: auto;
  margin-right: auto;
  max-width: 8.33333%;
}

html.lt-ie-10 .range > .cell-xs-2 {
  margin-left: auto;
  margin-right: auto;
  max-width: 16.66667%;
}

html.lt-ie-10 .range > .cell-xs-3 {
  margin-left: auto;
  margin-right: auto;
  max-width: 25%;
}

html.lt-ie-10 .range > .cell-xs-4 {
  margin-left: auto;
  margin-right: auto;
  max-width: 33.33333%;
}

html.lt-ie-10 .range > .cell-xs-5 {
  margin-left: auto;
  margin-right: auto;
  max-width: 41.66667%;
}

html.lt-ie-10 .range > .cell-xs-6 {
  margin-left: auto;
  margin-right: auto;
  max-width: 50%;
}

html.lt-ie-10 .range > .cell-xs-7 {
  margin-left: auto;
  margin-right: auto;
  max-width: 58.33333%;
}

html.lt-ie-10 .range > .cell-xs-8 {
  margin-left: auto;
  margin-right: auto;
  max-width: 66.66667%;
}

html.lt-ie-10 .range > .cell-xs-9 {
  margin-left: auto;
  margin-right: auto;
  max-width: 75%;
}

html.lt-ie-10 .range > .cell-xs-10 {
  margin-left: auto;
  margin-right: auto;
  max-width: 83.33333%;
}

html.lt-ie-10 .range > .cell-xs-11 {
  margin-left: auto;
  margin-right: auto;
  max-width: 91.66667%;
}

html.lt-ie-10 .range > .cell-xs-12 {
  margin-left: auto;
  margin-right: auto;
  max-width: 100%;
}

html.lt-ie-10 .range > .cell-xs-1-5 {
  margin-left: auto;
  margin-right: auto;
  max-width: 20%;
}

html.lt-ie-10 .range > .cell-sm-1 {
  margin-left: auto;
  margin-right: auto;
  max-width: 8.33333%;
}

html.lt-ie-10 .range > .cell-sm-2 {
  margin-left: auto;
  margin-right: auto;
  max-width: 16.66667%;
}

html.lt-ie-10 .range > .cell-sm-3 {
  margin-left: auto;
  margin-right: auto;
  max-width: 25%;
}

html.lt-ie-10 .range > .cell-sm-4 {
  margin-left: auto;
  margin-right: auto;
  max-width: 33.33333%;
}

html.lt-ie-10 .range > .cell-sm-5 {
  margin-left: auto;
  margin-right: auto;
  max-width: 41.66667%;
}

html.lt-ie-10 .range > .cell-sm-6 {
  margin-left: auto;
  margin-right: auto;
  max-width: 50%;
}

html.lt-ie-10 .range > .cell-sm-7 {
  margin-left: auto;
  margin-right: auto;
  max-width: 58.33333%;
}

html.lt-ie-10 .range > .cell-sm-8 {
  margin-left: auto;
  margin-right: auto;
  max-width: 66.66667%;
}

html.lt-ie-10 .range > .cell-sm-9 {
  margin-left: auto;
  margin-right: auto;
  max-width: 75%;
}

html.lt-ie-10 .range > .cell-sm-10 {
  margin-left: auto;
  margin-right: auto;
  max-width: 83.33333%;
}

html.lt-ie-10 .range > .cell-sm-11 {
  margin-left: auto;
  margin-right: auto;
  max-width: 91.66667%;
}

html.lt-ie-10 .range > .cell-sm-12 {
  margin-left: auto;
  margin-right: auto;
  max-width: 100%;
}

html.lt-ie-10 .range > .cell-sm-1-5 {
  margin-left: auto;
  margin-right: auto;
  max-width: 20%;
}

html.lt-ie-10 .range > .cell-md-1 {
  margin-left: auto;
  margin-right: auto;
  max-width: 8.33333%;
}

html.lt-ie-10 .range > .cell-md-2 {
  margin-left: auto;
  margin-right: auto;
  max-width: 16.66667%;
}

html.lt-ie-10 .range > .cell-md-3 {
  margin-left: auto;
  margin-right: auto;
  max-width: 25%;
}

html.lt-ie-10 .range > .cell-md-4 {
  margin-left: auto;
  margin-right: auto;
  max-width: 33.33333%;
}

html.lt-ie-10 .range > .cell-md-5 {
  margin-left: auto;
  margin-right: auto;
  max-width: 41.66667%;
}

html.lt-ie-10 .range > .cell-md-6 {
  margin-left: auto;
  margin-right: auto;
  max-width: 50%;
}

html.lt-ie-10 .range > .cell-md-7 {
  margin-left: auto;
  margin-right: auto;
  max-width: 58.33333%;
}

html.lt-ie-10 .range > .cell-md-8 {
  margin-left: auto;
  margin-right: auto;
  max-width: 66.66667%;
}

html.lt-ie-10 .range > .cell-md-9 {
  margin-left: auto;
  margin-right: auto;
  max-width: 75%;
}

html.lt-ie-10 .range > .cell-md-10 {
  margin-left: auto;
  margin-right: auto;
  max-width: 83.33333%;
}

html.lt-ie-10 .range > .cell-md-11 {
  margin-left: auto;
  margin-right: auto;
  max-width: 91.66667%;
}

html.lt-ie-10 .range > .cell-md-12 {
  margin-left: auto;
  margin-right: auto;
  max-width: 100%;
}

html.lt-ie-10 .range > .cell-md-1-5 {
  margin-left: auto;
  margin-right: auto;
  max-width: 20%;
}

html.lt-ie-10 .range > .cell-lg-1 {
  margin-left: auto;
  margin-right: auto;
  max-width: 8.33333%;
}

html.lt-ie-10 .range > .cell-lg-2 {
  margin-left: auto;
  margin-right: auto;
  max-width: 16.66667%;
}

html.lt-ie-10 .range > .cell-lg-3 {
  margin-left: auto;
  margin-right: auto;
  max-width: 25%;
}

html.lt-ie-10 .range > .cell-lg-4 {
  margin-left: auto;
  margin-right: auto;
  max-width: 33.33333%;
}

html.lt-ie-10 .range > .cell-lg-5 {
  margin-left: auto;
  margin-right: auto;
  max-width: 41.66667%;
}

html.lt-ie-10 .range > .cell-lg-6 {
  margin-left: auto;
  margin-right: auto;
  max-width: 50%;
}

html.lt-ie-10 .range > .cell-lg-7 {
  margin-left: auto;
  margin-right: auto;
  max-width: 58.33333%;
}

html.lt-ie-10 .range > .cell-lg-8 {
  margin-left: auto;
  margin-right: auto;
  max-width: 66.66667%;
}

html.lt-ie-10 .range > .cell-lg-9 {
  margin-left: auto;
  margin-right: auto;
  max-width: 75%;
}

html.lt-ie-10 .range > .cell-lg-10 {
  margin-left: auto;
  margin-right: auto;
  max-width: 83.33333%;
}

html.lt-ie-10 .range > .cell-lg-11 {
  margin-left: auto;
  margin-right: auto;
  max-width: 91.66667%;
}

html.lt-ie-10 .range > .cell-lg-12 {
  margin-left: auto;
  margin-right: auto;
  max-width: 100%;
}

html.lt-ie-10 .range > .cell-lg-1-5 {
  margin-left: auto;
  margin-right: auto;
  max-width: 20%;
}

html.lt-ie-10 .range > [class*="cell-xs-preffix-"],
html.lt-ie-10 .range > [class*="cell-sm-preffix-"],
html.lt-ie-10 .range > [class*="cell-md-preffix-"],
html.lt-ie-10 .range > [class*="cell-lg-preffix-"] {
  margin-left: auto;
}

@media (min-width: 480px) {
  .text-xs-left {
    text-align: left;
  }
  .text-xs-center {
    text-align: center;
  }
  .text-xs-right {
    text-align: right;
  }
  .text-xs-justify {
    text-align: justify;
  }
  .text-xs-nowrap {
    white-space: nowrap;
  }
  .text-xs-normal {
    white-space: normal;
  }
}

@media (min-width: 768px) {
  .text-sm-left {
    text-align: left;
  }
  .text-sm-center {
    text-align: center;
  }
  .text-sm-right {
    text-align: right;
  }
  .text-sm-justify {
    text-align: justify;
  }
  .text-sm-nowrap {
    white-space: nowrap;
  }
  .text-sm-normal {
    white-space: normal;
  }
}

@media (min-width: 992px) {
  .text-md-left {
    text-align: left;
  }
  .text-md-center {
    text-align: center;
  }
  .text-md-right {
    text-align: right;
  }
  .text-md-justify {
    text-align: justify;
  }
  .text-md-nowrap {
    white-space: nowrap;
  }
  .text-md-normal {
    white-space: normal;
  }
}

@media (min-width: 1200px) {
  .text-lg-left {
    text-align: left;
  }
  .text-lg-center {
    text-align: center;
  }
  .text-lg-right {
    text-align: right;
  }
  .text-lg-justify {
    text-align: justify;
  }
  .text-lg-nowrap {
    white-space: nowrap;
  }
  .text-lg-normal {
    white-space: normal;
  }
}

@media (min-width: 1800px) {
  .text-xl-left {
    text-align: left;
  }
  .text-xl-center {
    text-align: center;
  }
  .text-xl-right {
    text-align: right;
  }
  .text-xl-justify {
    text-align: justify;
  }
  .text-xl-nowrap {
    white-space: nowrap;
  }
  .text-xl-normal {
    white-space: normal;
  }
}

.text-left {
  text-align: left;
}

.text-center {
  text-align: center;
}

.text-right {
  text-align: right;
}

.text-middle {
  vertical-align: middle;
}

@media (min-width: 480px) {
  html:not(.lt-ie10) .text-xs-left {
    text-align: left;
  }
  html:not(.lt-ie10) .text-xs-center {
    text-align: center;
  }
  html:not(.lt-ie10) .text-xs-right {
    text-align: right;
  }
  html:not(.lt-ie10) .text-xs-justify {
    text-align: justify;
  }
}

@media (min-width: 768px) {
  html:not(.lt-ie10) .text-sm-left {
    text-align: left;
  }
  html:not(.lt-ie10) .text-sm-center {
    text-align: center;
  }
  html:not(.lt-ie10) .text-sm-right {
    text-align: right;
  }
  html:not(.lt-ie10) .text-sm-justify {
    text-align: justify;
  }
}

@media (min-width: 992px) {
  html:not(.lt-ie10) .text-md-left {
    text-align: left;
  }
  html:not(.lt-ie10) .text-md-center {
    text-align: center;
  }
  html:not(.lt-ie10) .text-md-right {
    text-align: right;
  }
  html:not(.lt-ie10) .text-md-justify {
    text-align: justify;
  }
}

@media (min-width: 1200px) {
  html:not(.lt-ie10) .text-lg-left {
    text-align: left;
  }
  html:not(.lt-ie10) .text-lg-center {
    text-align: center;
  }
  html:not(.lt-ie10) .text-lg-right {
    text-align: right;
  }
  html:not(.lt-ie10) .text-lg-justify {
    text-align: justify;
  }
}

@media (min-width: 480px) {
  .pull-xs-left {
    float: left;
  }
  .pull-xs-base {
    float: none;
  }
  .pull-xs-right {
    float: right;
  }
}

@media (min-width: 768px) {
  .pull-sm-left {
    float: left;
  }
  .pull-sm-base {
    float: none;
  }
  .pull-sm-right {
    float: right;
  }
}

@media (min-width: 992px) {
  .pull-md-left {
    float: left;
  }
  .pull-md-base {
    float: none;
  }
  .pull-md-right {
    float: right;
  }
}

@media (min-width: 1200px) {
  .pull-lg-left {
    float: left;
  }
  .pull-lg-base {
    float: none;
  }
  .pull-lg-right {
    float: right;
  }
}

@media (min-width: 1800px) {
  .pull-xl-left {
    float: left;
  }
  .pull-xl-base {
    float: none;
  }
  .pull-xl-right {
    float: right;
  }
}

.reveal-block {
  display: block !important;
}

.reveal-inline-block {
  display: inline-block !important;
}

.reveal-inline {
  display: inline !important;
}

.reveal-flex {
  display: -ms-flexbox !important;
  display: -webkit-flex !important;
  display: flex !important;
}

.veil {
  display: none !important;
}

@media (min-width: 480px) {
  .reveal-xs-block {
    display: block !important;
  }
  .reveal-xs-inline-block {
    display: inline-block !important;
  }
  .reveal-xs-inline {
    display: inline !important;
  }
  .reveal-xs-flex {
    display: -ms-flexbox !important;
    display: -webkit-flex !important;
    display: flex !important;
  }
  .veil-xs {
    display: none !important;
  }
}

@media (min-width: 768px) {
  .reveal-sm-block {
    display: block !important;
  }
  .reveal-sm-inline-block {
    display: inline-block !important;
  }
  .reveal-sm-inline {
    display: inline !important;
  }
  .reveal-sm-flex {
    display: -ms-flexbox !important;
    display: -webkit-flex !important;
    display: flex !important;
  }
  .veil-sm {
    display: none !important;
  }
}

@media (min-width: 992px) {
  .reveal-md-block {
    display: block !important;
  }
  .reveal-md-inline-block {
    display: inline-block !important;
  }
  .reveal-md-inline {
    display: inline !important;
  }
  .reveal-md-flex {
    display: -ms-flexbox !important;
    display: -webkit-flex !important;
    display: flex !important;
  }
  .veil-md {
    display: none !important;
  }
}

@media (min-width: 1200px) {
  .reveal-lg-block {
    display: block !important;
  }
  .reveal-lg-inline-block {
    display: inline-block !important;
  }
  .reveal-lg-inline {
    display: inline !important;
  }
  .reveal-lg-flex {
    display: -ms-flexbox !important;
    display: -webkit-flex !important;
    display: flex !important;
  }
  .veil-lg {
    display: none !important;
  }
}

@media (min-width: 1800px) {
  .reveal-xl-block {
    display: block !important;
  }
  .reveal-xl-inline-block {
    display: inline-block !important;
  }
  .reveal-xl-inline {
    display: inline !important;
  }
  .reveal-xl-flex {
    display: -ms-flexbox !important;
    display: -webkit-flex !important;
    display: flex !important;
  }
  .veil-xl {
    display: none !important;
  }
}

.font-default {
  font-family: "Open Sans", Helvetica, Arial, sans-serif;
}

.font-size-default, body {
  font-size: 14px;
  line-height: 1.57143;
}

h1, h2, h3, h4, h5, h6, .h1, .h2, .h3, .h4, .h5, .h6 {
  margin-top: 0;
  margin-bottom: 0;
  font-family: "Open Sans", Helvetica, Arial, sans-serif;
  font-weight: 700;
  color: #313132;
}

h1 > span, h2 > span, h3 > span, h4 > span, h5 > span, h6 > span, .h1 > span, .h2 > span, .h3 > span, .h4 > span, .h5 > span, .h6 > span {
  display: block;
}

h1 a, h2 a, h3 a, h4 a, h5 a, h6 a, .h1 a, .h2 a, .h3 a, .h4 a, .h5 a, .h6 a {
  display: inline;
  font: inherit;
  letter-spacing: inherit;
  transition: .33s all ease;
}

h1 a, h1 a:active, h1 a:focus, h2 a, h2 a:active, h2 a:focus, h3 a, h3 a:active, h3 a:focus, h4 a, h4 a:active, h4 a:focus, h5 a, h5 a:active, h5 a:focus, h6 a, h6 a:active, h6 a:focus, .h1 a, .h1 a:active, .h1 a:focus, .h2 a, .h2 a:active, .h2 a:focus, .h3 a, .h3 a:active, .h3 a:focus, .h4 a, .h4 a:active, .h4 a:focus, .h5 a, .h5 a:active, .h5 a:focus, .h6 a, .h6 a:active, .h6 a:focus {
  color: #42a4ff;
}

h1 a:hover, h2 a:hover, h3 a:hover, h4 a:hover, h5 a:hover, h6 a:hover, .h1 a:hover, .h2 a:hover, .h3 a:hover, .h4 a:hover, .h5 a:hover, .h6 a:hover {
  color: #084884;
}

h1,
.h1 {
  font-size: 32px;
  line-height: 1;
}

@media (min-width: 768px) {
  h1,
  .h1 {
    font-size: 36px;
    line-height: 1.1;
  }
}

@media (min-width: 992px) {
  h1,
  .h1 {
    font-size: 50px;
  }
}

@media (min-width: 1200px) {
  h1,
  .h1 {
    line-height: 1.2;
    font-size: 60px;
  }
}

h2,
.h2 {
  font-size: 28px;
  line-height: 1.4;
}

@media (min-width: 768px) {
  h2,
  .h2 {
    font-size: 32px;
  }
}

@media (min-width: 992px) {
  h2,
  .h2 {
    line-height: 1.16667;
    font-size: 48px;
  }
}

h3,
.h3 {
  font-size: 26px;
  font-weight: 900;
  line-height: 1.2;
}

@media (min-width: 768px) {
  h3,
  .h3 {
    font-size: 32px;
  }
}

@media (min-width: 992px) {
  h3,
  .h3 {
    line-height: 1.125;
    font-size: 40px;
  }
}

h4,
.h4 {
  font-size: 24px;
  line-height: 1.2;
}

@media (min-width: 768px) {
  h4,
  .h4 {
    font-size: 28px;
  }
}

@media (min-width: 992px) {
  h4,
  .h4 {
    line-height: 1.13333;
    font-size: 30px;
  }
}

h5,
.h5 {
  font-size: 20px;
  line-height: 1.2;
}

@media (min-width: 992px) {
  h5,
  .h5 {
    line-height: 1.20833;
    font-size: 24px;
  }
}

@media (min-width: 992px) {
  .h5-variant-1 {
    font-size: 22px;
  }
}

h6,
.h6 {
  font-size: 16px;
  line-height: 1.2;
}

@media (min-width: 480px) {
  h6,
  .h6 {
    font-size: 18px;
  }
}

@media (min-width: 768px) {
  h6,
  .h6 {
    line-height: 1.27778;
    font-size: 18px;
  }
}

@media (min-width: 480px) {
  .big {
    font-size: 16px;
    line-height: 1.5;
  }
}

@media (min-width: 768px) {
  .big {
    font-size: 18px;
    line-height: 23px;
  }
}

small,
.small {
  font-size: 12px;
  line-height: 18px;
}

code {
  padding: 5px 7px;
  font-size: 75%;
  color: #ff4242;
  background-color: #f9f9f9;
  border-radius: 2px;
}

mark, .mark {
  color: #fff;
  background-color: #42a4ff;
  padding: .1em;
}

.text-style-1 {
  font-weight: 400;
  font-style: italic;
  color: #777;
}

.paragraph-style-1 * {
  margin-right: .25em;
}

.paragraph-style-1 *:last-child {
  margin-right: 0;
}

.text-style-2 {
  line-height: 1.61111;
  font-weight: 400;
  font-size: 14px;
}

@media (min-width: 992px) {
  .text-style-2 {
    font-size: 18px;
  }
}

.text-extra-big {
  font-size: 120px;
  font-weight: 700;
  line-height: 1;
  color: #fff;
}

@media (min-width: 768px) {
  .text-extra-big {
    font-size: 180px;
  }
}

@media (min-width: 1200px) {
  .text-extra-big {
    font-size: 150px;
  }
}

@media (min-width: 1200px) and (min-height: 768px) {
  .text-extra-big {
    font-size: 218px;
  }
}

p.caption {
  margin-top: 2px;
  color: #777;
}

ul,
ol {
  list-style: none;
  padding: 0;
  margin: 0;
}

.list > li + li {
  margin-top: 5px;
}

.list .unit-left {
  vertical-align: middle;
}

.list .unit-left:before {
  content: '';
  height: 100%;
  width: 0;
  display: inline-block;
}

.list-xl {
  text-align: center;
}

.list-xl li + li {
  margin-top: 63px;
}

.list-xl * + .link {
  margin-top: 8px;
}

.list-xl * + p {
  margin-top: 20px;
}

@media (min-width: 768px) {
  .list-xl {
    text-align: left;
  }
  .list-xl .unit-body {
    margin-top: -4px;
  }
}

.list-inline {
  margin-left: -5px;
  margin-right: -5px;
}

.list-inline > li {
  position: relative;
  z-index: 1;
  display: inline;
  padding-left: 5px;
  padding-right: 5px;
}

.list-inline-xxs {
  margin-left: -3px;
  margin-right: -3px;
}

.list-inline-xxs > li {
  padding-left: 3px;
  padding-right: 3px;
}

.list-inline-xxs > li:before {
  content: '';
  height: 100%;
  display: inline-block;
  width: 0;
  vertical-align: middle;
}

.list-inline-xxs > li > * {
  vertical-align: middle;
}

.list-inline-xs {
  margin-left: -6px;
  margin-right: -5px;
}

.list-inline-xs > li {
  padding-left: 6px;
  padding-right: 5px;
}

.list-inline-sm {
  margin-left: -10px;
  margin-right: -10px;
}

.list-inline-sm > li {
  padding-left: 10px;
  padding-right: 10px;
}

.list-inline-md {
  margin-left: -15px;
  margin-right: -15px;
}

.list-inline-md > li {
  padding-left: 15px;
  padding-right: 15px;
}

dl {
  margin: 0;
}

.list-terms dt + dd {
  margin-top: 15px;
}

.list-terms dd + dt {
  margin-top: 30px;
}

.list-terms-variant-1 dt + dd {
  margin-top: 12px;
}

.list-terms-variant-1 dd + dt {
  margin-top: 35px;
}

@media (min-width: 992px) {
  .list-terms-variant-1 dd + dt {
    margin-top: 60px;
  }
}

.list-index {
  counter-reset: li;
}

.list-index li .list-index-counter:before {
  content: counter(li, decimal-leading-zero);
  counter-increment: li;
}

.list-marked li {
  position: relative;
  padding-left: 16px;
}

.list-marked li:before {
  content: '';
  display: inline-block;
  background: #313132;
  width: 3px;
  height: 3px;
  position: absolute;
  left: 0;
  top: 50%;
  -webkit-transform: translateY(-50%);
  transform: translateY(-50%);
}

[class*='list-marked'].list-marked-gray li:before {
  color: #777;
}

.list-marked-variant-1 li {
  position: relative;
  padding-left: 23px;
}

.list-marked-variant-1 li:before {
  position: absolute;
  top: 5px;
  left: 0;
  content: '\f238';
  font: 400 14px/14px 'Material Design Icons';
  color: #b1b1b1;
}

.list-marked-variant-1 li a, .list-marked-variant-1 li a:active, .list-marked-variant-1 li a:focus {
  color: #42a4ff;
}

.list-marked-variant-1 li a:hover {
  color: #084884;
}

.list-marked-variant-1 li + li {
  margin-top: 18px;
}

.list-marked-variant-2 li {
  position: relative;
  padding-left: 32px;
}

.list-marked-variant-2 li:before {
  position: absolute;
  top: 5px;
  left: 0;
  content: '\f238';
  font: 400 14px/14px 'Material Design Icons';
  color: #b1b1b1;
}

.list-marked-variant-2 li a, .list-marked-variant-2 li a:active, .list-marked-variant-2 li a:focus {
  color: #42a4ff;
}

.list-marked-variant-2 li a:hover {
  color: #084884;
}

.list-marked-variant-2 li + li {
  margin-top: 10px;
}

.list-tags-variant-1 li {
  display: inline-block;
  font-style: italic;
}

.list-tags-variant-1 li a, .list-tags-variant-1 li a:active, .list-tags-variant-1 li a:focus {
  color: #42a4ff;
}

.list-tags-variant-1 li a:hover {
  color: #084884;
}

.list-tags-variant-1 li:after {
  content: ',';
  display: inline-block;
  color: #b1b1b1;
}

.list-tags-variant-1 li:last-child:after {
  display: none;
}

.list-tags-variant-2 {
  -webkit-transform: translateY(-10px);
  transform: translateY(-10px);
  margin-bottom: -10px;
  margin-left: -10px;
}

.list-tags-variant-2 > *, .list-tags-variant-2 > *:first-child {
  display: inline-block;
  margin-top: 10px;
  margin-left: 10px;
}

.list-tags-variant-2 a {
  display: inline-block;
  padding: 6px 13px;
  font-size: 12px;
  font-weight: 700;
  border-radius: 40px;
}

.list-tags-variant-2 a, .list-tags-variant-2 a:active, .list-tags-variant-2 a:focus {
  color: #fff;
  background: #42a4ff;
}

.list-tags-variant-2 a:hover {
  color: #fff;
  background: #084884;
}

.list-numbered {
  counter-reset: li;
}

.list-numbered li {
  position: relative;
  padding-left: 30px;
}

.list-numbered li:before {
  position: absolute;
  top: 0;
  left: 0;
  content: counter(li, decimal) ".";
  counter-increment: li;
}

.list-numbered > li + li {
  margin-top: 10px;
}

.list-icon-pack {
  margin-top: 6px;
  color: #777;
}

.list-icon-pack li {
  margin-top: 25px;
}

.list-icon-pack li span + span {
  margin-left: .25em;
}

.list-meta-variant-1 {
  margin-top: 30px;
  margin-bottom: -10px;
  margin-left: -44px;
  -webkit-transform: translateY(-10px);
  transform: translateY(-10px);
}

.list-meta-variant-1 > *, .list-meta-variant-1 > *:first-child {
  display: inline-block;
  vertical-align: middle;
  margin-top: 10px;
  margin-left: 44px;
}

.list-meta-variant-1 li > * {
  display: inline-block;
  vertical-align: middle;
}

.list-meta-variant-1 li > * + * {
  margin-left: .3em;
}

@media (min-width: 768px) {
  .list-meta-variant-1 {
    margin-top: 40px;
  }
}

.list-bordered li {
  padding: 13px;
}

.list-bordered a, .list-bordered a:active, .list-bordered a:focus {
  color: #777;
}

.list-bordered a:hover {
  color: #42a4ff;
}

.list-bordered li + li {
  border-top: 1px solid #dbdbdb;
}

.list-links li {
  display: inline-block;
}

.list-links li:after {
  content: ';';
}

.list-links li:last-child:after {
  display: none;
}

.list-links-1 li {
  display: inline-block;
}

.list-links-1 li:after {
  content: ',';
}

.list-links-1 li:last-child:after {
  display: none;
}

.list-progress p {
  color: #777;
}

.list-progress li + li {
  margin-top: 19px;
}

.post-list li + li {
  margin-top: 22px;
}

blockquote {
  font: inherit;
  padding: 0;
  margin: 0;
  border: 0;
}

blockquote q:before, blockquote q:after {
  content: none;
}

blockquote cite {
  font-style: normal;
}

address {
  margin-top: 0;
  margin-bottom: 0;
}

.bg-gray-base, .bg-gray-darker, .bg-gray-dark, .bg-primary, .page .bg-gradient-denim, .bg-venice-blue, .bg-image, .bg-gray-base h1, .bg-gray-darker h1, .bg-gray-dark h1, .bg-primary h1, .page .bg-gradient-denim h1, .bg-venice-blue h1, .bg-image h1, .bg-gray-base h2, .bg-gray-darker h2, .bg-gray-dark h2, .bg-primary h2, .page .bg-gradient-denim h2, .bg-venice-blue h2, .bg-image h2, .bg-gray-base h3, .bg-gray-darker h3, .bg-gray-dark h3, .bg-primary h3, .page .bg-gradient-denim h3, .bg-venice-blue h3, .bg-image h3, .bg-gray-base h4, .bg-gray-darker h4, .bg-gray-dark h4, .bg-primary h4, .page .bg-gradient-denim h4, .bg-venice-blue h4, .bg-image h4, .bg-gray-base h5, .bg-gray-darker h5, .bg-gray-dark h5, .bg-primary h5, .page .bg-gradient-denim h5, .bg-venice-blue h5, .bg-image h5, .bg-gray-base h6, .bg-gray-darker h6, .bg-gray-dark h6, .bg-primary h6, .page .bg-gradient-denim h6, .bg-venice-blue h6, .bg-image h6, .bg-gray-base .h1, .bg-gray-darker .h1, .bg-gray-dark .h1, .bg-primary .h1, .page .bg-gradient-denim .h1, .bg-venice-blue .h1, .bg-image .h1, .bg-gray-base .h2, .bg-gray-darker .h2, .bg-gray-dark .h2, .bg-primary .h2, .page .bg-gradient-denim .h2, .bg-venice-blue .h2, .bg-image .h2, .bg-gray-base .h3, .bg-gray-darker .h3, .bg-gray-dark .h3, .bg-primary .h3, .page .bg-gradient-denim .h3, .bg-venice-blue .h3, .bg-image .h3, .bg-gray-base .h4, .bg-gray-darker .h4, .bg-gray-dark .h4, .bg-primary .h4, .page .bg-gradient-denim .h4, .bg-venice-blue .h4, .bg-image .h4, .bg-gray-base .h5, .bg-gray-darker .h5, .bg-gray-dark .h5, .bg-primary .h5, .page .bg-gradient-denim .h5, .bg-venice-blue .h5, .bg-image .h5, .bg-gray-base .h6, .bg-gray-darker .h6, .bg-gray-dark .h6, .bg-primary .h6, .page .bg-gradient-denim .h6, .bg-venice-blue .h6, .bg-image .h6 {
  color: #fff;
}

.bg-gray-base a, .bg-gray-darker a, .bg-gray-dark a, .bg-primary a, .page .bg-gradient-denim a, .bg-venice-blue a, .bg-image a, .bg-gray-base a:active, .bg-gray-darker a:active, .bg-gray-dark a:active, .bg-primary a:active, .page .bg-gradient-denim a:active, .bg-venice-blue a:active, .bg-image a:active, .bg-gray-base a:focus, .bg-gray-darker a:focus, .bg-gray-dark a:focus, .bg-primary a:focus, .page .bg-gradient-denim a:focus, .bg-venice-blue a:focus, .bg-image a:focus {
  color: #fff;
}

.bg-gray-base a:hover, .bg-gray-darker a:hover, .bg-gray-dark a:hover, .bg-primary a:hover, .page .bg-gradient-denim a:hover, .bg-venice-blue a:hover, .bg-image a:hover {
  color: #42a4ff;
}

.bg-gray-base hr, .bg-gray-darker hr, .bg-gray-dark hr, .bg-primary hr, .page .bg-gradient-denim hr, .bg-venice-blue hr, .bg-image hr {
  border-color: #777;
}

.bg-gray-base {
  background: #000;
  fill: #000;
}

.bg-gray-base .quote-variant-1 .quote-body:after {
  background: #000;
}

.bg-gray-darker {
  background: #222;
  fill: #222;
}

.bg-gray-darker .quote-variant-1 .quote-body:after {
  background: #222;
}

.bg-gray-dark {
  color: #777;
}

.bg-gray-dark {
  background: #313132;
  fill: #313132;
}

.bg-gray-dark .quote-variant-1 .quote-body:after {
  background: #313132;
}

.bg-gray {
  background: #777;
  fill: #777;
}

.bg-gray .quote-variant-1 .quote-body:after {
  background: #777;
}

.bg-primary {
  background: #42a4ff;
  fill: #42a4ff;
}

.bg-primary .quote-variant-1 .quote-body:after {
  background: #42a4ff;
}

.page .bg-gradient-denim {
  position: relative;
  z-index: 1;
  background: #136cbf;
}

.page .bg-gradient-denim:before, .page .bg-gradient-denim:after {
  content: '';
  position: absolute;
  top: 0;
  bottom: 0;
  left: 50%;
  z-index: -1;
  width: 130vw;
  -webkit-transform: translateX(-50%);
  transform: translateX(-50%);
  background: #136cbf;
}

.page .bg-gradient-denim:after {
  background: -moz-linear-gradient(left, rgba(19, 108, 191, 0.4) 0%, rgba(66, 164, 255, 0.4) 100%);
  background: -webkit-linear-gradient(left, rgba(19, 108, 191, 0.4) 0%, rgba(66, 164, 255, 0.4) 100%);
  background: linear-gradient(to right, rgba(19, 108, 191, 0.4) 0%, rgba(66, 164, 255, 0.4) 100%);
  filter: progid:DXImageTransform.Microsoft.gradient( startColorstr='#66136cbf', endColorstr='#6642a4ff',GradientType=1 );
}

.page .bg-gradient-denim .bg-diamond-element {
  position: absolute;
  left: 50%;
  bottom: 0;
  -webkit-transform: translateX(-50%) translateY(50%) rotate(45deg);
  transform: translateX(-50%) translateY(50%) rotate(45deg);
  width: 30px;
  height: 30px;
  z-index: -2;
  pointer-events: none;
  background: #136cbf;
}

.page .bg-gradient-denim .bg-diamond-element:after {
  content: '';
  position: absolute;
  top: 0;
  bottom: 0;
  left: 50%;
  z-index: -1;
  width: 100%;
  -webkit-transform: translateX(-50%);
  transform: translateX(-50%);
  background: #136cbf;
  background: -moz-linear-gradient(-45deg, rgba(19, 108, 191, 0.4) 0%, rgba(66, 164, 255, 0.4) 100%);
  background: -webkit-linear-gradient(-45deg, rgba(19, 108, 191, 0.4) 0%, rgba(66, 164, 255, 0.4) 100%);
  background: linear-gradient(-45deg, rgba(19, 108, 191, 0.4) 0%, rgba(66, 164, 255, 0.4) 100%);
  filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#66136cbf', endColorstr='#6642a4ff', GradientType=1);
}

.bg-venice-blue {
  background: #084884;
  fill: #084884;
}

.bg-venice-blue .quote-variant-1 .quote-body:after {
  background: #084884;
}

.bg-venice-blue .form-validation,
.bg-venice-blue .has-error .form-validation {
  color: #e97d7d;
}

.bg-venice-blue .has-error .form-control:not(.form-control-impressed),
.bg-venice-blue .has-error .form-control:focus:not(.form-control-impressed) {
  border-color: #cf4c4c;
}

.bg-venice-blue .has-error + .btn,
.bg-venice-blue .has-error + .btn:active,
.bg-venice-blue .has-error + .btn:focus {
  background: #cf4c4c;
  border-color: #cf4c4c;
}

.bg-gray-lighter {
  background: #f9f9f9;
  fill: #f9f9f9;
}

.bg-gray-lighter .quote-variant-1 .quote-body:after {
  background: #f9f9f9;
}

.bg-image {
  -webkit-background-size: cover;
  background-size: cover;
  background-position: center top;
}

.bg-image-1 {
}

.bg-decoration-diamond {
  position: relative;
}

.bg-decoration-diamond:before {
  content: '';
  position: absolute;
  left: 50%;
  bottom: 0;
  -webkit-transform: translateX(-50%) translateY(50%) rotate(45deg);
  transform: translateX(-50%) translateY(50%) rotate(45deg);
  width: 30px;
  height: 30px;
  background: inherit;
  z-index: 1;
  pointer-events: none;
}

.page .text-primary {
  color: #42a4ff;
}

.page a.text-primary:hover,
.page a.text-primary:focus {
  color: #0f8bff;
}

.page .text-dark {
  color: #313132;
}

.page a.text-dark:hover,
.page a.text-dark:focus {
  color: #181818;
}

.page .text-gray {
  color: #777;
}

.page a.text-gray:hover,
.page a.text-gray:focus {
  color: #5e5e5e;
}

.page .text-alto {
  color: #dbdbdb;
}

.page a.text-alto:hover,
.page a.text-alto:focus {
  color: #c2c2c2;
}

.page .text-gray-darker {
  color: #222;
}

.page a.text-gray-darker:hover,
.page a.text-gray-darker:focus {
  color: #090909;
}

.page .text-white {
  color: #fff;
}

.page a.text-white:hover,
.page a.text-white:focus {
  color: #e6e6e6;
}

.page .text-silver-chalice {
  color: #b1b1b1;
}

.page a.text-silver-chalice:hover,
.page a.text-silver-chalice:focus {
  color: #989898;
}

.page .text-anakiva {
  color: #a5d4ff;
}

.page a.text-anakiva:hover,
.page a.text-anakiva:focus {
  color: #72bcff;
}

.snackbars {
  max-width: 280px;
  padding: 9px 16px;
  margin-left: auto;
  margin-right: auto;
  color: #fff;
  text-align: left;
  background-color: #136cbf;
  border-radius: 0;
  box-shadow: 0 1px 4px 0 rgba(0, 0, 0, 0.15);
}

.snackbars .icon-xxs {
  font-size: 20px;
}

.snackbars p span:last-child {
  padding-left: 14px;
}

.snackbars-left {
  display: inline-block;
  margin-bottom: 0;
}

.snackbars-right {
  display: inline-block;
  float: right;
  text-transform: uppercase;
}

.snackbars-right:hover {
  text-decoration: underline;
}

@media (min-width: 480px) {
  .snackbars {
    max-width: 380px;
    padding: 14px 17px;
  }
}

.text-italic {
  font-style: italic;
}

.text-normal {
  font-style: normal;
}

.text-underline {
  text-decoration: underline;
}

.text-strike {
  text-decoration: line-through;
}

.text-thin {
  font-weight: 100;
}

.text-light {
  font-weight: 300;
}

.text-regular {
  font-weight: 400;
}

.text-medium {
  font-weight: 500;
}

.text-sbold {
  font-weight: 600;
}

.text-bold, strong {
  font-weight: 700;
}

.text-ubold {
  font-weight: 900;
}

.text-spacing-0 {
  letter-spacing: 0;
}

.text-spacing-40 {
  letter-spacing: 0.04em;
}

.text-spacing-120 {
  letter-spacing: 0.12em;
}

.btn {
  font-size: 16;
  font-weight: 700;
  text-transform: uppercase;
  letter-spacing: .06em;
  border-radius: 50px;
  transition: .3s ease-out;
}

.btn:focus, .btn:active, .btn:active:focus {
  outline: none;
}

.btn:active, .btn.active {
  -webkit-box-shadow: none;
  box-shadow: none;
}

.btn-mod-1 {
  min-width: 230px;
  padding-left: 20px;
  padding-right: 20px;
}

.btn-mod-2 {
  min-width: 170px;
  padding-left: 10px;
  padding-right: 10px;
  border: 2px solid;
}

.page .btn-default {
  color: #fff;
  background-color: #000;
  border-color: #000;
}

.page .btn-default:focus, .page .btn-default.focus, .page .btn-default:hover, .page .btn-default:active, .page .btn-default.active,
.open > .page .btn-default.dropdown-toggle {
  color: #fff;
  background-color: #222;
  border-color: #222;
}

.page .btn-default:active, .page .btn-default.active,
.open > .page .btn-default.dropdown-toggle {
  -webkit-box-shadow: 0 1px 10px 0 rgba(0, 0, 0, 0.15);
  box-shadow: 0 1px 10px 0 rgba(0, 0, 0, 0.15);
}

.page .btn-default:active:hover, .page .btn-default:active:focus, .page .btn-default:active.focus, .page .btn-default.active:hover, .page .btn-default.active:focus, .page .btn-default.active.focus,
.open > .page .btn-default.dropdown-toggle:hover,
.open > .page .btn-default.dropdown-toggle:focus,
.open > .page .btn-default.dropdown-toggle.focus {
  color: #fff;
  background-color: #222;
  border-color: #222;
}

.page .btn-default.disabled, .page .btn-default[disabled],
fieldset[disabled] .page .btn-default {
  pointer-events: none;
  opacity: .5;
}

.page .btn-default .badge {
  color: #000;
  background-color: #fff;
}

.page .btn-primary {
  color: #fff;
  background-color: #42a4ff;
  border-color: #42a4ff;
  -webkit-box-shadow: 0px 2px 10px 0px rgba(19, 108, 191, 0.31);
  box-shadow: 0px 2px 10px 0px rgba(19, 108, 191, 0.31);
}

.page .btn-primary:focus, .page .btn-primary.focus, .page .btn-primary:hover, .page .btn-primary:active, .page .btn-primary.active,
.open > .page .btn-primary.dropdown-toggle {
  color: #fff;
  background-color: #136cbf;
  border-color: #136cbf;
}

.page .btn-primary:active, .page .btn-primary.active,
.open > .page .btn-primary.dropdown-toggle {
  -webkit-box-shadow: 0 1px 10px 0 rgba(0, 0, 0, 0.15);
  box-shadow: 0 1px 10px 0 rgba(0, 0, 0, 0.15);
}

.page .btn-primary:active:hover, .page .btn-primary:active:focus, .page .btn-primary:active.focus, .page .btn-primary.active:hover, .page .btn-primary.active:focus, .page .btn-primary.active.focus,
.open > .page .btn-primary.dropdown-toggle:hover,
.open > .page .btn-primary.dropdown-toggle:focus,
.open > .page .btn-primary.dropdown-toggle.focus {
  color: #fff;
  background-color: #136cbf;
  border-color: #136cbf;
}

.page .btn-primary.disabled, .page .btn-primary[disabled],
fieldset[disabled] .page .btn-primary {
  pointer-events: none;
  opacity: .5;
}

.page .btn-primary .badge {
  color: #42a4ff;
  background-color: #fff;
}

.page .btn-primary-variant-1 {
  color: #fff;
  background-color: #42a4ff;
  border-color: #42a4ff;
  -webkit-box-shadow: 0px 2px 10px 0px rgba(19, 108, 191, 0.31);
  box-shadow: 0px 2px 10px 0px rgba(19, 108, 191, 0.31);
}

.page .btn-primary-variant-1:focus, .page .btn-primary-variant-1.focus, .page .btn-primary-variant-1:hover, .page .btn-primary-variant-1:active, .page .btn-primary-variant-1.active,
.open > .page .btn-primary-variant-1.dropdown-toggle {
  color: #fff;
  background-color: #a5d4ff;
  border-color: #a5d4ff;
}

.page .btn-primary-variant-1:active, .page .btn-primary-variant-1.active,
.open > .page .btn-primary-variant-1.dropdown-toggle {
  -webkit-box-shadow: 0 1px 10px 0 rgba(0, 0, 0, 0.15);
  box-shadow: 0 1px 10px 0 rgba(0, 0, 0, 0.15);
}

.page .btn-primary-variant-1:active:hover, .page .btn-primary-variant-1:active:focus, .page .btn-primary-variant-1:active.focus, .page .btn-primary-variant-1.active:hover, .page .btn-primary-variant-1.active:focus, .page .btn-primary-variant-1.active.focus,
.open > .page .btn-primary-variant-1.dropdown-toggle:hover,
.open > .page .btn-primary-variant-1.dropdown-toggle:focus,
.open > .page .btn-primary-variant-1.dropdown-toggle.focus {
  color: #fff;
  background-color: #a5d4ff;
  border-color: #a5d4ff;
}

.page .btn-primary-variant-1.disabled, .page .btn-primary-variant-1[disabled],
fieldset[disabled] .page .btn-primary-variant-1 {
  pointer-events: none;
  opacity: .5;
}

.page .btn-primary-variant-1 .badge {
  color: #42a4ff;
  background-color: #fff;
}

.page .btn-white-outline {
  color: #fff;
  background-color: transparent;
  border-color: #fff;
}

.page .btn-white-outline:focus, .page .btn-white-outline.focus, .page .btn-white-outline:hover, .page .btn-white-outline:active, .page .btn-white-outline.active,
.open > .page .btn-white-outline.dropdown-toggle {
  color: #084884;
  background-color: #fff;
  border-color: #fff;
}

.page .btn-white-outline:active, .page .btn-white-outline.active,
.open > .page .btn-white-outline.dropdown-toggle {
  -webkit-box-shadow: 0 1px 10px 0 rgba(0, 0, 0, 0.15);
  box-shadow: 0 1px 10px 0 rgba(0, 0, 0, 0.15);
}

.page .btn-white-outline:active:hover, .page .btn-white-outline:active:focus, .page .btn-white-outline:active.focus, .page .btn-white-outline.active:hover, .page .btn-white-outline.active:focus, .page .btn-white-outline.active.focus,
.open > .page .btn-white-outline.dropdown-toggle:hover,
.open > .page .btn-white-outline.dropdown-toggle:focus,
.open > .page .btn-white-outline.dropdown-toggle.focus {
  color: #084884;
  background-color: #fff;
  border-color: #fff;
}

.page .btn-white-outline.disabled, .page .btn-white-outline[disabled],
fieldset[disabled] .page .btn-white-outline {
  pointer-events: none;
  opacity: .5;
}

.page .btn-white-outline .badge {
  color: transparent;
  background-color: #fff;
}

.page .btn-no-shadow {
  -webkit-box-shadow: none;
  box-shadow: none;
}

.btn-xs, .btn-group-xs > .btn {
  padding: 8px 36px;
  font-size: 12px;
  line-height: 1.57143;
  border-radius: 50px;
  min-width: 200px;
  letter-spacing: .02em;
}

.btn-sm, .btn-group-sm > .btn {
  padding: 9px 27px;
  font-size: 13px;
  line-height: 1.57143;
  border-radius: 50px;
  letter-spacing: .02em;
}

.btn-lg, .btn-group-lg > .btn {
  padding: 15.6px 47px;
  font-size: 16px;
  line-height: 1.57143;
  border-radius: 50px;
  min-width: 140px;
}

.btn-rect {
  border-radius: 0;
}

.btn-round {
  border-radius: 11px;
}

.btn-round-sm {
  border-radius: 3px;
}

.btn.btn-icon {
  display: inline-flex;
  -webkit-flex-direction: row;
  -ms-flex-direction: row;
  flex-direction: row;
  -webkit-flex-wrap: nowrap;
  -ms-flex-wrap: nowrap;
  flex-wrap: nowrap;
  -webkit-align-items: center;
  -ms-flex-align: center;
  align-items: center;
  -webkit-justify-content: center;
  -ms-flex-pack: center;
  justify-content: center;
  vertical-align: middle;
}

.btn.btn-icon .icon {
  position: relative;
  top: -2px;
  display: inline;
  width: auto;
  height: auto;
  line-height: 0;
  vertical-align: middle;
  transition: 0s;
}

.btn.btn-icon-left .icon {
  margin-right: 10px;
}

.btn.btn-icon-right {
  -webkit-flex-direction: row-reverse;
  -ms-flex-direction: row-reverse;
  flex-direction: row-reverse;
}

.btn.btn-icon-right .icon {
  margin-left: 10px;
}

.icon {
  display: inline-block;
  text-align: center;
}

.icon:before {
  display: inline-block;
  font-weight: 400;
  font-style: normal;
  speak: none;
  text-transform: none;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
}

[class*='icon-circle'] {
  border-radius: 50%;
  overflow: hidden;
}

.page .icon-default {
  color: #313132;
}

.page .icon-primary {
  color: #42a4ff;
}

.page .icon-gray {
  color: #777;
}

.page .icon-white {
  color: #fff;
}

.page .icon-white-contrast {
  color: #fff;
}

.page .icon-silver-chalice {
  color: #b1b1b1;
}

.page .icon-alto {
  color: #dbdbdb;
}

.page .icon-primary-filled {
  background: #42a4ff;
}

.page .icon-venice-blue-filled {
  background: #084884;
}

.page .icon-filled-facebook {
  background: #395b98;
}

.page .icon-filled-twitter {
  background: #2ca7e0;
}

.page .icon-filled-google {
  background: #d95139;
}

.page .icon-filled-linkedin {
  background: #107bc1;
}

.page .icon-filled-instagram {
  background: #4879a1;
}

.page a.icon-default, .page a.icon-default:active, .page a.icon-default:focus {
  color: #313132;
}

.page a.icon-default:hover {
  color: #42a4ff;
}

.page a.icon-primary, .page a.icon-primary:active, .page a.icon-primary:focus {
  color: #42a4ff;
}

.page a.icon-primary:hover {
  color: #fff;
}

.page a.icon-gray, .page a.icon-gray:active, .page a.icon-gray:focus {
  color: #777;
}

.page a.icon-gray:hover {
  color: #42a4ff;
}

.page a.icon-white-contrast, .page a.icon-white-contrast:active, .page a.icon-white-contrast:focus {
  color: #fff;
}

.page a.icon-white-contrast:hover {
  color: #a5d4ff;
}

.page a.icon-silver-chalice, .page a.icon-silver-chalice:active, .page a.icon-silver-chalice:focus {
  color: #b1b1b1;
}

.page a.icon-silver-chalice:hover {
  color: #42a4ff;
}

.page a.icon-filled-facebook, .page a.icon-filled-facebook:active, .page a.icon-filled-facebook:focus {
  background: #395b98;
}

.page a.icon-filled-facebook:hover {
  background: #2b4573;
}

.page a.icon-filled-twitter, .page a.icon-filled-twitter:active, .page a.icon-filled-twitter:focus {
  background: #2ca7e0;
}

.page a.icon-filled-twitter:hover {
  background: #1c8abd;
}

.page a.icon-filled-google, .page a.icon-filled-google:active, .page a.icon-filled-google:focus {
  background: #d95139;
}

.page a.icon-filled-google:hover {
  background: #bb3b24;
}

.page a.icon-filled-linkedin, .page a.icon-filled-linkedin:active, .page a.icon-filled-linkedin:focus {
  background: #107bc1;
}

.page a.icon-filled-linkedin:hover {
  background: #0c5d92;
}

.page a.icon-filled-instagram, .page a.icon-filled-instagram:active, .page a.icon-filled-instagram:focus {
  background: #4879a1;
}

.page a.icon-filled-instagram:hover {
  background: #385f7e;
}

.page .icon-xxs {
  width: 16px;
  height: 16px;
  font-size: 16px;
  line-height: 16px;
}

.page .icon-xs {
  width: 18px;
  height: 18px;
  font-size: 18px;
  line-height: 18px;
}

.page .icon-xs-variant-1 {
  width: 20px;
  height: 20px;
  font-size: 20px;
  line-height: 20px;
}

.page .icon-xs-variant-2 {
  width: 22px;
  height: 22px;
  font-size: 22px;
  line-height: 22px;
}

.page .icon-sm {
  width: 28px;
  height: 28px;
  font-size: 28px;
  line-height: 28px;
}

.page .icon-sm-variant-1 {
  width: 26px;
  height: 26px;
  font-size: 26px;
  line-height: 26px;
}

.page .icon-sm-variant-2 {
  width: 30px;
  height: 30px;
  font-size: 30px;
  line-height: 30px;
}

.page .icon-md {
  width: 36px;
  height: 36px;
  font-size: 36px;
  line-height: 36px;
}

.page .icon-lg {
  width: 48px;
  height: 48px;
  font-size: 48px;
  line-height: 48px;
}

.page .icon-lg-variant-1 {
  width: 50px;
  height: 50px;
  font-size: 50px;
  line-height: 50px;
}

.page .icon-xl {
  width: 60px;
  height: 60px;
  font-size: 60px;
  line-height: 60px;
}

.page .icon-xxl {
  width: 72px;
  height: 72px;
  font-size: 72px;
  line-height: 72px;
}

[class*='icon-xs'].icon-circle {
  width: 40px;
  height: 40px;
  line-height: 40px;
}

[class*='icon-sm'].icon-circle-sm {
  width: 44px;
  height: 44px;
  line-height: 44px;
}

[class*='icon-sm'].icon-circle-sm.fa-clock-o:before {
  position: relative;
  top: -1px;
}

[class*='icon'].icon-circle-md {
  width: 60px;
  height: 60px;
  line-height: 60px;
}

.icon-code:before {
  content: '[';
}

.icon-code:after {
  content: ']';
}

.icon-adjust-vertical .icon {
  position: relative;
  top: 2px;
}

@font-face {
  font-family: 'FontAwesome';
  src: url("../fonts/fontawesome-webfont3295.eot?v=4.5.0");
  src: url("../fonts/fontawesome-webfontd41d.eot?#iefix&v=4.5.0") format("embedded-opentype"), url("../fonts/fontawesome-webfont3295.woff2?v=4.5.0") format("woff2"), url("../fonts/fontawesome-webfont3295.woff?v=4.5.0") format("woff"), url("../fonts/fontawesome-webfont3295.ttf?v=4.5.0") format("truetype"), url("../fonts/fontawesome-webfont3295.svg?v=4.5.0#fontawesomeregular") format("svg");
  font-weight: normal;
  font-style: normal;
}

.fa {
  display: inline-block;
  font: normal normal normal 14px/1 FontAwesome;
  font-size: inherit;
  text-rendering: auto;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
}

/* makes the font 33% larger relative to the icon container */
.fa-lg {
  font-size: 1.33333333em;
  line-height: 0.75em;
  vertical-align: -15%;
}

.fa-2x {
  font-size: 2em;
}

.fa-3x {
  font-size: 3em;
}

.fa-4x {
  font-size: 4em;
}

.fa-5x {
  font-size: 5em;
}

.fa-fw {
  width: 1.28571429em;
  text-align: center;
}

.fa-ul {
  padding-left: 0;
  margin-left: 2.14285714em;
  list-style-type: none;
}

.fa-ul > li {
  position: relative;
}

.fa-li {
  position: absolute;
  left: -2.14285714em;
  width: 2.14285714em;
  top: 0.14285714em;
  text-align: center;
}

.fa-li.fa-lg {
  left: -1.85714286em;
}

.fa-border {
  padding: .2em .25em .15em;
  border: solid 0.08em #eeeeee;
  border-radius: .1em;
}

.fa-pull-left {
  float: left;
}

.fa-pull-right {
  float: right;
}

.fa.fa-pull-left {
  margin-right: .3em;
}

.fa.fa-pull-right {
  margin-left: .3em;
}

/* Deprecated as of 4.4.0 */
.pull-right {
  float: right;
}

.pull-left {
  float: left;
}

.fa.pull-left {
  margin-right: .3em;
}

.fa.pull-right {
  margin-left: .3em;
}

.fa-spin {
  -webkit-animation: fa-spin 2s infinite linear;
  animation: fa-spin 2s infinite linear;
}

.fa-pulse {
  -webkit-animation: fa-spin 1s infinite steps(8);
  animation: fa-spin 1s infinite steps(8);
}

@-webkit-keyframes fa-spin {
  0% {
    -webkit-transform: rotate(0deg);
    transform: rotate(0deg);
  }
  100% {
    -webkit-transform: rotate(359deg);
    transform: rotate(359deg);
  }
}

@keyframes fa-spin {
  0% {
    -webkit-transform: rotate(0deg);
    transform: rotate(0deg);
  }
  100% {
    -webkit-transform: rotate(359deg);
    transform: rotate(359deg);
  }
}

.fa-rotate-90 {
  filter: progid:DXImageTransform.Microsoft.BasicImage(rotation=1);
  -webkit-transform: rotate(90deg);
  -ms-transform: rotate(90deg);
  transform: rotate(90deg);
}

.fa-rotate-180 {
  filter: progid:DXImageTransform.Microsoft.BasicImage(rotation=2);
  -webkit-transform: rotate(180deg);
  -ms-transform: rotate(180deg);
  transform: rotate(180deg);
}

.fa-rotate-270 {
  filter: progid:DXImageTransform.Microsoft.BasicImage(rotation=3);
  -webkit-transform: rotate(270deg);
  -ms-transform: rotate(270deg);
  transform: rotate(270deg);
}

.fa-flip-horizontal {
  filter: progid:DXImageTransform.Microsoft.BasicImage(rotation=0, mirror=1);
  -webkit-transform: scale(-1, 1);
  -ms-transform: scale(-1, 1);
  transform: scale(-1, 1);
}

.fa-flip-vertical {
  filter: progid:DXImageTransform.Microsoft.BasicImage(rotation=2, mirror=1);
  -webkit-transform: scale(1, -1);
  -ms-transform: scale(1, -1);
  transform: scale(1, -1);
}

:root .fa-rotate-90,
:root .fa-rotate-180,
:root .fa-rotate-270,
:root .fa-flip-horizontal,
:root .fa-flip-vertical {
  filter: none;
}

.fa-stack {
  position: relative;
  display: inline-block;
  width: 2em;
  height: 2em;
  line-height: 2em;
  vertical-align: middle;
}

.fa-stack-1x,
.fa-stack-2x {
  position: absolute;
  left: 0;
  width: 100%;
  text-align: center;
}

.fa-stack-1x {
  line-height: inherit;
}

.fa-stack-2x {
  font-size: 2em;
}

.fa-inverse {
  color: #ffffff;
}

/* Font Awesome uses the Unicode Private Use Area (PUA) to ensure screen
   readers do not read off random characters that represent icons */
.fa-glass:before {
  content: "\f000";
}

.fa-music:before {
  content: "\f001";
}

.fa-search:before {
  content: "\f002";
}

.fa-envelope-o:before {
  content: "\f003";
}

.fa-heart:before {
  content: "\f004";
}

.fa-star:before {
  content: "\f005";
}

.fa-star-o:before {
  content: "\f006";
}

.fa-user:before {
  content: "\f007";
}

.fa-film:before {
  content: "\f008";
}

.fa-th-large:before {
  content: "\f009";
}

.fa-th:before {
  content: "\f00a";
}

.fa-th-list:before {
  content: "\f00b";
}

.fa-check:before {
  content: "\f00c";
}

.fa-remove:before,
.fa-close:before,
.fa-times:before {
  content: "\f00d";
}

.fa-search-plus:before {
  content: "\f00e";
}

.fa-search-minus:before {
  content: "\f010";
}

.fa-power-off:before {
  content: "\f011";
}

.fa-signal:before {
  content: "\f012";
}

.fa-gear:before,
.fa-cog:before {
  content: "\f013";
}

.fa-trash-o:before {
  content: "\f014";
}

.fa-home:before {
  content: "\f015";
}

.fa-file-o:before {
  content: "\f016";
}

.fa-clock-o:before {
  content: "\f017";
}

.fa-road:before {
  content: "\f018";
}

.fa-download:before {
  content: "\f019";
}

.fa-arrow-circle-o-down:before {
  content: "\f01a";
}

.fa-arrow-circle-o-up:before {
  content: "\f01b";
}

.fa-inbox:before {
  content: "\f01c";
}

.fa-play-circle-o:before {
  content: "\f01d";
}

.fa-rotate-right:before,
.fa-repeat:before {
  content: "\f01e";
}

.fa-refresh:before {
  content: "\f021";
}

.fa-list-alt:before {
  content: "\f022";
}

.fa-lock:before {
  content: "\f023";
}

.fa-flag:before {
  content: "\f024";
}

.fa-headphones:before {
  content: "\f025";
}

.fa-volume-off:before {
  content: "\f026";
}

.fa-volume-down:before {
  content: "\f027";
}

.fa-volume-up:before {
  content: "\f028";
}

.fa-qrcode:before {
  content: "\f029";
}

.fa-barcode:before {
  content: "\f02a";
}

.fa-tag:before {
  content: "\f02b";
}

.fa-tags:before {
  content: "\f02c";
}

.fa-book:before {
  content: "\f02d";
}

.fa-bookmark:before {
  content: "\f02e";
}

.fa-print:before {
  content: "\f02f";
}

.fa-camera:before {
  content: "\f030";
}

.fa-font:before {
  content: "\f031";
}

.fa-bold:before {
  content: "\f032";
}

.fa-italic:before {
  content: "\f033";
}

.fa-text-height:before {
  content: "\f034";
}

.fa-text-width:before {
  content: "\f035";
}

.fa-align-left:before {
  content: "\f036";
}

.fa-align-center:before {
  content: "\f037";
}

.fa-align-right:before {
  content: "\f038";
}

.fa-align-justify:before {
  content: "\f039";
}

.fa-list:before {
  content: "\f03a";
}

.fa-dedent:before,
.fa-outdent:before {
  content: "\f03b";
}

.fa-indent:before {
  content: "\f03c";
}

.fa-video-camera:before {
  content: "\f03d";
}

.fa-photo:before,
.fa-image:before,
.fa-picture-o:before {
  content: "\f03e";
}

.fa-pencil:before {
  content: "\f040";
}

.fa-map-marker:before {
  content: "\f041";
}

.fa-adjust:before {
  content: "\f042";
}

.fa-tint:before {
  content: "\f043";
}

.fa-edit:before,
.fa-pencil-square-o:before {
  content: "\f044";
}

.fa-share-square-o:before {
  content: "\f045";
}

.fa-check-square-o:before {
  content: "\f046";
}

.fa-arrows:before {
  content: "\f047";
}

.fa-step-backward:before {
  content: "\f048";
}

.fa-fast-backward:before {
  content: "\f049";
}

.fa-backward:before {
  content: "\f04a";
}

.fa-play:before {
  content: "\f04b";
}

.fa-pause:before {
  content: "\f04c";
}

.fa-stop:before {
  content: "\f04d";
}

.fa-forward:before {
  content: "\f04e";
}

.fa-fast-forward:before {
  content: "\f050";
}

.fa-step-forward:before {
  content: "\f051";
}

.fa-eject:before {
  content: "\f052";
}

.fa-chevron-left:before {
  content: "\f053";
}

.fa-chevron-right:before {
  content: "\f054";
}

.fa-plus-circle:before {
  content: "\f055";
}

.fa-minus-circle:before {
  content: "\f056";
}

.fa-times-circle:before {
  content: "\f057";
}

.fa-check-circle:before {
  content: "\f058";
}

.fa-question-circle:before {
  content: "\f059";
}

.fa-info-circle:before {
  content: "\f05a";
}

.fa-crosshairs:before {
  content: "\f05b";
}

.fa-times-circle-o:before {
  content: "\f05c";
}

.fa-check-circle-o:before {
  content: "\f05d";
}

.fa-ban:before {
  content: "\f05e";
}

.fa-arrow-left:before {
  content: "\f060";
}

.fa-arrow-right:before {
  content: "\f061";
}

.fa-arrow-up:before {
  content: "\f062";
}

.fa-arrow-down:before {
  content: "\f063";
}

.fa-mail-forward:before,
.fa-share:before {
  content: "\f064";
}

.fa-expand:before {
  content: "\f065";
}

.fa-compress:before {
  content: "\f066";
}

.fa-plus:before {
  content: "\f067";
}

.fa-minus:before {
  content: "\f068";
}

.fa-asterisk:before {
  content: "\f069";
}

.fa-exclamation-circle:before {
  content: "\f06a";
}

.fa-gift:before {
  content: "\f06b";
}

.fa-leaf:before {
  content: "\f06c";
}

.fa-fire:before {
  content: "\f06d";
}

.fa-eye:before {
  content: "\f06e";
}

.fa-eye-slash:before {
  content: "\f070";
}

.fa-warning:before,
.fa-exclamation-triangle:before {
  content: "\f071";
}

.fa-plane:before {
  content: "\f072";
}

.fa-calendar:before {
  content: "\f073";
}

.fa-random:before {
  content: "\f074";
}

.fa-comment:before {
  content: "\f075";
}

.fa-magnet:before {
  content: "\f076";
}

.fa-chevron-up:before {
  content: "\f077";
}

.fa-chevron-down:before {
  content: "\f078";
}

.fa-retweet:before {
  content: "\f079";
}

.fa-shopping-cart:before {
  content: "\f07a";
}

.fa-folder:before {
  content: "\f07b";
}

.fa-folder-open:before {
  content: "\f07c";
}

.fa-arrows-v:before {
  content: "\f07d";
}

.fa-arrows-h:before {
  content: "\f07e";
}

.fa-bar-chart-o:before,
.fa-bar-chart:before {
  content: "\f080";
}

.fa-twitter-square:before {
  content: "\f081";
}

.fa-facebook-square:before {
  content: "\f082";
}

.fa-camera-retro:before {
  content: "\f083";
}

.fa-key:before {
  content: "\f084";
}

.fa-gears:before,
.fa-cogs:before {
  content: "\f085";
}

.fa-comments:before {
  content: "\f086";
}

.fa-thumbs-o-up:before {
  content: "\f087";
}

.fa-thumbs-o-down:before {
  content: "\f088";
}

.fa-star-half:before {
  content: "\f089";
}

.fa-heart-o:before {
  content: "\f08a";
}

.fa-sign-out:before {
  content: "\f08b";
}

.fa-linkedin-square:before {
  content: "\f08c";
}

.fa-thumb-tack:before {
  content: "\f08d";
}

.fa-external-link:before {
  content: "\f08e";
}

.fa-sign-in:before {
  content: "\f090";
}

.fa-trophy:before {
  content: "\f091";
}

.fa-github-square:before {
  content: "\f092";
}

.fa-upload:before {
  content: "\f093";
}

.fa-lemon-o:before {
  content: "\f094";
}

.fa-phone:before {
  content: "\f095";
}

.fa-square-o:before {
  content: "\f096";
}

.fa-bookmark-o:before {
  content: "\f097";
}

.fa-phone-square:before {
  content: "\f098";
}

.fa-twitter:before {
  content: "\f099";
}

.fa-facebook-f:before,
.fa-facebook:before {
  content: "\f09a";
}

.fa-github:before {
  content: "\f09b";
}

.fa-unlock:before {
  content: "\f09c";
}

.fa-credit-card:before {
  content: "\f09d";
}

.fa-feed:before,
.fa-rss:before {
  content: "\f09e";
}

.fa-hdd-o:before {
  content: "\f0a0";
}

.fa-bullhorn:before {
  content: "\f0a1";
}

.fa-bell:before {
  content: "\f0f3";
}

.fa-certificate:before {
  content: "\f0a3";
}

.fa-hand-o-right:before {
  content: "\f0a4";
}

.fa-hand-o-left:before {
  content: "\f0a5";
}

.fa-hand-o-up:before {
  content: "\f0a6";
}

.fa-hand-o-down:before {
  content: "\f0a7";
}

.fa-arrow-circle-left:before {
  content: "\f0a8";
}

.fa-arrow-circle-right:before {
  content: "\f0a9";
}

.fa-arrow-circle-up:before {
  content: "\f0aa";
}

.fa-arrow-circle-down:before {
  content: "\f0ab";
}

.fa-globe:before {
  content: "\f0ac";
}

.fa-wrench:before {
  content: "\f0ad";
}

.fa-tasks:before {
  content: "\f0ae";
}

.fa-filter:before {
  content: "\f0b0";
}

.fa-briefcase:before {
  content: "\f0b1";
}

.fa-arrows-alt:before {
  content: "\f0b2";
}

.fa-group:before,
.fa-users:before {
  content: "\f0c0";
}

.fa-chain:before,
.fa-link:before {
  content: "\f0c1";
}

.fa-cloud:before {
  content: "\f0c2";
}

.fa-flask:before {
  content: "\f0c3";
}

.fa-cut:before,
.fa-scissors:before {
  content: "\f0c4";
}

.fa-copy:before,
.fa-files-o:before {
  content: "\f0c5";
}

.fa-paperclip:before {
  content: "\f0c6";
}

.fa-save:before,
.fa-floppy-o:before {
  content: "\f0c7";
}

.fa-square:before {
  content: "\f0c8";
}

.fa-navicon:before,
.fa-reorder:before,
.fa-bars:before {
  content: "\f0c9";
}

.fa-list-ul:before {
  content: "\f0ca";
}

.fa-list-ol:before {
  content: "\f0cb";
}

.fa-strikethrough:before {
  content: "\f0cc";
}

.fa-underline:before {
  content: "\f0cd";
}

.fa-table:before {
  content: "\f0ce";
}

.fa-magic:before {
  content: "\f0d0";
}

.fa-truck:before {
  content: "\f0d1";
}

.fa-pinterest:before {
  content: "\f0d2";
}

.fa-pinterest-square:before {
  content: "\f0d3";
}

.fa-google-plus-square:before {
  content: "\f0d4";
}

.fa-google-plus:before {
  content: "\f0d5";
}

.fa-money:before {
  content: "\f0d6";
}

.fa-caret-down:before {
  content: "\f0d7";
}

.fa-caret-up:before {
  content: "\f0d8";
}

.fa-caret-left:before {
  content: "\f0d9";
}

.fa-caret-right:before {
  content: "\f0da";
}

.fa-columns:before {
  content: "\f0db";
}

.fa-unsorted:before,
.fa-sort:before {
  content: "\f0dc";
}

.fa-sort-down:before,
.fa-sort-desc:before {
  content: "\f0dd";
}

.fa-sort-up:before,
.fa-sort-asc:before {
  content: "\f0de";
}

.fa-envelope:before {
  content: "\f0e0";
}

.fa-linkedin:before {
  content: "\f0e1";
}

.fa-rotate-left:before,
.fa-undo:before {
  content: "\f0e2";
}

.fa-legal:before,
.fa-gavel:before {
  content: "\f0e3";
}

.fa-dashboard:before,
.fa-tachometer:before {
  content: "\f0e4";
}

.fa-comment-o:before {
  content: "\f0e5";
}

.fa-comments-o:before {
  content: "\f0e6";
}

.fa-flash:before,
.fa-bolt:before {
  content: "\f0e7";
}

.fa-sitemap:before {
  content: "\f0e8";
}

.fa-umbrella:before {
  content: "\f0e9";
}

.fa-paste:before,
.fa-clipboard:before {
  content: "\f0ea";
}

.fa-lightbulb-o:before {
  content: "\f0eb";
}

.fa-exchange:before {
  content: "\f0ec";
}

.fa-cloud-download:before {
  content: "\f0ed";
}

.fa-cloud-upload:before {
  content: "\f0ee";
}

.fa-user-md:before {
  content: "\f0f0";
}

.fa-stethoscope:before {
  content: "\f0f1";
}

.fa-suitcase:before {
  content: "\f0f2";
}

.fa-bell-o:before {
  content: "\f0a2";
}

.fa-coffee:before {
  content: "\f0f4";
}

.fa-cutlery:before {
  content: "\f0f5";
}

.fa-file-text-o:before {
  content: "\f0f6";
}

.fa-building-o:before {
  content: "\f0f7";
}

.fa-hospital-o:before {
  content: "\f0f8";
}

.fa-ambulance:before {
  content: "\f0f9";
}

.fa-medkit:before {
  content: "\f0fa";
}

.fa-fighter-jet:before {
  content: "\f0fb";
}

.fa-beer:before {
  content: "\f0fc";
}

.fa-h-square:before {
  content: "\f0fd";
}

.fa-plus-square:before {
  content: "\f0fe";
}

.fa-angle-double-left:before {
  content: "\f100";
}

.fa-angle-double-right:before {
  content: "\f101";
}

.fa-angle-double-up:before {
  content: "\f102";
}

.fa-angle-double-down:before {
  content: "\f103";
}

.fa-angle-left:before {
  content: "\f104";
}

.fa-angle-right:before {
  content: "\f105";
}

.fa-angle-up:before {
  content: "\f106";
}

.fa-angle-down:before {
  content: "\f107";
}

.fa-desktop:before {
  content: "\f108";
}

.fa-laptop:before {
  content: "\f109";
}

.fa-tablet:before {
  content: "\f10a";
}

.fa-mobile-phone:before,
.fa-mobile:before {
  content: "\f10b";
}

.fa-circle-o:before {
  content: "\f10c";
}

.fa-quote-left:before {
  content: "\f10d";
}

.fa-quote-right:before {
  content: "\f10e";
}

.fa-spinner:before {
  content: "\f110";
}

.fa-circle:before {
  content: "\f111";
}

.fa-mail-reply:before,
.fa-reply:before {
  content: "\f112";
}

.fa-github-alt:before {
  content: "\f113";
}

.fa-folder-o:before {
  content: "\f114";
}

.fa-folder-open-o:before {
  content: "\f115";
}

.fa-smile-o:before {
  content: "\f118";
}

.fa-frown-o:before {
  content: "\f119";
}

.fa-meh-o:before {
  content: "\f11a";
}

.fa-gamepad:before {
  content: "\f11b";
}

.fa-keyboard-o:before {
  content: "\f11c";
}

.fa-flag-o:before {
  content: "\f11d";
}

.fa-flag-checkered:before {
  content: "\f11e";
}

.fa-terminal:before {
  content: "\f120";
}

.fa-code:before {
  content: "\f121";
}

.fa-mail-reply-all:before,
.fa-reply-all:before {
  content: "\f122";
}

.fa-star-half-empty:before,
.fa-star-half-full:before,
.fa-star-half-o:before {
  content: "\f123";
}

.fa-location-arrow:before {
  content: "\f124";
}

.fa-crop:before {
  content: "\f125";
}

.fa-code-fork:before {
  content: "\f126";
}

.fa-unlink:before,
.fa-chain-broken:before {
  content: "\f127";
}

.fa-question:before {
  content: "\f128";
}

.fa-info:before {
  content: "\f129";
}

.fa-exclamation:before {
  content: "\f12a";
}

.fa-superscript:before {
  content: "\f12b";
}

.fa-subscript:before {
  content: "\f12c";
}

.fa-eraser:before {
  content: "\f12d";
}

.fa-puzzle-piece:before {
  content: "\f12e";
}

.fa-microphone:before {
  content: "\f130";
}

.fa-microphone-slash:before {
  content: "\f131";
}

.fa-shield:before {
  content: "\f132";
}

.fa-calendar-o:before {
  content: "\f133";
}

.fa-fire-extinguisher:before {
  content: "\f134";
}

.fa-rocket:before {
  content: "\f135";
}

.fa-maxcdn:before {
  content: "\f136";
}

.fa-chevron-circle-left:before {
  content: "\f137";
}

.fa-chevron-circle-right:before {
  content: "\f138";
}

.fa-chevron-circle-up:before {
  content: "\f139";
}

.fa-chevron-circle-down:before {
  content: "\f13a";
}

.fa-html5:before {
  content: "\f13b";
}

.fa-css3:before {
  content: "\f13c";
}

.fa-anchor:before {
  content: "\f13d";
}

.fa-unlock-alt:before {
  content: "\f13e";
}

.fa-bullseye:before {
  content: "\f140";
}

.fa-ellipsis-h:before {
  content: "\f141";
}

.fa-ellipsis-v:before {
  content: "\f142";
}

.fa-rss-square:before {
  content: "\f143";
}

.fa-play-circle:before {
  content: "\f144";
}

.fa-ticket:before {
  content: "\f145";
}

.fa-minus-square:before {
  content: "\f146";
}

.fa-minus-square-o:before {
  content: "\f147";
}

.fa-level-up:before {
  content: "\f148";
}

.fa-level-down:before {
  content: "\f149";
}

.fa-check-square:before {
  content: "\f14a";
}

.fa-pencil-square:before {
  content: "\f14b";
}

.fa-external-link-square:before {
  content: "\f14c";
}

.fa-share-square:before {
  content: "\f14d";
}

.fa-compass:before {
  content: "\f14e";
}

.fa-toggle-down:before,
.fa-caret-square-o-down:before {
  content: "\f150";
}

.fa-toggle-up:before,
.fa-caret-square-o-up:before {
  content: "\f151";
}

.fa-toggle-right:before,
.fa-caret-square-o-right:before {
  content: "\f152";
}

.fa-euro:before,
.fa-eur:before {
  content: "\f153";
}

.fa-gbp:before {
  content: "\f154";
}

.fa-dollar:before,
.fa-usd:before {
  content: "\f155";
}

.fa-rupee:before,
.fa-inr:before {
  content: "\f156";
}

.fa-cny:before,
.fa-rmb:before,
.fa-yen:before,
.fa-jpy:before {
  content: "\f157";
}

.fa-ruble:before,
.fa-rouble:before,
.fa-rub:before {
  content: "\f158";
}

.fa-won:before,
.fa-krw:before {
  content: "\f159";
}

.fa-bitcoin:before,
.fa-btc:before {
  content: "\f15a";
}

.fa-file:before {
  content: "\f15b";
}

.fa-file-text:before {
  content: "\f15c";
}

.fa-sort-alpha-asc:before {
  content: "\f15d";
}

.fa-sort-alpha-desc:before {
  content: "\f15e";
}

.fa-sort-amount-asc:before {
  content: "\f160";
}

.fa-sort-amount-desc:before {
  content: "\f161";
}

.fa-sort-numeric-asc:before {
  content: "\f162";
}

.fa-sort-numeric-desc:before {
  content: "\f163";
}

.fa-thumbs-up:before {
  content: "\f164";
}

.fa-thumbs-down:before {
  content: "\f165";
}

.fa-youtube-square:before {
  content: "\f166";
}

.fa-youtube:before {
  content: "\f167";
}

.fa-xing:before {
  content: "\f168";
}

.fa-xing-square:before {
  content: "\f169";
}

.fa-youtube-play:before {
  content: "\f16a";
}

.fa-dropbox:before {
  content: "\f16b";
}

.fa-stack-overflow:before {
  content: "\f16c";
}

.fa-instagram:before {
  content: "\f16d";
}

.fa-flickr:before {
  content: "\f16e";
}

.fa-adn:before {
  content: "\f170";
}

.fa-bitbucket:before {
  content: "\f171";
}

.fa-bitbucket-square:before {
  content: "\f172";
}

.fa-tumblr:before {
  content: "\f173";
}

.fa-tumblr-square:before {
  content: "\f174";
}

.fa-long-arrow-down:before {
  content: "\f175";
}

.fa-long-arrow-up:before {
  content: "\f176";
}

.fa-long-arrow-left:before {
  content: "\f177";
}

.fa-long-arrow-right:before {
  content: "\f178";
}

.fa-apple:before {
  content: "\f179";
}

.fa-windows:before {
  content: "\f17a";
}

.fa-android:before {
  content: "\f17b";
}

.fa-linux:before {
  content: "\f17c";
}

.fa-dribbble:before {
  content: "\f17d";
}

.fa-skype:before {
  content: "\f17e";
}

.fa-foursquare:before {
  content: "\f180";
}

.fa-trello:before {
  content: "\f181";
}

.fa-female:before {
  content: "\f182";
}

.fa-male:before {
  content: "\f183";
}

.fa-gittip:before,
.fa-gratipay:before {
  content: "\f184";
}

.fa-sun-o:before {
  content: "\f185";
}

.fa-moon-o:before {
  content: "\f186";
}

.fa-archive:before {
  content: "\f187";
}

.fa-bug:before {
  content: "\f188";
}

.fa-vk:before {
  content: "\f189";
}

.fa-weibo:before {
  content: "\f18a";
}

.fa-renren:before {
  content: "\f18b";
}

.fa-pagelines:before {
  content: "\f18c";
}

.fa-stack-exchange:before {
  content: "\f18d";
}

.fa-arrow-circle-o-right:before {
  content: "\f18e";
}

.fa-arrow-circle-o-left:before {
  content: "\f190";
}

.fa-toggle-left:before,
.fa-caret-square-o-left:before {
  content: "\f191";
}

.fa-dot-circle-o:before {
  content: "\f192";
}

.fa-wheelchair:before {
  content: "\f193";
}

.fa-vimeo-square:before {
  content: "\f194";
}

.fa-turkish-lira:before,
.fa-try:before {
  content: "\f195";
}

.fa-plus-square-o:before {
  content: "\f196";
}

.fa-space-shuttle:before {
  content: "\f197";
}

.fa-slack:before {
  content: "\f198";
}

.fa-envelope-square:before {
  content: "\f199";
}

.fa-wordpress:before {
  content: "\f19a";
}

.fa-openid:before {
  content: "\f19b";
}

.fa-institution:before,
.fa-bank:before,
.fa-university:before {
  content: "\f19c";
}

.fa-mortar-board:before,
.fa-graduation-cap:before {
  content: "\f19d";
}

.fa-yahoo:before {
  content: "\f19e";
}

.fa-google:before {
  content: "\f1a0";
}

.fa-reddit:before {
  content: "\f1a1";
}

.fa-reddit-square:before {
  content: "\f1a2";
}

.fa-stumbleupon-circle:before {
  content: "\f1a3";
}

.fa-stumbleupon:before {
  content: "\f1a4";
}

.fa-delicious:before {
  content: "\f1a5";
}

.fa-digg:before {
  content: "\f1a6";
}

.fa-pied-piper:before {
  content: "\f1a7";
}

.fa-pied-piper-alt:before {
  content: "\f1a8";
}

.fa-drupal:before {
  content: "\f1a9";
}

.fa-joomla:before {
  content: "\f1aa";
}

.fa-language:before {
  content: "\f1ab";
}

.fa-fax:before {
  content: "\f1ac";
}

.fa-building:before {
  content: "\f1ad";
}

.fa-child:before {
  content: "\f1ae";
}

.fa-paw:before {
  content: "\f1b0";
}

.fa-spoon:before {
  content: "\f1b1";
}

.fa-cube:before {
  content: "\f1b2";
}

.fa-cubes:before {
  content: "\f1b3";
}

.fa-behance:before {
  content: "\f1b4";
}

.fa-behance-square:before {
  content: "\f1b5";
}

.fa-steam:before {
  content: "\f1b6";
}

.fa-steam-square:before {
  content: "\f1b7";
}

.fa-recycle:before {
  content: "\f1b8";
}

.fa-automobile:before,
.fa-car:before {
  content: "\f1b9";
}

.fa-cab:before,
.fa-taxi:before {
  content: "\f1ba";
}

.fa-tree:before {
  content: "\f1bb";
}

.fa-spotify:before {
  content: "\f1bc";
}

.fa-deviantart:before {
  content: "\f1bd";
}

.fa-soundcloud:before {
  content: "\f1be";
}

.fa-database:before {
  content: "\f1c0";
}

.fa-file-pdf-o:before {
  content: "\f1c1";
}

.fa-file-word-o:before {
  content: "\f1c2";
}

.fa-file-excel-o:before {
  content: "\f1c3";
}

.fa-file-powerpoint-o:before {
  content: "\f1c4";
}

.fa-file-photo-o:before,
.fa-file-picture-o:before,
.fa-file-image-o:before {
  content: "\f1c5";
}

.fa-file-zip-o:before,
.fa-file-archive-o:before {
  content: "\f1c6";
}

.fa-file-sound-o:before,
.fa-file-audio-o:before {
  content: "\f1c7";
}

.fa-file-movie-o:before,
.fa-file-video-o:before {
  content: "\f1c8";
}

.fa-file-code-o:before {
  content: "\f1c9";
}

.fa-vine:before {
  content: "\f1ca";
}

.fa-codepen:before {
  content: "\f1cb";
}

.fa-jsfiddle:before {
  content: "\f1cc";
}

.fa-life-bouy:before,
.fa-life-buoy:before,
.fa-life-saver:before,
.fa-support:before,
.fa-life-ring:before {
  content: "\f1cd";
}

.fa-circle-o-notch:before {
  content: "\f1ce";
}

.fa-ra:before,
.fa-rebel:before {
  content: "\f1d0";
}

.fa-ge:before,
.fa-empire:before {
  content: "\f1d1";
}

.fa-git-square:before {
  content: "\f1d2";
}

.fa-git:before {
  content: "\f1d3";
}

.fa-y-combinator-square:before,
.fa-yc-square:before,
.fa-hacker-news:before {
  content: "\f1d4";
}

.fa-tencent-weibo:before {
  content: "\f1d5";
}

.fa-qq:before {
  content: "\f1d6";
}

.fa-wechat:before,
.fa-weixin:before {
  content: "\f1d7";
}

.fa-send:before,
.fa-paper-plane:before {
  content: "\f1d8";
}

.fa-send-o:before,
.fa-paper-plane-o:before {
  content: "\f1d9";
}

.fa-history:before {
  content: "\f1da";
}

.fa-circle-thin:before {
  content: "\f1db";
}

.fa-header:before {
  content: "\f1dc";
}

.fa-paragraph:before {
  content: "\f1dd";
}

.fa-sliders:before {
  content: "\f1de";
}

.fa-share-alt:before {
  content: "\f1e0";
}

.fa-share-alt-square:before {
  content: "\f1e1";
}

.fa-bomb:before {
  content: "\f1e2";
}

.fa-soccer-ball-o:before,
.fa-futbol-o:before {
  content: "\f1e3";
}

.fa-tty:before {
  content: "\f1e4";
}

.fa-binoculars:before {
  content: "\f1e5";
}

.fa-plug:before {
  content: "\f1e6";
}

.fa-slideshare:before {
  content: "\f1e7";
}

.fa-twitch:before {
  content: "\f1e8";
}

.fa-yelp:before {
  content: "\f1e9";
}

.fa-newspaper-o:before {
  content: "\f1ea";
}

.fa-wifi:before {
  content: "\f1eb";
}

.fa-calculator:before {
  content: "\f1ec";
}

.fa-paypal:before {
  content: "\f1ed";
}

.fa-google-wallet:before {
  content: "\f1ee";
}

.fa-cc-visa:before {
  content: "\f1f0";
}

.fa-cc-mastercard:before {
  content: "\f1f1";
}

.fa-cc-discover:before {
  content: "\f1f2";
}

.fa-cc-amex:before {
  content: "\f1f3";
}

.fa-cc-paypal:before {
  content: "\f1f4";
}

.fa-cc-stripe:before {
  content: "\f1f5";
}

.fa-bell-slash:before {
  content: "\f1f6";
}

.fa-bell-slash-o:before {
  content: "\f1f7";
}

.fa-trash:before {
  content: "\f1f8";
}

.fa-copyright:before {
  content: "\f1f9";
}

.fa-at:before {
  content: "\f1fa";
}

.fa-eyedropper:before {
  content: "\f1fb";
}

.fa-paint-brush:before {
  content: "\f1fc";
}

.fa-birthday-cake:before {
  content: "\f1fd";
}

.fa-area-chart:before {
  content: "\f1fe";
}

.fa-pie-chart:before {
  content: "\f200";
}

.fa-line-chart:before {
  content: "\f201";
}

.fa-lastfm:before {
  content: "\f202";
}

.fa-lastfm-square:before {
  content: "\f203";
}

.fa-toggle-off:before {
  content: "\f204";
}

.fa-toggle-on:before {
  content: "\f205";
}

.fa-bicycle:before {
  content: "\f206";
}

.fa-bus:before {
  content: "\f207";
}

.fa-ioxhost:before {
  content: "\f208";
}

.fa-angellist:before {
  content: "\f209";
}

.fa-cc:before {
  content: "\f20a";
}

.fa-shekel:before,
.fa-sheqel:before,
.fa-ils:before {
  content: "\f20b";
}

.fa-meanpath:before {
  content: "\f20c";
}

.fa-buysellads:before {
  content: "\f20d";
}

.fa-connectdevelop:before {
  content: "\f20e";
}

.fa-dashcube:before {
  content: "\f210";
}

.fa-forumbee:before {
  content: "\f211";
}

.fa-leanpub:before {
  content: "\f212";
}

.fa-sellsy:before {
  content: "\f213";
}

.fa-shirtsinbulk:before {
  content: "\f214";
}

.fa-simplybuilt:before {
  content: "\f215";
}

.fa-skyatlas:before {
  content: "\f216";
}

.fa-cart-plus:before {
  content: "\f217";
}

.fa-cart-arrow-down:before {
  content: "\f218";
}

.fa-diamond:before {
  content: "\f219";
}

.fa-ship:before {
  content: "\f21a";
}

.fa-user-secret:before {
  content: "\f21b";
}

.fa-motorcycle:before {
  content: "\f21c";
}

.fa-street-view:before {
  content: "\f21d";
}

.fa-heartbeat:before {
  content: "\f21e";
}

.fa-venus:before {
  content: "\f221";
}

.fa-mars:before {
  content: "\f222";
}

.fa-mercury:before {
  content: "\f223";
}

.fa-intersex:before,
.fa-transgender:before {
  content: "\f224";
}

.fa-transgender-alt:before {
  content: "\f225";
}

.fa-venus-double:before {
  content: "\f226";
}

.fa-mars-double:before {
  content: "\f227";
}

.fa-venus-mars:before {
  content: "\f228";
}

.fa-mars-stroke:before {
  content: "\f229";
}

.fa-mars-stroke-v:before {
  content: "\f22a";
}

.fa-mars-stroke-h:before {
  content: "\f22b";
}

.fa-neuter:before {
  content: "\f22c";
}

.fa-genderless:before {
  content: "\f22d";
}

.fa-facebook-official:before {
  content: "\f230";
}

.fa-pinterest-p:before {
  content: "\f231";
}

.fa-whatsapp:before {
  content: "\f232";
}

.fa-server:before {
  content: "\f233";
}

.fa-user-plus:before {
  content: "\f234";
}

.fa-user-times:before {
  content: "\f235";
}

.fa-hotel:before,
.fa-bed:before {
  content: "\f236";
}

.fa-viacoin:before {
  content: "\f237";
}

.fa-train:before {
  content: "\f238";
}

.fa-subway:before {
  content: "\f239";
}

.fa-medium:before {
  content: "\f23a";
}

.fa-yc:before,
.fa-y-combinator:before {
  content: "\f23b";
}

.fa-optin-monster:before {
  content: "\f23c";
}

.fa-opencart:before {
  content: "\f23d";
}

.fa-expeditedssl:before {
  content: "\f23e";
}

.fa-battery-4:before,
.fa-battery-full:before {
  content: "\f240";
}

.fa-battery-3:before,
.fa-battery-three-quarters:before {
  content: "\f241";
}

.fa-battery-2:before,
.fa-battery-half:before {
  content: "\f242";
}

.fa-battery-1:before,
.fa-battery-quarter:before {
  content: "\f243";
}

.fa-battery-0:before,
.fa-battery-empty:before {
  content: "\f244";
}

.fa-mouse-pointer:before {
  content: "\f245";
}

.fa-i-cursor:before {
  content: "\f246";
}

.fa-object-group:before {
  content: "\f247";
}

.fa-object-ungroup:before {
  content: "\f248";
}

.fa-sticky-note:before {
  content: "\f249";
}

.fa-sticky-note-o:before {
  content: "\f24a";
}

.fa-cc-jcb:before {
  content: "\f24b";
}

.fa-cc-diners-club:before {
  content: "\f24c";
}

.fa-clone:before {
  content: "\f24d";
}

.fa-balance-scale:before {
  content: "\f24e";
}

.fa-hourglass-o:before {
  content: "\f250";
}

.fa-hourglass-1:before,
.fa-hourglass-start:before {
  content: "\f251";
}

.fa-hourglass-2:before,
.fa-hourglass-half:before {
  content: "\f252";
}

.fa-hourglass-3:before,
.fa-hourglass-end:before {
  content: "\f253";
}

.fa-hourglass:before {
  content: "\f254";
}

.fa-hand-grab-o:before,
.fa-hand-rock-o:before {
  content: "\f255";
}

.fa-hand-stop-o:before,
.fa-hand-paper-o:before {
  content: "\f256";
}

.fa-hand-scissors-o:before {
  content: "\f257";
}

.fa-hand-lizard-o:before {
  content: "\f258";
}

.fa-hand-spock-o:before {
  content: "\f259";
}

.fa-hand-pointer-o:before {
  content: "\f25a";
}

.fa-hand-peace-o:before {
  content: "\f25b";
}

.fa-trademark:before {
  content: "\f25c";
}

.fa-registered:before {
  content: "\f25d";
}

.fa-creative-commons:before {
  content: "\f25e";
}

.fa-gg:before {
  content: "\f260";
}

.fa-gg-circle:before {
  content: "\f261";
}

.fa-tripadvisor:before {
  content: "\f262";
}

.fa-odnoklassniki:before {
  content: "\f263";
}

.fa-odnoklassniki-square:before {
  content: "\f264";
}

.fa-get-pocket:before {
  content: "\f265";
}

.fa-wikipedia-w:before {
  content: "\f266";
}

.fa-safari:before {
  content: "\f267";
}

.fa-chrome:before {
  content: "\f268";
}

.fa-firefox:before {
  content: "\f269";
}

.fa-opera:before {
  content: "\f26a";
}

.fa-internet-explorer:before {
  content: "\f26b";
}

.fa-tv:before,
.fa-television:before {
  content: "\f26c";
}

.fa-contao:before {
  content: "\f26d";
}

.fa-500px:before {
  content: "\f26e";
}

.fa-amazon:before {
  content: "\f270";
}

.fa-calendar-plus-o:before {
  content: "\f271";
}

.fa-calendar-minus-o:before {
  content: "\f272";
}

.fa-calendar-times-o:before {
  content: "\f273";
}

.fa-calendar-check-o:before {
  content: "\f274";
}

.fa-industry:before {
  content: "\f275";
}

.fa-map-pin:before {
  content: "\f276";
}

.fa-map-signs:before {
  content: "\f277";
}

.fa-map-o:before {
  content: "\f278";
}

.fa-map:before {
  content: "\f279";
}

.fa-commenting:before {
  content: "\f27a";
}

.fa-commenting-o:before {
  content: "\f27b";
}

.fa-houzz:before {
  content: "\f27c";
}

.fa-vimeo:before {
  content: "\f27d";
}

.fa-black-tie:before {
  content: "\f27e";
}

.fa-fonticons:before {
  content: "\f280";
}

.fa-reddit-alien:before {
  content: "\f281";
}

.fa-edge:before {
  content: "\f282";
}

.fa-credit-card-alt:before {
  content: "\f283";
}

.fa-codiepie:before {
  content: "\f284";
}

.fa-modx:before {
  content: "\f285";
}

.fa-fort-awesome:before {
  content: "\f286";
}

.fa-usb:before {
  content: "\f287";
}

.fa-product-hunt:before {
  content: "\f288";
}

.fa-mixcloud:before {
  content: "\f289";
}

.fa-scribd:before {
  content: "\f28a";
}

.fa-pause-circle:before {
  content: "\f28b";
}

.fa-pause-circle-o:before {
  content: "\f28c";
}

.fa-stop-circle:before {
  content: "\f28d";
}

.fa-stop-circle-o:before {
  content: "\f28e";
}

.fa-shopping-bag:before {
  content: "\f290";
}

.fa-shopping-basket:before {
  content: "\f291";
}

.fa-hashtag:before {
  content: "\f292";
}

.fa-bluetooth:before {
  content: "\f293";
}

.fa-bluetooth-b:before {
  content: "\f294";
}

.fa-percent:before {
  content: "\f295";
}

[class*='fa-']:before {
  font-weight: 400;
  font-family: 'FontAwesome';
}

@font-face {
  font-family: "Material Design Icons";
  src: url("../fonts/materialdesignicons-webfont14e6.eot?v=1.4.57");
  src: url("../fonts/materialdesignicons-webfontd41d.eot?#iefix&v=1.4.57") format("embedded-opentype"), url("../fonts/materialdesignicons-webfont14e6.woff2?v=1.4.57") format("woff2"), url("../fonts/materialdesignicons-webfont14e6.woff?v=1.4.57") format("woff"), url("../fonts/materialdesignicons-webfont14e6.ttf?v=1.4.57") format("truetype"), url("../fonts/materialdesignicons-webfont14e6.svg?v=1.4.57#materialdesigniconsregular") format("svg");
  font-weight: normal;
  font-style: normal;
}

.mdi {
  display: inline-block;
  font: normal normal normal 24px/1 "Material Design Icons";
  font-size: inherit;
  text-rendering: auto;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  transform: translate(0, 0);
}

.mdi-access-point:before {
  content: "\f101";
}

.mdi-access-point-network:before {
  content: "\f102";
}

.mdi-account:before {
  content: "\f103";
}

.mdi-account-alert:before {
  content: "\f104";
}

.mdi-account-box:before {
  content: "\f105";
}

.mdi-account-box-outline:before {
  content: "\f106";
}

.mdi-account-check:before {
  content: "\f107";
}

.mdi-account-circle:before {
  content: "\f108";
}

.mdi-account-convert:before {
  content: "\f109";
}

.mdi-account-key:before {
  content: "\f10a";
}

.mdi-account-location:before {
  content: "\f10b";
}

.mdi-account-minus:before {
  content: "\f10c";
}

.mdi-account-multiple:before {
  content: "\f10d";
}

.mdi-account-multiple-outline:before {
  content: "\f10e";
}

.mdi-account-multiple-plus:before {
  content: "\f10f";
}

.mdi-account-network:before {
  content: "\f110";
}

.mdi-account-off:before {
  content: "\f111";
}

.mdi-account-outline:before {
  content: "\f112";
}

.mdi-account-plus:before {
  content: "\f113";
}

.mdi-account-remove:before {
  content: "\f114";
}

.mdi-account-search:before {
  content: "\f115";
}

.mdi-account-star:before {
  content: "\f116";
}

.mdi-account-star-variant:before {
  content: "\f117";
}

.mdi-account-switch:before {
  content: "\f118";
}

.mdi-adjust:before {
  content: "\f119";
}

.mdi-air-conditioner:before {
  content: "\f11a";
}

.mdi-airballoon:before {
  content: "\f11b";
}

.mdi-airplane:before {
  content: "\f11c";
}

.mdi-airplane-off:before {
  content: "\f11d";
}

.mdi-airplay:before {
  content: "\f11e";
}

.mdi-alarm:before {
  content: "\f11f";
}

.mdi-alarm-check:before {
  content: "\f120";
}

.mdi-alarm-multiple:before {
  content: "\f121";
}

.mdi-alarm-off:before {
  content: "\f122";
}

.mdi-alarm-plus:before {
  content: "\f123";
}

.mdi-album:before {
  content: "\f124";
}

.mdi-alert:before {
  content: "\f125";
}

.mdi-alert-box:before {
  content: "\f126";
}

.mdi-alert-circle:before {
  content: "\f127";
}

.mdi-alert-octagon:before {
  content: "\f128";
}

.mdi-alert-outline:before {
  content: "\f129";
}

.mdi-alpha:before {
  content: "\f12a";
}

.mdi-alphabetical:before {
  content: "\f12b";
}

.mdi-amazon:before {
  content: "\f12c";
}

.mdi-amazon-clouddrive:before {
  content: "\f12d";
}

.mdi-ambulance:before {
  content: "\f12e";
}

.mdi-anchor:before {
  content: "\f12f";
}

.mdi-android:before {
  content: "\f130";
}

.mdi-android-debug-bridge:before {
  content: "\f131";
}

.mdi-android-studio:before {
  content: "\f132";
}

.mdi-apple:before {
  content: "\f133";
}

.mdi-apple-finder:before {
  content: "\f134";
}

.mdi-apple-ios:before {
  content: "\f135";
}

.mdi-apple-mobileme:before {
  content: "\f136";
}

.mdi-apple-safari:before {
  content: "\f137";
}

.mdi-appnet:before {
  content: "\f138";
}

.mdi-apps:before {
  content: "\f139";
}

.mdi-archive:before {
  content: "\f13a";
}

.mdi-arrange-bring-forward:before {
  content: "\f13b";
}

.mdi-arrange-bring-to-front:before {
  content: "\f13c";
}

.mdi-arrange-send-backward:before {
  content: "\f13d";
}

.mdi-arrange-send-to-back:before {
  content: "\f13e";
}

.mdi-arrow-all:before {
  content: "\f13f";
}

.mdi-arrow-bottom-drop-circle:before {
  content: "\f140";
}

.mdi-arrow-bottom-left:before {
  content: "\f141";
}

.mdi-arrow-bottom-right:before {
  content: "\f142";
}

.mdi-arrow-collapse:before {
  content: "\f143";
}

.mdi-arrow-down:before {
  content: "\f144";
}

.mdi-arrow-down-bold:before {
  content: "\f145";
}

.mdi-arrow-down-bold-circle:before {
  content: "\f146";
}

.mdi-arrow-down-bold-circle-outline:before {
  content: "\f147";
}

.mdi-arrow-down-bold-hexagon-outline:before {
  content: "\f148";
}

.mdi-arrow-expand:before {
  content: "\f149";
}

.mdi-arrow-left:before {
  content: "\f14a";
}

.mdi-arrow-left-bold:before {
  content: "\f14b";
}

.mdi-arrow-left-bold-circle:before {
  content: "\f14c";
}

.mdi-arrow-left-bold-circle-outline:before {
  content: "\f14d";
}

.mdi-arrow-left-bold-hexagon-outline:before {
  content: "\f14e";
}

.mdi-arrow-right:before {
  content: "\f14f";
}

.mdi-arrow-right-bold:before {
  content: "\f150";
}

.mdi-arrow-right-bold-circle:before {
  content: "\f151";
}

.mdi-arrow-right-bold-circle-outline:before {
  content: "\f152";
}

.mdi-arrow-right-bold-hexagon-outline:before {
  content: "\f153";
}

.mdi-arrow-top-left:before {
  content: "\f154";
}

.mdi-arrow-top-right:before {
  content: "\f155";
}

.mdi-arrow-up:before {
  content: "\f156";
}

.mdi-arrow-up-bold:before {
  content: "\f157";
}

.mdi-arrow-up-bold-circle:before {
  content: "\f158";
}

.mdi-arrow-up-bold-circle-outline:before {
  content: "\f159";
}

.mdi-arrow-up-bold-hexagon-outline:before {
  content: "\f15a";
}

.mdi-assistant:before {
  content: "\f15b";
}

.mdi-at:before {
  content: "\f15c";
}

.mdi-attachment:before {
  content: "\f15d";
}

.mdi-audiobook:before {
  content: "\f15e";
}

.mdi-auto-fix:before {
  content: "\f15f";
}

.mdi-auto-upload:before {
  content: "\f160";
}

.mdi-autorenew:before {
  content: "\f161";
}

.mdi-av-timer:before {
  content: "\f162";
}

.mdi-baby:before {
  content: "\f163";
}

.mdi-backburger:before {
  content: "\f164";
}

.mdi-backspace:before {
  content: "\f165";
}

.mdi-backup-restore:before {
  content: "\f166";
}

.mdi-bank:before {
  content: "\f167";
}

.mdi-barcode:before {
  content: "\f168";
}

.mdi-barcode-scan:before {
  content: "\f169";
}

.mdi-barley:before {
  content: "\f16a";
}

.mdi-barrel:before {
  content: "\f16b";
}

.mdi-basecamp:before {
  content: "\f16c";
}

.mdi-basket:before {
  content: "\f16d";
}

.mdi-basket-fill:before {
  content: "\f16e";
}

.mdi-basket-unfill:before {
  content: "\f16f";
}

.mdi-battery:before {
  content: "\f170";
}

.mdi-battery-10:before {
  content: "\f171";
}

.mdi-battery-20:before {
  content: "\f172";
}

.mdi-battery-30:before {
  content: "\f173";
}

.mdi-battery-40:before {
  content: "\f174";
}

.mdi-battery-50:before {
  content: "\f175";
}

.mdi-battery-60:before {
  content: "\f176";
}

.mdi-battery-70:before {
  content: "\f177";
}

.mdi-battery-80:before {
  content: "\f178";
}

.mdi-battery-90:before {
  content: "\f179";
}

.mdi-battery-alert:before {
  content: "\f17a";
}

.mdi-battery-charging:before {
  content: "\f17b";
}

.mdi-battery-charging-100:before {
  content: "\f17c";
}

.mdi-battery-charging-20:before {
  content: "\f17d";
}

.mdi-battery-charging-30:before {
  content: "\f17e";
}

.mdi-battery-charging-40:before {
  content: "\f17f";
}

.mdi-battery-charging-60:before {
  content: "\f180";
}

.mdi-battery-charging-80:before {
  content: "\f181";
}

.mdi-battery-charging-90:before {
  content: "\f182";
}

.mdi-battery-minus:before {
  content: "\f183";
}

.mdi-battery-negative:before {
  content: "\f184";
}

.mdi-battery-outline:before {
  content: "\f185";
}

.mdi-battery-plus:before {
  content: "\f186";
}

.mdi-battery-positive:before {
  content: "\f187";
}

.mdi-battery-unknown:before {
  content: "\f188";
}

.mdi-beach:before {
  content: "\f189";
}

.mdi-beaker:before {
  content: "\f18a";
}

.mdi-beaker-empty:before {
  content: "\f18b";
}

.mdi-beaker-empty-outline:before {
  content: "\f18c";
}

.mdi-beaker-outline:before {
  content: "\f18d";
}

.mdi-beats:before {
  content: "\f18e";
}

.mdi-beer:before {
  content: "\f18f";
}

.mdi-behance:before {
  content: "\f190";
}

.mdi-bell:before {
  content: "\f191";
}

.mdi-bell-off:before {
  content: "\f192";
}

.mdi-bell-outline:before {
  content: "\f193";
}

.mdi-bell-plus:before {
  content: "\f194";
}

.mdi-bell-ring:before {
  content: "\f195";
}

.mdi-bell-ring-outline:before {
  content: "\f196";
}

.mdi-bell-sleep:before {
  content: "\f197";
}

.mdi-beta:before {
  content: "\f198";
}

.mdi-bike:before {
  content: "\f199";
}

.mdi-bing:before {
  content: "\f19a";
}

.mdi-binoculars:before {
  content: "\f19b";
}

.mdi-bio:before {
  content: "\f19c";
}

.mdi-biohazard:before {
  content: "\f19d";
}

.mdi-bitbucket:before {
  content: "\f19e";
}

.mdi-black-mesa:before {
  content: "\f19f";
}

.mdi-blackberry:before {
  content: "\f1a0";
}

.mdi-blender:before {
  content: "\f1a1";
}

.mdi-blinds:before {
  content: "\f1a2";
}

.mdi-block-helper:before {
  content: "\f1a3";
}

.mdi-blogger:before {
  content: "\f1a4";
}

.mdi-bluetooth:before {
  content: "\f1a5";
}

.mdi-bluetooth-audio:before {
  content: "\f1a6";
}

.mdi-bluetooth-connect:before {
  content: "\f1a7";
}

.mdi-bluetooth-off:before {
  content: "\f1a8";
}

.mdi-bluetooth-settings:before {
  content: "\f1a9";
}

.mdi-bluetooth-transfer:before {
  content: "\f1aa";
}

.mdi-blur:before {
  content: "\f1ab";
}

.mdi-blur-linear:before {
  content: "\f1ac";
}

.mdi-blur-off:before {
  content: "\f1ad";
}

.mdi-blur-radial:before {
  content: "\f1ae";
}

.mdi-bone:before {
  content: "\f1af";
}

.mdi-book:before {
  content: "\f1b0";
}

.mdi-book-multiple:before {
  content: "\f1b1";
}

.mdi-book-multiple-variant:before {
  content: "\f1b2";
}

.mdi-book-open:before {
  content: "\f1b3";
}

.mdi-book-open-variant:before {
  content: "\f1b4";
}

.mdi-book-variant:before {
  content: "\f1b5";
}

.mdi-bookmark:before {
  content: "\f1b6";
}

.mdi-bookmark-check:before {
  content: "\f1b7";
}

.mdi-bookmark-music:before {
  content: "\f1b8";
}

.mdi-bookmark-outline:before {
  content: "\f1b9";
}

.mdi-bookmark-outline-plus:before {
  content: "\f1ba";
}

.mdi-bookmark-plus:before {
  content: "\f1bb";
}

.mdi-bookmark-remove:before {
  content: "\f1bc";
}

.mdi-border-all:before {
  content: "\f1bd";
}

.mdi-border-bottom:before {
  content: "\f1be";
}

.mdi-border-color:before {
  content: "\f1bf";
}

.mdi-border-horizontal:before {
  content: "\f1c0";
}

.mdi-border-inside:before {
  content: "\f1c1";
}

.mdi-border-left:before {
  content: "\f1c2";
}

.mdi-border-none:before {
  content: "\f1c3";
}

.mdi-border-outside:before {
  content: "\f1c4";
}

.mdi-border-right:before {
  content: "\f1c5";
}

.mdi-border-style:before {
  content: "\f1c6";
}

.mdi-border-top:before {
  content: "\f1c7";
}

.mdi-border-vertical:before {
  content: "\f1c8";
}

.mdi-bowling:before {
  content: "\f1c9";
}

.mdi-box:before {
  content: "\f1ca";
}

.mdi-box-cutter:before {
  content: "\f1cb";
}

.mdi-briefcase:before {
  content: "\f1cc";
}

.mdi-briefcase-check:before {
  content: "\f1cd";
}

.mdi-briefcase-download:before {
  content: "\f1ce";
}

.mdi-briefcase-upload:before {
  content: "\f1cf";
}

.mdi-brightness-1:before {
  content: "\f1d0";
}

.mdi-brightness-2:before {
  content: "\f1d1";
}

.mdi-brightness-3:before {
  content: "\f1d2";
}

.mdi-brightness-4:before {
  content: "\f1d3";
}

.mdi-brightness-5:before {
  content: "\f1d4";
}

.mdi-brightness-6:before {
  content: "\f1d5";
}

.mdi-brightness-7:before {
  content: "\f1d6";
}

.mdi-brightness-auto:before {
  content: "\f1d7";
}

.mdi-broom:before {
  content: "\f1d8";
}

.mdi-brush:before {
  content: "\f1d9";
}

.mdi-bug:before {
  content: "\f1da";
}

.mdi-bulletin-board:before {
  content: "\f1db";
}

.mdi-bullhorn:before {
  content: "\f1dc";
}

.mdi-bus:before {
  content: "\f1dd";
}

.mdi-cached:before {
  content: "\f1de";
}

.mdi-cake:before {
  content: "\f1df";
}

.mdi-cake-layered:before {
  content: "\f1e0";
}

.mdi-cake-variant:before {
  content: "\f1e1";
}

.mdi-calculator:before {
  content: "\f1e2";
}

.mdi-calendar:before {
  content: "\f1e3";
}

.mdi-calendar-blank:before {
  content: "\f1e4";
}

.mdi-calendar-check:before {
  content: "\f1e5";
}

.mdi-calendar-clock:before {
  content: "\f1e6";
}

.mdi-calendar-multiple:before {
  content: "\f1e7";
}

.mdi-calendar-multiple-check:before {
  content: "\f1e8";
}

.mdi-calendar-plus:before {
  content: "\f1e9";
}

.mdi-calendar-remove:before {
  content: "\f1ea";
}

.mdi-calendar-text:before {
  content: "\f1eb";
}

.mdi-calendar-today:before {
  content: "\f1ec";
}

.mdi-call-made:before {
  content: "\f1ed";
}

.mdi-call-merge:before {
  content: "\f1ee";
}

.mdi-call-missed:before {
  content: "\f1ef";
}

.mdi-call-received:before {
  content: "\f1f0";
}

.mdi-call-split:before {
  content: "\f1f1";
}

.mdi-camcorder:before {
  content: "\f1f2";
}

.mdi-camcorder-box:before {
  content: "\f1f3";
}

.mdi-camcorder-box-off:before {
  content: "\f1f4";
}

.mdi-camcorder-off:before {
  content: "\f1f5";
}

.mdi-camera:before {
  content: "\f1f6";
}

.mdi-camera-enhance:before {
  content: "\f1f7";
}

.mdi-camera-front:before {
  content: "\f1f8";
}

.mdi-camera-front-variant:before {
  content: "\f1f9";
}

.mdi-camera-iris:before {
  content: "\f1fa";
}

.mdi-camera-party-mode:before {
  content: "\f1fb";
}

.mdi-camera-rear:before {
  content: "\f1fc";
}

.mdi-camera-rear-variant:before {
  content: "\f1fd";
}

.mdi-camera-switch:before {
  content: "\f1fe";
}

.mdi-camera-timer:before {
  content: "\f1ff";
}

.mdi-candycane:before {
  content: "\f200";
}

.mdi-car:before {
  content: "\f201";
}

.mdi-car-battery:before {
  content: "\f202";
}

.mdi-car-connected:before {
  content: "\f203";
}

.mdi-car-wash:before {
  content: "\f204";
}

.mdi-carrot:before {
  content: "\f205";
}

.mdi-cart:before {
  content: "\f206";
}

.mdi-cart-outline:before {
  content: "\f207";
}

.mdi-cart-plus:before {
  content: "\f208";
}

.mdi-case-sensitive-alt:before {
  content: "\f209";
}

.mdi-cash:before {
  content: "\f20a";
}

.mdi-cash-100:before {
  content: "\f20b";
}

.mdi-cash-multiple:before {
  content: "\f20c";
}

.mdi-cash-usd:before {
  content: "\f20d";
}

.mdi-cast:before {
  content: "\f20e";
}

.mdi-cast-connected:before {
  content: "\f20f";
}

.mdi-castle:before {
  content: "\f210";
}

.mdi-cat:before {
  content: "\f211";
}

.mdi-cellphone:before {
  content: "\f212";
}

.mdi-cellphone-android:before {
  content: "\f213";
}

.mdi-cellphone-basic:before {
  content: "\f214";
}

.mdi-cellphone-dock:before {
  content: "\f215";
}

.mdi-cellphone-iphone:before {
  content: "\f216";
}

.mdi-cellphone-link:before {
  content: "\f217";
}

.mdi-cellphone-link-off:before {
  content: "\f218";
}

.mdi-cellphone-settings:before {
  content: "\f219";
}

.mdi-certificate:before {
  content: "\f21a";
}

.mdi-chair-school:before {
  content: "\f21b";
}

.mdi-chart-arc:before {
  content: "\f21c";
}

.mdi-chart-areaspline:before {
  content: "\f21d";
}

.mdi-chart-bar:before {
  content: "\f21e";
}

.mdi-chart-histogram:before {
  content: "\f21f";
}

.mdi-chart-line:before {
  content: "\f220";
}

.mdi-chart-pie:before {
  content: "\f221";
}

.mdi-check:before {
  content: "\f222";
}

.mdi-check-all:before {
  content: "\f223";
}

.mdi-checkbox-blank:before {
  content: "\f224";
}

.mdi-checkbox-blank-circle:before {
  content: "\f225";
}

.mdi-checkbox-blank-circle-outline:before {
  content: "\f226";
}

.mdi-checkbox-blank-outline:before {
  content: "\f227";
}

.mdi-checkbox-marked:before {
  content: "\f228";
}

.mdi-checkbox-marked-circle:before {
  content: "\f229";
}

.mdi-checkbox-marked-circle-outline:before {
  content: "\f22a";
}

.mdi-checkbox-marked-outline:before {
  content: "\f22b";
}

.mdi-checkbox-multiple-blank:before {
  content: "\f22c";
}

.mdi-checkbox-multiple-blank-outline:before {
  content: "\f22d";
}

.mdi-checkbox-multiple-marked:before {
  content: "\f22e";
}

.mdi-checkbox-multiple-marked-outline:before {
  content: "\f22f";
}

.mdi-checkerboard:before {
  content: "\f230";
}

.mdi-chemical-weapon:before {
  content: "\f231";
}

.mdi-chevron-double-down:before {
  content: "\f232";
}

.mdi-chevron-double-left:before {
  content: "\f233";
}

.mdi-chevron-double-right:before {
  content: "\f234";
}

.mdi-chevron-double-up:before {
  content: "\f235";
}

.mdi-chevron-down:before {
  content: "\f236";
}

.mdi-chevron-left:before {
  content: "\f237";
}

.mdi-chevron-right:before {
  content: "\f238";
}

.mdi-chevron-up:before {
  content: "\f239";
}

.mdi-church:before {
  content: "\f23a";
}

.mdi-cisco-webex:before {
  content: "\f23b";
}

.mdi-city:before {
  content: "\f23c";
}

.mdi-clipboard:before {
  content: "\f23d";
}

.mdi-clipboard-account:before {
  content: "\f23e";
}

.mdi-clipboard-alert:before {
  content: "\f23f";
}

.mdi-clipboard-arrow-down:before {
  content: "\f240";
}

.mdi-clipboard-arrow-left:before {
  content: "\f241";
}

.mdi-clipboard-check:before {
  content: "\f242";
}

.mdi-clipboard-outline:before {
  content: "\f243";
}

.mdi-clipboard-text:before {
  content: "\f244";
}

.mdi-clippy:before {
  content: "\f245";
}

.mdi-clock:before {
  content: "\f246";
}

.mdi-clock-end:before {
  content: "\f247";
}

.mdi-clock-fast:before {
  content: "\f248";
}

.mdi-clock-in:before {
  content: "\f249";
}

.mdi-clock-out:before {
  content: "\f24a";
}

.mdi-clock-start:before {
  content: "\f24b";
}

.mdi-close:before {
  content: "\f24c";
}

.mdi-close-box:before {
  content: "\f24d";
}

.mdi-close-box-outline:before {
  content: "\f24e";
}

.mdi-close-circle:before {
  content: "\f24f";
}

.mdi-close-circle-outline:before {
  content: "\f250";
}

.mdi-close-network:before {
  content: "\f251";
}

.mdi-close-octagon:before {
  content: "\f252";
}

.mdi-close-octagon-outline:before {
  content: "\f253";
}

.mdi-closed-caption:before {
  content: "\f254";
}

.mdi-cloud:before {
  content: "\f255";
}

.mdi-cloud-check:before {
  content: "\f256";
}

.mdi-cloud-circle:before {
  content: "\f257";
}

.mdi-cloud-download:before {
  content: "\f258";
}

.mdi-cloud-outline:before {
  content: "\f259";
}

.mdi-cloud-outline-off:before {
  content: "\f25a";
}

.mdi-cloud-print:before {
  content: "\f25b";
}

.mdi-cloud-print-outline:before {
  content: "\f25c";
}

.mdi-cloud-upload:before {
  content: "\f25d";
}

.mdi-code-array:before {
  content: "\f25e";
}

.mdi-code-braces:before {
  content: "\f25f";
}

.mdi-code-brackets:before {
  content: "\f260";
}

.mdi-code-equal:before {
  content: "\f261";
}

.mdi-code-greater-than:before {
  content: "\f262";
}

.mdi-code-greater-than-or-equal:before {
  content: "\f263";
}

.mdi-code-less-than:before {
  content: "\f264";
}

.mdi-code-less-than-or-equal:before {
  content: "\f265";
}

.mdi-code-not-equal:before {
  content: "\f266";
}

.mdi-code-not-equal-variant:before {
  content: "\f267";
}

.mdi-code-parentheses:before {
  content: "\f268";
}

.mdi-code-string:before {
  content: "\f269";
}

.mdi-code-tags:before {
  content: "\f26a";
}

.mdi-codepen:before {
  content: "\f26b";
}

.mdi-coffee:before {
  content: "\f26c";
}

.mdi-coffee-to-go:before {
  content: "\f26d";
}

.mdi-coin:before {
  content: "\f26e";
}

.mdi-color-helper:before {
  content: "\f26f";
}

.mdi-comment:before {
  content: "\f270";
}

.mdi-comment-account:before {
  content: "\f271";
}

.mdi-comment-account-outline:before {
  content: "\f272";
}

.mdi-comment-alert:before {
  content: "\f273";
}

.mdi-comment-alert-outline:before {
  content: "\f274";
}

.mdi-comment-check:before {
  content: "\f275";
}

.mdi-comment-check-outline:before {
  content: "\f276";
}

.mdi-comment-multiple-outline:before {
  content: "\f277";
}

.mdi-comment-outline:before {
  content: "\f278";
}

.mdi-comment-plus-outline:before {
  content: "\f279";
}

.mdi-comment-processing:before {
  content: "\f27a";
}

.mdi-comment-processing-outline:before {
  content: "\f27b";
}

.mdi-comment-question-outline:before {
  content: "\f27c";
}

.mdi-comment-remove-outline:before {
  content: "\f27d";
}

.mdi-comment-text:before {
  content: "\f27e";
}

.mdi-comment-text-outline:before {
  content: "\f27f";
}

.mdi-compare:before {
  content: "\f280";
}

.mdi-compass:before {
  content: "\f281";
}

.mdi-compass-outline:before {
  content: "\f282";
}

.mdi-console:before {
  content: "\f283";
}

.mdi-contact-mail:before {
  content: "\f284";
}

.mdi-content-copy:before {
  content: "\f285";
}

.mdi-content-cut:before {
  content: "\f286";
}

.mdi-content-duplicate:before {
  content: "\f287";
}

.mdi-content-paste:before {
  content: "\f288";
}

.mdi-content-save:before {
  content: "\f289";
}

.mdi-content-save-all:before {
  content: "\f28a";
}

.mdi-contrast:before {
  content: "\f28b";
}

.mdi-contrast-box:before {
  content: "\f28c";
}

.mdi-contrast-circle:before {
  content: "\f28d";
}

.mdi-cookie:before {
  content: "\f28e";
}

.mdi-cow:before {
  content: "\f28f";
}

.mdi-credit-card:before {
  content: "\f290";
}

.mdi-credit-card-multiple:before {
  content: "\f291";
}

.mdi-credit-card-scan:before {
  content: "\f292";
}

.mdi-crop:before {
  content: "\f293";
}

.mdi-crop-free:before {
  content: "\f294";
}

.mdi-crop-landscape:before {
  content: "\f295";
}

.mdi-crop-portrait:before {
  content: "\f296";
}

.mdi-crop-square:before {
  content: "\f297";
}

.mdi-crosshairs:before {
  content: "\f298";
}

.mdi-crosshairs-gps:before {
  content: "\f299";
}

.mdi-crown:before {
  content: "\f29a";
}

.mdi-cube:before {
  content: "\f29b";
}

.mdi-cube-outline:before {
  content: "\f29c";
}

.mdi-cube-send:before {
  content: "\f29d";
}

.mdi-cube-unfolded:before {
  content: "\f29e";
}

.mdi-cup:before {
  content: "\f29f";
}

.mdi-cup-water:before {
  content: "\f2a0";
}

.mdi-currency-btc:before {
  content: "\f2a1";
}

.mdi-currency-eur:before {
  content: "\f2a2";
}

.mdi-currency-gbp:before {
  content: "\f2a3";
}

.mdi-currency-inr:before {
  content: "\f2a4";
}

.mdi-currency-ngn:before {
  content: "\f2a5";
}

.mdi-currency-rub:before {
  content: "\f2a6";
}

.mdi-currency-try:before {
  content: "\f2a7";
}

.mdi-currency-usd:before {
  content: "\f2a8";
}

.mdi-cursor-default:before {
  content: "\f2a9";
}

.mdi-cursor-default-outline:before {
  content: "\f2aa";
}

.mdi-cursor-move:before {
  content: "\f2ab";
}

.mdi-cursor-pointer:before {
  content: "\f2ac";
}

.mdi-database:before {
  content: "\f2ad";
}

.mdi-database-minus:before {
  content: "\f2ae";
}

.mdi-database-plus:before {
  content: "\f2af";
}

.mdi-debug-step-into:before {
  content: "\f2b0";
}

.mdi-debug-step-out:before {
  content: "\f2b1";
}

.mdi-debug-step-over:before {
  content: "\f2b2";
}

.mdi-decimal-decrease:before {
  content: "\f2b3";
}

.mdi-decimal-increase:before {
  content: "\f2b4";
}

.mdi-delete:before {
  content: "\f2b5";
}

.mdi-delete-variant:before {
  content: "\f2b6";
}

.mdi-delta:before {
  content: "\f2b7";
}

.mdi-deskphone:before {
  content: "\f2b8";
}

.mdi-desktop-mac:before {
  content: "\f2b9";
}

.mdi-desktop-tower:before {
  content: "\f2ba";
}

.mdi-details:before {
  content: "\f2bb";
}

.mdi-deviantart:before {
  content: "\f2bc";
}

.mdi-diamond:before {
  content: "\f2bd";
}

.mdi-dice:before {
  content: "\f2be";
}

.mdi-dice-1:before {
  content: "\f2bf";
}

.mdi-dice-2:before {
  content: "\f2c0";
}

.mdi-dice-3:before {
  content: "\f2c1";
}

.mdi-dice-4:before {
  content: "\f2c2";
}

.mdi-dice-5:before {
  content: "\f2c3";
}

.mdi-dice-6:before {
  content: "\f2c4";
}

.mdi-directions:before {
  content: "\f2c5";
}

.mdi-disk-alert:before {
  content: "\f2c6";
}

.mdi-disqus:before {
  content: "\f2c7";
}

.mdi-disqus-outline:before {
  content: "\f2c8";
}

.mdi-division:before {
  content: "\f2c9";
}

.mdi-division-box:before {
  content: "\f2ca";
}

.mdi-dns:before {
  content: "\f2cb";
}

.mdi-domain:before {
  content: "\f2cc";
}

.mdi-dots-horizontal:before {
  content: "\f2cd";
}

.mdi-dots-vertical:before {
  content: "\f2ce";
}

.mdi-download:before {
  content: "\f2cf";
}

.mdi-drag:before {
  content: "\f2d0";
}

.mdi-drag-horizontal:before {
  content: "\f2d1";
}

.mdi-drag-vertical:before {
  content: "\f2d2";
}

.mdi-drawing:before {
  content: "\f2d3";
}

.mdi-drawing-box:before {
  content: "\f2d4";
}

.mdi-dribbble:before {
  content: "\f2d5";
}

.mdi-dribbble-box:before {
  content: "\f2d6";
}

.mdi-drone:before {
  content: "\f2d7";
}

.mdi-dropbox:before {
  content: "\f2d8";
}

.mdi-drupal:before {
  content: "\f2d9";
}

.mdi-duck:before {
  content: "\f2da";
}

.mdi-dumbbell:before {
  content: "\f2db";
}

.mdi-earth:before {
  content: "\f2dc";
}

.mdi-earth-off:before {
  content: "\f2dd";
}

.mdi-edge:before {
  content: "\f2de";
}

.mdi-eject:before {
  content: "\f2df";
}

.mdi-elevation-decline:before {
  content: "\f2e0";
}

.mdi-elevation-rise:before {
  content: "\f2e1";
}

.mdi-elevator:before {
  content: "\f2e2";
}

.mdi-email:before {
  content: "\f2e3";
}

.mdi-email-open:before {
  content: "\f2e4";
}

.mdi-email-outline:before {
  content: "\f2e5";
}

.mdi-email-secure:before {
  content: "\f2e6";
}

.mdi-emoticon:before {
  content: "\f2e7";
}

.mdi-emoticon-cool:before {
  content: "\f2e8";
}

.mdi-emoticon-devil:before {
  content: "\f2e9";
}

.mdi-emoticon-happy:before {
  content: "\f2ea";
}

.mdi-emoticon-neutral:before {
  content: "\f2eb";
}

.mdi-emoticon-poop:before {
  content: "\f2ec";
}

.mdi-emoticon-sad:before {
  content: "\f2ed";
}

.mdi-emoticon-tongue:before {
  content: "\f2ee";
}

.mdi-engine:before {
  content: "\f2ef";
}

.mdi-engine-outline:before {
  content: "\f2f0";
}

.mdi-equal:before {
  content: "\f2f1";
}

.mdi-equal-box:before {
  content: "\f2f2";
}

.mdi-eraser:before {
  content: "\f2f3";
}

.mdi-escalator:before {
  content: "\f2f4";
}

.mdi-ethernet:before {
  content: "\f2f5";
}

.mdi-ethernet-cable:before {
  content: "\f2f6";
}

.mdi-ethernet-cable-off:before {
  content: "\f2f7";
}

.mdi-etsy:before {
  content: "\f2f8";
}

.mdi-evernote:before {
  content: "\f2f9";
}

.mdi-exclamation:before {
  content: "\f2fa";
}

.mdi-exit-to-app:before {
  content: "\f2fb";
}

.mdi-export:before {
  content: "\f2fc";
}

.mdi-eye:before {
  content: "\f2fd";
}

.mdi-eye-off:before {
  content: "\f2fe";
}

.mdi-eyedropper:before {
  content: "\f2ff";
}

.mdi-eyedropper-variant:before {
  content: "\f300";
}

.mdi-facebook:before {
  content: "\f301";
}

.mdi-facebook-box:before {
  content: "\f302";
}

.mdi-facebook-messenger:before {
  content: "\f303";
}

.mdi-factory:before {
  content: "\f304";
}

.mdi-fan:before {
  content: "\f305";
}

.mdi-fast-forward:before {
  content: "\f306";
}

.mdi-fax:before {
  content: "\f307";
}

.mdi-ferry:before {
  content: "\f308";
}

.mdi-file:before {
  content: "\f309";
}

.mdi-file-chart:before {
  content: "\f30a";
}

.mdi-file-check:before {
  content: "\f30b";
}

.mdi-file-cloud:before {
  content: "\f30c";
}

.mdi-file-delimited:before {
  content: "\f30d";
}

.mdi-file-document:before {
  content: "\f30e";
}

.mdi-file-document-box:before {
  content: "\f30f";
}

.mdi-file-excel:before {
  content: "\f310";
}

.mdi-file-excel-box:before {
  content: "\f311";
}

.mdi-file-export:before {
  content: "\f312";
}

.mdi-file-find:before {
  content: "\f313";
}

.mdi-file-image:before {
  content: "\f314";
}

.mdi-file-import:before {
  content: "\f315";
}

.mdi-file-lock:before {
  content: "\f316";
}

.mdi-file-multiple:before {
  content: "\f317";
}

.mdi-file-music:before {
  content: "\f318";
}

.mdi-file-outline:before {
  content: "\f319";
}

.mdi-file-pdf:before {
  content: "\f31a";
}

.mdi-file-pdf-box:before {
  content: "\f31b";
}

.mdi-file-powerpoint:before {
  content: "\f31c";
}

.mdi-file-powerpoint-box:before {
  content: "\f31d";
}

.mdi-file-presentation-box:before {
  content: "\f31e";
}

.mdi-file-send:before {
  content: "\f31f";
}

.mdi-file-video:before {
  content: "\f320";
}

.mdi-file-word:before {
  content: "\f321";
}

.mdi-file-word-box:before {
  content: "\f322";
}

.mdi-file-xml:before {
  content: "\f323";
}

.mdi-film:before {
  content: "\f324";
}

.mdi-filmstrip:before {
  content: "\f325";
}

.mdi-filmstrip-off:before {
  content: "\f326";
}

.mdi-filter:before {
  content: "\f327";
}

.mdi-filter-outline:before {
  content: "\f328";
}

.mdi-filter-remove:before {
  content: "\f329";
}

.mdi-filter-remove-outline:before {
  content: "\f32a";
}

.mdi-filter-variant:before {
  content: "\f32b";
}

.mdi-fingerprint:before {
  content: "\f32c";
}

.mdi-fire:before {
  content: "\f32d";
}

.mdi-firefox:before {
  content: "\f32e";
}

.mdi-fish:before {
  content: "\f32f";
}

.mdi-flag:before {
  content: "\f330";
}

.mdi-flag-checkered:before {
  content: "\f331";
}

.mdi-flag-outline:before {
  content: "\f332";
}

.mdi-flag-outline-variant:before {
  content: "\f333";
}

.mdi-flag-triangle:before {
  content: "\f334";
}

.mdi-flag-variant:before {
  content: "\f335";
}

.mdi-flash:before {
  content: "\f336";
}

.mdi-flash-auto:before {
  content: "\f337";
}

.mdi-flash-off:before {
  content: "\f338";
}

.mdi-flashlight:before {
  content: "\f339";
}

.mdi-flashlight-off:before {
  content: "\f33a";
}

.mdi-flattr:before {
  content: "\f33b";
}

.mdi-flip-to-back:before {
  content: "\f33c";
}

.mdi-flip-to-front:before {
  content: "\f33d";
}

.mdi-floppy:before {
  content: "\f33e";
}

.mdi-flower:before {
  content: "\f33f";
}

.mdi-folder:before {
  content: "\f340";
}

.mdi-folder-account:before {
  content: "\f341";
}

.mdi-folder-download:before {
  content: "\f342";
}

.mdi-folder-google-drive:before {
  content: "\f343";
}

.mdi-folder-image:before {
  content: "\f344";
}

.mdi-folder-lock:before {
  content: "\f345";
}

.mdi-folder-lock-open:before {
  content: "\f346";
}

.mdi-folder-move:before {
  content: "\f347";
}

.mdi-folder-multiple:before {
  content: "\f348";
}

.mdi-folder-multiple-image:before {
  content: "\f349";
}

.mdi-folder-multiple-outline:before {
  content: "\f34a";
}

.mdi-folder-outline:before {
  content: "\f34b";
}

.mdi-folder-plus:before {
  content: "\f34c";
}

.mdi-folder-remove:before {
  content: "\f34d";
}

.mdi-folder-upload:before {
  content: "\f34e";
}

.mdi-food:before {
  content: "\f34f";
}

.mdi-food-apple:before {
  content: "\f350";
}

.mdi-food-variant:before {
  content: "\f351";
}

.mdi-football:before {
  content: "\f352";
}

.mdi-football-australian:before {
  content: "\f353";
}

.mdi-football-helmet:before {
  content: "\f354";
}

.mdi-format-align-center:before {
  content: "\f355";
}

.mdi-format-align-justify:before {
  content: "\f356";
}

.mdi-format-align-left:before {
  content: "\f357";
}

.mdi-format-align-right:before {
  content: "\f358";
}

.mdi-format-bold:before {
  content: "\f359";
}

.mdi-format-clear:before {
  content: "\f35a";
}

.mdi-format-color-fill:before {
  content: "\f35b";
}

.mdi-format-float-center:before {
  content: "\f35c";
}

.mdi-format-float-left:before {
  content: "\f35d";
}

.mdi-format-float-none:before {
  content: "\f35e";
}

.mdi-format-float-right:before {
  content: "\f35f";
}

.mdi-format-header-1:before {
  content: "\f360";
}

.mdi-format-header-2:before {
  content: "\f361";
}

.mdi-format-header-3:before {
  content: "\f362";
}

.mdi-format-header-4:before {
  content: "\f363";
}

.mdi-format-header-5:before {
  content: "\f364";
}

.mdi-format-header-6:before {
  content: "\f365";
}

.mdi-format-header-decrease:before {
  content: "\f366";
}

.mdi-format-header-equal:before {
  content: "\f367";
}

.mdi-format-header-increase:before {
  content: "\f368";
}

.mdi-format-header-pound:before {
  content: "\f369";
}

.mdi-format-indent-decrease:before {
  content: "\f36a";
}

.mdi-format-indent-increase:before {
  content: "\f36b";
}

.mdi-format-italic:before {
  content: "\f36c";
}

.mdi-format-line-spacing:before {
  content: "\f36d";
}

.mdi-format-list-bulleted:before {
  content: "\f36e";
}

.mdi-format-list-bulleted-type:before {
  content: "\f36f";
}

.mdi-format-list-numbers:before {
  content: "\f370";
}

.mdi-format-paint:before {
  content: "\f371";
}

.mdi-format-paragraph:before {
  content: "\f372";
}

.mdi-format-quote:before {
  content: "\f373";
}

.mdi-format-size:before {
  content: "\f374";
}

.mdi-format-strikethrough:before {
  content: "\f375";
}

.mdi-format-strikethrough-variant:before {
  content: "\f376";
}

.mdi-format-subscript:before {
  content: "\f377";
}

.mdi-format-superscript:before {
  content: "\f378";
}

.mdi-format-text:before {
  content: "\f379";
}

.mdi-format-textdirection-l-to-r:before {
  content: "\f37a";
}

.mdi-format-textdirection-r-to-l:before {
  content: "\f37b";
}

.mdi-format-underline:before {
  content: "\f37c";
}

.mdi-format-wrap-inline:before {
  content: "\f37d";
}

.mdi-format-wrap-square:before {
  content: "\f37e";
}

.mdi-format-wrap-tight:before {
  content: "\f37f";
}

.mdi-format-wrap-top-bottom:before {
  content: "\f380";
}

.mdi-forum:before {
  content: "\f381";
}

.mdi-forward:before {
  content: "\f382";
}

.mdi-foursquare:before {
  content: "\f383";
}

.mdi-fridge:before {
  content: "\f384";
}

.mdi-fridge-filled:before {
  content: "\f385";
}

.mdi-fridge-filled-bottom:before {
  content: "\f386";
}

.mdi-fridge-filled-top:before {
  content: "\f387";
}

.mdi-fullscreen:before {
  content: "\f388";
}

.mdi-fullscreen-exit:before {
  content: "\f389";
}

.mdi-function:before {
  content: "\f38a";
}

.mdi-gamepad:before {
  content: "\f38b";
}

.mdi-gamepad-variant:before {
  content: "\f38c";
}

.mdi-gas-station:before {
  content: "\f38d";
}

.mdi-gate:before {
  content: "\f38e";
}

.mdi-gauge:before {
  content: "\f38f";
}

.mdi-gavel:before {
  content: "\f390";
}

.mdi-gender-female:before {
  content: "\f391";
}

.mdi-gender-male:before {
  content: "\f392";
}

.mdi-gender-male-female:before {
  content: "\f393";
}

.mdi-gender-transgender:before {
  content: "\f394";
}

.mdi-ghost:before {
  content: "\f395";
}

.mdi-gift:before {
  content: "\f396";
}

.mdi-git:before {
  content: "\f397";
}

.mdi-github-box:before {
  content: "\f398";
}

.mdi-github-circle:before {
  content: "\f399";
}

.mdi-glass-flute:before {
  content: "\f39a";
}

.mdi-glass-mug:before {
  content: "\f39b";
}

.mdi-glass-stange:before {
  content: "\f39c";
}

.mdi-glass-tulip:before {
  content: "\f39d";
}

.mdi-glasses:before {
  content: "\f39e";
}

.mdi-gmail:before {
  content: "\f39f";
}

.mdi-google:before {
  content: "\f3a0";
}

.mdi-google-cardboard:before {
  content: "\f3a1";
}

.mdi-google-chrome:before {
  content: "\f3a2";
}

.mdi-google-circles:before {
  content: "\f3a3";
}

.mdi-google-circles-communities:before {
  content: "\f3a4";
}

.mdi-google-circles-extended:before {
  content: "\f3a5";
}

.mdi-google-circles-group:before {
  content: "\f3a6";
}

.mdi-google-controller:before {
  content: "\f3a7";
}

.mdi-google-controller-off:before {
  content: "\f3a8";
}

.mdi-google-drive:before {
  content: "\f3a9";
}

.mdi-google-earth:before {
  content: "\f3aa";
}

.mdi-google-glass:before {
  content: "\f3ab";
}

.mdi-google-nearby:before {
  content: "\f3ac";
}

.mdi-google-pages:before {
  content: "\f3ad";
}

.mdi-google-physical-web:before {
  content: "\f3ae";
}

.mdi-google-play:before {
  content: "\f3af";
}

.mdi-google-plus:before {
  content: "\f3b0";
}

.mdi-google-plus-box:before {
  content: "\f3b1";
}

.mdi-google-translate:before {
  content: "\f3b2";
}

.mdi-google-wallet:before {
  content: "\f3b3";
}

.mdi-grid:before {
  content: "\f3b4";
}

.mdi-grid-off:before {
  content: "\f3b5";
}

.mdi-group:before {
  content: "\f3b6";
}

.mdi-guitar:before {
  content: "\f3b7";
}

.mdi-guitar-pick:before {
  content: "\f3b8";
}

.mdi-guitar-pick-outline:before {
  content: "\f3b9";
}

.mdi-hand-pointing-right:before {
  content: "\f3ba";
}

.mdi-hanger:before {
  content: "\f3bb";
}

.mdi-hangouts:before {
  content: "\f3bc";
}

.mdi-harddisk:before {
  content: "\f3bd";
}

.mdi-headphones:before {
  content: "\f3be";
}

.mdi-headphones-box:before {
  content: "\f3bf";
}

.mdi-headphones-settings:before {
  content: "\f3c0";
}

.mdi-headset:before {
  content: "\f3c1";
}

.mdi-headset-dock:before {
  content: "\f3c2";
}

.mdi-headset-off:before {
  content: "\f3c3";
}

.mdi-heart:before {
  content: "\f3c4";
}

.mdi-heart-box:before {
  content: "\f3c5";
}

.mdi-heart-box-outline:before {
  content: "\f3c6";
}

.mdi-heart-broken:before {
  content: "\f3c7";
}

.mdi-heart-outline:before {
  content: "\f3c8";
}

.mdi-help:before {
  content: "\f3c9";
}

.mdi-help-circle:before {
  content: "\f3ca";
}

.mdi-hexagon:before {
  content: "\f3cb";
}

.mdi-hexagon-outline:before {
  content: "\f3cc";
}

.mdi-history:before {
  content: "\f3cd";
}

.mdi-hololens:before {
  content: "\f3ce";
}

.mdi-home:before {
  content: "\f3cf";
}

.mdi-home-modern:before {
  content: "\f3d0";
}

.mdi-home-variant:before {
  content: "\f3d1";
}

.mdi-hops:before {
  content: "\f3d2";
}

.mdi-hospital:before {
  content: "\f3d3";
}

.mdi-hospital-building:before {
  content: "\f3d4";
}

.mdi-hospital-marker:before {
  content: "\f3d5";
}

.mdi-hotel:before {
  content: "\f3d6";
}

.mdi-houzz:before {
  content: "\f3d7";
}

.mdi-houzz-box:before {
  content: "\f3d8";
}

.mdi-human:before {
  content: "\f3d9";
}

.mdi-human-child:before {
  content: "\f3da";
}

.mdi-human-male-female:before {
  content: "\f3db";
}

.mdi-image:before {
  content: "\f3dc";
}

.mdi-image-album:before {
  content: "\f3dd";
}

.mdi-image-area:before {
  content: "\f3de";
}

.mdi-image-area-close:before {
  content: "\f3df";
}

.mdi-image-broken:before {
  content: "\f3e0";
}

.mdi-image-broken-variant:before {
  content: "\f3e1";
}

.mdi-image-filter:before {
  content: "\f3e2";
}

.mdi-image-filter-black-white:before {
  content: "\f3e3";
}

.mdi-image-filter-center-focus:before {
  content: "\f3e4";
}

.mdi-image-filter-center-focus-weak:before {
  content: "\f3e5";
}

.mdi-image-filter-drama:before {
  content: "\f3e6";
}

.mdi-image-filter-frames:before {
  content: "\f3e7";
}

.mdi-image-filter-hdr:before {
  content: "\f3e8";
}

.mdi-image-filter-none:before {
  content: "\f3e9";
}

.mdi-image-filter-tilt-shift:before {
  content: "\f3ea";
}

.mdi-image-filter-vintage:before {
  content: "\f3eb";
}

.mdi-image-multiple:before {
  content: "\f3ec";
}

.mdi-import:before {
  content: "\f3ed";
}

.mdi-inbox:before {
  content: "\f3ee";
}

.mdi-information:before {
  content: "\f3ef";
}

.mdi-information-outline:before {
  content: "\f3f0";
}

.mdi-instagram:before {
  content: "\f3f1";
}

.mdi-instapaper:before {
  content: "\f3f2";
}

.mdi-internet-explorer:before {
  content: "\f3f3";
}

.mdi-invert-colors:before {
  content: "\f3f4";
}

.mdi-jeepney:before {
  content: "\f3f5";
}

.mdi-jira:before {
  content: "\f3f6";
}

.mdi-jsfiddle:before {
  content: "\f3f7";
}

.mdi-keg:before {
  content: "\f3f8";
}

.mdi-key:before {
  content: "\f3f9";
}

.mdi-key-change:before {
  content: "\f3fa";
}

.mdi-key-minus:before {
  content: "\f3fb";
}

.mdi-key-plus:before {
  content: "\f3fc";
}

.mdi-key-remove:before {
  content: "\f3fd";
}

.mdi-key-variant:before {
  content: "\f3fe";
}

.mdi-keyboard:before {
  content: "\f3ff";
}

.mdi-keyboard-backspace:before {
  content: "\f400";
}

.mdi-keyboard-caps:before {
  content: "\f401";
}

.mdi-keyboard-close:before {
  content: "\f402";
}

.mdi-keyboard-off:before {
  content: "\f403";
}

.mdi-keyboard-return:before {
  content: "\f404";
}

.mdi-keyboard-tab:before {
  content: "\f405";
}

.mdi-keyboard-variant:before {
  content: "\f406";
}

.mdi-label:before {
  content: "\f407";
}

.mdi-label-outline:before {
  content: "\f408";
}

.mdi-lan:before {
  content: "\f409";
}

.mdi-lan-connect:before {
  content: "\f40a";
}

.mdi-lan-disconnect:before {
  content: "\f40b";
}

.mdi-lan-pending:before {
  content: "\f40c";
}

.mdi-language-csharp:before {
  content: "\f40d";
}

.mdi-language-css3:before {
  content: "\f40e";
}

.mdi-language-html5:before {
  content: "\f40f";
}

.mdi-language-javascript:before {
  content: "\f410";
}

.mdi-language-php:before {
  content: "\f411";
}

.mdi-language-python:before {
  content: "\f412";
}

.mdi-language-python-text:before {
  content: "\f413";
}

.mdi-laptop:before {
  content: "\f414";
}

.mdi-laptop-chromebook:before {
  content: "\f415";
}

.mdi-laptop-mac:before {
  content: "\f416";
}

.mdi-laptop-windows:before {
  content: "\f417";
}

.mdi-lastfm:before {
  content: "\f418";
}

.mdi-launch:before {
  content: "\f419";
}

.mdi-layers:before {
  content: "\f41a";
}

.mdi-layers-off:before {
  content: "\f41b";
}

.mdi-leaf:before {
  content: "\f41c";
}

.mdi-led-off:before {
  content: "\f41d";
}

.mdi-led-on:before {
  content: "\f41e";
}

.mdi-led-outline:before {
  content: "\f41f";
}

.mdi-led-variant-off:before {
  content: "\f420";
}

.mdi-led-variant-on:before {
  content: "\f421";
}

.mdi-led-variant-outline:before {
  content: "\f422";
}

.mdi-library:before {
  content: "\f423";
}

.mdi-library-books:before {
  content: "\f424";
}

.mdi-library-music:before {
  content: "\f425";
}

.mdi-library-plus:before {
  content: "\f426";
}

.mdi-lightbulb:before {
  content: "\f427";
}

.mdi-lightbulb-outline:before {
  content: "\f428";
}

.mdi-link:before {
  content: "\f429";
}

.mdi-link-off:before {
  content: "\f42a";
}

.mdi-link-variant:before {
  content: "\f42b";
}

.mdi-link-variant-off:before {
  content: "\f42c";
}

.mdi-linkedin:before {
  content: "\f42d";
}

.mdi-linkedin-box:before {
  content: "\f42e";
}

.mdi-linux:before {
  content: "\f42f";
}

.mdi-lock:before {
  content: "\f430";
}

.mdi-lock-open:before {
  content: "\f431";
}

.mdi-lock-open-outline:before {
  content: "\f432";
}

.mdi-lock-outline:before {
  content: "\f433";
}

.mdi-login:before {
  content: "\f434";
}

.mdi-logout:before {
  content: "\f435";
}

.mdi-looks:before {
  content: "\f436";
}

.mdi-loupe:before {
  content: "\f437";
}

.mdi-lumx:before {
  content: "\f438";
}

.mdi-magnet:before {
  content: "\f439";
}

.mdi-magnet-on:before {
  content: "\f43a";
}

.mdi-magnify:before {
  content: "\f43b";
}

.mdi-magnify-minus:before {
  content: "\f43c";
}

.mdi-magnify-plus:before {
  content: "\f43d";
}

.mdi-mail-ru:before {
  content: "\f43e";
}

.mdi-map:before {
  content: "\f43f";
}

.mdi-map-marker:before {
  content: "\f440";
}

.mdi-map-marker-circle:before {
  content: "\f441";
}

.mdi-map-marker-multiple:before {
  content: "\f442";
}

.mdi-map-marker-off:before {
  content: "\f443";
}

.mdi-map-marker-radius:before {
  content: "\f444";
}

.mdi-margin:before {
  content: "\f445";
}

.mdi-markdown:before {
  content: "\f446";
}

.mdi-marker-check:before {
  content: "\f447";
}

.mdi-martini:before {
  content: "\f448";
}

.mdi-material-ui:before {
  content: "\f449";
}

.mdi-math-compass:before {
  content: "\f44a";
}

.mdi-maxcdn:before {
  content: "\f44b";
}

.mdi-medium:before {
  content: "\f44c";
}

.mdi-memory:before {
  content: "\f44d";
}

.mdi-menu:before {
  content: "\f44e";
}

.mdi-menu-down:before {
  content: "\f44f";
}

.mdi-menu-left:before {
  content: "\f450";
}

.mdi-menu-right:before {
  content: "\f451";
}

.mdi-menu-up:before {
  content: "\f452";
}

.mdi-message:before {
  content: "\f453";
}

.mdi-message-alert:before {
  content: "\f454";
}

.mdi-message-draw:before {
  content: "\f455";
}

.mdi-message-image:before {
  content: "\f456";
}

.mdi-message-outline:before {
  content: "\f457";
}

.mdi-message-processing:before {
  content: "\f458";
}

.mdi-message-reply:before {
  content: "\f459";
}

.mdi-message-reply-text:before {
  content: "\f45a";
}

.mdi-message-text:before {
  content: "\f45b";
}

.mdi-message-text-outline:before {
  content: "\f45c";
}

.mdi-message-video:before {
  content: "\f45d";
}

.mdi-microphone:before {
  content: "\f45e";
}

.mdi-microphone-off:before {
  content: "\f45f";
}

.mdi-microphone-outline:before {
  content: "\f460";
}

.mdi-microphone-settings:before {
  content: "\f461";
}

.mdi-microphone-variant:before {
  content: "\f462";
}

.mdi-microphone-variant-off:before {
  content: "\f463";
}

.mdi-microsoft:before {
  content: "\f464";
}

.mdi-minus:before {
  content: "\f465";
}

.mdi-minus-box:before {
  content: "\f466";
}

.mdi-minus-circle:before {
  content: "\f467";
}

.mdi-minus-circle-outline:before {
  content: "\f468";
}

.mdi-minus-network:before {
  content: "\f469";
}

.mdi-monitor:before {
  content: "\f46a";
}

.mdi-monitor-multiple:before {
  content: "\f46b";
}

.mdi-more:before {
  content: "\f46c";
}

.mdi-motorbike:before {
  content: "\f46d";
}

.mdi-mouse:before {
  content: "\f46e";
}

.mdi-mouse-off:before {
  content: "\f46f";
}

.mdi-mouse-variant:before {
  content: "\f470";
}

.mdi-mouse-variant-off:before {
  content: "\f471";
}

.mdi-movie:before {
  content: "\f472";
}

.mdi-multiplication:before {
  content: "\f473";
}

.mdi-multiplication-box:before {
  content: "\f474";
}

.mdi-music-box:before {
  content: "\f475";
}

.mdi-music-box-outline:before {
  content: "\f476";
}

.mdi-music-circle:before {
  content: "\f477";
}

.mdi-music-note:before {
  content: "\f478";
}

.mdi-music-note-eighth:before {
  content: "\f479";
}

.mdi-music-note-half:before {
  content: "\f47a";
}

.mdi-music-note-off:before {
  content: "\f47b";
}

.mdi-music-note-quarter:before {
  content: "\f47c";
}

.mdi-music-note-sixteenth:before {
  content: "\f47d";
}

.mdi-music-note-whole:before {
  content: "\f47e";
}

.mdi-nature:before {
  content: "\f47f";
}

.mdi-nature-people:before {
  content: "\f480";
}

.mdi-navigation:before {
  content: "\f481";
}

.mdi-needle:before {
  content: "\f482";
}

.mdi-nest-protect:before {
  content: "\f483";
}

.mdi-nest-thermostat:before {
  content: "\f484";
}

.mdi-newspaper:before {
  content: "\f485";
}

.mdi-nfc:before {
  content: "\f486";
}

.mdi-nfc-tap:before {
  content: "\f487";
}

.mdi-nfc-variant:before {
  content: "\f488";
}

.mdi-nodejs:before {
  content: "\f489";
}

.mdi-note:before {
  content: "\f48a";
}

.mdi-note-outline:before {
  content: "\f48b";
}

.mdi-note-plus:before {
  content: "\f48c";
}

.mdi-note-plus-outline:before {
  content: "\f48d";
}

.mdi-note-text:before {
  content: "\f48e";
}

.mdi-notification-clear-all:before {
  content: "\f48f";
}

.mdi-numeric:before {
  content: "\f490";
}

.mdi-numeric-0-box:before {
  content: "\f491";
}

.mdi-numeric-0-box-multiple-outline:before {
  content: "\f492";
}

.mdi-numeric-0-box-outline:before {
  content: "\f493";
}

.mdi-numeric-1-box:before {
  content: "\f494";
}

.mdi-numeric-1-box-multiple-outline:before {
  content: "\f495";
}

.mdi-numeric-1-box-outline:before {
  content: "\f496";
}

.mdi-numeric-2-box:before {
  content: "\f497";
}

.mdi-numeric-2-box-multiple-outline:before {
  content: "\f498";
}

.mdi-numeric-2-box-outline:before {
  content: "\f499";
}

.mdi-numeric-3-box:before {
  content: "\f49a";
}

.mdi-numeric-3-box-multiple-outline:before {
  content: "\f49b";
}

.mdi-numeric-3-box-outline:before {
  content: "\f49c";
}

.mdi-numeric-4-box:before {
  content: "\f49d";
}

.mdi-numeric-4-box-multiple-outline:before {
  content: "\f49e";
}

.mdi-numeric-4-box-outline:before {
  content: "\f49f";
}

.mdi-numeric-5-box:before {
  content: "\f4a0";
}

.mdi-numeric-5-box-multiple-outline:before {
  content: "\f4a1";
}

.mdi-numeric-5-box-outline:before {
  content: "\f4a2";
}

.mdi-numeric-6-box:before {
  content: "\f4a3";
}

.mdi-numeric-6-box-multiple-outline:before {
  content: "\f4a4";
}

.mdi-numeric-6-box-outline:before {
  content: "\f4a5";
}

.mdi-numeric-7-box:before {
  content: "\f4a6";
}

.mdi-numeric-7-box-multiple-outline:before {
  content: "\f4a7";
}

.mdi-numeric-7-box-outline:before {
  content: "\f4a8";
}

.mdi-numeric-8-box:before {
  content: "\f4a9";
}

.mdi-numeric-8-box-multiple-outline:before {
  content: "\f4aa";
}

.mdi-numeric-8-box-outline:before {
  content: "\f4ab";
}

.mdi-numeric-9-box:before {
  content: "\f4ac";
}

.mdi-numeric-9-box-multiple-outline:before {
  content: "\f4ad";
}

.mdi-numeric-9-box-outline:before {
  content: "\f4ae";
}

.mdi-numeric-9-plus-box:before {
  content: "\f4af";
}

.mdi-numeric-9-plus-box-multiple-outline:before {
  content: "\f4b0";
}

.mdi-numeric-9-plus-box-outline:before {
  content: "\f4b1";
}

.mdi-nutrition:before {
  content: "\f4b2";
}

.mdi-octagon:before {
  content: "\f4b3";
}

.mdi-octagon-outline:before {
  content: "\f4b4";
}

.mdi-odnoklassniki:before {
  content: "\f4b5";
}

.mdi-office:before {
  content: "\f4b6";
}

.mdi-oil:before {
  content: "\f4b7";
}

.mdi-oil-temperature:before {
  content: "\f4b8";
}

.mdi-omega:before {
  content: "\f4b9";
}

.mdi-onedrive:before {
  content: "\f4ba";
}

.mdi-open-in-app:before {
  content: "\f4bb";
}

.mdi-open-in-new:before {
  content: "\f4bc";
}

.mdi-opera:before {
  content: "\f4bd";
}

.mdi-ornament:before {
  content: "\f4be";
}

.mdi-ornament-variant:before {
  content: "\f4bf";
}

.mdi-outbox:before {
  content: "\f4c0";
}

.mdi-owl:before {
  content: "\f4c1";
}

.mdi-package:before {
  content: "\f4c2";
}

.mdi-package-down:before {
  content: "\f4c3";
}

.mdi-package-up:before {
  content: "\f4c4";
}

.mdi-package-variant:before {
  content: "\f4c5";
}

.mdi-package-variant-closed:before {
  content: "\f4c6";
}

.mdi-palette:before {
  content: "\f4c7";
}

.mdi-palette-advanced:before {
  content: "\f4c8";
}

.mdi-panda:before {
  content: "\f4c9";
}

.mdi-pandora:before {
  content: "\f4ca";
}

.mdi-panorama:before {
  content: "\f4cb";
}

.mdi-panorama-fisheye:before {
  content: "\f4cc";
}

.mdi-panorama-horizontal:before {
  content: "\f4cd";
}

.mdi-panorama-vertical:before {
  content: "\f4ce";
}

.mdi-panorama-wide-angle:before {
  content: "\f4cf";
}

.mdi-paper-cut-vertical:before {
  content: "\f4d0";
}

.mdi-paperclip:before {
  content: "\f4d1";
}

.mdi-parking:before {
  content: "\f4d2";
}

.mdi-pause:before {
  content: "\f4d3";
}

.mdi-pause-circle:before {
  content: "\f4d4";
}

.mdi-pause-circle-outline:before {
  content: "\f4d5";
}

.mdi-pause-octagon:before {
  content: "\f4d6";
}

.mdi-pause-octagon-outline:before {
  content: "\f4d7";
}

.mdi-paw:before {
  content: "\f4d8";
}

.mdi-pen:before {
  content: "\f4d9";
}

.mdi-pencil:before {
  content: "\f4da";
}

.mdi-pencil-box:before {
  content: "\f4db";
}

.mdi-pencil-box-outline:before {
  content: "\f4dc";
}

.mdi-pencil-lock:before {
  content: "\f4dd";
}

.mdi-pencil-off:before {
  content: "\f4de";
}

.mdi-percent:before {
  content: "\f4df";
}

.mdi-pharmacy:before {
  content: "\f4e0";
}

.mdi-phone:before {
  content: "\f4e1";
}

.mdi-phone-bluetooth:before {
  content: "\f4e2";
}

.mdi-phone-forward:before {
  content: "\f4e3";
}

.mdi-phone-hangup:before {
  content: "\f4e4";
}

.mdi-phone-in-talk:before {
  content: "\f4e5";
}

.mdi-phone-incoming:before {
  content: "\f4e6";
}

.mdi-phone-locked:before {
  content: "\f4e7";
}

.mdi-phone-log:before {
  content: "\f4e8";
}

.mdi-phone-missed:before {
  content: "\f4e9";
}

.mdi-phone-outgoing:before {
  content: "\f4ea";
}

.mdi-phone-paused:before {
  content: "\f4eb";
}

.mdi-phone-settings:before {
  content: "\f4ec";
}

.mdi-phone-voip:before {
  content: "\f4ed";
}

.mdi-pi:before {
  content: "\f4ee";
}

.mdi-pi-box:before {
  content: "\f4ef";
}

.mdi-pig:before {
  content: "\f4f0";
}

.mdi-pill:before {
  content: "\f4f1";
}

.mdi-pin:before {
  content: "\f4f2";
}

.mdi-pin-off:before {
  content: "\f4f3";
}

.mdi-pine-tree:before {
  content: "\f4f4";
}

.mdi-pine-tree-box:before {
  content: "\f4f5";
}

.mdi-pinterest:before {
  content: "\f4f6";
}

.mdi-pinterest-box:before {
  content: "\f4f7";
}

.mdi-pizza:before {
  content: "\f4f8";
}

.mdi-play:before {
  content: "\f4f9";
}

.mdi-play-box-outline:before {
  content: "\f4fa";
}

.mdi-play-circle:before {
  content: "\f4fb";
}

.mdi-play-circle-outline:before {
  content: "\f4fc";
}

.mdi-play-pause:before {
  content: "\f4fd";
}

.mdi-play-protected-content:before {
  content: "\f4fe";
}

.mdi-playlist-minus:before {
  content: "\f4ff";
}

.mdi-playlist-play:before {
  content: "\f500";
}

.mdi-playlist-plus:before {
  content: "\f501";
}

.mdi-playlist-remove:before {
  content: "\f502";
}

.mdi-playstation:before {
  content: "\f503";
}

.mdi-plus:before {
  content: "\f504";
}

.mdi-plus-box:before {
  content: "\f505";
}

.mdi-plus-circle:before {
  content: "\f506";
}

.mdi-plus-circle-multiple-outline:before {
  content: "\f507";
}

.mdi-plus-circle-outline:before {
  content: "\f508";
}

.mdi-plus-network:before {
  content: "\f509";
}

.mdi-plus-one:before {
  content: "\f50a";
}

.mdi-pocket:before {
  content: "\f50b";
}

.mdi-pokeball:before {
  content: "\f50c";
}

.mdi-polaroid:before {
  content: "\f50d";
}

.mdi-poll:before {
  content: "\f50e";
}

.mdi-poll-box:before {
  content: "\f50f";
}

.mdi-polymer:before {
  content: "\f510";
}

.mdi-popcorn:before {
  content: "\f511";
}

.mdi-pound:before {
  content: "\f512";
}

.mdi-pound-box:before {
  content: "\f513";
}

.mdi-power:before {
  content: "\f514";
}

.mdi-power-settings:before {
  content: "\f515";
}

.mdi-power-socket:before {
  content: "\f516";
}

.mdi-presentation:before {
  content: "\f517";
}

.mdi-presentation-play:before {
  content: "\f518";
}

.mdi-printer:before {
  content: "\f519";
}

.mdi-printer-3d:before {
  content: "\f51a";
}

.mdi-printer-alert:before {
  content: "\f51b";
}

.mdi-professional-hexagon:before {
  content: "\f51c";
}

.mdi-projector:before {
  content: "\f51d";
}

.mdi-projector-screen:before {
  content: "\f51e";
}

.mdi-pulse:before {
  content: "\f51f";
}

.mdi-puzzle:before {
  content: "\f520";
}

.mdi-qrcode:before {
  content: "\f521";
}

.mdi-qrcode-scan:before {
  content: "\f522";
}

.mdi-quadcopter:before {
  content: "\f523";
}

.mdi-quality-high:before {
  content: "\f524";
}

.mdi-quicktime:before {
  content: "\f525";
}

.mdi-radar:before {
  content: "\f526";
}

.mdi-radiator:before {
  content: "\f527";
}

.mdi-radio:before {
  content: "\f528";
}

.mdi-radio-handheld:before {
  content: "\f529";
}

.mdi-radio-tower:before {
  content: "\f52a";
}

.mdi-radioactive:before {
  content: "\f52b";
}

.mdi-radiobox-blank:before {
  content: "\f52c";
}

.mdi-radiobox-marked:before {
  content: "\f52d";
}

.mdi-raspberrypi:before {
  content: "\f52e";
}

.mdi-ray-end:before {
  content: "\f52f";
}

.mdi-ray-end-arrow:before {
  content: "\f530";
}

.mdi-ray-start:before {
  content: "\f531";
}

.mdi-ray-start-arrow:before {
  content: "\f532";
}

.mdi-ray-start-end:before {
  content: "\f533";
}

.mdi-ray-vertex:before {
  content: "\f534";
}

.mdi-rdio:before {
  content: "\f535";
}

.mdi-read:before {
  content: "\f536";
}

.mdi-readability:before {
  content: "\f537";
}

.mdi-receipt:before {
  content: "\f538";
}

.mdi-record:before {
  content: "\f539";
}

.mdi-record-rec:before {
  content: "\f53a";
}

.mdi-recycle:before {
  content: "\f53b";
}

.mdi-reddit:before {
  content: "\f53c";
}

.mdi-redo:before {
  content: "\f53d";
}

.mdi-redo-variant:before {
  content: "\f53e";
}

.mdi-refresh:before {
  content: "\f53f";
}

.mdi-regex:before {
  content: "\f540";
}

.mdi-relative-scale:before {
  content: "\f541";
}

.mdi-reload:before {
  content: "\f542";
}

.mdi-remote:before {
  content: "\f543";
}

.mdi-rename-box:before {
  content: "\f544";
}

.mdi-repeat:before {
  content: "\f545";
}

.mdi-repeat-off:before {
  content: "\f546";
}

.mdi-repeat-once:before {
  content: "\f547";
}

.mdi-replay:before {
  content: "\f548";
}

.mdi-reply:before {
  content: "\f549";
}

.mdi-reply-all:before {
  content: "\f54a";
}

.mdi-reproduction:before {
  content: "\f54b";
}

.mdi-resize-bottom-right:before {
  content: "\f54c";
}

.mdi-responsive:before {
  content: "\f54d";
}

.mdi-rewind:before {
  content: "\f54e";
}

.mdi-ribbon:before {
  content: "\f54f";
}

.mdi-road:before {
  content: "\f550";
}

.mdi-road-variant:before {
  content: "\f551";
}

.mdi-rocket:before {
  content: "\f552";
}

.mdi-rotate-3d:before {
  content: "\f553";
}

.mdi-rotate-left:before {
  content: "\f554";
}

.mdi-rotate-left-variant:before {
  content: "\f555";
}

.mdi-rotate-right:before {
  content: "\f556";
}

.mdi-rotate-right-variant:before {
  content: "\f557";
}

.mdi-router-wireless:before {
  content: "\f558";
}

.mdi-routes:before {
  content: "\f559";
}

.mdi-rss:before {
  content: "\f55a";
}

.mdi-rss-box:before {
  content: "\f55b";
}

.mdi-ruler:before {
  content: "\f55c";
}

.mdi-run:before {
  content: "\f55d";
}

.mdi-sale:before {
  content: "\f55e";
}

.mdi-satellite:before {
  content: "\f55f";
}

.mdi-satellite-variant:before {
  content: "\f560";
}

.mdi-scale:before {
  content: "\f561";
}

.mdi-scale-bathroom:before {
  content: "\f562";
}

.mdi-school:before {
  content: "\f563";
}

.mdi-screen-rotation:before {
  content: "\f564";
}

.mdi-screen-rotation-lock:before {
  content: "\f565";
}

.mdi-screwdriver:before {
  content: "\f566";
}

.mdi-script:before {
  content: "\f567";
}

.mdi-sd:before {
  content: "\f568";
}

.mdi-seal:before {
  content: "\f569";
}

.mdi-seat-flat:before {
  content: "\f56a";
}

.mdi-seat-flat-angled:before {
  content: "\f56b";
}

.mdi-seat-individual-suite:before {
  content: "\f56c";
}

.mdi-seat-legroom-extra:before {
  content: "\f56d";
}

.mdi-seat-legroom-normal:before {
  content: "\f56e";
}

.mdi-seat-legroom-reduced:before {
  content: "\f56f";
}

.mdi-seat-recline-extra:before {
  content: "\f570";
}

.mdi-seat-recline-normal:before {
  content: "\f571";
}

.mdi-security:before {
  content: "\f572";
}

.mdi-security-network:before {
  content: "\f573";
}

.mdi-select:before {
  content: "\f574";
}

.mdi-select-all:before {
  content: "\f575";
}

.mdi-select-inverse:before {
  content: "\f576";
}

.mdi-select-off:before {
  content: "\f577";
}

.mdi-selection:before {
  content: "\f578";
}

.mdi-send:before {
  content: "\f579";
}

.mdi-server:before {
  content: "\f57a";
}

.mdi-server-minus:before {
  content: "\f57b";
}

.mdi-server-network:before {
  content: "\f57c";
}

.mdi-server-network-off:before {
  content: "\f57d";
}

.mdi-server-off:before {
  content: "\f57e";
}

.mdi-server-plus:before {
  content: "\f57f";
}

.mdi-server-remove:before {
  content: "\f580";
}

.mdi-server-security:before {
  content: "\f581";
}

.mdi-settings:before {
  content: "\f582";
}

.mdi-settings-box:before {
  content: "\f583";
}

.mdi-shape-plus:before {
  content: "\f584";
}

.mdi-share:before {
  content: "\f585";
}

.mdi-share-variant:before {
  content: "\f586";
}

.mdi-shield:before {
  content: "\f587";
}

.mdi-shield-outline:before {
  content: "\f588";
}

.mdi-shopping:before {
  content: "\f589";
}

.mdi-shopping-music:before {
  content: "\f58a";
}

.mdi-shredder:before {
  content: "\f58b";
}

.mdi-shuffle:before {
  content: "\f58c";
}

.mdi-shuffle-disabled:before {
  content: "\f58d";
}

.mdi-shuffle-variant:before {
  content: "\f58e";
}

.mdi-sigma:before {
  content: "\f58f";
}

.mdi-sign-caution:before {
  content: "\f590";
}

.mdi-signal:before {
  content: "\f591";
}

.mdi-silverware:before {
  content: "\f592";
}

.mdi-silverware-fork:before {
  content: "\f593";
}

.mdi-silverware-spoon:before {
  content: "\f594";
}

.mdi-silverware-variant:before {
  content: "\f595";
}

.mdi-sim:before {
  content: "\f596";
}

.mdi-sim-alert:before {
  content: "\f597";
}

.mdi-sim-off:before {
  content: "\f598";
}

.mdi-sitemap:before {
  content: "\f599";
}

.mdi-skip-backward:before {
  content: "\f59a";
}

.mdi-skip-forward:before {
  content: "\f59b";
}

.mdi-skip-next:before {
  content: "\f59c";
}

.mdi-skip-previous:before {
  content: "\f59d";
}

.mdi-skype:before {
  content: "\f59e";
}

.mdi-skype-business:before {
  content: "\f59f";
}

.mdi-slack:before {
  content: "\f5a0";
}

.mdi-sleep:before {
  content: "\f5a1";
}

.mdi-sleep-off:before {
  content: "\f5a2";
}

.mdi-smoking:before {
  content: "\f5a3";
}

.mdi-smoking-off:before {
  content: "\f5a4";
}

.mdi-snapchat:before {
  content: "\f5a5";
}

.mdi-snowman:before {
  content: "\f5a6";
}

.mdi-sofa:before {
  content: "\f5a7";
}

.mdi-sort:before {
  content: "\f5a8";
}

.mdi-sort-alphabetical:before {
  content: "\f5a9";
}

.mdi-sort-ascending:before {
  content: "\f5aa";
}

.mdi-sort-descending:before {
  content: "\f5ab";
}

.mdi-sort-numeric:before {
  content: "\f5ac";
}

.mdi-sort-variant:before {
  content: "\f5ad";
}

.mdi-soundcloud:before {
  content: "\f5ae";
}

.mdi-source-fork:before {
  content: "\f5af";
}

.mdi-source-pull:before {
  content: "\f5b0";
}

.mdi-speaker:before {
  content: "\f5b1";
}

.mdi-speaker-off:before {
  content: "\f5b2";
}

.mdi-speedometer:before {
  content: "\f5b3";
}

.mdi-spellcheck:before {
  content: "\f5b4";
}

.mdi-spotify:before {
  content: "\f5b5";
}

.mdi-spotlight:before {
  content: "\f5b6";
}

.mdi-spotlight-beam:before {
  content: "\f5b7";
}

.mdi-square-inc:before {
  content: "\f5b8";
}

.mdi-square-inc-cash:before {
  content: "\f5b9";
}

.mdi-stackoverflow:before {
  content: "\f5ba";
}

.mdi-stairs:before {
  content: "\f5bb";
}

.mdi-star:before {
  content: "\f5bc";
}

.mdi-star-circle:before {
  content: "\f5bd";
}

.mdi-star-half:before {
  content: "\f5be";
}

.mdi-star-off:before {
  content: "\f5bf";
}

.mdi-star-outline:before {
  content: "\f5c0";
}

.mdi-steam:before {
  content: "\f5c1";
}

.mdi-steering:before {
  content: "\f5c2";
}

.mdi-step-backward:before {
  content: "\f5c3";
}

.mdi-step-backward-2:before {
  content: "\f5c4";
}

.mdi-step-forward:before {
  content: "\f5c5";
}

.mdi-step-forward-2:before {
  content: "\f5c6";
}

.mdi-stethoscope:before {
  content: "\f5c7";
}

.mdi-stocking:before {
  content: "\f5c8";
}

.mdi-stop:before {
  content: "\f5c9";
}

.mdi-store:before {
  content: "\f5ca";
}

.mdi-store-24-hour:before {
  content: "\f5cb";
}

.mdi-stove:before {
  content: "\f5cc";
}

.mdi-subway:before {
  content: "\f5cd";
}

.mdi-sunglasses:before {
  content: "\f5ce";
}

.mdi-swap-horizontal:before {
  content: "\f5cf";
}

.mdi-swap-vertical:before {
  content: "\f5d0";
}

.mdi-swim:before {
  content: "\f5d1";
}

.mdi-switch:before {
  content: "\f5d2";
}

.mdi-sword:before {
  content: "\f5d3";
}

.mdi-sync:before {
  content: "\f5d4";
}

.mdi-sync-alert:before {
  content: "\f5d5";
}

.mdi-sync-off:before {
  content: "\f5d6";
}

.mdi-tab:before {
  content: "\f5d7";
}

.mdi-tab-unselected:before {
  content: "\f5d8";
}

.mdi-table:before {
  content: "\f5d9";
}

.mdi-table-column-plus-after:before {
  content: "\f5da";
}

.mdi-table-column-plus-before:before {
  content: "\f5db";
}

.mdi-table-column-remove:before {
  content: "\f5dc";
}

.mdi-table-column-width:before {
  content: "\f5dd";
}

.mdi-table-edit:before {
  content: "\f5de";
}

.mdi-table-large:before {
  content: "\f5df";
}

.mdi-table-row-height:before {
  content: "\f5e0";
}

.mdi-table-row-plus-after:before {
  content: "\f5e1";
}

.mdi-table-row-plus-before:before {
  content: "\f5e2";
}

.mdi-table-row-remove:before {
  content: "\f5e3";
}

.mdi-tablet:before {
  content: "\f5e4";
}

.mdi-tablet-android:before {
  content: "\f5e5";
}

.mdi-tablet-ipad:before {
  content: "\f5e6";
}

.mdi-tag:before {
  content: "\f5e7";
}

.mdi-tag-faces:before {
  content: "\f5e8";
}

.mdi-tag-multiple:before {
  content: "\f5e9";
}

.mdi-tag-outline:before {
  content: "\f5ea";
}

.mdi-tag-text-outline:before {
  content: "\f5eb";
}

.mdi-target:before {
  content: "\f5ec";
}

.mdi-taxi:before {
  content: "\f5ed";
}

.mdi-teamviewer:before {
  content: "\f5ee";
}

.mdi-telegram:before {
  content: "\f5ef";
}

.mdi-television:before {
  content: "\f5f0";
}

.mdi-television-guide:before {
  content: "\f5f1";
}

.mdi-temperature-celsius:before {
  content: "\f5f2";
}

.mdi-temperature-fahrenheit:before {
  content: "\f5f3";
}

.mdi-temperature-kelvin:before {
  content: "\f5f4";
}

.mdi-tennis:before {
  content: "\f5f5";
}

.mdi-tent:before {
  content: "\f5f6";
}

.mdi-terrain:before {
  content: "\f5f7";
}

.mdi-text-to-speech:before {
  content: "\f5f8";
}

.mdi-text-to-speech-off:before {
  content: "\f5f9";
}

.mdi-texture:before {
  content: "\f5fa";
}

.mdi-theater:before {
  content: "\f5fb";
}

.mdi-theme-light-dark:before {
  content: "\f5fc";
}

.mdi-thermometer:before {
  content: "\f5fd";
}

.mdi-thermometer-lines:before {
  content: "\f5fe";
}

.mdi-thumb-down:before {
  content: "\f5ff";
}

.mdi-thumb-down-outline:before {
  content: "\f600";
}

.mdi-thumb-up:before {
  content: "\f601";
}

.mdi-thumb-up-outline:before {
  content: "\f602";
}

.mdi-thumbs-up-down:before {
  content: "\f603";
}

.mdi-ticket:before {
  content: "\f604";
}

.mdi-ticket-account:before {
  content: "\f605";
}

.mdi-ticket-confirmation:before {
  content: "\f606";
}

.mdi-tie:before {
  content: "\f607";
}

.mdi-timelapse:before {
  content: "\f608";
}

.mdi-timer:before {
  content: "\f609";
}

.mdi-timer-10:before {
  content: "\f60a";
}

.mdi-timer-3:before {
  content: "\f60b";
}

.mdi-timer-off:before {
  content: "\f60c";
}

.mdi-timer-sand:before {
  content: "\f60d";
}

.mdi-timetable:before {
  content: "\f60e";
}

.mdi-toggle-switch:before {
  content: "\f60f";
}

.mdi-toggle-switch-off:before {
  content: "\f610";
}

.mdi-tooltip:before {
  content: "\f611";
}

.mdi-tooltip-edit:before {
  content: "\f612";
}

.mdi-tooltip-image:before {
  content: "\f613";
}

.mdi-tooltip-outline:before {
  content: "\f614";
}

.mdi-tooltip-outline-plus:before {
  content: "\f615";
}

.mdi-tooltip-text:before {
  content: "\f616";
}

.mdi-tor:before {
  content: "\f617";
}

.mdi-traffic-light:before {
  content: "\f618";
}

.mdi-train:before {
  content: "\f619";
}

.mdi-tram:before {
  content: "\f61a";
}

.mdi-transcribe:before {
  content: "\f61b";
}

.mdi-transcribe-close:before {
  content: "\f61c";
}

.mdi-transfer:before {
  content: "\f61d";
}

.mdi-tree:before {
  content: "\f61e";
}

.mdi-trello:before {
  content: "\f61f";
}

.mdi-trending-down:before {
  content: "\f620";
}

.mdi-trending-neutral:before {
  content: "\f621";
}

.mdi-trending-up:before {
  content: "\f622";
}

.mdi-triangle:before {
  content: "\f623";
}

.mdi-triangle-outline:before {
  content: "\f624";
}

.mdi-trophy:before {
  content: "\f625";
}

.mdi-trophy-award:before {
  content: "\f626";
}

.mdi-trophy-outline:before {
  content: "\f627";
}

.mdi-trophy-variant:before {
  content: "\f628";
}

.mdi-trophy-variant-outline:before {
  content: "\f629";
}

.mdi-truck:before {
  content: "\f62a";
}

.mdi-truck-delivery:before {
  content: "\f62b";
}

.mdi-tshirt-crew:before {
  content: "\f62c";
}

.mdi-tshirt-v:before {
  content: "\f62d";
}

.mdi-tumblr:before {
  content: "\f62e";
}

.mdi-tumblr-reblog:before {
  content: "\f62f";
}

.mdi-twitch:before {
  content: "\f630";
}

.mdi-twitter:before {
  content: "\f631";
}

.mdi-twitter-box:before {
  content: "\f632";
}

.mdi-twitter-circle:before {
  content: "\f633";
}

.mdi-twitter-retweet:before {
  content: "\f634";
}

.mdi-ubuntu:before {
  content: "\f635";
}

.mdi-umbraco:before {
  content: "\f636";
}

.mdi-umbrella:before {
  content: "\f637";
}

.mdi-umbrella-outline:before {
  content: "\f638";
}

.mdi-undo:before {
  content: "\f639";
}

.mdi-undo-variant:before {
  content: "\f63a";
}

.mdi-unfold-less:before {
  content: "\f63b";
}

.mdi-unfold-more:before {
  content: "\f63c";
}

.mdi-ungroup:before {
  content: "\f63d";
}

.mdi-untappd:before {
  content: "\f63e";
}

.mdi-upload:before {
  content: "\f63f";
}

.mdi-usb:before {
  content: "\f640";
}

.mdi-vector-arrange-above:before {
  content: "\f641";
}

.mdi-vector-arrange-below:before {
  content: "\f642";
}

.mdi-vector-circle:before {
  content: "\f643";
}

.mdi-vector-circle-variant:before {
  content: "\f644";
}

.mdi-vector-combine:before {
  content: "\f645";
}

.mdi-vector-curve:before {
  content: "\f646";
}

.mdi-vector-difference:before {
  content: "\f647";
}

.mdi-vector-difference-ab:before {
  content: "\f648";
}

.mdi-vector-difference-ba:before {
  content: "\f649";
}

.mdi-vector-intersection:before {
  content: "\f64a";
}

.mdi-vector-line:before {
  content: "\f64b";
}

.mdi-vector-point:before {
  content: "\f64c";
}

.mdi-vector-polygon:before {
  content: "\f64d";
}

.mdi-vector-polyline:before {
  content: "\f64e";
}

.mdi-vector-selection:before {
  content: "\f64f";
}

.mdi-vector-square:before {
  content: "\f650";
}

.mdi-vector-triangle:before {
  content: "\f651";
}

.mdi-vector-union:before {
  content: "\f652";
}

.mdi-verified:before {
  content: "\f653";
}

.mdi-vibrate:before {
  content: "\f654";
}

.mdi-video:before {
  content: "\f655";
}

.mdi-video-off:before {
  content: "\f656";
}

.mdi-video-switch:before {
  content: "\f657";
}

.mdi-view-agenda:before {
  content: "\f658";
}

.mdi-view-array:before {
  content: "\f659";
}

.mdi-view-carousel:before {
  content: "\f65a";
}

.mdi-view-column:before {
  content: "\f65b";
}

.mdi-view-dashboard:before {
  content: "\f65c";
}

.mdi-view-day:before {
  content: "\f65d";
}

.mdi-view-grid:before {
  content: "\f65e";
}

.mdi-view-headline:before {
  content: "\f65f";
}

.mdi-view-list:before {
  content: "\f660";
}

.mdi-view-module:before {
  content: "\f661";
}

.mdi-view-quilt:before {
  content: "\f662";
}

.mdi-view-stream:before {
  content: "\f663";
}

.mdi-view-week:before {
  content: "\f664";
}

.mdi-vimeo:before {
  content: "\f665";
}

.mdi-vine:before {
  content: "\f666";
}

.mdi-vk:before {
  content: "\f667";
}

.mdi-vk-box:before {
  content: "\f668";
}

.mdi-vk-circle:before {
  content: "\f669";
}

.mdi-voicemail:before {
  content: "\f66a";
}

.mdi-volume-high:before {
  content: "\f66b";
}

.mdi-volume-low:before {
  content: "\f66c";
}

.mdi-volume-medium:before {
  content: "\f66d";
}

.mdi-volume-off:before {
  content: "\f66e";
}

.mdi-vpn:before {
  content: "\f66f";
}

.mdi-walk:before {
  content: "\f670";
}

.mdi-wallet:before {
  content: "\f671";
}

.mdi-wallet-giftcard:before {
  content: "\f672";
}

.mdi-wallet-membership:before {
  content: "\f673";
}

.mdi-wallet-travel:before {
  content: "\f674";
}

.mdi-wan:before {
  content: "\f675";
}

.mdi-watch:before {
  content: "\f676";
}

.mdi-watch-export:before {
  content: "\f677";
}

.mdi-watch-import:before {
  content: "\f678";
}

.mdi-water:before {
  content: "\f679";
}

.mdi-water-off:before {
  content: "\f67a";
}

.mdi-water-percent:before {
  content: "\f67b";
}

.mdi-water-pump:before {
  content: "\f67c";
}

.mdi-weather-cloudy:before {
  content: "\f67d";
}

.mdi-weather-fog:before {
  content: "\f67e";
}

.mdi-weather-hail:before {
  content: "\f67f";
}

.mdi-weather-lightning:before {
  content: "\f680";
}

.mdi-weather-night:before {
  content: "\f681";
}

.mdi-weather-partlycloudy:before {
  content: "\f682";
}

.mdi-weather-pouring:before {
  content: "\f683";
}

.mdi-weather-rainy:before {
  content: "\f684";
}

.mdi-weather-snowy:before {
  content: "\f685";
}

.mdi-weather-sunny:before {
  content: "\f686";
}

.mdi-weather-sunset:before {
  content: "\f687";
}

.mdi-weather-sunset-down:before {
  content: "\f688";
}

.mdi-weather-sunset-up:before {
  content: "\f689";
}

.mdi-weather-windy:before {
  content: "\f68a";
}

.mdi-weather-windy-variant:before {
  content: "\f68b";
}

.mdi-web:before {
  content: "\f68c";
}

.mdi-webcam:before {
  content: "\f68d";
}

.mdi-weight:before {
  content: "\f68e";
}

.mdi-weight-kilogram:before {
  content: "\f68f";
}

.mdi-whatsapp:before {
  content: "\f690";
}

.mdi-wheelchair-accessibility:before {
  content: "\f691";
}

.mdi-white-balance-auto:before {
  content: "\f692";
}

.mdi-white-balance-incandescent:before {
  content: "\f693";
}

.mdi-white-balance-irradescent:before {
  content: "\f694";
}

.mdi-white-balance-sunny:before {
  content: "\f695";
}

.mdi-wifi:before {
  content: "\f696";
}

.mdi-wifi-off:before {
  content: "\f697";
}

.mdi-wii:before {
  content: "\f698";
}

.mdi-wikipedia:before {
  content: "\f699";
}

.mdi-window-close:before {
  content: "\f69a";
}

.mdi-window-closed:before {
  content: "\f69b";
}

.mdi-window-maximize:before {
  content: "\f69c";
}

.mdi-window-minimize:before {
  content: "\f69d";
}

.mdi-window-open:before {
  content: "\f69e";
}

.mdi-window-restore:before {
  content: "\f69f";
}

.mdi-windows:before {
  content: "\f6a0";
}

.mdi-wordpress:before {
  content: "\f6a1";
}

.mdi-worker:before {
  content: "\f6a2";
}

.mdi-wrap:before {
  content: "\f6a3";
}

.mdi-wrench:before {
  content: "\f6a4";
}

.mdi-wunderlist:before {
  content: "\f6a5";
}

.mdi-xbox:before {
  content: "\f6a6";
}

.mdi-xbox-controller:before {
  content: "\f6a7";
}

.mdi-xbox-controller-off:before {
  content: "\f6a8";
}

.mdi-xda:before {
  content: "\f6a9";
}

.mdi-xing:before {
  content: "\f6aa";
}

.mdi-xing-box:before {
  content: "\f6ab";
}

.mdi-xing-circle:before {
  content: "\f6ac";
}

.mdi-xml:before {
  content: "\f6ad";
}

.mdi-yeast:before {
  content: "\f6ae";
}

.mdi-yelp:before {
  content: "\f6af";
}

.mdi-youtube-play:before {
  content: "\f6b0";
}

.mdi-zip-box:before {
  content: "\f6b1";
}

.mdi-18px {
  font-size: 18px;
}

.mdi-24px {
  font-size: 24px;
}

.mdi-36px {
  font-size: 36px;
}

.mdi-48px {
  font-size: 48px;
}

.mdi-dark {
  color: rgba(0, 0, 0, 0.54);
}

.mdi-dark.mdi-inactive {
  color: rgba(0, 0, 0, 0.26);
}

.mdi-light {
  color: white;
}

.mdi-light.mdi-inactive {
  color: rgba(255, 255, 255, 0.3);
}

/*# sourceMappingURL=materialdesignicons.css.map */
/**
 * Title: Linecons Flaticon Pack
 * Author: Designmodo
 * Source: https://www.flaticon.com/packs/linecons
 * License:  CC BY 3.0 (https://creativecommons.org/licenses/by/3.0/)
 */
@font-face {
  font-family: "linecons";
  src: url("../fonts/linecons.eot");
  src: url("../fonts/linecons.eot#iefix") format("embedded-opentype"), url("../fonts/linecons.woff") format("woff"), url("../fonts/linecons.ttf") format("truetype"), url("../fonts/linecons.svg") format("svg");
  font-weight: normal;
  font-style: normal;
}

.linecons-ico,
[class^="linecons-"]:before, [class*=" linecons-"]:before,
[class^="linecons-"]:after, [class*=" linecons-"]:after {
  font-family: 'linecons';
  font-size: inherit;
  font-weight: 400;
  font-style: normal;
}

.linecons-banknote:before {
  content: "\e000";
}

.linecons-big58:before {
  content: "\e001";
}

.linecons-big59:before {
  content: "\e002";
}

.linecons-big60:before {
  content: "\e003";
}

.linecons-blockade:before {
  content: "\e004";
}

.linecons-bubble1:before {
  content: "\e005";
}

.linecons-camera6:before {
  content: "\e006";
}

.linecons-camera7:before {
  content: "\e007";
}

.linecons-cup4:before {
  content: "\e008";
}

.linecons-data3:before {
  content: "\e009";
}

.linecons-diamons:before {
  content: "\e00a";
}

.linecons-display14:before {
  content: "\e00b";
}

.linecons-fire:before {
  content: "\e00c";
}

.linecons-heart3:before {
  content: "\e00d";
}

.linecons-lab:before {
  content: "\e00e";
}

.linecons-leaf5:before {
  content: "\e00f";
}

.linecons-like:before {
  content: "\e010";
}

.linecons-location4:before {
  content: "\e011";
}

.linecons-news:before {
  content: "\e012";
}

.linecons-noodle:before {
  content: "\e013";
}

.linecons-note2:before {
  content: "\e014";
}

.linecons-packet:before {
  content: "\e015";
}

.linecons-paperclip2:before {
  content: "\e016";
}

.linecons-paperplane:before {
  content: "\e017";
}

.linecons-parameters:before {
  content: "\e018";
}

.linecons-pen3:before {
  content: "\e019";
}

.linecons-phone12:before {
  content: "\e01a";
}

.linecons-photo3:before {
  content: "\e01b";
}

.linecons-search3:before {
  content: "\e01c";
}

.linecons-see:before {
  content: "\e01d";
}

.linecons-settings3:before {
  content: "\e01e";
}

.linecons-shop1:before {
  content: "\e01f";
}

.linecons-small56:before {
  content: "\e020";
}

.linecons-small57:before {
  content: "\e021";
}

.linecons-small58:before {
  content: "\e022";
}

.linecons-small59:before {
  content: "\e023";
}

.linecons-small60:before {
  content: "\e024";
}

.linecons-small61:before {
  content: "\e025";
}

.linecons-sound:before {
  content: "\e026";
}

.linecons-stack:before {
  content: "\e027";
}

.linecons-study:before {
  content: "\e028";
}

.linecons-t1:before {
  content: "\e029";
}

.linecons-tag6:before {
  content: "\e02a";
}

.linecons-tv1:before {
  content: "\e02b";
}

.linecons-user12:before {
  content: "\e02c";
}

.linecons-vynil:before {
  content: "\e02d";
}

.linecons-wallet:before {
  content: "\e02e";
}

.linecons-world5:before {
  content: "\e02f";
}

@font-face {
  font-family: 'Material Icons';
  font-style: normal;
  font-weight: 400;
  src: url(../fonts/MaterialIcons-Regular.eot);
  /* For IE6-8 */
  src: local("Material Icons"), local("MaterialIcons-Regular"), url(../fonts/MaterialIcons-Regular.woff2) format("woff2"), url(../fonts/MaterialIcons-Regular.woff) format("woff"), url(../fonts/MaterialIcons-Regular.ttf) format("truetype");
}

.material-icons-ico,
[class*="material-icons-"]:before {
  font-family: 'Material Icons';
  font-weight: 400;
  font-style: normal;
  font-size: inherit;
}

.material-icons-3d_rotation:before {
  content: "\e84d";
}

.material-icons-access_alarm:before {
  content: "\e190";
}

.material-icons-access_alarms:before {
  content: "\e191";
}

.material-icons-access_time:before {
  content: "\e192";
}

.material-icons-accessibility:before {
  content: "\e84e";
}

.material-icons-account_balance:before {
  content: "\e84f";
}

.material-icons-account_balance_wallet:before {
  content: "\e850";
}

.material-icons-account_box:before {
  content: "\e851";
}

.material-icons-account_circle:before {
  content: "\e853";
}

.material-icons-adb:before {
  content: "\e60e";
}

.material-icons-add:before {
  content: "\e145";
}

.material-icons-add_alarm:before {
  content: "\e193";
}

.material-icons-add_alert:before {
  content: "\e003";
}

.material-icons-add_box:before {
  content: "\e146";
}

.material-icons-add_circle:before {
  content: "\e147";
}

.material-icons-add_circle_outline:before {
  content: "\e148";
}

.material-icons-add_shopping_cart:before {
  content: "\e854";
}

.material-icons-add_to_photos:before {
  content: "\e39d";
}

.material-icons-adjust:before {
  content: "\e39e";
}

.material-icons-airline_seat_flat:before {
  content: "\e630";
}

.material-icons-airline_seat_flat_angled:before {
  content: "\e631";
}

.material-icons-airline_seat_individual_suite:before {
  content: "\e632";
}

.material-icons-airline_seat_legroom_extra:before {
  content: "\e633";
}

.material-icons-airline_seat_legroom_normal:before {
  content: "\e634";
}

.material-icons-airline_seat_legroom_reduced:before {
  content: "\e635";
}

.material-icons-airline_seat_recline_extra:before {
  content: "\e636";
}

.material-icons-airline_seat_recline_normal:before {
  content: "\e637";
}

.material-icons-airplanemode_active:before {
  content: "\e195";
}

.material-icons-airplanemode_inactive:before {
  content: "\e194";
}

.material-icons-airplay:before {
  content: "\e055";
}

.material-icons-alarm:before {
  content: "\e855";
}

.material-icons-alarm_add:before {
  content: "\e856";
}

.material-icons-alarm_off:before {
  content: "\e857";
}

.material-icons-alarm_on:before {
  content: "\e858";
}

.material-icons-album:before {
  content: "\e019";
}

.material-icons-android:before {
  content: "\e859";
}

.material-icons-announcement:before {
  content: "\e85a";
}

.material-icons-apps:before {
  content: "\e5c3";
}

.material-icons-archive:before {
  content: "\e149";
}

.material-icons-arrow_back:before {
  content: "\e5c4";
}

.material-icons-arrow_drop_down:before {
  content: "\e5c5";
}

.material-icons-arrow_drop_down_circle:before {
  content: "\e5c6";
}

.material-icons-arrow_drop_up:before {
  content: "\e5c7";
}

.material-icons-arrow_forward:before {
  content: "\e5c8";
}

.material-icons-aspect_ratio:before {
  content: "\e85b";
}

.material-icons-assessment:before {
  content: "\e85c";
}

.material-icons-assignment:before {
  content: "\e85d";
}

.material-icons-assignment_ind:before {
  content: "\e85e";
}

.material-icons-assignment_late:before {
  content: "\e85f";
}

.material-icons-assignment_return:before {
  content: "\e860";
}

.material-icons-assignment_returned:before {
  content: "\e861";
}

.material-icons-assignment_turned_in:before {
  content: "\e862";
}

.material-icons-assistant:before {
  content: "\e39f";
}

.material-icons-assistant_photo:before {
  content: "\e3a0";
}

.material-icons-attach_file:before {
  content: "\e226";
}

.material-icons-attach_money:before {
  content: "\e227";
}

.material-icons-attachment:before {
  content: "\e2bc";
}

.material-icons-audiotrack:before {
  content: "\e3a1";
}

.material-icons-autorenew:before {
  content: "\e863";
}

.material-icons-av_timer:before {
  content: "\e01b";
}

.material-icons-backspace:before {
  content: "\e14a";
}

.material-icons-backup:before {
  content: "\e864";
}

.material-icons-battery_alert:before {
  content: "\e19c";
}

.material-icons-battery_charging_full:before {
  content: "\e1a3";
}

.material-icons-battery_full:before {
  content: "\e1a4";
}

.material-icons-battery_std:before {
  content: "\e1a5";
}

.material-icons-battery_unknown:before {
  content: "\e1a6";
}

.material-icons-beenhere:before {
  content: "\e52d";
}

.material-icons-block:before {
  content: "\e14b";
}

.material-icons-bluetooth:before {
  content: "\e1a7";
}

.material-icons-bluetooth_audio:before {
  content: "\e60f";
}

.material-icons-bluetooth_connected:before {
  content: "\e1a8";
}

.material-icons-bluetooth_disabled:before {
  content: "\e1a9";
}

.material-icons-bluetooth_searching:before {
  content: "\e1aa";
}

.material-icons-blur_circular:before {
  content: "\e3a2";
}

.material-icons-blur_linear:before {
  content: "\e3a3";
}

.material-icons-blur_off:before {
  content: "\e3a4";
}

.material-icons-blur_on:before {
  content: "\e3a5";
}

.material-icons-book:before {
  content: "\e865";
}

.material-icons-bookmark:before {
  content: "\e866";
}

.material-icons-bookmark_border:before {
  content: "\e867";
}

.material-icons-border_all:before {
  content: "\e228";
}

.material-icons-border_bottom:before {
  content: "\e229";
}

.material-icons-border_clear:before {
  content: "\e22a";
}

.material-icons-border_color:before {
  content: "\e22b";
}

.material-icons-border_horizontal:before {
  content: "\e22c";
}

.material-icons-border_inner:before {
  content: "\e22d";
}

.material-icons-border_left:before {
  content: "\e22e";
}

.material-icons-border_outer:before {
  content: "\e22f";
}

.material-icons-border_right:before {
  content: "\e230";
}

.material-icons-border_style:before {
  content: "\e231";
}

.material-icons-border_top:before {
  content: "\e232";
}

.material-icons-border_vertical:before {
  content: "\e233";
}

.material-icons-brightness_1:before {
  content: "\e3a6";
}

.material-icons-brightness_2:before {
  content: "\e3a7";
}

.material-icons-brightness_3:before {
  content: "\e3a8";
}

.material-icons-brightness_4:before {
  content: "\e3a9";
}

.material-icons-brightness_5:before {
  content: "\e3aa";
}

.material-icons-brightness_6:before {
  content: "\e3ab";
}

.material-icons-brightness_7:before {
  content: "\e3ac";
}

.material-icons-brightness_auto:before {
  content: "\e1ab";
}

.material-icons-brightness_high:before {
  content: "\e1ac";
}

.material-icons-brightness_low:before {
  content: "\e1ad";
}

.material-icons-brightness_medium:before {
  content: "\e1ae";
}

.material-icons-broken_image:before {
  content: "\e3ad";
}

.material-icons-brush:before {
  content: "\e3ae";
}

.material-icons-bug_report:before {
  content: "\e868";
}

.material-icons-build:before {
  content: "\e869";
}

.material-icons-business:before {
  content: "\e0af";
}

.material-icons-cached:before {
  content: "\e86a";
}

.material-icons-cake:before {
  content: "\e7e9";
}

.material-icons-call:before {
  content: "\e0b0";
}

.material-icons-call_end:before {
  content: "\e0b1";
}

.material-icons-call_made:before {
  content: "\e0b2";
}

.material-icons-call_merge:before {
  content: "\e0b3";
}

.material-icons-call_missed:before {
  content: "\e0b4";
}

.material-icons-call_received:before {
  content: "\e0b5";
}

.material-icons-call_split:before {
  content: "\e0b6";
}

.material-icons-camera:before {
  content: "\e3af";
}

.material-icons-camera_alt:before {
  content: "\e3b0";
}

.material-icons-camera_enhance:before {
  content: "\e8fc";
}

.material-icons-camera_front:before {
  content: "\e3b1";
}

.material-icons-camera_rear:before {
  content: "\e3b2";
}

.material-icons-camera_roll:before {
  content: "\e3b3";
}

.material-icons-cancel:before {
  content: "\e5c9";
}

.material-icons-card_giftcard:before {
  content: "\e8f6";
}

.material-icons-card_membership:before {
  content: "\e8f7";
}

.material-icons-card_travel:before {
  content: "\e8f8";
}

.material-icons-cast:before {
  content: "\e307";
}

.material-icons-cast_connected:before {
  content: "\e308";
}

.material-icons-center_focus_strong:before {
  content: "\e3b4";
}

.material-icons-center_focus_weak:before {
  content: "\e3b5";
}

.material-icons-change_history:before {
  content: "\e86b";
}

.material-icons-chat:before {
  content: "\e0b7";
}

.material-icons-chat_bubble:before {
  content: "\e0ca";
}

.material-icons-chat_bubble_outline:before {
  content: "\e0cb";
}

.material-icons-check:before {
  content: "\e5ca";
}

.material-icons-check_box:before {
  content: "\e834";
}

.material-icons-check_box_outline_blank:before {
  content: "\e835";
}

.material-icons-check_circle:before {
  content: "\e86c";
}

.material-icons-chevron_left:before {
  content: "\e5cb";
}

.material-icons-chevron_right:before {
  content: "\e5cc";
}

.material-icons-chrome_reader_mode:before {
  content: "\e86d";
}

.material-icons-class:before {
  content: "\e86e";
}

.material-icons-clear:before {
  content: "\e14c";
}

.material-icons-clear_all:before {
  content: "\e0b8";
}

.material-icons-close:before {
  content: "\e5cd";
}

.material-icons-closed_caption:before {
  content: "\e01c";
}

.material-icons-cloud:before {
  content: "\e2bd";
}

.material-icons-cloud_circle:before {
  content: "\e2be";
}

.material-icons-cloud_done:before {
  content: "\e2bf";
}

.material-icons-cloud_download:before {
  content: "\e2c0";
}

.material-icons-cloud_off:before {
  content: "\e2c1";
}

.material-icons-cloud_queue:before {
  content: "\e2c2";
}

.material-icons-cloud_upload:before {
  content: "\e2c3";
}

.material-icons-code:before {
  content: "\e86f";
}

.material-icons-collections:before {
  content: "\e3b6";
}

.material-icons-collections_bookmark:before {
  content: "\e431";
}

.material-icons-color_lens:before {
  content: "\e3b7";
}

.material-icons-colorize:before {
  content: "\e3b8";
}

.material-icons-comment:before {
  content: "\e0b9";
}

.material-icons-compare:before {
  content: "\e3b9";
}

.material-icons-computer:before {
  content: "\e30a";
}

.material-icons-confirmation_number:before {
  content: "\e638";
}

.material-icons-contact_phone:before {
  content: "\e0cf";
}

.material-icons-contacts:before {
  content: "\e0ba";
}

.material-icons-content_copy:before {
  content: "\e14d";
}

.material-icons-content_cut:before {
  content: "\e14e";
}

.material-icons-content_paste:before {
  content: "\e14f";
}

.material-icons-control_point:before {
  content: "\e3ba";
}

.material-icons-control_point_duplicate:before {
  content: "\e3bb";
}

.material-icons-create:before {
  content: "\e150";
}

.material-icons-credit_card:before {
  content: "\e870";
}

.material-icons-crop:before {
  content: "\e3be";
}

.material-icons-crop_16_9:before {
  content: "\e3bc";
}

.material-icons-crop_3_2:before {
  content: "\e3bd";
}

.material-icons-crop_5_4:before {
  content: "\e3bf";
}

.material-icons-crop_7_5:before {
  content: "\e3c0";
}

.material-icons-crop_din:before {
  content: "\e3c1";
}

.material-icons-crop_free:before {
  content: "\e3c2";
}

.material-icons-crop_landscape:before {
  content: "\e3c3";
}

.material-icons-crop_original:before {
  content: "\e3c4";
}

.material-icons-crop_portrait:before {
  content: "\e3c5";
}

.material-icons-crop_square:before {
  content: "\e3c6";
}

.material-icons-dashboard:before {
  content: "\e871";
}

.material-icons-data_usage:before {
  content: "\e1af";
}

.material-icons-dehaze:before {
  content: "\e3c7";
}

.material-icons-delete:before {
  content: "\e872";
}

.material-icons-description:before {
  content: "\e873";
}

.material-icons-desktop_mac:before {
  content: "\e30b";
}

.material-icons-desktop_windows:before {
  content: "\e30c";
}

.material-icons-details:before {
  content: "\e3c8";
}

.material-icons-developer_board:before {
  content: "\e30d";
}

.material-icons-developer_mode:before {
  content: "\e1b0";
}

.material-icons-device_hub:before {
  content: "\e335";
}

.material-icons-devices:before {
  content: "\e1b1";
}

.material-icons-dialer_sip:before {
  content: "\e0bb";
}

.material-icons-dialpad:before {
  content: "\e0bc";
}

.material-icons-directions:before {
  content: "\e52e";
}

.material-icons-directions_bike:before {
  content: "\e52f";
}

.material-icons-directions_boat:before {
  content: "\e532";
}

.material-icons-directions_bus:before {
  content: "\e530";
}

.material-icons-directions_car:before {
  content: "\e531";
}

.material-icons-directions_railway:before {
  content: "\e534";
}

.material-icons-directions_run:before {
  content: "\e566";
}

.material-icons-directions_subway:before {
  content: "\e533";
}

.material-icons-directions_transit:before {
  content: "\e535";
}

.material-icons-directions_walk:before {
  content: "\e536";
}

.material-icons-disc_full:before {
  content: "\e610";
}

.material-icons-dns:before {
  content: "\e875";
}

.material-icons-do_not_disturb:before {
  content: "\e612";
}

.material-icons-do_not_disturb_alt:before {
  content: "\e611";
}

.material-icons-dock:before {
  content: "\e30e";
}

.material-icons-domain:before {
  content: "\e7ee";
}

.material-icons-done:before {
  content: "\e876";
}

.material-icons-done_all:before {
  content: "\e877";
}

.material-icons-drafts:before {
  content: "\e151";
}

.material-icons-drive_eta:before {
  content: "\e613";
}

.material-icons-dvr:before {
  content: "\e1b2";
}

.material-icons-edit:before {
  content: "\e3c9";
}

.material-icons-eject:before {
  content: "\e8fb";
}

.material-icons-email:before {
  content: "\e0be";
}

.material-icons-equalizer:before {
  content: "\e01d";
}

.material-icons-error:before {
  content: "\e000";
}

.material-icons-error_outline:before {
  content: "\e001";
}

.material-icons-event:before {
  content: "\e878";
}

.material-icons-event_available:before {
  content: "\e614";
}

.material-icons-event_busy:before {
  content: "\e615";
}

.material-icons-event_note:before {
  content: "\e616";
}

.material-icons-event_seat:before {
  content: "\e903";
}

.material-icons-exit_to_app:before {
  content: "\e879";
}

.material-icons-expand_less:before {
  content: "\e5ce";
}

.material-icons-expand_more:before {
  content: "\e5cf";
}

.material-icons-explicit:before {
  content: "\e01e";
}

.material-icons-explore:before {
  content: "\e87a";
}

.material-icons-exposure:before {
  content: "\e3ca";
}

.material-icons-exposure_neg_1:before {
  content: "\e3cb";
}

.material-icons-exposure_neg_2:before {
  content: "\e3cc";
}

.material-icons-exposure_plus_1:before {
  content: "\e3cd";
}

.material-icons-exposure_plus_2:before {
  content: "\e3ce";
}

.material-icons-exposure_zero:before {
  content: "\e3cf";
}

.material-icons-extension:before {
  content: "\e87b";
}

.material-icons-face:before {
  content: "\e87c";
}

.material-icons-fast_forward:before {
  content: "\e01f";
}

.material-icons-fast_rewind:before {
  content: "\e020";
}

.material-icons-favorite:before {
  content: "\e87d";
}

.material-icons-favorite_border:before {
  content: "\e87e";
}

.material-icons-feedback:before {
  content: "\e87f";
}

.material-icons-file_download:before {
  content: "\e2c4";
}

.material-icons-file_upload:before {
  content: "\e2c6";
}

.material-icons-filter:before {
  content: "\e3d3";
}

.material-icons-filter_1:before {
  content: "\e3d0";
}

.material-icons-filter_2:before {
  content: "\e3d1";
}

.material-icons-filter_3:before {
  content: "\e3d2";
}

.material-icons-filter_4:before {
  content: "\e3d4";
}

.material-icons-filter_5:before {
  content: "\e3d5";
}

.material-icons-filter_6:before {
  content: "\e3d6";
}

.material-icons-filter_7:before {
  content: "\e3d7";
}

.material-icons-filter_8:before {
  content: "\e3d8";
}

.material-icons-filter_9:before {
  content: "\e3d9";
}

.material-icons-filter_9_plus:before {
  content: "\e3da";
}

.material-icons-filter_b_and_w:before {
  content: "\e3db";
}

.material-icons-filter_center_focus:before {
  content: "\e3dc";
}

.material-icons-filter_drama:before {
  content: "\e3dd";
}

.material-icons-filter_frames:before {
  content: "\e3de";
}

.material-icons-filter_hdr:before {
  content: "\e3df";
}

.material-icons-filter_list:before {
  content: "\e152";
}

.material-icons-filter_none:before {
  content: "\e3e0";
}

.material-icons-filter_tilt_shift:before {
  content: "\e3e2";
}

.material-icons-filter_vintage:before {
  content: "\e3e3";
}

.material-icons-find_in_page:before {
  content: "\e880";
}

.material-icons-find_replace:before {
  content: "\e881";
}

.material-icons-flag:before {
  content: "\e153";
}

.material-icons-flare:before {
  content: "\e3e4";
}

.material-icons-flash_auto:before {
  content: "\e3e5";
}

.material-icons-flash_off:before {
  content: "\e3e6";
}

.material-icons-flash_on:before {
  content: "\e3e7";
}

.material-icons-flight:before {
  content: "\e539";
}

.material-icons-flight_land:before {
  content: "\e904";
}

.material-icons-flight_takeoff:before {
  content: "\e905";
}

.material-icons-flip:before {
  content: "\e3e8";
}

.material-icons-flip_to_back:before {
  content: "\e882";
}

.material-icons-flip_to_front:before {
  content: "\e883";
}

.material-icons-folder:before {
  content: "\e2c7";
}

.material-icons-folder_open:before {
  content: "\e2c8";
}

.material-icons-folder_shared:before {
  content: "\e2c9";
}

.material-icons-folder_special:before {
  content: "\e617";
}

.material-icons-font_download:before {
  content: "\e167";
}

.material-icons-format_align_center:before {
  content: "\e234";
}

.material-icons-format_align_justify:before {
  content: "\e235";
}

.material-icons-format_align_left:before {
  content: "\e236";
}

.material-icons-format_align_right:before {
  content: "\e237";
}

.material-icons-format_bold:before {
  content: "\e238";
}

.material-icons-format_clear:before {
  content: "\e239";
}

.material-icons-format_color_fill:before {
  content: "\e23a";
}

.material-icons-format_color_reset:before {
  content: "\e23b";
}

.material-icons-format_color_text:before {
  content: "\e23c";
}

.material-icons-format_indent_decrease:before {
  content: "\e23d";
}

.material-icons-format_indent_increase:before {
  content: "\e23e";
}

.material-icons-format_italic:before {
  content: "\e23f";
}

.material-icons-format_line_spacing:before {
  content: "\e240";
}

.material-icons-format_list_bulleted:before {
  content: "\e241";
}

.material-icons-format_list_numbered:before {
  content: "\e242";
}

.material-icons-format_paint:before {
  content: "\e243";
}

.material-icons-format_quote:before {
  content: "\e244";
}

.material-icons-format_size:before {
  content: "\e245";
}

.material-icons-format_strikethrough:before {
  content: "\e246";
}

.material-icons-format_textdirection_l_to_r:before {
  content: "\e247";
}

.material-icons-format_textdirection_r_to_l:before {
  content: "\e248";
}

.material-icons-format_underlined:before {
  content: "\e249";
}

.material-icons-forum:before {
  content: "\e0bf";
}

.material-icons-forward:before {
  content: "\e154";
}

.material-icons-forward_10:before {
  content: "\e056";
}

.material-icons-forward_30:before {
  content: "\e057";
}

.material-icons-forward_5:before {
  content: "\e058";
}

.material-icons-fullscreen:before {
  content: "\e5d0";
}

.material-icons-fullscreen_exit:before {
  content: "\e5d1";
}

.material-icons-functions:before {
  content: "\e24a";
}

.material-icons-gamepad:before {
  content: "\e30f";
}

.material-icons-games:before {
  content: "\e021";
}

.material-icons-gesture:before {
  content: "\e155";
}

.material-icons-get_app:before {
  content: "\e884";
}

.material-icons-gif:before {
  content: "\e908";
}

.material-icons-gps_fixed:before {
  content: "\e1b3";
}

.material-icons-gps_not_fixed:before {
  content: "\e1b4";
}

.material-icons-gps_off:before {
  content: "\e1b5";
}

.material-icons-grade:before {
  content: "\e885";
}

.material-icons-gradient:before {
  content: "\e3e9";
}

.material-icons-grain:before {
  content: "\e3ea";
}

.material-icons-graphic_eq:before {
  content: "\e1b8";
}

.material-icons-grid_off:before {
  content: "\e3eb";
}

.material-icons-grid_on:before {
  content: "\e3ec";
}

.material-icons-group:before {
  content: "\e7ef";
}

.material-icons-group_add:before {
  content: "\e7f0";
}

.material-icons-group_work:before {
  content: "\e886";
}

.material-icons-hd:before {
  content: "\e052";
}

.material-icons-hdr_off:before {
  content: "\e3ed";
}

.material-icons-hdr_on:before {
  content: "\e3ee";
}

.material-icons-hdr_strong:before {
  content: "\e3f1";
}

.material-icons-hdr_weak:before {
  content: "\e3f2";
}

.material-icons-headset:before {
  content: "\e310";
}

.material-icons-headset_mic:before {
  content: "\e311";
}

.material-icons-healing:before {
  content: "\e3f3";
}

.material-icons-hearing:before {
  content: "\e023";
}

.material-icons-help:before {
  content: "\e887";
}

.material-icons-help_outline:before {
  content: "\e8fd";
}

.material-icons-high_quality:before {
  content: "\e024";
}

.material-icons-highlight_off:before {
  content: "\e888";
}

.material-icons-history:before {
  content: "\e889";
}

.material-icons-home:before {
  content: "\e88a";
}

.material-icons-hotel:before {
  content: "\e53a";
}

.material-icons-hourglass_empty:before {
  content: "\e88b";
}

.material-icons-hourglass_full:before {
  content: "\e88c";
}

.material-icons-http:before {
  content: "\e902";
}

.material-icons-https:before {
  content: "\e88d";
}

.material-icons-image:before {
  content: "\e3f4";
}

.material-icons-image_aspect_ratio:before {
  content: "\e3f5";
}

.material-icons-import_export:before {
  content: "\e0c3";
}

.material-icons-inbox:before {
  content: "\e156";
}

.material-icons-indeterminate_check_box:before {
  content: "\e909";
}

.material-icons-info:before {
  content: "\e88e";
}

.material-icons-info_outline:before {
  content: "\e88f";
}

.material-icons-input:before {
  content: "\e890";
}

.material-icons-insert_chart:before {
  content: "\e24b";
}

.material-icons-insert_comment:before {
  content: "\e24c";
}

.material-icons-insert_drive_file:before {
  content: "\e24d";
}

.material-icons-insert_emoticon:before {
  content: "\e24e";
}

.material-icons-insert_invitation:before {
  content: "\e24f";
}

.material-icons-insert_link:before {
  content: "\e250";
}

.material-icons-insert_photo:before {
  content: "\e251";
}

.material-icons-invert_colors:before {
  content: "\e891";
}

.material-icons-invert_colors_off:before {
  content: "\e0c4";
}

.material-icons-iso:before {
  content: "\e3f6";
}

.material-icons-keyboard:before {
  content: "\e312";
}

.material-icons-keyboard_arrow_down:before {
  content: "\e313";
}

.material-icons-keyboard_arrow_left:before {
  content: "\e314";
}

.material-icons-keyboard_arrow_right:before {
  content: "\e315";
}

.material-icons-keyboard_arrow_up:before {
  content: "\e316";
}

.material-icons-keyboard_backspace:before {
  content: "\e317";
}

.material-icons-keyboard_capslock:before {
  content: "\e318";
}

.material-icons-keyboard_hide:before {
  content: "\e31a";
}

.material-icons-keyboard_return:before {
  content: "\e31b";
}

.material-icons-keyboard_tab:before {
  content: "\e31c";
}

.material-icons-keyboard_voice:before {
  content: "\e31d";
}

.material-icons-label:before {
  content: "\e892";
}

.material-icons-label_outline:before {
  content: "\e893";
}

.material-icons-landscape:before {
  content: "\e3f7";
}

.material-icons-language:before {
  content: "\e894";
}

.material-icons-laptop:before {
  content: "\e31e";
}

.material-icons-laptop_chromebook:before {
  content: "\e31f";
}

.material-icons-laptop_mac:before {
  content: "\e320";
}

.material-icons-laptop_windows:before {
  content: "\e321";
}

.material-icons-launch:before {
  content: "\e895";
}

.material-icons-layers:before {
  content: "\e53b";
}

.material-icons-layers_clear:before {
  content: "\e53c";
}

.material-icons-leak_add:before {
  content: "\e3f8";
}

.material-icons-leak_remove:before {
  content: "\e3f9";
}

.material-icons-lens:before {
  content: "\e3fa";
}

.material-icons-library_add:before {
  content: "\e02e";
}

.material-icons-library_books:before {
  content: "\e02f";
}

.material-icons-library_music:before {
  content: "\e030";
}

.material-icons-link:before {
  content: "\e157";
}

.material-icons-list:before {
  content: "\e896";
}

.material-icons-live_help:before {
  content: "\e0c6";
}

.material-icons-live_tv:before {
  content: "\e639";
}

.material-icons-local_activity:before {
  content: "\e53f";
}

.material-icons-local_airport:before {
  content: "\e53d";
}

.material-icons-local_atm:before {
  content: "\e53e";
}

.material-icons-local_bar:before {
  content: "\e540";
}

.material-icons-local_cafe:before {
  content: "\e541";
}

.material-icons-local_car_wash:before {
  content: "\e542";
}

.material-icons-local_convenience_store:before {
  content: "\e543";
}

.material-icons-local_dining:before {
  content: "\e556";
}

.material-icons-local_drink:before {
  content: "\e544";
}

.material-icons-local_florist:before {
  content: "\e545";
}

.material-icons-local_gas_station:before {
  content: "\e546";
}

.material-icons-local_grocery_store:before {
  content: "\e547";
}

.material-icons-local_hospital:before {
  content: "\e548";
}

.material-icons-local_hotel:before {
  content: "\e549";
}

.material-icons-local_laundry_service:before {
  content: "\e54a";
}

.material-icons-local_library:before {
  content: "\e54b";
}

.material-icons-local_mall:before {
  content: "\e54c";
}

.material-icons-local_movies:before {
  content: "\e54d";
}

.material-icons-local_offer:before {
  content: "\e54e";
}

.material-icons-local_parking:before {
  content: "\e54f";
}

.material-icons-local_pharmacy:before {
  content: "\e550";
}

.material-icons-local_phone:before {
  content: "\e551";
}

.material-icons-local_pizza:before {
  content: "\e552";
}

.material-icons-local_play:before {
  content: "\e553";
}

.material-icons-local_post_office:before {
  content: "\e554";
}

.material-icons-local_printshop:before {
  content: "\e555";
}

.material-icons-local_see:before {
  content: "\e557";
}

.material-icons-local_shipping:before {
  content: "\e558";
}

.material-icons-local_taxi:before {
  content: "\e559";
}

.material-icons-location_city:before {
  content: "\e7f1";
}

.material-icons-location_disabled:before {
  content: "\e1b6";
}

.material-icons-location_off:before {
  content: "\e0c7";
}

.material-icons-location_on:before {
  content: "\e0c8";
}

.material-icons-location_searching:before {
  content: "\e1b7";
}

.material-icons-lock:before {
  content: "\e897";
}

.material-icons-lock_open:before {
  content: "\e898";
}

.material-icons-lock_outline:before {
  content: "\e899";
}

.material-icons-looks:before {
  content: "\e3fc";
}

.material-icons-looks_3:before {
  content: "\e3fb";
}

.material-icons-looks_4:before {
  content: "\e3fd";
}

.material-icons-looks_5:before {
  content: "\e3fe";
}

.material-icons-looks_6:before {
  content: "\e3ff";
}

.material-icons-looks_one:before {
  content: "\e400";
}

.material-icons-looks_two:before {
  content: "\e401";
}

.material-icons-loop:before {
  content: "\e028";
}

.material-icons-loupe:before {
  content: "\e402";
}

.material-icons-loyalty:before {
  content: "\e89a";
}

.material-icons-mail:before {
  content: "\e158";
}

.material-icons-map:before {
  content: "\e55b";
}

.material-icons-markunread:before {
  content: "\e159";
}

.material-icons-markunread_mailbox:before {
  content: "\e89b";
}

.material-icons-memory:before {
  content: "\e322";
}

.material-icons-menu:before {
  content: "\e5d2";
}

.material-icons-merge_type:before {
  content: "\e252";
}

.material-icons-message:before {
  content: "\e0c9";
}

.material-icons-mic:before {
  content: "\e029";
}

.material-icons-mic_none:before {
  content: "\e02a";
}

.material-icons-mic_off:before {
  content: "\e02b";
}

.material-icons-mms:before {
  content: "\e618";
}

.material-icons-mode_comment:before {
  content: "\e253";
}

.material-icons-mode_edit:before {
  content: "\e254";
}

.material-icons-money_off:before {
  content: "\e25c";
}

.material-icons-monochrome_photos:before {
  content: "\e403";
}

.material-icons-mood:before {
  content: "\e7f2";
}

.material-icons-mood_bad:before {
  content: "\e7f3";
}

.material-icons-more:before {
  content: "\e619";
}

.material-icons-more_horiz:before {
  content: "\e5d3";
}

.material-icons-more_vert:before {
  content: "\e5d4";
}

.material-icons-mouse:before {
  content: "\e323";
}

.material-icons-movie:before {
  content: "\e02c";
}

.material-icons-movie_creation:before {
  content: "\e404";
}

.material-icons-music_note:before {
  content: "\e405";
}

.material-icons-my_location:before {
  content: "\e55c";
}

.material-icons-nature:before {
  content: "\e406";
}

.material-icons-nature_people:before {
  content: "\e407";
}

.material-icons-navigate_before:before {
  content: "\e408";
}

.material-icons-navigate_next:before {
  content: "\e409";
}

.material-icons-navigation:before {
  content: "\e55d";
}

.material-icons-network_cell:before {
  content: "\e1b9";
}

.material-icons-network_locked:before {
  content: "\e61a";
}

.material-icons-network_wifi:before {
  content: "\e1ba";
}

.material-icons-new_releases:before {
  content: "\e031";
}

.material-icons-nfc:before {
  content: "\e1bb";
}

.material-icons-no_sim:before {
  content: "\e0cc";
}

.material-icons-not_interested:before {
  content: "\e033";
}

.material-icons-note_add:before {
  content: "\e89c";
}

.material-icons-notifications:before {
  content: "\e7f4";
}

.material-icons-notifications_active:before {
  content: "\e7f7";
}

.material-icons-notifications_none:before {
  content: "\e7f5";
}

.material-icons-notifications_off:before {
  content: "\e7f6";
}

.material-icons-notifications_paused:before {
  content: "\e7f8";
}

.material-icons-offline_pin:before {
  content: "\e90a";
}

.material-icons-ondemand_video:before {
  content: "\e63a";
}

.material-icons-open_in_browser:before {
  content: "\e89d";
}

.material-icons-open_in_new:before {
  content: "\e89e";
}

.material-icons-open_with:before {
  content: "\e89f";
}

.material-icons-pages:before {
  content: "\e7f9";
}

.material-icons-pageview:before {
  content: "\e8a0";
}

.material-icons-palette:before {
  content: "\e40a";
}

.material-icons-panorama:before {
  content: "\e40b";
}

.material-icons-panorama_fish_eye:before {
  content: "\e40c";
}

.material-icons-panorama_horizontal:before {
  content: "\e40d";
}

.material-icons-panorama_vertical:before {
  content: "\e40e";
}

.material-icons-panorama_wide_angle:before {
  content: "\e40f";
}

.material-icons-party_mode:before {
  content: "\e7fa";
}

.material-icons-pause:before {
  content: "\e034";
}

.material-icons-pause_circle_filled:before {
  content: "\e035";
}

.material-icons-pause_circle_outline:before {
  content: "\e036";
}

.material-icons-payment:before {
  content: "\e8a1";
}

.material-icons-people:before {
  content: "\e7fb";
}

.material-icons-people_outline:before {
  content: "\e7fc";
}

.material-icons-perm_camera_mic:before {
  content: "\e8a2";
}

.material-icons-perm_contact_calendar:before {
  content: "\e8a3";
}

.material-icons-perm_data_setting:before {
  content: "\e8a4";
}

.material-icons-perm_device_information:before {
  content: "\e8a5";
}

.material-icons-perm_identity:before {
  content: "\e8a6";
}

.material-icons-perm_media:before {
  content: "\e8a7";
}

.material-icons-perm_phone_msg:before {
  content: "\e8a8";
}

.material-icons-perm_scan_wifi:before {
  content: "\e8a9";
}

.material-icons-person:before {
  content: "\e7fd";
}

.material-icons-person_add:before {
  content: "\e7fe";
}

.material-icons-person_outline:before {
  content: "\e7ff";
}

.material-icons-person_pin:before {
  content: "\e55a";
}

.material-icons-personal_video:before {
  content: "\e63b";
}

.material-icons-phone:before {
  content: "\e0cd";
}

.material-icons-phone_android:before {
  content: "\e324";
}

.material-icons-phone_bluetooth_speaker:before {
  content: "\e61b";
}

.material-icons-phone_forwarded:before {
  content: "\e61c";
}

.material-icons-phone_in_talk:before {
  content: "\e61d";
}

.material-icons-phone_iphone:before {
  content: "\e325";
}

.material-icons-phone_locked:before {
  content: "\e61e";
}

.material-icons-phone_missed:before {
  content: "\e61f";
}

.material-icons-phone_paused:before {
  content: "\e620";
}

.material-icons-phonelink:before {
  content: "\e326";
}

.material-icons-phonelink_erase:before {
  content: "\e0db";
}

.material-icons-phonelink_lock:before {
  content: "\e0dc";
}

.material-icons-phonelink_off:before {
  content: "\e327";
}

.material-icons-phonelink_ring:before {
  content: "\e0dd";
}

.material-icons-phonelink_setup:before {
  content: "\e0de";
}

.material-icons-photo:before {
  content: "\e410";
}

.material-icons-photo_album:before {
  content: "\e411";
}

.material-icons-photo_camera:before {
  content: "\e412";
}

.material-icons-photo_library:before {
  content: "\e413";
}

.material-icons-photo_size_select_actual:before {
  content: "\e432";
}

.material-icons-photo_size_select_large:before {
  content: "\e433";
}

.material-icons-photo_size_select_small:before {
  content: "\e434";
}

.material-icons-picture_as_pdf:before {
  content: "\e415";
}

.material-icons-picture_in_picture:before {
  content: "\e8aa";
}

.material-icons-pin_drop:before {
  content: "\e55e";
}

.material-icons-place:before {
  content: "\e55f";
}

.material-icons-play_arrow:before {
  content: "\e037";
}

.material-icons-play_circle_filled:before {
  content: "\e038";
}

.material-icons-play_circle_outline:before {
  content: "\e039";
}

.material-icons-play_for_work:before {
  content: "\e906";
}

.material-icons-playlist_add:before {
  content: "\e03b";
}

.material-icons-plus_one:before {
  content: "\e800";
}

.material-icons-poll:before {
  content: "\e801";
}

.material-icons-polymer:before {
  content: "\e8ab";
}

.material-icons-portable_wifi_off:before {
  content: "\e0ce";
}

.material-icons-portrait:before {
  content: "\e416";
}

.material-icons-power:before {
  content: "\e63c";
}

.material-icons-power_input:before {
  content: "\e336";
}

.material-icons-power_settings_new:before {
  content: "\e8ac";
}

.material-icons-present_to_all:before {
  content: "\e0df";
}

.material-icons-print:before {
  content: "\e8ad";
}

.material-icons-public:before {
  content: "\e80b";
}

.material-icons-publish:before {
  content: "\e255";
}

.material-icons-query_builder:before {
  content: "\e8ae";
}

.material-icons-question_answer:before {
  content: "\e8af";
}

.material-icons-queue:before {
  content: "\e03c";
}

.material-icons-queue_music:before {
  content: "\e03d";
}

.material-icons-radio:before {
  content: "\e03e";
}

.material-icons-radio_button_checked:before {
  content: "\e837";
}

.material-icons-radio_button_unchecked:before {
  content: "\e836";
}

.material-icons-rate_review:before {
  content: "\e560";
}

.material-icons-receipt:before {
  content: "\e8b0";
}

.material-icons-recent_actors:before {
  content: "\e03f";
}

.material-icons-redeem:before {
  content: "\e8b1";
}

.material-icons-redo:before {
  content: "\e15a";
}

.material-icons-refresh:before {
  content: "\e5d5";
}

.material-icons-remove:before {
  content: "\e15b";
}

.material-icons-remove_circle:before {
  content: "\e15c";
}

.material-icons-remove_circle_outline:before {
  content: "\e15d";
}

.material-icons-remove_red_eye:before {
  content: "\e417";
}

.material-icons-reorder:before {
  content: "\e8fe";
}

.material-icons-repeat:before {
  content: "\e040";
}

.material-icons-repeat_one:before {
  content: "\e041";
}

.material-icons-replay:before {
  content: "\e042";
}

.material-icons-replay_10:before {
  content: "\e059";
}

.material-icons-replay_30:before {
  content: "\e05a";
}

.material-icons-replay_5:before {
  content: "\e05b";
}

.material-icons-reply:before {
  content: "\e15e";
}

.material-icons-reply_all:before {
  content: "\e15f";
}

.material-icons-report:before {
  content: "\e160";
}

.material-icons-report_problem:before {
  content: "\e8b2";
}

.material-icons-restaurant_menu:before {
  content: "\e561";
}

.material-icons-restore:before {
  content: "\e8b3";
}

.material-icons-ring_volume:before {
  content: "\e0d1";
}

.material-icons-room:before {
  content: "\e8b4";
}

.material-icons-rotate_90_degrees_ccw:before {
  content: "\e418";
}

.material-icons-rotate_left:before {
  content: "\e419";
}

.material-icons-rotate_right:before {
  content: "\e41a";
}

.material-icons-router:before {
  content: "\e328";
}

.material-icons-satellite:before {
  content: "\e562";
}

.material-icons-save:before {
  content: "\e161";
}

.material-icons-scanner:before {
  content: "\e329";
}

.material-icons-schedule:before {
  content: "\e8b5";
}

.material-icons-school:before {
  content: "\e80c";
}

.material-icons-screen_lock_landscape:before {
  content: "\e1be";
}

.material-icons-screen_lock_portrait:before {
  content: "\e1bf";
}

.material-icons-screen_lock_rotation:before {
  content: "\e1c0";
}

.material-icons-screen_rotation:before {
  content: "\e1c1";
}

.material-icons-sd_card:before {
  content: "\e623";
}

.material-icons-sd_storage:before {
  content: "\e1c2";
}

.material-icons-search:before {
  content: "\e8b6";
}

.material-icons-security:before {
  content: "\e32a";
}

.material-icons-select_all:before {
  content: "\e162";
}

.material-icons-send:before {
  content: "\e163";
}

.material-icons-settings:before {
  content: "\e8b8";
}

.material-icons-settings_applications:before {
  content: "\e8b9";
}

.material-icons-settings_backup_restore:before {
  content: "\e8ba";
}

.material-icons-settings_bluetooth:before {
  content: "\e8bb";
}

.material-icons-settings_brightness:before {
  content: "\e8bd";
}

.material-icons-settings_cell:before {
  content: "\e8bc";
}

.material-icons-settings_ethernet:before {
  content: "\e8be";
}

.material-icons-settings_input_antenna:before {
  content: "\e8bf";
}

.material-icons-settings_input_component:before {
  content: "\e8c0";
}

.material-icons-settings_input_composite:before {
  content: "\e8c1";
}

.material-icons-settings_input_hdmi:before {
  content: "\e8c2";
}

.material-icons-settings_input_svideo:before {
  content: "\e8c3";
}

.material-icons-settings_overscan:before {
  content: "\e8c4";
}

.material-icons-settings_phone:before {
  content: "\e8c5";
}

.material-icons-settings_power:before {
  content: "\e8c6";
}

.material-icons-settings_remote:before {
  content: "\e8c7";
}

.material-icons-settings_system_daydream:before {
  content: "\e1c3";
}

.material-icons-settings_voice:before {
  content: "\e8c8";
}

.material-icons-share:before {
  content: "\e80d";
}

.material-icons-shop:before {
  content: "\e8c9";
}

.material-icons-shop_two:before {
  content: "\e8ca";
}

.material-icons-shopping_basket:before {
  content: "\e8cb";
}

.material-icons-shopping_cart:before {
  content: "\e8cc";
}

.material-icons-shuffle:before {
  content: "\e043";
}

.material-icons-signal_cellular_4_bar:before {
  content: "\e1c8";
}

.material-icons-signal_cellular_connected_no_internet_4_bar:before {
  content: "\e1cd";
}

.material-icons-signal_cellular_no_sim:before {
  content: "\e1ce";
}

.material-icons-signal_cellular_null:before {
  content: "\e1cf";
}

.material-icons-signal_cellular_off:before {
  content: "\e1d0";
}

.material-icons-signal_wifi_4_bar:before {
  content: "\e1d8";
}

.material-icons-signal_wifi_4_bar_lock:before {
  content: "\e1d9";
}

.material-icons-signal_wifi_off:before {
  content: "\e1da";
}

.material-icons-sim_card:before {
  content: "\e32b";
}

.material-icons-sim_card_alert:before {
  content: "\e624";
}

.material-icons-skip_next:before {
  content: "\e044";
}

.material-icons-skip_previous:before {
  content: "\e045";
}

.material-icons-slideshow:before {
  content: "\e41b";
}

.material-icons-smartphone:before {
  content: "\e32c";
}

.material-icons-sms:before {
  content: "\e625";
}

.material-icons-sms_failed:before {
  content: "\e626";
}

.material-icons-snooze:before {
  content: "\e046";
}

.material-icons-sort:before {
  content: "\e164";
}

.material-icons-sort_by_alpha:before {
  content: "\e053";
}

.material-icons-space_bar:before {
  content: "\e256";
}

.material-icons-speaker:before {
  content: "\e32d";
}

.material-icons-speaker_group:before {
  content: "\e32e";
}

.material-icons-speaker_notes:before {
  content: "\e8cd";
}

.material-icons-speaker_phone:before {
  content: "\e0d2";
}

.material-icons-spellcheck:before {
  content: "\e8ce";
}

.material-icons-star:before {
  content: "\e838";
}

.material-icons-star_border:before {
  content: "\e83a";
}

.material-icons-star_half:before {
  content: "\e839";
}

.material-icons-stars:before {
  content: "\e8d0";
}

.material-icons-stay_current_landscape:before {
  content: "\e0d3";
}

.material-icons-stay_current_portrait:before {
  content: "\e0d4";
}

.material-icons-stay_primary_landscape:before {
  content: "\e0d5";
}

.material-icons-stay_primary_portrait:before {
  content: "\e0d6";
}

.material-icons-stop:before {
  content: "\e047";
}

.material-icons-storage:before {
  content: "\e1db";
}

.material-icons-store:before {
  content: "\e8d1";
}

.material-icons-store_mall_directory:before {
  content: "\e563";
}

.material-icons-straighten:before {
  content: "\e41c";
}

.material-icons-strikethrough_s:before {
  content: "\e257";
}

.material-icons-style:before {
  content: "\e41d";
}

.material-icons-subject:before {
  content: "\e8d2";
}

.material-icons-subtitles:before {
  content: "\e048";
}

.material-icons-supervisor_account:before {
  content: "\e8d3";
}

.material-icons-surround_sound:before {
  content: "\e049";
}

.material-icons-swap_calls:before {
  content: "\e0d7";
}

.material-icons-swap_horiz:before {
  content: "\e8d4";
}

.material-icons-swap_vert:before {
  content: "\e8d5";
}

.material-icons-swap_vertical_circle:before {
  content: "\e8d6";
}

.material-icons-switch_camera:before {
  content: "\e41e";
}

.material-icons-switch_video:before {
  content: "\e41f";
}

.material-icons-sync:before {
  content: "\e627";
}

.material-icons-sync_disabled:before {
  content: "\e628";
}

.material-icons-sync_problem:before {
  content: "\e629";
}

.material-icons-system_update:before {
  content: "\e62a";
}

.material-icons-system_update_alt:before {
  content: "\e8d7";
}

.material-icons-tab:before {
  content: "\e8d8";
}

.material-icons-tab_unselected:before {
  content: "\e8d9";
}

.material-icons-tablet:before {
  content: "\e32f";
}

.material-icons-tablet_android:before {
  content: "\e330";
}

.material-icons-tablet_mac:before {
  content: "\e331";
}

.material-icons-tag_faces:before {
  content: "\e420";
}

.material-icons-tap_and_play:before {
  content: "\e62b";
}

.material-icons-terrain:before {
  content: "\e564";
}

.material-icons-text_format:before {
  content: "\e165";
}

.material-icons-textsms:before {
  content: "\e0d8";
}

.material-icons-texture:before {
  content: "\e421";
}

.material-icons-theaters:before {
  content: "\e8da";
}

.material-icons-thumb_down:before {
  content: "\e8db";
}

.material-icons-thumb_up:before {
  content: "\e8dc";
}

.material-icons-thumbs_up_down:before {
  content: "\e8dd";
}

.material-icons-time_to_leave:before {
  content: "\e62c";
}

.material-icons-timelapse:before {
  content: "\e422";
}

.material-icons-timer:before {
  content: "\e425";
}

.material-icons-timer_10:before {
  content: "\e423";
}

.material-icons-timer_3:before {
  content: "\e424";
}

.material-icons-timer_off:before {
  content: "\e426";
}

.material-icons-toc:before {
  content: "\e8de";
}

.material-icons-today:before {
  content: "\e8df";
}

.material-icons-toll:before {
  content: "\e8e0";
}

.material-icons-tonality:before {
  content: "\e427";
}

.material-icons-toys:before {
  content: "\e332";
}

.material-icons-track_changes:before {
  content: "\e8e1";
}

.material-icons-traffic:before {
  content: "\e565";
}

.material-icons-transform:before {
  content: "\e428";
}

.material-icons-translate:before {
  content: "\e8e2";
}

.material-icons-trending_down:before {
  content: "\e8e3";
}

.material-icons-trending_flat:before {
  content: "\e8e4";
}

.material-icons-trending_up:before {
  content: "\e8e5";
}

.material-icons-tune:before {
  content: "\e429";
}

.material-icons-turned_in:before {
  content: "\e8e6";
}

.material-icons-turned_in_not:before {
  content: "\e8e7";
}

.material-icons-tv:before {
  content: "\e333";
}

.material-icons-undo:before {
  content: "\e166";
}

.material-icons-unfold_less:before {
  content: "\e5d6";
}

.material-icons-unfold_more:before {
  content: "\e5d7";
}

.material-icons-usb:before {
  content: "\e1e0";
}

.material-icons-verified_user:before {
  content: "\e8e8";
}

.material-icons-vertical_align_bottom:before {
  content: "\e258";
}

.material-icons-vertical_align_center:before {
  content: "\e259";
}

.material-icons-vertical_align_top:before {
  content: "\e25a";
}

.material-icons-vibration:before {
  content: "\e62d";
}

.material-icons-video_library:before {
  content: "\e04a";
}

.material-icons-videocam:before {
  content: "\e04b";
}

.material-icons-videocam_off:before {
  content: "\e04c";
}

.material-icons-view_agenda:before {
  content: "\e8e9";
}

.material-icons-view_array:before {
  content: "\e8ea";
}

.material-icons-view_carousel:before {
  content: "\e8eb";
}

.material-icons-view_column:before {
  content: "\e8ec";
}

.material-icons-view_comfy:before {
  content: "\e42a";
}

.material-icons-view_compact:before {
  content: "\e42b";
}

.material-icons-view_day:before {
  content: "\e8ed";
}

.material-icons-view_headline:before {
  content: "\e8ee";
}

.material-icons-view_list:before {
  content: "\e8ef";
}

.material-icons-view_module:before {
  content: "\e8f0";
}

.material-icons-view_quilt:before {
  content: "\e8f1";
}

.material-icons-view_stream:before {
  content: "\e8f2";
}

.material-icons-view_week:before {
  content: "\e8f3";
}

.material-icons-vignette:before {
  content: "\e435";
}

.material-icons-visibility:before {
  content: "\e8f4";
}

.material-icons-visibility_off:before {
  content: "\e8f5";
}

.material-icons-voice_chat:before {
  content: "\e62e";
}

.material-icons-voicemail:before {
  content: "\e0d9";
}

.material-icons-volume_down:before {
  content: "\e04d";
}

.material-icons-volume_mute:before {
  content: "\e04e";
}

.material-icons-volume_off:before {
  content: "\e04f";
}

.material-icons-volume_up:before {
  content: "\e050";
}

.material-icons-vpn_key:before {
  content: "\e0da";
}

.material-icons-vpn_lock:before {
  content: "\e62f";
}

.material-icons-wallpaper:before {
  content: "\e1bc";
}

.material-icons-warning:before {
  content: "\e002";
}

.material-icons-watch:before {
  content: "\e334";
}

.material-icons-wb_auto:before {
  content: "\e42c";
}

.material-icons-wb_cloudy:before {
  content: "\e42d";
}

.material-icons-wb_incandescent:before {
  content: "\e42e";
}

.material-icons-wb_iridescent:before {
  content: "\e436";
}

.material-icons-wb_sunny:before {
  content: "\e430";
}

.material-icons-wc:before {
  content: "\e63d";
}

.material-icons-web:before {
  content: "\e051";
}

.material-icons-whatshot:before {
  content: "\e80e";
}

.material-icons-widgets:before {
  content: "\e1bd";
}

.material-icons-wifi:before {
  content: "\e63e";
}

.material-icons-wifi_lock:before {
  content: "\e1e1";
}

.material-icons-wifi_tethering:before {
  content: "\e1e2";
}

.material-icons-work:before {
  content: "\e8f9";
}

.material-icons-wrap_text:before {
  content: "\e25b";
}

.material-icons-youtube_searched_for:before {
  content: "\e8fa";
}

.material-icons-zoom_in:before {
  content: "\e8ff";
}

.material-icons-zoom_out:before {
  content: "\e900";
}

.thumbnail {
  position: relative;
  z-index: 1;
  width: 100%;
  max-height: 100%;
  overflow: hidden;
  padding: 0;
  margin: 0;
  border: none;
  border-radius: 0;
}

.img-thumbnail,
.thumbnail {
  box-shadow: none;
}

.thumbnail-variant-1 .caption {
  margin-top: 11px;
}

.thumbnail-variant-1 * + p {
  margin-top: 4px;
}

.thumbnail-variant-2 > .caption {
  margin-top: 21px;
  text-align: center;
}

.thumbnail-variant-2 * + p {
  margin-top: 11px;
}

.thumbnail-variant-2 * + .list-inline {
  margin-top: 20px;
}

.thumbnail-variant-3,
.thumbnail-variant-4 {
  width: 100.01%;
  overflow: hidden;
  text-align: center;
}

.thumbnail-variant-3 *,
.thumbnail-variant-4 * {
  color: #fff;
}

.thumbnail-variant-3 figure,
.thumbnail-variant-4 figure {
  display: -ms-flexbox;
  display: -webkit-flex;
  display: flex;
  -webkit-justify-content: center;
  -ms-flex-pack: center;
  justify-content: center;
  -webkit-align-items: center;
  -ms-flex-align: center;
  align-items: center;
  background: #000;
}

.thumbnail-variant-3 img,
.thumbnail-variant-4 img {
  -webkit-flex-grow: 1;
  -ms-flex-positive: 1;
  flex-grow: 1;
  -ms-flex-negative: 0;
  -webkit-flex-shrink: 0;
  flex-shrink: 0;
  position: relative;
  left: 50%;
  -webkit-transform: translateX(-50%);
  transform: translateX(-50%);
  width: auto;
  max-width: none;
  min-width: 100.5%;
  opacity: 1;
  will-change: opacity;
  transition: .33s all ease-in-out;
}

.thumbnail-variant-3 .caption,
.thumbnail-variant-4 .caption {
  position: absolute;
  top: 0;
  right: 0;
  bottom: 0;
  left: 0;
  z-index: 1;
  display: -ms-flexbox;
  display: -webkit-flex;
  display: flex;
  -webkit-flex-direction: column;
  -ms-flex-direction: column;
  flex-direction: column;
  -webkit-justify-content: center;
  -ms-flex-pack: center;
  justify-content: center;
  -webkit-align-items: center;
  -ms-flex-align: center;
  align-items: center;
  padding: 15px;
  transition: .33s all ease-in-out;
  pointer-events: none;
}

.thumbnail-variant-3 .caption:before,
.thumbnail-variant-4 .caption:before {
  display: block;
  font-size: 72px;
  line-height: 72px;
  transition: .33s all ease;
}

.thumbnail-variant-3 .caption > *,
.thumbnail-variant-4 .caption > * {
  max-width: 280px;
  color: #fff;
  pointer-events: auto;
}

.thumbnail-variant-3 .caption span,
.thumbnail-variant-4 .caption span {
  display: block;
}

@media (min-width: 992px) {
  .desktop .thumbnail-variant-3 .caption, .desktop
  .thumbnail-variant-4 .caption {
    opacity: 0;
    visibility: hidden;
    -webkit-transform: translateY(30px);
    transform: translateY(30px);
    will-change: opacity, transform;
  }
  .desktop .thumbnail-variant-3:hover .caption, .desktop
  .thumbnail-variant-4:hover .caption {
    opacity: 1;
    visibility: visible;
    -webkit-transform: translateY(0);
    transform: translateY(0);
    will-change: opacity, transform;
  }
}

.thumbnail-variant-3 .thumbnail-original-link,
.thumbnail-variant-4 .thumbnail-original-link {
  position: absolute;
  top: 0;
  right: 0;
  bottom: 0;
  left: 0;
  z-index: 1;
  cursor: pointer;
}

.thumbnail-variant-3 .thumbnail-link,
.thumbnail-variant-4 .thumbnail-link {
  position: relative;
  z-index: 2;
  line-height: 1;
  color: #fff;
  opacity: 1;
  transition: .2s all ease-in-out;
}

.thumbnail-variant-3 .thumbnail-link:before,
.thumbnail-variant-4 .thumbnail-link:before {
  content: '\f0c1';
  font-family: "FontAwesome";
}

.thumbnail-variant-3 .thumbnail-link:hover,
.thumbnail-variant-4 .thumbnail-link:hover {
  color: #75bdff;
}

.thumbnail-variant-3 .caption-text,
.thumbnail-variant-4 .caption-text {
  margin-top: 5px;
}

@media (max-width: 767px) {
  .thumbnail-variant-3,
  .thumbnail-variant-4 {
    max-width: 370px;
    margin-left: auto;
    margin-right: auto;
  }
}

.thumbnail-variant-3 img {
  opacity: .4;
}

.thumbnail-variant-3 .thumbnail-link {
  font-size: 30px;
}

@media (min-width: 992px) {
  .desktop .thumbnail-variant-3 img {
    opacity: 1;
  }
  .desktop .thumbnail-variant-3:hover img {
    opacity: .4;
  }
}

.thumbnail-variant-4 img {
  opacity: .6;
}

.thumbnail-variant-4 .thumbnail-link {
  font-size: 36px;
}

.thumbnail-variant-4 .caption p {
  color: #dbdbdb;
}

.thumbnail-variant-4 .caption-text {
  margin-top: 17px;
}

@media (min-width: 992px) {
  .desktop .thumbnail-variant-4 img {
    opacity: 1;
  }
  .desktop .thumbnail-variant-4:hover img {
    opacity: .6;
  }
}

.thumbnail-variant-5 figure {
  display: -ms-flexbox;
  display: -webkit-flex;
  display: flex;
  -webkit-align-items: center;
  -ms-flex-align: center;
  align-items: center;
  -webkit-justify-content: center;
  -ms-flex-pack: center;
  justify-content: center;
}

.thumbnail-variant-5 figure img {
  -ms-flex-negative: 0;
  -webkit-flex-shrink: 0;
  flex-shrink: 0;
  width: auto;
  height: 100%;
  max-width: none;
  min-width: 100%;
}

.thumbnail-variant-5 .thumbnail-overlay {
  position: absolute;
  top: 0;
  right: 0;
  bottom: 0;
  left: 0;
  background: rgba(49, 49, 50, 0);
  text-align: center;
  vertical-align: middle;
  white-space: nowrap;
  transition: .2s all ease-in-out;
}

.thumbnail-variant-5 .thumbnail-overlay:after {
  content: '';
  height: 100%;
  display: inline-block;
  width: 0;
  vertical-align: middle;
}

.thumbnail-variant-5 .thumbnail-overlay:before {
  position: relative;
  display: inline-block;
  content: '\f00e';
  font-family: "FontAwesome";
  font-size: 22px;
  color: #fff;
  opacity: 0;
  visibility: hidden;
  transition: .3s all ease-in-out;
  -webkit-transform: translate3d(0, 30px, 0);
  transform: translate3d(0, 30px, 0);
  will-change: transform;
}

.thumbnail-variant-5 .thumbnail-overlay:hover {
  background: rgba(49, 49, 50, 0.4);
}

.thumbnail-variant-5 .thumbnail-overlay:hover:before {
  opacity: 1;
  visibility: visible;
  -webkit-transform: translate3d(0, 0, 0);
  transform: translate3d(0, 0, 0);
}

.thumbnail-video {
  position: relative;
  background: #313132;
}

.thumbnail-video img {
  opacity: .7;
  transition: .33s all ease;
}

.thumbnail-video .caption {
  position: absolute;
  top: 50%;
  left: 50%;
  -webkit-transform: translate3d(-50%, -50%, 0);
  transform: translate3d(-50%, -50%, 0);
}

.thumbnail-block {
  display: block;
}

.thumbnail-block > img,
.thumbnail-block a > img {
  width: 100%;
  height: auto;
}

figure img {
  width: 100%;
  height: auto;
  max-width: none;
}

.figure .caption {
  padding: 15px;
}

.figure-variant-1 figcaption {
  margin-top: 11px;
  font-style: italic;
}

.rd-mailform {
  position: relative;
}

label {
  margin-bottom: 5px;
  font-weight: 400;
}

.input-sm, .input-group-sm > .form-control,
.input-group-sm > .input-group-addon,
.input-group-sm > .input-group-btn > .btn,
.input-lg,
.input-group-lg > .form-control,
.input-group-lg > .input-group-addon,
.input-group-lg > .input-group-btn > .btn,
.form-control {
  font-size: 14px;
}

.input-sm, .input-group-sm > .form-control,
.input-group-sm > .input-group-addon,
.input-group-sm > .input-group-btn > .btn, .input-sm:focus, .input-group-sm > .form-control:focus,
.input-group-sm > .input-group-addon:focus,
.input-group-sm > .input-group-btn > .btn:focus,
.input-lg,
.input-group-lg > .form-control,
.input-group-lg > .input-group-addon,
.input-group-lg > .input-group-btn > .btn,
.input-lg:focus,
.input-group-lg > .form-control:focus,
.input-group-lg > .input-group-addon:focus,
.input-group-lg > .input-group-btn > .btn:focus,
.form-control,
.form-control:focus {
  box-shadow: none;
}

textarea.form-control {
  height: 150px;
  min-height: 50px;
  max-height: 225px;
  resize: vertical;
}

.form-control {
  -webkit-appearance: none;
  border-radius: 25px;
  padding: 14px 20px;
  line-height: 22px;
}

.form-control:focus {
  outline: 0;
}

.form-group {
  position: relative;
  margin-bottom: 0;
  text-align: left;
}

.form-group + .form-group {
  margin-top: 15px;
}

.form-label {
  position: absolute;
  top: 25px;
  left: 20px;
  font-size: 14px;
  color: #999;
  pointer-events: none;
  z-index: 9;
  transition: .3s;
  -webkit-transform: translateY(-50%);
  transform: translateY(-50%);
}

.form-label.focus {
  opacity: 0;
}

.form-label.auto-fill {
  color: #313132;
}

@media (min-width: 768px) {
  .form-label-outside {
    position: static;
  }
  .form-label-outside, .form-label-outside.focus, .form-label-outside.auto-fill {
    -webkit-transform: none;
    transform: none;
    color: #999;
    font-size: 14px;
  }
}

.form-validation {
  position: absolute;
  right: 20px;
  top: 10px;
  font-size: 11px;
  line-height: 11px;
  color: #ff4242;
  margin-top: 2px;
  transition: .3s;
  text-align: left;
}

.has-error .help-block,
.has-error .control-label,
.has-error .radio,
.has-error .checkbox,
.has-error .radio-inline,
.has-error .checkbox-inline,
.has-error.radio label,
.has-error.checkbox label,
.has-error.radio-inline label,
.has-error.checkbox-inline label {
  color: #ff4242;
}

.has-error .form-control:not(.form-control-impressed), .has-error .form-control:not(.form-control-impressed):focus {
  border-color: #ff4242;
  box-shadow: none;
}

.has-error .form-control-impressed, .has-error .form-control-impressed:focus {
  box-shadow: inset 0 0 0 1px #ff4242;
}

.has-error .input-group-addon {
  color: #fff;
  border-color: #ff4242;
  background-color: #ff4242;
}

.has-error .input-group-btn > .btn {
  border-color: #ff4242;
  background: #ff4242;
}

.has-error + .btn, .has-error + .btn:active, .has-error + .btn:focus {
  color: #fff;
  border-color: #ff4242;
  background: #ff4242;
}

.has-error + .btn:hover {
  color: #fff;
  border-color: #ff5c5c;
  background: #ff5c5c;
}

.has-error .form-validation {
  color: #ff4242;
}

.has-success .help-block,
.has-success .control-label,
.has-success .radio,
.has-success .checkbox,
.has-success .radio-inline,
.has-success .checkbox-inline,
.has-success.radio label,
.has-success.checkbox label,
.has-success.radio-inline label,
.has-success.checkbox-inline label {
  color: #5cb85c;
}

.has-success .form-control:not(.form-control-impressed), .has-success .form-control:not(.form-control-impressed):focus {
  border-color: #dff0d8;
  box-shadow: none;
}

.has-success .form-control-impressed, .has-success .form-control-impressed:focus {
  box-shadow: inset 0 0 0 1px #dff0d8;
}

.has-success .input-group-addon {
  color: #fff;
  border-color: #dff0d8;
  background-color: #dff0d8;
}

.has-success .input-group-btn > .btn {
  border-color: #dff0d8;
  background: #dff0d8;
}

.has-success + .btn, .has-success + .btn:active, .has-success + .btn:focus {
  color: #fff;
  border-color: #dff0d8;
  background: #dff0d8;
}

.has-success + .btn:hover {
  color: #fff;
  border-color: #eef7ea;
  background: #eef7ea;
}

.has-success .form-validation {
  color: #5cb85c;
}

.has-warning .help-block,
.has-warning .control-label,
.has-warning .radio,
.has-warning .checkbox,
.has-warning .radio-inline,
.has-warning .checkbox-inline,
.has-warning.radio label,
.has-warning.checkbox label,
.has-warning.radio-inline label,
.has-warning.checkbox-inline label {
  color: #ffb142;
}

.has-warning .form-control:not(.form-control-impressed), .has-warning .form-control:not(.form-control-impressed):focus {
  border-color: #fcf8e3;
  box-shadow: none;
}

.has-warning .form-control-impressed, .has-warning .form-control-impressed:focus {
  box-shadow: inset 0 0 0 1px #fcf8e3;
}

.has-warning .input-group-addon {
  color: #fff;
  border-color: #fcf8e3;
  background-color: #fcf8e3;
}

.has-warning .input-group-btn > .btn {
  border-color: #fcf8e3;
  background: #fcf8e3;
}

.has-warning + .btn, .has-warning + .btn:active, .has-warning + .btn:focus {
  color: #fff;
  border-color: #fcf8e3;
  background: #fcf8e3;
}

.has-warning + .btn:hover {
  color: #fff;
  border-color: #fefefa;
  background: #fefefa;
}

.has-warning .form-validation {
  color: #ffb142;
}

.has-info .help-block,
.has-info .control-label,
.has-info .radio,
.has-info .checkbox,
.has-info .radio-inline,
.has-info .checkbox-inline,
.has-info.radio label,
.has-info.checkbox label,
.has-info.radio-inline label,
.has-info.checkbox-inline label {
  color: #5bc0de;
}

.has-info .form-control:not(.form-control-impressed), .has-info .form-control:not(.form-control-impressed):focus {
  border-color: #d9edf7;
  box-shadow: none;
}

.has-info .form-control-impressed, .has-info .form-control-impressed:focus {
  box-shadow: inset 0 0 0 1px #d9edf7;
}

.has-info .input-group-addon {
  color: #fff;
  border-color: #d9edf7;
  background-color: #d9edf7;
}

.has-info .input-group-btn > .btn {
  border-color: #d9edf7;
  background: #d9edf7;
}

.has-info + .btn, .has-info + .btn:active, .has-info + .btn:focus {
  color: #fff;
  border-color: #d9edf7;
  background: #d9edf7;
}

.has-info + .btn:hover {
  color: #fff;
  border-color: #eef7fb;
  background: #eef7fb;
}

.has-info .form-validation {
  color: #5bc0de;
}

#form-output-global {
  position: fixed;
  bottom: 30px;
  left: 15px;
  visibility: hidden;
  -webkit-transform: translateX(-500px);
  transform: translateX(-500px);
  transition: .3s all ease;
  z-index: 9999999;
}

#form-output-global.active {
  -webkit-transform: translateX(0);
  transform: translateX(0);
  visibility: visible;
}

@media (min-width: 480px) {
  #form-output-global {
    left: 30px;
  }
}

.form-output {
  position: absolute;
  top: 100%;
  left: 0;
  font-size: 14px;
  line-height: 1.5;
  margin-top: 2px;
  transition: .3s;
  opacity: 0;
  visibility: hidden;
}

.form-output.active {
  opacity: 1;
  visibility: visible;
}

.form-output.error {
  color: #ff4242;
}

.form-output.success {
  color: #5cb85c;
}

.radio .radio-custom,
.radio-inline .radio-custom,
.checkbox .checkbox-custom,
.checkbox-inline .checkbox-custom {
  opacity: 0;
}

.radio .radio-custom, .radio .radio-custom-dummy,
.radio-inline .radio-custom,
.radio-inline .radio-custom-dummy,
.checkbox .checkbox-custom,
.checkbox .checkbox-custom-dummy,
.checkbox-inline .checkbox-custom,
.checkbox-inline .checkbox-custom-dummy {
  position: absolute;
  width: 14px;
  height: 14px;
  margin-left: -20px;
  margin-top: 5px;
  outline: none;
  cursor: pointer;
}

.radio .radio-custom-dummy,
.radio-inline .radio-custom-dummy,
.checkbox .checkbox-custom-dummy,
.checkbox-inline .checkbox-custom-dummy {
  pointer-events: none;
  background: #f9f9f9;
  box-shadow: inset 1px 1px 1px rgba(0, 0, 0, 0.15);
}

.radio .radio-custom-dummy:after,
.radio-inline .radio-custom-dummy:after,
.checkbox .checkbox-custom-dummy:after,
.checkbox-inline .checkbox-custom-dummy:after {
  position: absolute;
  opacity: 0;
}

.radio .radio-custom:focus,
.radio-inline .radio-custom:focus,
.checkbox .checkbox-custom:focus,
.checkbox-inline .checkbox-custom:focus {
  outline: none;
}

.radio-custom:checked + .radio-custom-dummy:after,
.checkbox-custom:checked + .checkbox-custom-dummy:after {
  opacity: 1;
}

.radio .radio-custom-dummy,
.radio-inline .radio-custom-dummy {
  border-radius: 50%;
}

.radio .radio-custom-dummy:after,
.radio-inline .radio-custom-dummy:after {
  content: '';
  top: 3px;
  right: 3px;
  bottom: 3px;
  left: 3px;
  background: #222;
  border-radius: 50%;
}

.checkbox,
.checkbox-inline {
  padding-left: 20px;
}

.checkbox .checkbox-custom-dummy,
.checkbox-inline .checkbox-custom-dummy {
  pointer-events: none;
  border-radius: 3px;
  margin-left: 0;
  left: 0;
}

.checkbox .checkbox-custom-dummy:after,
.checkbox-inline .checkbox-custom-dummy:after {
  content: '\e5ca';
  font-family: 'Material Icons';
  font-size: 20px;
  line-height: 10px;
  position: absolute;
  top: 0;
  left: 0;
  color: #222;
}

.page .rd-mailform-inline {
  display: -ms-flexbox;
  display: -webkit-flex;
  display: flex;
  -webkit-flex-direction: row;
  -ms-flex-direction: row;
  flex-direction: row;
  -webkit-flex-wrap: nowrap;
  -ms-flex-wrap: nowrap;
  flex-wrap: nowrap;
  -webkit-align-items: stretch;
  -ms-flex-align: stretch;
  align-items: stretch;
  margin: 6px auto 0;
  width: 100%;
}

.page .rd-mailform-inline *,
.page .rd-mailform-inline label,
.page .rd-mailform-inline .btn {
  margin: 0;
}

.page .rd-mailform-inline .btn {
  position: relative;
  z-index: 1;
}

.page .rd-mailform-inline .form-group {
  -webkit-flex-grow: 1;
  -ms-flex-positive: 1;
  flex-grow: 1;
  border-radius: 100px;
}

.page .rd-mailform-inline .form-validation {
  top: auto;
  bottom: -14px;
  left: 18px;
}

@media (min-width: 768px) {
  .page .rd-mailform-inline {
    margin-left: 0;
  }
}

.page .rd-mailform-inline-sm label,
.page .rd-mailform-inline-sm input {
  font-size: 12px;
  line-height: 18px;
}

.page .rd-mailform-inline-sm input {
  height: 40px;
  padding: 11px 32px 11px 19px;
  border-radius: 50px 0 0 50px;
}

.page .rd-mailform-inline-sm label {
  top: 20px;
  left: 19px;
}

.page .rd-mailform-inline-sm .form-group {
  margin-right: -20px;
}

.page .rd-mailform-inline-sm .btn {
  min-width: 30px;
  padding: 8px 12px;
}

.page .rd-mailform-inline-md {
  display: block;
}

.page .rd-mailform-inline-md .btn {
  margin-top: 25px;
  padding-top: 13px;
  padding-bottom: 13px;
}

@media (min-width: 480px) {
  .page .rd-mailform-inline-md {
    display: -ms-flexbox;
    display: -webkit-flex;
    display: flex;
  }
  .page .rd-mailform-inline-md input {
    padding-right: 56px;
  }
  .page .rd-mailform-inline-md .form-group {
    margin-right: -46px;
  }
  .page .rd-mailform-inline-md .btn {
    margin-top: 0;
  }
}

.rd-mailform-mod-1 textarea {
  min-height: 50px;
  height: 232px;
  max-height: 350px;
}

.rd-mailform-mod-1 [class*='col']:last-child {
  margin-top: 18px;
}

.rd-mailform-contrast .form-label,
.rd-mailform-contrast input,
.rd-mailform-contrast textarea {
  color: #777;
}

.rd-mailform-contrast label {
  top: 20px;
  left: 19px;
}

.rd-mailform-contrast input, .rd-mailform-contrast textarea {
  background: #fff;
  border: 0;
}

.rd-mailform-wild-sand input, .rd-mailform-wild-sand textarea {
  background: #f5f5f5;
}

.unit {
  display: -ms-flexbox;
  display: -webkit-flex;
  display: flex;
  -ms-flex: 0 1 100%;
  -webkit-flex: 0 1 100%;
  flex: 0 1 100%;
  -webkit-flex-direction: column;
  -ms-flex-direction: column;
  flex-direction: column;
}

.unit-body {
  -ms-flex: 0 1 auto;
  -webkit-flex: 0 1 auto;
  flex: 0 1 auto;
}

.unit-left,
.unit-right {
  -ms-flex: 0 0 auto;
  -webkit-flex: 0 0 auto;
  flex: 0 0 auto;
  max-width: 100%;
}

.unit-align-center {
  -webkit-justify-content: center;
  -ms-flex-pack: center;
  justify-content: center;
}

.unit-align-left {
  -webkit-justify-content: flex-start;
  -ms-flex-pack: start;
  justify-content: flex-start;
}

.unit-align-right {
  -webkit-justify-content: flex-end;
  -ms-flex-pack: end;
  justify-content: flex-end;
}

.unit-align-justify {
  -webkit-justify-content: space-between;
  -ms-flex-pack: justify;
  justify-content: space-between;
}

.unit-align-around {
  -webkit-justify-content: space-around;
  -ms-flex-pack: distribute;
  justify-content: space-around;
}

.unit-top {
  -webkit-align-items: flex-start;
  -ms-flex-align: start;
  align-items: flex-start;
}

.unit-middle {
  -webkit-align-items: center;
  -ms-flex-align: center;
  align-items: center;
}

.unit-bottom {
  -webkit-align-items: flex-end;
  -ms-flex-align: end;
  align-items: flex-end;
}

.unit-grow-1 {
  -webkit-flex-grow: 1;
  -ms-flex-positive: 1;
  flex-grow: 1;
}

.unit-grow-2 {
  -webkit-flex-grow: 2;
  -ms-flex-positive: 2;
  flex-grow: 2;
}

.unit-grow-3 {
  -webkit-flex-grow: 3;
  -ms-flex-positive: 3;
  flex-grow: 3;
}

.unit-item-top {
  -webkit-align-self: flex-start;
  -ms-flex-item-align: start;
  align-self: flex-start;
}

.unit-item-middle {
  -webkit-align-self: center;
  -ms-flex-item-align: center;
  align-self: center;
}

.unit-item-bottom {
  -webkit-align-self: flex-end;
  -ms-flex-item-align: end;
  align-self: flex-end;
}

.unit-item-narrow {
  -webkit-flex-grow: 0;
  -ms-flex-positive: 0;
  flex-grow: 0;
}

.unit-item-standart {
  -webkit-flex-grow: 1;
  -ms-flex-positive: 1;
  flex-grow: 1;
}

.unit-item-wide {
  -webkit-flex-grow: 2;
  -ms-flex-positive: 2;
  flex-grow: 2;
}

.unit,
.unit-vertical {
  -webkit-flex-direction: column;
  -ms-flex-direction: column;
  flex-direction: column;
}

.unit > [class*='unit-']:first-child,
.unit-vertical > [class*='unit-']:first-child {
  padding-top: 0;
}

.unit > .unit-left + .unit-right,
.unit > .unit-left + .unit-body,
.unit-vertical > .unit-left + .unit-right,
.unit-vertical > .unit-left + .unit-body {
  padding-left: 0;
  padding-top: 20px;
}

.unit > .unit-body + .unit-right,
.unit-vertical > .unit-body + .unit-right {
  padding-left: 0;
  padding-top: 20px;
}

.unit-horizontal {
  -webkit-flex-direction: row;
  -ms-flex-direction: row;
  flex-direction: row;
}

.unit-horizontal > .unit-left + .unit-right,
.unit-horizontal > .unit-left + .unit-body {
  padding-top: 0;
  padding-left: 30px;
}

.unit-horizontal > .unit-body + .unit-right {
  padding-top: 0;
  padding-left: 30px;
}

.unit-inverse {
  -webkit-flex-direction: column-reverse;
  -ms-flex-direction: column-reverse;
  flex-direction: column-reverse;
}

.unit-inverse, .unit-inverse.unit-vertical {
  -webkit-flex-direction: column-reverse;
  -ms-flex-direction: column-reverse;
  flex-direction: column-reverse;
}

.unit-inverse > [class*='unit-']:first-child, .unit-inverse.unit-vertical > [class*='unit-']:first-child {
  padding-top: 20px;
}

.unit-inverse > [class*='unit-']:last-child, .unit-inverse.unit-vertical > [class*='unit-']:last-child {
  padding-top: 0;
}

.unit-inverse.unit-horizontal {
  -webkit-flex-direction: row-reverse;
  -ms-flex-direction: row-reverse;
  flex-direction: row-reverse;
}

.unit-inverse.unit-horizontal > [class*='unit-']:first-child {
  padding-top: 0;
  padding-left: 30px;
}

.unit-inverse.unit-horizontal > [class*='unit-']:last-child {
  padding-left: 0;
}

@media (min-width: 480px) {
  .unit-xs-align-center {
    -webkit-justify-content: center;
    -ms-flex-pack: center;
    justify-content: center;
  }
  .unit-xs-align-left {
    -webkit-justify-content: flex-start;
    -ms-flex-pack: start;
    justify-content: flex-start;
  }
  .unit-xs-align-right {
    -webkit-justify-content: flex-end;
    -ms-flex-pack: end;
    justify-content: flex-end;
  }
  .unit-xs-align-justify {
    -webkit-justify-content: space-between;
    -ms-flex-pack: justify;
    justify-content: space-between;
  }
  .unit-xs-align-around {
    -webkit-justify-content: space-around;
    -ms-flex-pack: distribute;
    justify-content: space-around;
  }
  .unit-xs-top {
    -webkit-align-items: flex-start;
    -ms-flex-align: start;
    align-items: flex-start;
  }
  .unit-xs-middle {
    -webkit-align-items: center;
    -ms-flex-align: center;
    align-items: center;
  }
  .unit-xs-bottom {
    -webkit-align-items: flex-end;
    -ms-flex-align: end;
    align-items: flex-end;
  }
  .unit-xs-grow-1 {
    -webkit-flex-grow: 1;
    -ms-flex-positive: 1;
    flex-grow: 1;
  }
  .unit-xs-grow-2 {
    -webkit-flex-grow: 2;
    -ms-flex-positive: 2;
    flex-grow: 2;
  }
  .unit-xs-grow-3 {
    -webkit-flex-grow: 3;
    -ms-flex-positive: 3;
    flex-grow: 3;
  }
  .unit-item-xs-top {
    -webkit-align-self: flex-start;
    -ms-flex-item-align: start;
    align-self: flex-start;
  }
  .unit-item-xs-middle {
    -webkit-align-self: center;
    -ms-flex-item-align: center;
    align-self: center;
  }
  .unit-item-xs-bottom {
    -webkit-align-self: flex-end;
    -ms-flex-item-align: end;
    align-self: flex-end;
  }
  .unit-item-xs-narrow {
    -webkit-flex-grow: 0;
    -ms-flex-positive: 0;
    flex-grow: 0;
  }
  .unit-item-xs-standart {
    -webkit-flex-grow: 1;
    -ms-flex-positive: 1;
    flex-grow: 1;
  }
  .unit-item-xs-wide {
    -webkit-flex-grow: 2;
    -ms-flex-positive: 2;
    flex-grow: 2;
  }
  .unit-xs,
  .unit-xs-vertical {
    -webkit-flex-direction: column;
    -ms-flex-direction: column;
    flex-direction: column;
  }
  .unit-xs > [class*='unit-']:first-child,
  .unit-xs-vertical > [class*='unit-']:first-child {
    padding-top: 0;
  }
  .unit-xs > .unit-left + .unit-right,
  .unit-xs > .unit-left + .unit-body,
  .unit-xs-vertical > .unit-left + .unit-right,
  .unit-xs-vertical > .unit-left + .unit-body {
    padding-left: 0;
    padding-top: 20px;
  }
  .unit-xs > .unit-body + .unit-right,
  .unit-xs-vertical > .unit-body + .unit-right {
    padding-left: 0;
    padding-top: 20px;
  }
  .unit-xs-horizontal {
    -webkit-flex-direction: row;
    -ms-flex-direction: row;
    flex-direction: row;
  }
  .unit-xs-horizontal > .unit-left + .unit-right,
  .unit-xs-horizontal > .unit-left + .unit-body {
    padding-top: 0;
    padding-left: 30px;
  }
  .unit-xs-horizontal > .unit-body + .unit-right {
    padding-top: 0;
    padding-left: 30px;
  }
  .unit-xs-inverse {
    -webkit-flex-direction: column-reverse;
    -ms-flex-direction: column-reverse;
    flex-direction: column-reverse;
  }
  .unit-xs-inverse, .unit-xs-inverse.unit-xs-vertical {
    -webkit-flex-direction: column-reverse;
    -ms-flex-direction: column-reverse;
    flex-direction: column-reverse;
  }
  .unit-xs-inverse > [class*='unit-']:first-child, .unit-xs-inverse.unit-xs-vertical > [class*='unit-']:first-child {
    padding-top: 20px;
  }
  .unit-xs-inverse > [class*='unit-']:last-child, .unit-xs-inverse.unit-xs-vertical > [class*='unit-']:last-child {
    padding-top: 0;
  }
  .unit-xs-inverse.unit-xs-horizontal {
    -webkit-flex-direction: row-reverse;
    -ms-flex-direction: row-reverse;
    flex-direction: row-reverse;
  }
  .unit-xs-inverse.unit-xs-horizontal > [class*='unit-']:first-child {
    padding-top: 0;
    padding-left: 30px;
  }
  .unit-xs-inverse.unit-xs-horizontal > [class*='unit-']:last-child {
    padding-left: 0;
  }
}

@media (min-width: 768px) {
  .unit-sm-align-center {
    -webkit-justify-content: center;
    -ms-flex-pack: center;
    justify-content: center;
  }
  .unit-sm-align-left {
    -webkit-justify-content: flex-start;
    -ms-flex-pack: start;
    justify-content: flex-start;
  }
  .unit-sm-align-right {
    -webkit-justify-content: flex-end;
    -ms-flex-pack: end;
    justify-content: flex-end;
  }
  .unit-sm-align-justify {
    -webkit-justify-content: space-between;
    -ms-flex-pack: justify;
    justify-content: space-between;
  }
  .unit-sm-align-around {
    -webkit-justify-content: space-around;
    -ms-flex-pack: distribute;
    justify-content: space-around;
  }
  .unit-sm-top {
    -webkit-align-items: flex-start;
    -ms-flex-align: start;
    align-items: flex-start;
  }
  .unit-sm-middle {
    -webkit-align-items: center;
    -ms-flex-align: center;
    align-items: center;
  }
  .unit-sm-bottom {
    -webkit-align-items: flex-end;
    -ms-flex-align: end;
    align-items: flex-end;
  }
  .unit-sm-grow-1 {
    -webkit-flex-grow: 1;
    -ms-flex-positive: 1;
    flex-grow: 1;
  }
  .unit-sm-grow-2 {
    -webkit-flex-grow: 2;
    -ms-flex-positive: 2;
    flex-grow: 2;
  }
  .unit-sm-grow-3 {
    -webkit-flex-grow: 3;
    -ms-flex-positive: 3;
    flex-grow: 3;
  }
  .unit-item-sm-top {
    -webkit-align-self: flex-start;
    -ms-flex-item-align: start;
    align-self: flex-start;
  }
  .unit-item-sm-middle {
    -webkit-align-self: center;
    -ms-flex-item-align: center;
    align-self: center;
  }
  .unit-item-sm-bottom {
    -webkit-align-self: flex-end;
    -ms-flex-item-align: end;
    align-self: flex-end;
  }
  .unit-item-sm-narrow {
    -webkit-flex-grow: 0;
    -ms-flex-positive: 0;
    flex-grow: 0;
  }
  .unit-item-sm-standart {
    -webkit-flex-grow: 1;
    -ms-flex-positive: 1;
    flex-grow: 1;
  }
  .unit-item-sm-wide {
    -webkit-flex-grow: 2;
    -ms-flex-positive: 2;
    flex-grow: 2;
  }
  .unit-sm,
  .unit-sm-vertical {
    -webkit-flex-direction: column;
    -ms-flex-direction: column;
    flex-direction: column;
  }
  .unit-sm > [class*='unit-']:first-child,
  .unit-sm-vertical > [class*='unit-']:first-child {
    padding-top: 0;
  }
  .unit-sm > .unit-left + .unit-right,
  .unit-sm > .unit-left + .unit-body,
  .unit-sm-vertical > .unit-left + .unit-right,
  .unit-sm-vertical > .unit-left + .unit-body {
    padding-left: 0;
    padding-top: 20px;
  }
  .unit-sm > .unit-body + .unit-right,
  .unit-sm-vertical > .unit-body + .unit-right {
    padding-left: 0;
    padding-top: 20px;
  }
  .unit-sm-horizontal {
    -webkit-flex-direction: row;
    -ms-flex-direction: row;
    flex-direction: row;
  }
  .unit-sm-horizontal > .unit-left + .unit-right,
  .unit-sm-horizontal > .unit-left + .unit-body {
    padding-top: 0;
    padding-left: 30px;
  }
  .unit-sm-horizontal > .unit-body + .unit-right {
    padding-top: 0;
    padding-left: 30px;
  }
  .unit-sm-inverse {
    -webkit-flex-direction: column-reverse;
    -ms-flex-direction: column-reverse;
    flex-direction: column-reverse;
  }
  .unit-sm-inverse, .unit-sm-inverse.unit-sm-vertical {
    -webkit-flex-direction: column-reverse;
    -ms-flex-direction: column-reverse;
    flex-direction: column-reverse;
  }
  .unit-sm-inverse > [class*='unit-']:first-child, .unit-sm-inverse.unit-sm-vertical > [class*='unit-']:first-child {
    padding-top: 20px;
  }
  .unit-sm-inverse > [class*='unit-']:last-child, .unit-sm-inverse.unit-sm-vertical > [class*='unit-']:last-child {
    padding-top: 0;
  }
  .unit-sm-inverse.unit-sm-horizontal {
    -webkit-flex-direction: row-reverse;
    -ms-flex-direction: row-reverse;
    flex-direction: row-reverse;
  }
  .unit-sm-inverse.unit-sm-horizontal > [class*='unit-']:first-child {
    padding-top: 0;
    padding-left: 30px;
  }
  .unit-sm-inverse.unit-sm-horizontal > [class*='unit-']:last-child {
    padding-left: 0;
  }
}

@media (min-width: 992px) {
  .unit-md-align-center {
    -webkit-justify-content: center;
    -ms-flex-pack: center;
    justify-content: center;
  }
  .unit-md-align-left {
    -webkit-justify-content: flex-start;
    -ms-flex-pack: start;
    justify-content: flex-start;
  }
  .unit-md-align-right {
    -webkit-justify-content: flex-end;
    -ms-flex-pack: end;
    justify-content: flex-end;
  }
  .unit-md-align-justify {
    -webkit-justify-content: space-between;
    -ms-flex-pack: justify;
    justify-content: space-between;
  }
  .unit-md-align-around {
    -webkit-justify-content: space-around;
    -ms-flex-pack: distribute;
    justify-content: space-around;
  }
  .unit-md-top {
    -webkit-align-items: flex-start;
    -ms-flex-align: start;
    align-items: flex-start;
  }
  .unit-md-middle {
    -webkit-align-items: center;
    -ms-flex-align: center;
    align-items: center;
  }
  .unit-md-bottom {
    -webkit-align-items: flex-end;
    -ms-flex-align: end;
    align-items: flex-end;
  }
  .unit-md-grow-1 {
    -webkit-flex-grow: 1;
    -ms-flex-positive: 1;
    flex-grow: 1;
  }
  .unit-md-grow-2 {
    -webkit-flex-grow: 2;
    -ms-flex-positive: 2;
    flex-grow: 2;
  }
  .unit-md-grow-3 {
    -webkit-flex-grow: 3;
    -ms-flex-positive: 3;
    flex-grow: 3;
  }
  .unit-item-md-top {
    -webkit-align-self: flex-start;
    -ms-flex-item-align: start;
    align-self: flex-start;
  }
  .unit-item-md-middle {
    -webkit-align-self: center;
    -ms-flex-item-align: center;
    align-self: center;
  }
  .unit-item-md-bottom {
    -webkit-align-self: flex-end;
    -ms-flex-item-align: end;
    align-self: flex-end;
  }
  .unit-item-md-narrow {
    -webkit-flex-grow: 0;
    -ms-flex-positive: 0;
    flex-grow: 0;
  }
  .unit-item-md-standart {
    -webkit-flex-grow: 1;
    -ms-flex-positive: 1;
    flex-grow: 1;
  }
  .unit-item-md-wide {
    -webkit-flex-grow: 2;
    -ms-flex-positive: 2;
    flex-grow: 2;
  }
  .unit-md,
  .unit-md-vertical {
    -webkit-flex-direction: column;
    -ms-flex-direction: column;
    flex-direction: column;
  }
  .unit-md > [class*='unit-']:first-child,
  .unit-md-vertical > [class*='unit-']:first-child {
    padding-top: 0;
  }
  .unit-md > .unit-left + .unit-right,
  .unit-md > .unit-left + .unit-body,
  .unit-md-vertical > .unit-left + .unit-right,
  .unit-md-vertical > .unit-left + .unit-body {
    padding-left: 0;
    padding-top: 20px;
  }
  .unit-md > .unit-body + .unit-right,
  .unit-md-vertical > .unit-body + .unit-right {
    padding-left: 0;
    padding-top: 20px;
  }
  .unit-md-horizontal {
    -webkit-flex-direction: row;
    -ms-flex-direction: row;
    flex-direction: row;
  }
  .unit-md-horizontal > .unit-left + .unit-right,
  .unit-md-horizontal > .unit-left + .unit-body {
    padding-top: 0;
    padding-left: 30px;
  }
  .unit-md-horizontal > .unit-body + .unit-right {
    padding-top: 0;
    padding-left: 30px;
  }
  .unit-md-inverse {
    -webkit-flex-direction: column-reverse;
    -ms-flex-direction: column-reverse;
    flex-direction: column-reverse;
  }
  .unit-md-inverse, .unit-md-inverse.unit-md-vertical {
    -webkit-flex-direction: column-reverse;
    -ms-flex-direction: column-reverse;
    flex-direction: column-reverse;
  }
  .unit-md-inverse > [class*='unit-']:first-child, .unit-md-inverse.unit-md-vertical > [class*='unit-']:first-child {
    padding-top: 20px;
  }
  .unit-md-inverse > [class*='unit-']:last-child, .unit-md-inverse.unit-md-vertical > [class*='unit-']:last-child {
    padding-top: 0;
  }
  .unit-md-inverse.unit-md-horizontal {
    -webkit-flex-direction: row-reverse;
    -ms-flex-direction: row-reverse;
    flex-direction: row-reverse;
  }
  .unit-md-inverse.unit-md-horizontal > [class*='unit-']:first-child {
    padding-top: 0;
    padding-left: 30px;
  }
  .unit-md-inverse.unit-md-horizontal > [class*='unit-']:last-child {
    padding-left: 0;
  }
}

@media (min-width: 1200px) {
  .unit-lg-align-center {
    -webkit-justify-content: center;
    -ms-flex-pack: center;
    justify-content: center;
  }
  .unit-lg-align-left {
    -webkit-justify-content: flex-start;
    -ms-flex-pack: start;
    justify-content: flex-start;
  }
  .unit-lg-align-right {
    -webkit-justify-content: flex-end;
    -ms-flex-pack: end;
    justify-content: flex-end;
  }
  .unit-lg-align-justify {
    -webkit-justify-content: space-between;
    -ms-flex-pack: justify;
    justify-content: space-between;
  }
  .unit-lg-align-around {
    -webkit-justify-content: space-around;
    -ms-flex-pack: distribute;
    justify-content: space-around;
  }
  .unit-lg-top {
    -webkit-align-items: flex-start;
    -ms-flex-align: start;
    align-items: flex-start;
  }
  .unit-lg-middle {
    -webkit-align-items: center;
    -ms-flex-align: center;
    align-items: center;
  }
  .unit-lg-bottom {
    -webkit-align-items: flex-end;
    -ms-flex-align: end;
    align-items: flex-end;
  }
  .unit-lg-grow-1 {
    -webkit-flex-grow: 1;
    -ms-flex-positive: 1;
    flex-grow: 1;
  }
  .unit-lg-grow-2 {
    -webkit-flex-grow: 2;
    -ms-flex-positive: 2;
    flex-grow: 2;
  }
  .unit-lg-grow-3 {
    -webkit-flex-grow: 3;
    -ms-flex-positive: 3;
    flex-grow: 3;
  }
  .unit-item-lg-top {
    -webkit-align-self: flex-start;
    -ms-flex-item-align: start;
    align-self: flex-start;
  }
  .unit-item-lg-middle {
    -webkit-align-self: center;
    -ms-flex-item-align: center;
    align-self: center;
  }
  .unit-item-lg-bottom {
    -webkit-align-self: flex-end;
    -ms-flex-item-align: end;
    align-self: flex-end;
  }
  .unit-item-lg-narrow {
    -webkit-flex-grow: 0;
    -ms-flex-positive: 0;
    flex-grow: 0;
  }
  .unit-item-lg-standart {
    -webkit-flex-grow: 1;
    -ms-flex-positive: 1;
    flex-grow: 1;
  }
  .unit-item-lg-wide {
    -webkit-flex-grow: 2;
    -ms-flex-positive: 2;
    flex-grow: 2;
  }
  .unit-lg,
  .unit-lg-vertical {
    -webkit-flex-direction: column;
    -ms-flex-direction: column;
    flex-direction: column;
  }
  .unit-lg > [class*='unit-']:first-child,
  .unit-lg-vertical > [class*='unit-']:first-child {
    padding-top: 0;
  }
  .unit-lg > .unit-left + .unit-right,
  .unit-lg > .unit-left + .unit-body,
  .unit-lg-vertical > .unit-left + .unit-right,
  .unit-lg-vertical > .unit-left + .unit-body {
    padding-left: 0;
    padding-top: 20px;
  }
  .unit-lg > .unit-body + .unit-right,
  .unit-lg-vertical > .unit-body + .unit-right {
    padding-left: 0;
    padding-top: 20px;
  }
  .unit-lg-horizontal {
    -webkit-flex-direction: row;
    -ms-flex-direction: row;
    flex-direction: row;
  }
  .unit-lg-horizontal > .unit-left + .unit-right,
  .unit-lg-horizontal > .unit-left + .unit-body {
    padding-top: 0;
    padding-left: 30px;
  }
  .unit-lg-horizontal > .unit-body + .unit-right {
    padding-top: 0;
    padding-left: 30px;
  }
  .unit-lg-inverse {
    -webkit-flex-direction: column-reverse;
    -ms-flex-direction: column-reverse;
    flex-direction: column-reverse;
  }
  .unit-lg-inverse, .unit-lg-inverse.unit-lg-vertical {
    -webkit-flex-direction: column-reverse;
    -ms-flex-direction: column-reverse;
    flex-direction: column-reverse;
  }
  .unit-lg-inverse > [class*='unit-']:first-child, .unit-lg-inverse.unit-lg-vertical > [class*='unit-']:first-child {
    padding-top: 20px;
  }
  .unit-lg-inverse > [class*='unit-']:last-child, .unit-lg-inverse.unit-lg-vertical > [class*='unit-']:last-child {
    padding-top: 0;
  }
  .unit-lg-inverse.unit-lg-horizontal {
    -webkit-flex-direction: row-reverse;
    -ms-flex-direction: row-reverse;
    flex-direction: row-reverse;
  }
  .unit-lg-inverse.unit-lg-horizontal > [class*='unit-']:first-child {
    padding-top: 0;
    padding-left: 30px;
  }
  .unit-lg-inverse.unit-lg-horizontal > [class*='unit-']:last-child {
    padding-left: 0;
  }
}

@media (min-width: 1800px) {
  .unit-xl-align-center {
    -webkit-justify-content: center;
    -ms-flex-pack: center;
    justify-content: center;
  }
  .unit-xl-align-left {
    -webkit-justify-content: flex-start;
    -ms-flex-pack: start;
    justify-content: flex-start;
  }
  .unit-xl-align-right {
    -webkit-justify-content: flex-end;
    -ms-flex-pack: end;
    justify-content: flex-end;
  }
  .unit-xl-align-justify {
    -webkit-justify-content: space-between;
    -ms-flex-pack: justify;
    justify-content: space-between;
  }
  .unit-xl-align-around {
    -webkit-justify-content: space-around;
    -ms-flex-pack: distribute;
    justify-content: space-around;
  }
  .unit-xl-top {
    -webkit-align-items: flex-start;
    -ms-flex-align: start;
    align-items: flex-start;
  }
  .unit-xl-middle {
    -webkit-align-items: center;
    -ms-flex-align: center;
    align-items: center;
  }
  .unit-xl-bottom {
    -webkit-align-items: flex-end;
    -ms-flex-align: end;
    align-items: flex-end;
  }
  .unit-xl-grow-1 {
    -webkit-flex-grow: 1;
    -ms-flex-positive: 1;
    flex-grow: 1;
  }
  .unit-xl-grow-2 {
    -webkit-flex-grow: 2;
    -ms-flex-positive: 2;
    flex-grow: 2;
  }
  .unit-xl-grow-3 {
    -webkit-flex-grow: 3;
    -ms-flex-positive: 3;
    flex-grow: 3;
  }
  .unit-item-xl-top {
    -webkit-align-self: flex-start;
    -ms-flex-item-align: start;
    align-self: flex-start;
  }
  .unit-item-xl-middle {
    -webkit-align-self: center;
    -ms-flex-item-align: center;
    align-self: center;
  }
  .unit-item-xl-bottom {
    -webkit-align-self: flex-end;
    -ms-flex-item-align: end;
    align-self: flex-end;
  }
  .unit-item-xl-narrow {
    -webkit-flex-grow: 0;
    -ms-flex-positive: 0;
    flex-grow: 0;
  }
  .unit-item-xl-standart {
    -webkit-flex-grow: 1;
    -ms-flex-positive: 1;
    flex-grow: 1;
  }
  .unit-item-xl-wide {
    -webkit-flex-grow: 2;
    -ms-flex-positive: 2;
    flex-grow: 2;
  }
  .unit-xl,
  .unit-xl-vertical {
    -webkit-flex-direction: column;
    -ms-flex-direction: column;
    flex-direction: column;
  }
  .unit-xl > [class*='unit-']:first-child,
  .unit-xl-vertical > [class*='unit-']:first-child {
    padding-top: 0;
  }
  .unit-xl > .unit-left + .unit-right,
  .unit-xl > .unit-left + .unit-body,
  .unit-xl-vertical > .unit-left + .unit-right,
  .unit-xl-vertical > .unit-left + .unit-body {
    padding-left: 0;
    padding-top: 20px;
  }
  .unit-xl > .unit-body + .unit-right,
  .unit-xl-vertical > .unit-body + .unit-right {
    padding-left: 0;
    padding-top: 20px;
  }
  .unit-xl-horizontal {
    -webkit-flex-direction: row;
    -ms-flex-direction: row;
    flex-direction: row;
  }
  .unit-xl-horizontal > .unit-left + .unit-right,
  .unit-xl-horizontal > .unit-left + .unit-body {
    padding-top: 0;
    padding-left: 30px;
  }
  .unit-xl-horizontal > .unit-body + .unit-right {
    padding-top: 0;
    padding-left: 30px;
  }
  .unit-xl-inverse {
    -webkit-flex-direction: column-reverse;
    -ms-flex-direction: column-reverse;
    flex-direction: column-reverse;
  }
  .unit-xl-inverse, .unit-xl-inverse.unit-xl-vertical {
    -webkit-flex-direction: column-reverse;
    -ms-flex-direction: column-reverse;
    flex-direction: column-reverse;
  }
  .unit-xl-inverse > [class*='unit-']:first-child, .unit-xl-inverse.unit-xl-vertical > [class*='unit-']:first-child {
    padding-top: 20px;
  }
  .unit-xl-inverse > [class*='unit-']:last-child, .unit-xl-inverse.unit-xl-vertical > [class*='unit-']:last-child {
    padding-top: 0;
  }
  .unit-xl-inverse.unit-xl-horizontal {
    -webkit-flex-direction: row-reverse;
    -ms-flex-direction: row-reverse;
    flex-direction: row-reverse;
  }
  .unit-xl-inverse.unit-xl-horizontal > [class*='unit-']:first-child {
    padding-top: 0;
    padding-left: 30px;
  }
  .unit-xl-inverse.unit-xl-horizontal > [class*='unit-']:last-child {
    padding-left: 0;
  }
}

.unit-spacing-xxs.unit > [class*='unit-']:first-child, .unit-spacing-xxs.unit-vertical > [class*='unit-']:first-child {
  padding-top: 0;
}

.unit-spacing-xxs.unit > .unit-left + .unit-right,
.unit-spacing-xxs.unit > .unit-left + .unit-body, .unit-spacing-xxs.unit-vertical > .unit-left + .unit-right,
.unit-spacing-xxs.unit-vertical > .unit-left + .unit-body {
  padding-left: 0;
  padding-top: 10px;
}

.unit-spacing-xxs.unit > .unit-body + .unit-right, .unit-spacing-xxs.unit-vertical > .unit-body + .unit-right {
  padding-left: 0;
  padding-top: 10px;
}

.unit-spacing-xxs.unit-horizontal > .unit-left + .unit-right,
.unit-spacing-xxs.unit-horizontal > .unit-left + .unit-body {
  padding-top: 0;
  padding-left: 10px;
}

.unit-spacing-xxs.unit-horizontal > .unit-body + .unit-right {
  padding-top: 0;
  padding-left: 10px;
}

.unit-spacing-xxs.unit-inverse > [class*='unit-']:first-child, .unit-spacing-xxs.unit-inverse.unit-vertical > [class*='unit-']:first-child {
  padding-top: 10px;
}

.unit-spacing-xxs.unit-inverse > [class*='unit-']:last-child, .unit-spacing-xxs.unit-inverse.unit-vertical > [class*='unit-']:last-child {
  padding-top: 0;
}

.unit-spacing-xxs.unit-inverse.unit-horizontal > [class*='unit-']:first-child {
  padding-top: 0;
  padding-left: 10px;
}

.unit-spacing-xxs.unit-inverse.unit-horizontal > [class*='unit-']:last-child {
  padding-left: 0;
}

@media (min-width: 480px) {
  .unit-spacing-xxs.unit-xs > [class*='unit-']:first-child, .unit-spacing-xxs.unit-xs-vertical > [class*='unit-']:first-child {
    padding-top: 0;
  }
  .unit-spacing-xxs.unit-xs > .unit-left + .unit-right,
  .unit-spacing-xxs.unit-xs > .unit-left + .unit-body, .unit-spacing-xxs.unit-xs-vertical > .unit-left + .unit-right,
  .unit-spacing-xxs.unit-xs-vertical > .unit-left + .unit-body {
    padding-left: 0;
    padding-top: 10px;
  }
  .unit-spacing-xxs.unit-xs > .unit-body + .unit-right, .unit-spacing-xxs.unit-xs-vertical > .unit-body + .unit-right {
    padding-left: 0;
    padding-top: 10px;
  }
  .unit-spacing-xxs.unit-xs-horizontal > .unit-left + .unit-right,
  .unit-spacing-xxs.unit-xs-horizontal > .unit-left + .unit-body {
    padding-top: 0;
    padding-left: 10px;
  }
  .unit-spacing-xxs.unit-xs-horizontal > .unit-body + .unit-right {
    padding-top: 0;
    padding-left: 10px;
  }
  .unit-spacing-xxs.unit-xs-inverse > [class*='unit-']:first-child, .unit-spacing-xxs.unit-xs-inverse.unit-xs-vertical > [class*='unit-']:first-child {
    padding-top: 10px;
  }
  .unit-spacing-xxs.unit-xs-inverse > [class*='unit-']:last-child, .unit-spacing-xxs.unit-xs-inverse.unit-xs-vertical > [class*='unit-']:last-child {
    padding-top: 0;
  }
  .unit-spacing-xxs.unit-xs-inverse.unit-xs-horizontal > [class*='unit-']:first-child {
    padding-top: 0;
    padding-left: 10px;
  }
  .unit-spacing-xxs.unit-xs-inverse.unit-xs-horizontal > [class*='unit-']:last-child {
    padding-left: 0;
  }
}

@media (min-width: 768px) {
  .unit-spacing-xxs.unit-sm > [class*='unit-']:first-child, .unit-spacing-xxs.unit-sm-vertical > [class*='unit-']:first-child {
    padding-top: 0;
  }
  .unit-spacing-xxs.unit-sm > .unit-left + .unit-right,
  .unit-spacing-xxs.unit-sm > .unit-left + .unit-body, .unit-spacing-xxs.unit-sm-vertical > .unit-left + .unit-right,
  .unit-spacing-xxs.unit-sm-vertical > .unit-left + .unit-body {
    padding-left: 0;
    padding-top: 10px;
  }
  .unit-spacing-xxs.unit-sm > .unit-body + .unit-right, .unit-spacing-xxs.unit-sm-vertical > .unit-body + .unit-right {
    padding-left: 0;
    padding-top: 10px;
  }
  .unit-spacing-xxs.unit-sm-horizontal > .unit-left + .unit-right,
  .unit-spacing-xxs.unit-sm-horizontal > .unit-left + .unit-body {
    padding-top: 0;
    padding-left: 10px;
  }
  .unit-spacing-xxs.unit-sm-horizontal > .unit-body + .unit-right {
    padding-top: 0;
    padding-left: 10px;
  }
  .unit-spacing-xxs.unit-sm-inverse > [class*='unit-']:first-child, .unit-spacing-xxs.unit-sm-inverse.unit-sm-vertical > [class*='unit-']:first-child {
    padding-top: 10px;
  }
  .unit-spacing-xxs.unit-sm-inverse > [class*='unit-']:last-child, .unit-spacing-xxs.unit-sm-inverse.unit-sm-vertical > [class*='unit-']:last-child {
    padding-top: 0;
  }
  .unit-spacing-xxs.unit-sm-inverse.unit-sm-horizontal > [class*='unit-']:first-child {
    padding-top: 0;
    padding-left: 10px;
  }
  .unit-spacing-xxs.unit-sm-inverse.unit-sm-horizontal > [class*='unit-']:last-child {
    padding-left: 0;
  }
}

@media (min-width: 992px) {
  .unit-spacing-xxs.unit-md > [class*='unit-']:first-child, .unit-spacing-xxs.unit-md-vertical > [class*='unit-']:first-child {
    padding-top: 0;
  }
  .unit-spacing-xxs.unit-md > .unit-left + .unit-right,
  .unit-spacing-xxs.unit-md > .unit-left + .unit-body, .unit-spacing-xxs.unit-md-vertical > .unit-left + .unit-right,
  .unit-spacing-xxs.unit-md-vertical > .unit-left + .unit-body {
    padding-left: 0;
    padding-top: 10px;
  }
  .unit-spacing-xxs.unit-md > .unit-body + .unit-right, .unit-spacing-xxs.unit-md-vertical > .unit-body + .unit-right {
    padding-left: 0;
    padding-top: 10px;
  }
  .unit-spacing-xxs.unit-md-horizontal > .unit-left + .unit-right,
  .unit-spacing-xxs.unit-md-horizontal > .unit-left + .unit-body {
    padding-top: 0;
    padding-left: 10px;
  }
  .unit-spacing-xxs.unit-md-horizontal > .unit-body + .unit-right {
    padding-top: 0;
    padding-left: 10px;
  }
  .unit-spacing-xxs.unit-md-inverse > [class*='unit-']:first-child, .unit-spacing-xxs.unit-md-inverse.unit-md-vertical > [class*='unit-']:first-child {
    padding-top: 10px;
  }
  .unit-spacing-xxs.unit-md-inverse > [class*='unit-']:last-child, .unit-spacing-xxs.unit-md-inverse.unit-md-vertical > [class*='unit-']:last-child {
    padding-top: 0;
  }
  .unit-spacing-xxs.unit-md-inverse.unit-md-horizontal > [class*='unit-']:first-child {
    padding-top: 0;
    padding-left: 10px;
  }
  .unit-spacing-xxs.unit-md-inverse.unit-md-horizontal > [class*='unit-']:last-child {
    padding-left: 0;
  }
}

@media (min-width: 1200px) {
  .unit-spacing-xxs.unit-lg > [class*='unit-']:first-child, .unit-spacing-xxs.unit-lg-vertical > [class*='unit-']:first-child {
    padding-top: 0;
  }
  .unit-spacing-xxs.unit-lg > .unit-left + .unit-right,
  .unit-spacing-xxs.unit-lg > .unit-left + .unit-body, .unit-spacing-xxs.unit-lg-vertical > .unit-left + .unit-right,
  .unit-spacing-xxs.unit-lg-vertical > .unit-left + .unit-body {
    padding-left: 0;
    padding-top: 10px;
  }
  .unit-spacing-xxs.unit-lg > .unit-body + .unit-right, .unit-spacing-xxs.unit-lg-vertical > .unit-body + .unit-right {
    padding-left: 0;
    padding-top: 10px;
  }
  .unit-spacing-xxs.unit-lg-horizontal > .unit-left + .unit-right,
  .unit-spacing-xxs.unit-lg-horizontal > .unit-left + .unit-body {
    padding-top: 0;
    padding-left: 10px;
  }
  .unit-spacing-xxs.unit-lg-horizontal > .unit-body + .unit-right {
    padding-top: 0;
    padding-left: 10px;
  }
  .unit-spacing-xxs.unit-lg-inverse > [class*='unit-']:first-child, .unit-spacing-xxs.unit-lg-inverse.unit-lg-vertical > [class*='unit-']:first-child {
    padding-top: 10px;
  }
  .unit-spacing-xxs.unit-lg-inverse > [class*='unit-']:last-child, .unit-spacing-xxs.unit-lg-inverse.unit-lg-vertical > [class*='unit-']:last-child {
    padding-top: 0;
  }
  .unit-spacing-xxs.unit-lg-inverse.unit-lg-horizontal > [class*='unit-']:first-child {
    padding-top: 0;
    padding-left: 10px;
  }
  .unit-spacing-xxs.unit-lg-inverse.unit-lg-horizontal > [class*='unit-']:last-child {
    padding-left: 0;
  }
}

@media (min-width: 1800px) {
  .unit-spacing-xxs.unit-xl > [class*='unit-']:first-child, .unit-spacing-xxs.unit-xl-vertical > [class*='unit-']:first-child {
    padding-top: 0;
  }
  .unit-spacing-xxs.unit-xl > .unit-left + .unit-right,
  .unit-spacing-xxs.unit-xl > .unit-left + .unit-body, .unit-spacing-xxs.unit-xl-vertical > .unit-left + .unit-right,
  .unit-spacing-xxs.unit-xl-vertical > .unit-left + .unit-body {
    padding-left: 0;
    padding-top: 10px;
  }
  .unit-spacing-xxs.unit-xl > .unit-body + .unit-right, .unit-spacing-xxs.unit-xl-vertical > .unit-body + .unit-right {
    padding-left: 0;
    padding-top: 10px;
  }
  .unit-spacing-xxs.unit-xl-horizontal > .unit-left + .unit-right,
  .unit-spacing-xxs.unit-xl-horizontal > .unit-left + .unit-body {
    padding-top: 0;
    padding-left: 10px;
  }
  .unit-spacing-xxs.unit-xl-horizontal > .unit-body + .unit-right {
    padding-top: 0;
    padding-left: 10px;
  }
  .unit-spacing-xxs.unit-xl-inverse > [class*='unit-']:first-child, .unit-spacing-xxs.unit-xl-inverse.unit-xl-vertical > [class*='unit-']:first-child {
    padding-top: 10px;
  }
  .unit-spacing-xxs.unit-xl-inverse > [class*='unit-']:last-child, .unit-spacing-xxs.unit-xl-inverse.unit-xl-vertical > [class*='unit-']:last-child {
    padding-top: 0;
  }
  .unit-spacing-xxs.unit-xl-inverse.unit-xl-horizontal > [class*='unit-']:first-child {
    padding-top: 0;
    padding-left: 10px;
  }
  .unit-spacing-xxs.unit-xl-inverse.unit-xl-horizontal > [class*='unit-']:last-child {
    padding-left: 0;
  }
}

.unit-spacing-xs.unit > [class*='unit-']:first-child, .unit-spacing-xs.unit-vertical > [class*='unit-']:first-child {
  padding-top: 0;
}

.unit-spacing-xs.unit > .unit-left + .unit-right,
.unit-spacing-xs.unit > .unit-left + .unit-body, .unit-spacing-xs.unit-vertical > .unit-left + .unit-right,
.unit-spacing-xs.unit-vertical > .unit-left + .unit-body {
  padding-left: 0;
  padding-top: 8px;
}

.unit-spacing-xs.unit > .unit-body + .unit-right, .unit-spacing-xs.unit-vertical > .unit-body + .unit-right {
  padding-left: 0;
  padding-top: 14px;
}

.unit-spacing-xs.unit-horizontal > .unit-left + .unit-right,
.unit-spacing-xs.unit-horizontal > .unit-left + .unit-body {
  padding-top: 0;
  padding-left: 14px;
}

.unit-spacing-xs.unit-horizontal > .unit-body + .unit-right {
  padding-top: 0;
  padding-left: 14px;
}

.unit-spacing-xs.unit-inverse > [class*='unit-']:first-child, .unit-spacing-xs.unit-inverse.unit-vertical > [class*='unit-']:first-child {
  padding-top: 8px;
}

.unit-spacing-xs.unit-inverse > [class*='unit-']:last-child, .unit-spacing-xs.unit-inverse.unit-vertical > [class*='unit-']:last-child {
  padding-top: 0;
}

.unit-spacing-xs.unit-inverse.unit-horizontal > [class*='unit-']:first-child {
  padding-top: 0;
  padding-left: 14px;
}

.unit-spacing-xs.unit-inverse.unit-horizontal > [class*='unit-']:last-child {
  padding-left: 0;
}

@media (min-width: 480px) {
  .unit-spacing-xs.unit-xs > [class*='unit-']:first-child, .unit-spacing-xs.unit-xs-vertical > [class*='unit-']:first-child {
    padding-top: 0;
  }
  .unit-spacing-xs.unit-xs > .unit-left + .unit-right,
  .unit-spacing-xs.unit-xs > .unit-left + .unit-body, .unit-spacing-xs.unit-xs-vertical > .unit-left + .unit-right,
  .unit-spacing-xs.unit-xs-vertical > .unit-left + .unit-body {
    padding-left: 0;
    padding-top: 8px;
  }
  .unit-spacing-xs.unit-xs > .unit-body + .unit-right, .unit-spacing-xs.unit-xs-vertical > .unit-body + .unit-right {
    padding-left: 0;
    padding-top: 14px;
  }
  .unit-spacing-xs.unit-xs-horizontal > .unit-left + .unit-right,
  .unit-spacing-xs.unit-xs-horizontal > .unit-left + .unit-body {
    padding-top: 0;
    padding-left: 14px;
  }
  .unit-spacing-xs.unit-xs-horizontal > .unit-body + .unit-right {
    padding-top: 0;
    padding-left: 14px;
  }
  .unit-spacing-xs.unit-xs-inverse > [class*='unit-']:first-child, .unit-spacing-xs.unit-xs-inverse.unit-xs-vertical > [class*='unit-']:first-child {
    padding-top: 8px;
  }
  .unit-spacing-xs.unit-xs-inverse > [class*='unit-']:last-child, .unit-spacing-xs.unit-xs-inverse.unit-xs-vertical > [class*='unit-']:last-child {
    padding-top: 0;
  }
  .unit-spacing-xs.unit-xs-inverse.unit-xs-horizontal > [class*='unit-']:first-child {
    padding-top: 0;
    padding-left: 14px;
  }
  .unit-spacing-xs.unit-xs-inverse.unit-xs-horizontal > [class*='unit-']:last-child {
    padding-left: 0;
  }
}

@media (min-width: 768px) {
  .unit-spacing-xs.unit-sm > [class*='unit-']:first-child, .unit-spacing-xs.unit-sm-vertical > [class*='unit-']:first-child {
    padding-top: 0;
  }
  .unit-spacing-xs.unit-sm > .unit-left + .unit-right,
  .unit-spacing-xs.unit-sm > .unit-left + .unit-body, .unit-spacing-xs.unit-sm-vertical > .unit-left + .unit-right,
  .unit-spacing-xs.unit-sm-vertical > .unit-left + .unit-body {
    padding-left: 0;
    padding-top: 8px;
  }
  .unit-spacing-xs.unit-sm > .unit-body + .unit-right, .unit-spacing-xs.unit-sm-vertical > .unit-body + .unit-right {
    padding-left: 0;
    padding-top: 14px;
  }
  .unit-spacing-xs.unit-sm-horizontal > .unit-left + .unit-right,
  .unit-spacing-xs.unit-sm-horizontal > .unit-left + .unit-body {
    padding-top: 0;
    padding-left: 14px;
  }
  .unit-spacing-xs.unit-sm-horizontal > .unit-body + .unit-right {
    padding-top: 0;
    padding-left: 14px;
  }
  .unit-spacing-xs.unit-sm-inverse > [class*='unit-']:first-child, .unit-spacing-xs.unit-sm-inverse.unit-sm-vertical > [class*='unit-']:first-child {
    padding-top: 8px;
  }
  .unit-spacing-xs.unit-sm-inverse > [class*='unit-']:last-child, .unit-spacing-xs.unit-sm-inverse.unit-sm-vertical > [class*='unit-']:last-child {
    padding-top: 0;
  }
  .unit-spacing-xs.unit-sm-inverse.unit-sm-horizontal > [class*='unit-']:first-child {
    padding-top: 0;
    padding-left: 14px;
  }
  .unit-spacing-xs.unit-sm-inverse.unit-sm-horizontal > [class*='unit-']:last-child {
    padding-left: 0;
  }
}

@media (min-width: 992px) {
  .unit-spacing-xs.unit-md > [class*='unit-']:first-child, .unit-spacing-xs.unit-md-vertical > [class*='unit-']:first-child {
    padding-top: 0;
  }
  .unit-spacing-xs.unit-md > .unit-left + .unit-right,
  .unit-spacing-xs.unit-md > .unit-left + .unit-body, .unit-spacing-xs.unit-md-vertical > .unit-left + .unit-right,
  .unit-spacing-xs.unit-md-vertical > .unit-left + .unit-body {
    padding-left: 0;
    padding-top: 8px;
  }
  .unit-spacing-xs.unit-md > .unit-body + .unit-right, .unit-spacing-xs.unit-md-vertical > .unit-body + .unit-right {
    padding-left: 0;
    padding-top: 14px;
  }
  .unit-spacing-xs.unit-md-horizontal > .unit-left + .unit-right,
  .unit-spacing-xs.unit-md-horizontal > .unit-left + .unit-body {
    padding-top: 0;
    padding-left: 14px;
  }
  .unit-spacing-xs.unit-md-horizontal > .unit-body + .unit-right {
    padding-top: 0;
    padding-left: 14px;
  }
  .unit-spacing-xs.unit-md-inverse > [class*='unit-']:first-child, .unit-spacing-xs.unit-md-inverse.unit-md-vertical > [class*='unit-']:first-child {
    padding-top: 8px;
  }
  .unit-spacing-xs.unit-md-inverse > [class*='unit-']:last-child, .unit-spacing-xs.unit-md-inverse.unit-md-vertical > [class*='unit-']:last-child {
    padding-top: 0;
  }
  .unit-spacing-xs.unit-md-inverse.unit-md-horizontal > [class*='unit-']:first-child {
    padding-top: 0;
    padding-left: 14px;
  }
  .unit-spacing-xs.unit-md-inverse.unit-md-horizontal > [class*='unit-']:last-child {
    padding-left: 0;
  }
}

@media (min-width: 1200px) {
  .unit-spacing-xs.unit-lg > [class*='unit-']:first-child, .unit-spacing-xs.unit-lg-vertical > [class*='unit-']:first-child {
    padding-top: 0;
  }
  .unit-spacing-xs.unit-lg > .unit-left + .unit-right,
  .unit-spacing-xs.unit-lg > .unit-left + .unit-body, .unit-spacing-xs.unit-lg-vertical > .unit-left + .unit-right,
  .unit-spacing-xs.unit-lg-vertical > .unit-left + .unit-body {
    padding-left: 0;
    padding-top: 8px;
  }
  .unit-spacing-xs.unit-lg > .unit-body + .unit-right, .unit-spacing-xs.unit-lg-vertical > .unit-body + .unit-right {
    padding-left: 0;
    padding-top: 14px;
  }
  .unit-spacing-xs.unit-lg-horizontal > .unit-left + .unit-right,
  .unit-spacing-xs.unit-lg-horizontal > .unit-left + .unit-body {
    padding-top: 0;
    padding-left: 14px;
  }
  .unit-spacing-xs.unit-lg-horizontal > .unit-body + .unit-right {
    padding-top: 0;
    padding-left: 14px;
  }
  .unit-spacing-xs.unit-lg-inverse > [class*='unit-']:first-child, .unit-spacing-xs.unit-lg-inverse.unit-lg-vertical > [class*='unit-']:first-child {
    padding-top: 8px;
  }
  .unit-spacing-xs.unit-lg-inverse > [class*='unit-']:last-child, .unit-spacing-xs.unit-lg-inverse.unit-lg-vertical > [class*='unit-']:last-child {
    padding-top: 0;
  }
  .unit-spacing-xs.unit-lg-inverse.unit-lg-horizontal > [class*='unit-']:first-child {
    padding-top: 0;
    padding-left: 14px;
  }
  .unit-spacing-xs.unit-lg-inverse.unit-lg-horizontal > [class*='unit-']:last-child {
    padding-left: 0;
  }
}

@media (min-width: 1800px) {
  .unit-spacing-xs.unit-xl > [class*='unit-']:first-child, .unit-spacing-xs.unit-xl-vertical > [class*='unit-']:first-child {
    padding-top: 0;
  }
  .unit-spacing-xs.unit-xl > .unit-left + .unit-right,
  .unit-spacing-xs.unit-xl > .unit-left + .unit-body, .unit-spacing-xs.unit-xl-vertical > .unit-left + .unit-right,
  .unit-spacing-xs.unit-xl-vertical > .unit-left + .unit-body {
    padding-left: 0;
    padding-top: 8px;
  }
  .unit-spacing-xs.unit-xl > .unit-body + .unit-right, .unit-spacing-xs.unit-xl-vertical > .unit-body + .unit-right {
    padding-left: 0;
    padding-top: 14px;
  }
  .unit-spacing-xs.unit-xl-horizontal > .unit-left + .unit-right,
  .unit-spacing-xs.unit-xl-horizontal > .unit-left + .unit-body {
    padding-top: 0;
    padding-left: 14px;
  }
  .unit-spacing-xs.unit-xl-horizontal > .unit-body + .unit-right {
    padding-top: 0;
    padding-left: 14px;
  }
  .unit-spacing-xs.unit-xl-inverse > [class*='unit-']:first-child, .unit-spacing-xs.unit-xl-inverse.unit-xl-vertical > [class*='unit-']:first-child {
    padding-top: 8px;
  }
  .unit-spacing-xs.unit-xl-inverse > [class*='unit-']:last-child, .unit-spacing-xs.unit-xl-inverse.unit-xl-vertical > [class*='unit-']:last-child {
    padding-top: 0;
  }
  .unit-spacing-xs.unit-xl-inverse.unit-xl-horizontal > [class*='unit-']:first-child {
    padding-top: 0;
    padding-left: 14px;
  }
  .unit-spacing-xs.unit-xl-inverse.unit-xl-horizontal > [class*='unit-']:last-child {
    padding-left: 0;
  }
}

.unit-spacing-sm.unit > [class*='unit-']:first-child, .unit-spacing-sm.unit-vertical > [class*='unit-']:first-child {
  padding-top: 0;
}

.unit-spacing-sm.unit > .unit-left + .unit-right,
.unit-spacing-sm.unit > .unit-left + .unit-body, .unit-spacing-sm.unit-vertical > .unit-left + .unit-right,
.unit-spacing-sm.unit-vertical > .unit-left + .unit-body {
  padding-left: 0;
  padding-top: 22px;
}

.unit-spacing-sm.unit > .unit-body + .unit-right, .unit-spacing-sm.unit-vertical > .unit-body + .unit-right {
  padding-left: 0;
  padding-top: 22px;
}

.unit-spacing-sm.unit-horizontal > .unit-left + .unit-right,
.unit-spacing-sm.unit-horizontal > .unit-left + .unit-body {
  padding-top: 0;
  padding-left: 22px;
}

.unit-spacing-sm.unit-horizontal > .unit-body + .unit-right {
  padding-top: 0;
  padding-left: 22px;
}

.unit-spacing-sm.unit-inverse > [class*='unit-']:first-child, .unit-spacing-sm.unit-inverse.unit-vertical > [class*='unit-']:first-child {
  padding-top: 22px;
}

.unit-spacing-sm.unit-inverse > [class*='unit-']:last-child, .unit-spacing-sm.unit-inverse.unit-vertical > [class*='unit-']:last-child {
  padding-top: 0;
}

.unit-spacing-sm.unit-inverse.unit-horizontal > [class*='unit-']:first-child {
  padding-top: 0;
  padding-left: 22px;
}

.unit-spacing-sm.unit-inverse.unit-horizontal > [class*='unit-']:last-child {
  padding-left: 0;
}

@media (min-width: 480px) {
  .unit-spacing-sm.unit-xs > [class*='unit-']:first-child, .unit-spacing-sm.unit-xs-vertical > [class*='unit-']:first-child {
    padding-top: 0;
  }
  .unit-spacing-sm.unit-xs > .unit-left + .unit-right,
  .unit-spacing-sm.unit-xs > .unit-left + .unit-body, .unit-spacing-sm.unit-xs-vertical > .unit-left + .unit-right,
  .unit-spacing-sm.unit-xs-vertical > .unit-left + .unit-body {
    padding-left: 0;
    padding-top: 22px;
  }
  .unit-spacing-sm.unit-xs > .unit-body + .unit-right, .unit-spacing-sm.unit-xs-vertical > .unit-body + .unit-right {
    padding-left: 0;
    padding-top: 22px;
  }
  .unit-spacing-sm.unit-xs-horizontal > .unit-left + .unit-right,
  .unit-spacing-sm.unit-xs-horizontal > .unit-left + .unit-body {
    padding-top: 0;
    padding-left: 22px;
  }
  .unit-spacing-sm.unit-xs-horizontal > .unit-body + .unit-right {
    padding-top: 0;
    padding-left: 22px;
  }
  .unit-spacing-sm.unit-xs-inverse > [class*='unit-']:first-child, .unit-spacing-sm.unit-xs-inverse.unit-xs-vertical > [class*='unit-']:first-child {
    padding-top: 22px;
  }
  .unit-spacing-sm.unit-xs-inverse > [class*='unit-']:last-child, .unit-spacing-sm.unit-xs-inverse.unit-xs-vertical > [class*='unit-']:last-child {
    padding-top: 0;
  }
  .unit-spacing-sm.unit-xs-inverse.unit-xs-horizontal > [class*='unit-']:first-child {
    padding-top: 0;
    padding-left: 22px;
  }
  .unit-spacing-sm.unit-xs-inverse.unit-xs-horizontal > [class*='unit-']:last-child {
    padding-left: 0;
  }
}

@media (min-width: 768px) {
  .unit-spacing-sm.unit-sm > [class*='unit-']:first-child, .unit-spacing-sm.unit-sm-vertical > [class*='unit-']:first-child {
    padding-top: 0;
  }
  .unit-spacing-sm.unit-sm > .unit-left + .unit-right,
  .unit-spacing-sm.unit-sm > .unit-left + .unit-body, .unit-spacing-sm.unit-sm-vertical > .unit-left + .unit-right,
  .unit-spacing-sm.unit-sm-vertical > .unit-left + .unit-body {
    padding-left: 0;
    padding-top: 22px;
  }
  .unit-spacing-sm.unit-sm > .unit-body + .unit-right, .unit-spacing-sm.unit-sm-vertical > .unit-body + .unit-right {
    padding-left: 0;
    padding-top: 22px;
  }
  .unit-spacing-sm.unit-sm-horizontal > .unit-left + .unit-right,
  .unit-spacing-sm.unit-sm-horizontal > .unit-left + .unit-body {
    padding-top: 0;
    padding-left: 22px;
  }
  .unit-spacing-sm.unit-sm-horizontal > .unit-body + .unit-right {
    padding-top: 0;
    padding-left: 22px;
  }
  .unit-spacing-sm.unit-sm-inverse > [class*='unit-']:first-child, .unit-spacing-sm.unit-sm-inverse.unit-sm-vertical > [class*='unit-']:first-child {
    padding-top: 22px;
  }
  .unit-spacing-sm.unit-sm-inverse > [class*='unit-']:last-child, .unit-spacing-sm.unit-sm-inverse.unit-sm-vertical > [class*='unit-']:last-child {
    padding-top: 0;
  }
  .unit-spacing-sm.unit-sm-inverse.unit-sm-horizontal > [class*='unit-']:first-child {
    padding-top: 0;
    padding-left: 22px;
  }
  .unit-spacing-sm.unit-sm-inverse.unit-sm-horizontal > [class*='unit-']:last-child {
    padding-left: 0;
  }
}

@media (min-width: 992px) {
  .unit-spacing-sm.unit-md > [class*='unit-']:first-child, .unit-spacing-sm.unit-md-vertical > [class*='unit-']:first-child {
    padding-top: 0;
  }
  .unit-spacing-sm.unit-md > .unit-left + .unit-right,
  .unit-spacing-sm.unit-md > .unit-left + .unit-body, .unit-spacing-sm.unit-md-vertical > .unit-left + .unit-right,
  .unit-spacing-sm.unit-md-vertical > .unit-left + .unit-body {
    padding-left: 0;
    padding-top: 22px;
  }
  .unit-spacing-sm.unit-md > .unit-body + .unit-right, .unit-spacing-sm.unit-md-vertical > .unit-body + .unit-right {
    padding-left: 0;
    padding-top: 22px;
  }
  .unit-spacing-sm.unit-md-horizontal > .unit-left + .unit-right,
  .unit-spacing-sm.unit-md-horizontal > .unit-left + .unit-body {
    padding-top: 0;
    padding-left: 22px;
  }
  .unit-spacing-sm.unit-md-horizontal > .unit-body + .unit-right {
    padding-top: 0;
    padding-left: 22px;
  }
  .unit-spacing-sm.unit-md-inverse > [class*='unit-']:first-child, .unit-spacing-sm.unit-md-inverse.unit-md-vertical > [class*='unit-']:first-child {
    padding-top: 22px;
  }
  .unit-spacing-sm.unit-md-inverse > [class*='unit-']:last-child, .unit-spacing-sm.unit-md-inverse.unit-md-vertical > [class*='unit-']:last-child {
    padding-top: 0;
  }
  .unit-spacing-sm.unit-md-inverse.unit-md-horizontal > [class*='unit-']:first-child {
    padding-top: 0;
    padding-left: 22px;
  }
  .unit-spacing-sm.unit-md-inverse.unit-md-horizontal > [class*='unit-']:last-child {
    padding-left: 0;
  }
}

@media (min-width: 1200px) {
  .unit-spacing-sm.unit-lg > [class*='unit-']:first-child, .unit-spacing-sm.unit-lg-vertical > [class*='unit-']:first-child {
    padding-top: 0;
  }
  .unit-spacing-sm.unit-lg > .unit-left + .unit-right,
  .unit-spacing-sm.unit-lg > .unit-left + .unit-body, .unit-spacing-sm.unit-lg-vertical > .unit-left + .unit-right,
  .unit-spacing-sm.unit-lg-vertical > .unit-left + .unit-body {
    padding-left: 0;
    padding-top: 22px;
  }
  .unit-spacing-sm.unit-lg > .unit-body + .unit-right, .unit-spacing-sm.unit-lg-vertical > .unit-body + .unit-right {
    padding-left: 0;
    padding-top: 22px;
  }
  .unit-spacing-sm.unit-lg-horizontal > .unit-left + .unit-right,
  .unit-spacing-sm.unit-lg-horizontal > .unit-left + .unit-body {
    padding-top: 0;
    padding-left: 22px;
  }
  .unit-spacing-sm.unit-lg-horizontal > .unit-body + .unit-right {
    padding-top: 0;
    padding-left: 22px;
  }
  .unit-spacing-sm.unit-lg-inverse > [class*='unit-']:first-child, .unit-spacing-sm.unit-lg-inverse.unit-lg-vertical > [class*='unit-']:first-child {
    padding-top: 22px;
  }
  .unit-spacing-sm.unit-lg-inverse > [class*='unit-']:last-child, .unit-spacing-sm.unit-lg-inverse.unit-lg-vertical > [class*='unit-']:last-child {
    padding-top: 0;
  }
  .unit-spacing-sm.unit-lg-inverse.unit-lg-horizontal > [class*='unit-']:first-child {
    padding-top: 0;
    padding-left: 22px;
  }
  .unit-spacing-sm.unit-lg-inverse.unit-lg-horizontal > [class*='unit-']:last-child {
    padding-left: 0;
  }
}

@media (min-width: 1800px) {
  .unit-spacing-sm.unit-xl > [class*='unit-']:first-child, .unit-spacing-sm.unit-xl-vertical > [class*='unit-']:first-child {
    padding-top: 0;
  }
  .unit-spacing-sm.unit-xl > .unit-left + .unit-right,
  .unit-spacing-sm.unit-xl > .unit-left + .unit-body, .unit-spacing-sm.unit-xl-vertical > .unit-left + .unit-right,
  .unit-spacing-sm.unit-xl-vertical > .unit-left + .unit-body {
    padding-left: 0;
    padding-top: 22px;
  }
  .unit-spacing-sm.unit-xl > .unit-body + .unit-right, .unit-spacing-sm.unit-xl-vertical > .unit-body + .unit-right {
    padding-left: 0;
    padding-top: 22px;
  }
  .unit-spacing-sm.unit-xl-horizontal > .unit-left + .unit-right,
  .unit-spacing-sm.unit-xl-horizontal > .unit-left + .unit-body {
    padding-top: 0;
    padding-left: 22px;
  }
  .unit-spacing-sm.unit-xl-horizontal > .unit-body + .unit-right {
    padding-top: 0;
    padding-left: 22px;
  }
  .unit-spacing-sm.unit-xl-inverse > [class*='unit-']:first-child, .unit-spacing-sm.unit-xl-inverse.unit-xl-vertical > [class*='unit-']:first-child {
    padding-top: 22px;
  }
  .unit-spacing-sm.unit-xl-inverse > [class*='unit-']:last-child, .unit-spacing-sm.unit-xl-inverse.unit-xl-vertical > [class*='unit-']:last-child {
    padding-top: 0;
  }
  .unit-spacing-sm.unit-xl-inverse.unit-xl-horizontal > [class*='unit-']:first-child {
    padding-top: 0;
    padding-left: 22px;
  }
  .unit-spacing-sm.unit-xl-inverse.unit-xl-horizontal > [class*='unit-']:last-child {
    padding-left: 0;
  }
}

.unit-spacing-md.unit > [class*='unit-']:first-child, .unit-spacing-md.unit-vertical > [class*='unit-']:first-child {
  padding-top: 0;
}

.unit-spacing-md.unit > .unit-left + .unit-right,
.unit-spacing-md.unit > .unit-left + .unit-body, .unit-spacing-md.unit-vertical > .unit-left + .unit-right,
.unit-spacing-md.unit-vertical > .unit-left + .unit-body {
  padding-left: 0;
  padding-top: 30px;
}

.unit-spacing-md.unit > .unit-body + .unit-right, .unit-spacing-md.unit-vertical > .unit-body + .unit-right {
  padding-left: 0;
  padding-top: 30px;
}

.unit-spacing-md.unit-horizontal > .unit-left + .unit-right,
.unit-spacing-md.unit-horizontal > .unit-left + .unit-body {
  padding-top: 0;
  padding-left: 30px;
}

.unit-spacing-md.unit-horizontal > .unit-body + .unit-right {
  padding-top: 0;
  padding-left: 30px;
}

.unit-spacing-md.unit-inverse > [class*='unit-']:first-child, .unit-spacing-md.unit-inverse.unit-vertical > [class*='unit-']:first-child {
  padding-top: 30px;
}

.unit-spacing-md.unit-inverse > [class*='unit-']:last-child, .unit-spacing-md.unit-inverse.unit-vertical > [class*='unit-']:last-child {
  padding-top: 0;
}

.unit-spacing-md.unit-inverse.unit-horizontal > [class*='unit-']:first-child {
  padding-top: 0;
  padding-left: 30px;
}

.unit-spacing-md.unit-inverse.unit-horizontal > [class*='unit-']:last-child {
  padding-left: 0;
}

@media (min-width: 480px) {
  .unit-spacing-md.unit-xs > [class*='unit-']:first-child, .unit-spacing-md.unit-xs-vertical > [class*='unit-']:first-child {
    padding-top: 0;
  }
  .unit-spacing-md.unit-xs > .unit-left + .unit-right,
  .unit-spacing-md.unit-xs > .unit-left + .unit-body, .unit-spacing-md.unit-xs-vertical > .unit-left + .unit-right,
  .unit-spacing-md.unit-xs-vertical > .unit-left + .unit-body {
    padding-left: 0;
    padding-top: 30px;
  }
  .unit-spacing-md.unit-xs > .unit-body + .unit-right, .unit-spacing-md.unit-xs-vertical > .unit-body + .unit-right {
    padding-left: 0;
    padding-top: 30px;
  }
  .unit-spacing-md.unit-xs-horizontal > .unit-left + .unit-right,
  .unit-spacing-md.unit-xs-horizontal > .unit-left + .unit-body {
    padding-top: 0;
    padding-left: 30px;
  }
  .unit-spacing-md.unit-xs-horizontal > .unit-body + .unit-right {
    padding-top: 0;
    padding-left: 30px;
  }
  .unit-spacing-md.unit-xs-inverse > [class*='unit-']:first-child, .unit-spacing-md.unit-xs-inverse.unit-xs-vertical > [class*='unit-']:first-child {
    padding-top: 30px;
  }
  .unit-spacing-md.unit-xs-inverse > [class*='unit-']:last-child, .unit-spacing-md.unit-xs-inverse.unit-xs-vertical > [class*='unit-']:last-child {
    padding-top: 0;
  }
  .unit-spacing-md.unit-xs-inverse.unit-xs-horizontal > [class*='unit-']:first-child {
    padding-top: 0;
    padding-left: 30px;
  }
  .unit-spacing-md.unit-xs-inverse.unit-xs-horizontal > [class*='unit-']:last-child {
    padding-left: 0;
  }
}

@media (min-width: 768px) {
  .unit-spacing-md.unit-sm > [class*='unit-']:first-child, .unit-spacing-md.unit-sm-vertical > [class*='unit-']:first-child {
    padding-top: 0;
  }
  .unit-spacing-md.unit-sm > .unit-left + .unit-right,
  .unit-spacing-md.unit-sm > .unit-left + .unit-body, .unit-spacing-md.unit-sm-vertical > .unit-left + .unit-right,
  .unit-spacing-md.unit-sm-vertical > .unit-left + .unit-body {
    padding-left: 0;
    padding-top: 30px;
  }
  .unit-spacing-md.unit-sm > .unit-body + .unit-right, .unit-spacing-md.unit-sm-vertical > .unit-body + .unit-right {
    padding-left: 0;
    padding-top: 30px;
  }
  .unit-spacing-md.unit-sm-horizontal > .unit-left + .unit-right,
  .unit-spacing-md.unit-sm-horizontal > .unit-left + .unit-body {
    padding-top: 0;
    padding-left: 30px;
  }
  .unit-spacing-md.unit-sm-horizontal > .unit-body + .unit-right {
    padding-top: 0;
    padding-left: 30px;
  }
  .unit-spacing-md.unit-sm-inverse > [class*='unit-']:first-child, .unit-spacing-md.unit-sm-inverse.unit-sm-vertical > [class*='unit-']:first-child {
    padding-top: 30px;
  }
  .unit-spacing-md.unit-sm-inverse > [class*='unit-']:last-child, .unit-spacing-md.unit-sm-inverse.unit-sm-vertical > [class*='unit-']:last-child {
    padding-top: 0;
  }
  .unit-spacing-md.unit-sm-inverse.unit-sm-horizontal > [class*='unit-']:first-child {
    padding-top: 0;
    padding-left: 30px;
  }
  .unit-spacing-md.unit-sm-inverse.unit-sm-horizontal > [class*='unit-']:last-child {
    padding-left: 0;
  }
}

@media (min-width: 992px) {
  .unit-spacing-md.unit-md > [class*='unit-']:first-child, .unit-spacing-md.unit-md-vertical > [class*='unit-']:first-child {
    padding-top: 0;
  }
  .unit-spacing-md.unit-md > .unit-left + .unit-right,
  .unit-spacing-md.unit-md > .unit-left + .unit-body, .unit-spacing-md.unit-md-vertical > .unit-left + .unit-right,
  .unit-spacing-md.unit-md-vertical > .unit-left + .unit-body {
    padding-left: 0;
    padding-top: 30px;
  }
  .unit-spacing-md.unit-md > .unit-body + .unit-right, .unit-spacing-md.unit-md-vertical > .unit-body + .unit-right {
    padding-left: 0;
    padding-top: 30px;
  }
  .unit-spacing-md.unit-md-horizontal > .unit-left + .unit-right,
  .unit-spacing-md.unit-md-horizontal > .unit-left + .unit-body {
    padding-top: 0;
    padding-left: 30px;
  }
  .unit-spacing-md.unit-md-horizontal > .unit-body + .unit-right {
    padding-top: 0;
    padding-left: 30px;
  }
  .unit-spacing-md.unit-md-inverse > [class*='unit-']:first-child, .unit-spacing-md.unit-md-inverse.unit-md-vertical > [class*='unit-']:first-child {
    padding-top: 30px;
  }
  .unit-spacing-md.unit-md-inverse > [class*='unit-']:last-child, .unit-spacing-md.unit-md-inverse.unit-md-vertical > [class*='unit-']:last-child {
    padding-top: 0;
  }
  .unit-spacing-md.unit-md-inverse.unit-md-horizontal > [class*='unit-']:first-child {
    padding-top: 0;
    padding-left: 30px;
  }
  .unit-spacing-md.unit-md-inverse.unit-md-horizontal > [class*='unit-']:last-child {
    padding-left: 0;
  }
}

@media (min-width: 1200px) {
  .unit-spacing-md.unit-lg > [class*='unit-']:first-child, .unit-spacing-md.unit-lg-vertical > [class*='unit-']:first-child {
    padding-top: 0;
  }
  .unit-spacing-md.unit-lg > .unit-left + .unit-right,
  .unit-spacing-md.unit-lg > .unit-left + .unit-body, .unit-spacing-md.unit-lg-vertical > .unit-left + .unit-right,
  .unit-spacing-md.unit-lg-vertical > .unit-left + .unit-body {
    padding-left: 0;
    padding-top: 30px;
  }
  .unit-spacing-md.unit-lg > .unit-body + .unit-right, .unit-spacing-md.unit-lg-vertical > .unit-body + .unit-right {
    padding-left: 0;
    padding-top: 30px;
  }
  .unit-spacing-md.unit-lg-horizontal > .unit-left + .unit-right,
  .unit-spacing-md.unit-lg-horizontal > .unit-left + .unit-body {
    padding-top: 0;
    padding-left: 30px;
  }
  .unit-spacing-md.unit-lg-horizontal > .unit-body + .unit-right {
    padding-top: 0;
    padding-left: 30px;
  }
  .unit-spacing-md.unit-lg-inverse > [class*='unit-']:first-child, .unit-spacing-md.unit-lg-inverse.unit-lg-vertical > [class*='unit-']:first-child {
    padding-top: 30px;
  }
  .unit-spacing-md.unit-lg-inverse > [class*='unit-']:last-child, .unit-spacing-md.unit-lg-inverse.unit-lg-vertical > [class*='unit-']:last-child {
    padding-top: 0;
  }
  .unit-spacing-md.unit-lg-inverse.unit-lg-horizontal > [class*='unit-']:first-child {
    padding-top: 0;
    padding-left: 30px;
  }
  .unit-spacing-md.unit-lg-inverse.unit-lg-horizontal > [class*='unit-']:last-child {
    padding-left: 0;
  }
}

@media (min-width: 1800px) {
  .unit-spacing-md.unit-xl > [class*='unit-']:first-child, .unit-spacing-md.unit-xl-vertical > [class*='unit-']:first-child {
    padding-top: 0;
  }
  .unit-spacing-md.unit-xl > .unit-left + .unit-right,
  .unit-spacing-md.unit-xl > .unit-left + .unit-body, .unit-spacing-md.unit-xl-vertical > .unit-left + .unit-right,
  .unit-spacing-md.unit-xl-vertical > .unit-left + .unit-body {
    padding-left: 0;
    padding-top: 30px;
  }
  .unit-spacing-md.unit-xl > .unit-body + .unit-right, .unit-spacing-md.unit-xl-vertical > .unit-body + .unit-right {
    padding-left: 0;
    padding-top: 30px;
  }
  .unit-spacing-md.unit-xl-horizontal > .unit-left + .unit-right,
  .unit-spacing-md.unit-xl-horizontal > .unit-left + .unit-body {
    padding-top: 0;
    padding-left: 30px;
  }
  .unit-spacing-md.unit-xl-horizontal > .unit-body + .unit-right {
    padding-top: 0;
    padding-left: 30px;
  }
  .unit-spacing-md.unit-xl-inverse > [class*='unit-']:first-child, .unit-spacing-md.unit-xl-inverse.unit-xl-vertical > [class*='unit-']:first-child {
    padding-top: 30px;
  }
  .unit-spacing-md.unit-xl-inverse > [class*='unit-']:last-child, .unit-spacing-md.unit-xl-inverse.unit-xl-vertical > [class*='unit-']:last-child {
    padding-top: 0;
  }
  .unit-spacing-md.unit-xl-inverse.unit-xl-horizontal > [class*='unit-']:first-child {
    padding-top: 0;
    padding-left: 30px;
  }
  .unit-spacing-md.unit-xl-inverse.unit-xl-horizontal > [class*='unit-']:last-child {
    padding-left: 0;
  }
}

.unit-spacing-xl.unit > [class*='unit-']:first-child, .unit-spacing-xl.unit-vertical > [class*='unit-']:first-child {
  padding-top: 0;
}

.unit-spacing-xl.unit > .unit-left + .unit-right,
.unit-spacing-xl.unit > .unit-left + .unit-body, .unit-spacing-xl.unit-vertical > .unit-left + .unit-right,
.unit-spacing-xl.unit-vertical > .unit-left + .unit-body {
  padding-left: 0;
  padding-top: 30px;
}

.unit-spacing-xl.unit > .unit-body + .unit-right, .unit-spacing-xl.unit-vertical > .unit-body + .unit-right {
  padding-left: 0;
  padding-top: 50px;
}

.unit-spacing-xl.unit-horizontal > .unit-left + .unit-right,
.unit-spacing-xl.unit-horizontal > .unit-left + .unit-body {
  padding-top: 0;
  padding-left: 60px;
}

.unit-spacing-xl.unit-horizontal > .unit-body + .unit-right {
  padding-top: 0;
  padding-left: 40px;
}

.unit-spacing-xl.unit-inverse > [class*='unit-']:first-child, .unit-spacing-xl.unit-inverse.unit-vertical > [class*='unit-']:first-child {
  padding-top: 30px;
}

.unit-spacing-xl.unit-inverse > [class*='unit-']:last-child, .unit-spacing-xl.unit-inverse.unit-vertical > [class*='unit-']:last-child {
  padding-top: 0;
}

.unit-spacing-xl.unit-inverse.unit-horizontal > [class*='unit-']:first-child {
  padding-top: 0;
  padding-left: 60px;
}

.unit-spacing-xl.unit-inverse.unit-horizontal > [class*='unit-']:last-child {
  padding-left: 0;
}

@media (min-width: 480px) {
  .unit-spacing-xl.unit-xs > [class*='unit-']:first-child, .unit-spacing-xl.unit-xs-vertical > [class*='unit-']:first-child {
    padding-top: 0;
  }
  .unit-spacing-xl.unit-xs > .unit-left + .unit-right,
  .unit-spacing-xl.unit-xs > .unit-left + .unit-body, .unit-spacing-xl.unit-xs-vertical > .unit-left + .unit-right,
  .unit-spacing-xl.unit-xs-vertical > .unit-left + .unit-body {
    padding-left: 0;
    padding-top: 30px;
  }
  .unit-spacing-xl.unit-xs > .unit-body + .unit-right, .unit-spacing-xl.unit-xs-vertical > .unit-body + .unit-right {
    padding-left: 0;
    padding-top: 50px;
  }
  .unit-spacing-xl.unit-xs-horizontal > .unit-left + .unit-right,
  .unit-spacing-xl.unit-xs-horizontal > .unit-left + .unit-body {
    padding-top: 0;
    padding-left: 60px;
  }
  .unit-spacing-xl.unit-xs-horizontal > .unit-body + .unit-right {
    padding-top: 0;
    padding-left: 40px;
  }
  .unit-spacing-xl.unit-xs-inverse > [class*='unit-']:first-child, .unit-spacing-xl.unit-xs-inverse.unit-xs-vertical > [class*='unit-']:first-child {
    padding-top: 30px;
  }
  .unit-spacing-xl.unit-xs-inverse > [class*='unit-']:last-child, .unit-spacing-xl.unit-xs-inverse.unit-xs-vertical > [class*='unit-']:last-child {
    padding-top: 0;
  }
  .unit-spacing-xl.unit-xs-inverse.unit-xs-horizontal > [class*='unit-']:first-child {
    padding-top: 0;
    padding-left: 60px;
  }
  .unit-spacing-xl.unit-xs-inverse.unit-xs-horizontal > [class*='unit-']:last-child {
    padding-left: 0;
  }
}

@media (min-width: 768px) {
  .unit-spacing-xl.unit-sm > [class*='unit-']:first-child, .unit-spacing-xl.unit-sm-vertical > [class*='unit-']:first-child {
    padding-top: 0;
  }
  .unit-spacing-xl.unit-sm > .unit-left + .unit-right,
  .unit-spacing-xl.unit-sm > .unit-left + .unit-body, .unit-spacing-xl.unit-sm-vertical > .unit-left + .unit-right,
  .unit-spacing-xl.unit-sm-vertical > .unit-left + .unit-body {
    padding-left: 0;
    padding-top: 30px;
  }
  .unit-spacing-xl.unit-sm > .unit-body + .unit-right, .unit-spacing-xl.unit-sm-vertical > .unit-body + .unit-right {
    padding-left: 0;
    padding-top: 50px;
  }
  .unit-spacing-xl.unit-sm-horizontal > .unit-left + .unit-right,
  .unit-spacing-xl.unit-sm-horizontal > .unit-left + .unit-body {
    padding-top: 0;
    padding-left: 60px;
  }
  .unit-spacing-xl.unit-sm-horizontal > .unit-body + .unit-right {
    padding-top: 0;
    padding-left: 40px;
  }
  .unit-spacing-xl.unit-sm-inverse > [class*='unit-']:first-child, .unit-spacing-xl.unit-sm-inverse.unit-sm-vertical > [class*='unit-']:first-child {
    padding-top: 30px;
  }
  .unit-spacing-xl.unit-sm-inverse > [class*='unit-']:last-child, .unit-spacing-xl.unit-sm-inverse.unit-sm-vertical > [class*='unit-']:last-child {
    padding-top: 0;
  }
  .unit-spacing-xl.unit-sm-inverse.unit-sm-horizontal > [class*='unit-']:first-child {
    padding-top: 0;
    padding-left: 60px;
  }
  .unit-spacing-xl.unit-sm-inverse.unit-sm-horizontal > [class*='unit-']:last-child {
    padding-left: 0;
  }
}

@media (min-width: 992px) {
  .unit-spacing-xl.unit-md > [class*='unit-']:first-child, .unit-spacing-xl.unit-md-vertical > [class*='unit-']:first-child {
    padding-top: 0;
  }
  .unit-spacing-xl.unit-md > .unit-left + .unit-right,
  .unit-spacing-xl.unit-md > .unit-left + .unit-body, .unit-spacing-xl.unit-md-vertical > .unit-left + .unit-right,
  .unit-spacing-xl.unit-md-vertical > .unit-left + .unit-body {
    padding-left: 0;
    padding-top: 30px;
  }
  .unit-spacing-xl.unit-md > .unit-body + .unit-right, .unit-spacing-xl.unit-md-vertical > .unit-body + .unit-right {
    padding-left: 0;
    padding-top: 50px;
  }
  .unit-spacing-xl.unit-md-horizontal > .unit-left + .unit-right,
  .unit-spacing-xl.unit-md-horizontal > .unit-left + .unit-body {
    padding-top: 0;
    padding-left: 60px;
  }
  .unit-spacing-xl.unit-md-horizontal > .unit-body + .unit-right {
    padding-top: 0;
    padding-left: 40px;
  }
  .unit-spacing-xl.unit-md-inverse > [class*='unit-']:first-child, .unit-spacing-xl.unit-md-inverse.unit-md-vertical > [class*='unit-']:first-child {
    padding-top: 30px;
  }
  .unit-spacing-xl.unit-md-inverse > [class*='unit-']:last-child, .unit-spacing-xl.unit-md-inverse.unit-md-vertical > [class*='unit-']:last-child {
    padding-top: 0;
  }
  .unit-spacing-xl.unit-md-inverse.unit-md-horizontal > [class*='unit-']:first-child {
    padding-top: 0;
    padding-left: 60px;
  }
  .unit-spacing-xl.unit-md-inverse.unit-md-horizontal > [class*='unit-']:last-child {
    padding-left: 0;
  }
}

@media (min-width: 1200px) {
  .unit-spacing-xl.unit-lg > [class*='unit-']:first-child, .unit-spacing-xl.unit-lg-vertical > [class*='unit-']:first-child {
    padding-top: 0;
  }
  .unit-spacing-xl.unit-lg > .unit-left + .unit-right,
  .unit-spacing-xl.unit-lg > .unit-left + .unit-body, .unit-spacing-xl.unit-lg-vertical > .unit-left + .unit-right,
  .unit-spacing-xl.unit-lg-vertical > .unit-left + .unit-body {
    padding-left: 0;
    padding-top: 30px;
  }
  .unit-spacing-xl.unit-lg > .unit-body + .unit-right, .unit-spacing-xl.unit-lg-vertical > .unit-body + .unit-right {
    padding-left: 0;
    padding-top: 50px;
  }
  .unit-spacing-xl.unit-lg-horizontal > .unit-left + .unit-right,
  .unit-spacing-xl.unit-lg-horizontal > .unit-left + .unit-body {
    padding-top: 0;
    padding-left: 60px;
  }
  .unit-spacing-xl.unit-lg-horizontal > .unit-body + .unit-right {
    padding-top: 0;
    padding-left: 40px;
  }
  .unit-spacing-xl.unit-lg-inverse > [class*='unit-']:first-child, .unit-spacing-xl.unit-lg-inverse.unit-lg-vertical > [class*='unit-']:first-child {
    padding-top: 30px;
  }
  .unit-spacing-xl.unit-lg-inverse > [class*='unit-']:last-child, .unit-spacing-xl.unit-lg-inverse.unit-lg-vertical > [class*='unit-']:last-child {
    padding-top: 0;
  }
  .unit-spacing-xl.unit-lg-inverse.unit-lg-horizontal > [class*='unit-']:first-child {
    padding-top: 0;
    padding-left: 60px;
  }
  .unit-spacing-xl.unit-lg-inverse.unit-lg-horizontal > [class*='unit-']:last-child {
    padding-left: 0;
  }
}

@media (min-width: 1800px) {
  .unit-spacing-xl.unit-xl > [class*='unit-']:first-child, .unit-spacing-xl.unit-xl-vertical > [class*='unit-']:first-child {
    padding-top: 0;
  }
  .unit-spacing-xl.unit-xl > .unit-left + .unit-right,
  .unit-spacing-xl.unit-xl > .unit-left + .unit-body, .unit-spacing-xl.unit-xl-vertical > .unit-left + .unit-right,
  .unit-spacing-xl.unit-xl-vertical > .unit-left + .unit-body {
    padding-left: 0;
    padding-top: 30px;
  }
  .unit-spacing-xl.unit-xl > .unit-body + .unit-right, .unit-spacing-xl.unit-xl-vertical > .unit-body + .unit-right {
    padding-left: 0;
    padding-top: 50px;
  }
  .unit-spacing-xl.unit-xl-horizontal > .unit-left + .unit-right,
  .unit-spacing-xl.unit-xl-horizontal > .unit-left + .unit-body {
    padding-top: 0;
    padding-left: 60px;
  }
  .unit-spacing-xl.unit-xl-horizontal > .unit-body + .unit-right {
    padding-top: 0;
    padding-left: 40px;
  }
  .unit-spacing-xl.unit-xl-inverse > [class*='unit-']:first-child, .unit-spacing-xl.unit-xl-inverse.unit-xl-vertical > [class*='unit-']:first-child {
    padding-top: 30px;
  }
  .unit-spacing-xl.unit-xl-inverse > [class*='unit-']:last-child, .unit-spacing-xl.unit-xl-inverse.unit-xl-vertical > [class*='unit-']:last-child {
    padding-top: 0;
  }
  .unit-spacing-xl.unit-xl-inverse.unit-xl-horizontal > [class*='unit-']:first-child {
    padding-top: 0;
    padding-left: 60px;
  }
  .unit-spacing-xl.unit-xl-inverse.unit-xl-horizontal > [class*='unit-']:last-child {
    padding-left: 0;
  }
}

.stacktable {
  width: 100%;
  text-align: left;
}

.st-head-row {
  padding-top: 1em;
}

.st-head-row.st-head-row-main {
  font-size: 1.5em;
  padding-top: 0;
}

.st-key {
  width: 49%;
  text-align: right;
  padding-right: 1%;
}

.st-val {
  width: 49%;
  padding-left: 1%;
}

.stacktable.large-only {
  display: none;
}

.stacktable.small-only {
  display: table;
}

@media (min-width: 768px) {
  .stacktable.large-only {
    display: table;
  }
  .stacktable.small-only {
    display: none;
  }
}

.page .section-40 {
  padding-top: 40px;
  padding-bottom: 40px;
}

.page .section-60 {
  padding-top: 60px;
  padding-bottom: 60px;
}

.page .section-64 {
  padding-top: 64px;
  padding-bottom: 64px;
}

.page .section-75 {
  padding-top: 75px;
  padding-bottom: 75px;
}

.page .section-80 {
  padding-top: 80px;
  padding-bottom: 80px;
}

.page .section-90 {
  padding-top: 90px;
  padding-bottom: 90px;
}

.page .section-95 {
  padding-top: 95px;
  padding-bottom: 95px;
}

.page .section-100 {
  padding-top: 100px;
  padding-bottom: 100px;
}

.page .section-110 {
  padding-top: 110px;
  padding-bottom: 110px;
}

.page .section-115 {
  padding-top: 115px;
  padding-bottom: 115px;
}

@media (min-width: 480px) {
  .page .section-xs-40 {
    padding-top: 40px;
    padding-bottom: 40px;
  }
  .page .section-xs-60 {
    padding-top: 60px;
    padding-bottom: 60px;
  }
  .page .section-xs-64 {
    padding-top: 64px;
    padding-bottom: 64px;
  }
  .page .section-xs-75 {
    padding-top: 75px;
    padding-bottom: 75px;
  }
  .page .section-xs-80 {
    padding-top: 80px;
    padding-bottom: 80px;
  }
  .page .section-xs-90 {
    padding-top: 90px;
    padding-bottom: 90px;
  }
  .page .section-xs-95 {
    padding-top: 95px;
    padding-bottom: 95px;
  }
  .page .section-xs-100 {
    padding-top: 100px;
    padding-bottom: 100px;
  }
  .page .section-xs-110 {
    padding-top: 110px;
    padding-bottom: 110px;
  }
  .page .section-xs-115 {
    padding-top: 115px;
    padding-bottom: 115px;
  }
}

@media (min-width: 768px) {
  .page .section-sm-40 {
    padding-top: 40px;
    padding-bottom: 40px;
  }
  .page .section-sm-60 {
    padding-top: 60px;
    padding-bottom: 60px;
  }
  .page .section-sm-64 {
    padding-top: 64px;
    padding-bottom: 64px;
  }
  .page .section-sm-75 {
    padding-top: 75px;
    padding-bottom: 75px;
  }
  .page .section-sm-80 {
    padding-top: 80px;
    padding-bottom: 80px;
  }
  .page .section-sm-90 {
    padding-top: 90px;
    padding-bottom: 90px;
  }
  .page .section-sm-95 {
    padding-top: 95px;
    padding-bottom: 95px;
  }
  .page .section-sm-100 {
    padding-top: 100px;
    padding-bottom: 100px;
  }
  .page .section-sm-110 {
    padding-top: 110px;
    padding-bottom: 110px;
  }
  .page .section-sm-115 {
    padding-top: 115px;
    padding-bottom: 115px;
  }
}

@media (min-width: 992px) {
  .page .section-md-40 {
    padding-top: 40px;
    padding-bottom: 40px;
  }
  .page .section-md-60 {
    padding-top: 60px;
    padding-bottom: 60px;
  }
  .page .section-md-64 {
    padding-top: 64px;
    padding-bottom: 64px;
  }
  .page .section-md-75 {
    padding-top: 75px;
    padding-bottom: 75px;
  }
  .page .section-md-80 {
    padding-top: 80px;
    padding-bottom: 80px;
  }
  .page .section-md-90 {
    padding-top: 90px;
    padding-bottom: 90px;
  }
  .page .section-md-95 {
    padding-top: 95px;
    padding-bottom: 95px;
  }
  .page .section-md-100 {
    padding-top: 100px;
    padding-bottom: 100px;
  }
  .page .section-md-110 {
    padding-top: 110px;
    padding-bottom: 110px;
  }
  .page .section-md-115 {
    padding-top: 115px;
    padding-bottom: 115px;
  }
}

@media (min-width: 1200px) {
  .page .section-lg-40 {
    padding-top: 40px;
    padding-bottom: 40px;
  }
  .page .section-lg-60 {
    padding-top: 60px;
    padding-bottom: 60px;
  }
  .page .section-lg-64 {
    padding-top: 64px;
    padding-bottom: 64px;
  }
  .page .section-lg-75 {
    padding-top: 75px;
    padding-bottom: 75px;
  }
  .page .section-lg-80 {
    padding-top: 80px;
    padding-bottom: 80px;
  }
  .page .section-lg-90 {
    padding-top: 90px;
    padding-bottom: 90px;
  }
  .page .section-lg-95 {
    padding-top: 95px;
    padding-bottom: 95px;
  }
  .page .section-lg-100 {
    padding-top: 100px;
    padding-bottom: 100px;
  }
  .page .section-lg-110 {
    padding-top: 110px;
    padding-bottom: 110px;
  }
  .page .section-lg-115 {
    padding-top: 115px;
    padding-bottom: 115px;
  }
}

@media (min-width: 1800px) {
  .page .section-xl-40 {
    padding-top: 40px;
    padding-bottom: 40px;
  }
  .page .section-xl-60 {
    padding-top: 60px;
    padding-bottom: 60px;
  }
  .page .section-xl-64 {
    padding-top: 64px;
    padding-bottom: 64px;
  }
  .page .section-xl-75 {
    padding-top: 75px;
    padding-bottom: 75px;
  }
  .page .section-xl-80 {
    padding-top: 80px;
    padding-bottom: 80px;
  }
  .page .section-xl-90 {
    padding-top: 90px;
    padding-bottom: 90px;
  }
  .page .section-xl-95 {
    padding-top: 95px;
    padding-bottom: 95px;
  }
  .page .section-xl-100 {
    padding-top: 100px;
    padding-bottom: 100px;
  }
  .page .section-xl-110 {
    padding-top: 110px;
    padding-bottom: 110px;
  }
  .page .section-xl-115 {
    padding-top: 115px;
    padding-bottom: 115px;
  }
}

.page .section-top-40 {
  padding-top: 40px;
}

.page .section-top-60 {
  padding-top: 60px;
}

.page .section-top-64 {
  padding-top: 64px;
}

.page .section-top-75 {
  padding-top: 75px;
}

.page .section-top-80 {
  padding-top: 80px;
}

.page .section-top-90 {
  padding-top: 90px;
}

.page .section-top-95 {
  padding-top: 95px;
}

.page .section-top-100 {
  padding-top: 100px;
}

.page .section-top-110 {
  padding-top: 110px;
}

.page .section-top-115 {
  padding-top: 115px;
}

@media (min-width: 480px) {
  .page .section-xs-top-40 {
    padding-top: 40px;
  }
  .page .section-xs-top-60 {
    padding-top: 60px;
  }
  .page .section-xs-top-64 {
    padding-top: 64px;
  }
  .page .section-xs-top-75 {
    padding-top: 75px;
  }
  .page .section-xs-top-80 {
    padding-top: 80px;
  }
  .page .section-xs-top-90 {
    padding-top: 90px;
  }
  .page .section-xs-top-95 {
    padding-top: 95px;
  }
  .page .section-xs-top-100 {
    padding-top: 100px;
  }
  .page .section-xs-top-110 {
    padding-top: 110px;
  }
  .page .section-xs-top-115 {
    padding-top: 115px;
  }
}

@media (min-width: 768px) {
  .page .section-sm-top-40 {
    padding-top: 40px;
  }
  .page .section-sm-top-60 {
    padding-top: 60px;
  }
  .page .section-sm-top-64 {
    padding-top: 64px;
  }
  .page .section-sm-top-75 {
    padding-top: 75px;
  }
  .page .section-sm-top-80 {
    padding-top: 80px;
  }
  .page .section-sm-top-90 {
    padding-top: 90px;
  }
  .page .section-sm-top-95 {
    padding-top: 95px;
  }
  .page .section-sm-top-100 {
    padding-top: 100px;
  }
  .page .section-sm-top-110 {
    padding-top: 110px;
  }
  .page .section-sm-top-115 {
    padding-top: 115px;
  }
}

@media (min-width: 992px) {
  .page .section-md-top-40 {
    padding-top: 40px;
  }
  .page .section-md-top-60 {
    padding-top: 60px;
  }
  .page .section-md-top-64 {
    padding-top: 64px;
  }
  .page .section-md-top-75 {
    padding-top: 75px;
  }
  .page .section-md-top-80 {
    padding-top: 80px;
  }
  .page .section-md-top-90 {
    padding-top: 90px;
  }
  .page .section-md-top-95 {
    padding-top: 95px;
  }
  .page .section-md-top-100 {
    padding-top: 100px;
  }
  .page .section-md-top-110 {
    padding-top: 110px;
  }
  .page .section-md-top-115 {
    padding-top: 115px;
  }
}

@media (min-width: 1200px) {
  .page .section-lg-top-40 {
    padding-top: 40px;
  }
  .page .section-lg-top-60 {
    padding-top: 60px;
  }
  .page .section-lg-top-64 {
    padding-top: 64px;
  }
  .page .section-lg-top-75 {
    padding-top: 75px;
  }
  .page .section-lg-top-80 {
    padding-top: 80px;
  }
  .page .section-lg-top-90 {
    padding-top: 90px;
  }
  .page .section-lg-top-95 {
    padding-top: 95px;
  }
  .page .section-lg-top-100 {
    padding-top: 100px;
  }
  .page .section-lg-top-110 {
    padding-top: 110px;
  }
  .page .section-lg-top-115 {
    padding-top: 115px;
  }
}

@media (min-width: 1800px) {
  .page .section-xl-top-40 {
    padding-top: 40px;
  }
  .page .section-xl-top-60 {
    padding-top: 60px;
  }
  .page .section-xl-top-64 {
    padding-top: 64px;
  }
  .page .section-xl-top-75 {
    padding-top: 75px;
  }
  .page .section-xl-top-80 {
    padding-top: 80px;
  }
  .page .section-xl-top-90 {
    padding-top: 90px;
  }
  .page .section-xl-top-95 {
    padding-top: 95px;
  }
  .page .section-xl-top-100 {
    padding-top: 100px;
  }
  .page .section-xl-top-110 {
    padding-top: 110px;
  }
  .page .section-xl-top-115 {
    padding-top: 115px;
  }
}

.page .section-bottom-40 {
  padding-bottom: 40px;
}

.page .section-bottom-60 {
  padding-bottom: 60px;
}

.page .section-bottom-64 {
  padding-bottom: 64px;
}

.page .section-bottom-75 {
  padding-bottom: 75px;
}

.page .section-bottom-80 {
  padding-bottom: 80px;
}

.page .section-bottom-90 {
  padding-bottom: 90px;
}

.page .section-bottom-95 {
  padding-bottom: 95px;
}

.page .section-bottom-100 {
  padding-bottom: 100px;
}

.page .section-bottom-110 {
  padding-bottom: 110px;
}

.page .section-bottom-115 {
  padding-bottom: 115px;
}

@media (min-width: 480px) {
  .page .section-xs-bottom-40 {
    padding-bottom: 40px;
  }
  .page .section-xs-bottom-60 {
    padding-bottom: 60px;
  }
  .page .section-xs-bottom-64 {
    padding-bottom: 64px;
  }
  .page .section-xs-bottom-75 {
    padding-bottom: 75px;
  }
  .page .section-xs-bottom-80 {
    padding-bottom: 80px;
  }
  .page .section-xs-bottom-90 {
    padding-bottom: 90px;
  }
  .page .section-xs-bottom-95 {
    padding-bottom: 95px;
  }
  .page .section-xs-bottom-100 {
    padding-bottom: 100px;
  }
  .page .section-xs-bottom-110 {
    padding-bottom: 110px;
  }
  .page .section-xs-bottom-115 {
    padding-bottom: 115px;
  }
}

@media (min-width: 768px) {
  .page .section-sm-bottom-40 {
    padding-bottom: 40px;
  }
  .page .section-sm-bottom-60 {
    padding-bottom: 60px;
  }
  .page .section-sm-bottom-64 {
    padding-bottom: 64px;
  }
  .page .section-sm-bottom-75 {
    padding-bottom: 75px;
  }
  .page .section-sm-bottom-80 {
    padding-bottom: 80px;
  }
  .page .section-sm-bottom-90 {
    padding-bottom: 90px;
  }
  .page .section-sm-bottom-95 {
    padding-bottom: 95px;
  }
  .page .section-sm-bottom-100 {
    padding-bottom: 100px;
  }
  .page .section-sm-bottom-110 {
    padding-bottom: 110px;
  }
  .page .section-sm-bottom-115 {
    padding-bottom: 115px;
  }
}

@media (min-width: 992px) {
  .page .section-md-bottom-40 {
    padding-bottom: 40px;
  }
  .page .section-md-bottom-60 {
    padding-bottom: 60px;
  }
  .page .section-md-bottom-64 {
    padding-bottom: 64px;
  }
  .page .section-md-bottom-75 {
    padding-bottom: 75px;
  }
  .page .section-md-bottom-80 {
    padding-bottom: 80px;
  }
  .page .section-md-bottom-90 {
    padding-bottom: 90px;
  }
  .page .section-md-bottom-95 {
    padding-bottom: 95px;
  }
  .page .section-md-bottom-100 {
    padding-bottom: 100px;
  }
  .page .section-md-bottom-110 {
    padding-bottom: 110px;
  }
  .page .section-md-bottom-115 {
    padding-bottom: 115px;
  }
}

@media (min-width: 1200px) {
  .page .section-lg-bottom-40 {
    padding-bottom: 40px;
  }
  .page .section-lg-bottom-60 {
    padding-bottom: 60px;
  }
  .page .section-lg-bottom-64 {
    padding-bottom: 64px;
  }
  .page .section-lg-bottom-75 {
    padding-bottom: 75px;
  }
  .page .section-lg-bottom-80 {
    padding-bottom: 80px;
  }
  .page .section-lg-bottom-90 {
    padding-bottom: 90px;
  }
  .page .section-lg-bottom-95 {
    padding-bottom: 95px;
  }
  .page .section-lg-bottom-100 {
    padding-bottom: 100px;
  }
  .page .section-lg-bottom-110 {
    padding-bottom: 110px;
  }
  .page .section-lg-bottom-115 {
    padding-bottom: 115px;
  }
}

@media (min-width: 1800px) {
  .page .section-xl-bottom-40 {
    padding-bottom: 40px;
  }
  .page .section-xl-bottom-60 {
    padding-bottom: 60px;
  }
  .page .section-xl-bottom-64 {
    padding-bottom: 64px;
  }
  .page .section-xl-bottom-75 {
    padding-bottom: 75px;
  }
  .page .section-xl-bottom-80 {
    padding-bottom: 80px;
  }
  .page .section-xl-bottom-90 {
    padding-bottom: 90px;
  }
  .page .section-xl-bottom-95 {
    padding-bottom: 95px;
  }
  .page .section-xl-bottom-100 {
    padding-bottom: 100px;
  }
  .page .section-xl-bottom-110 {
    padding-bottom: 110px;
  }
  .page .section-xl-bottom-115 {
    padding-bottom: 115px;
  }
}

html .group {
  -webkit-transform: translateY(-15px);
  transform: translateY(-15px);
  margin-bottom: -15px;
  margin-left: -15px;
}

html .group > *, html .group > *:first-child {
  display: inline-block;
  margin-top: 15px;
  margin-left: 15px;
}

html .group-xs {
  -webkit-transform: translateY(-5px);
  transform: translateY(-5px);
  margin-bottom: -5px;
  margin-left: -5px;
}

html .group-xs > *, html .group-xs > *:first-child {
  display: inline-block;
  margin-top: 5px;
  margin-left: 5px;
}

html .group-sm {
  -webkit-transform: translateY(-10px);
  transform: translateY(-10px);
  margin-bottom: -10px;
  margin-left: -10px;
}

html .group-sm > *, html .group-sm > *:first-child {
  display: inline-block;
  margin-top: 10px;
  margin-left: 10px;
}

html .group-lg {
  -webkit-transform: translateY(-20px);
  transform: translateY(-20px);
  margin-bottom: -20px;
  margin-left: -20px;
}

html .group-lg > *, html .group-lg > *:first-child {
  display: inline-block;
  margin-top: 20px;
  margin-left: 20px;
}

html .group-xl {
  -webkit-transform: translateY(-28px);
  transform: translateY(-28px);
  margin-bottom: -28px;
  margin-left: -28px;
}

html .group-xl > *, html .group-xl > *:first-child {
  display: inline-block;
  margin-top: 28px;
  margin-left: 28px;
}

html .group-top > *, html .group-top > *:first-child {
  vertical-align: top;
}

html .group-middle > *, html .group-middle > *:first-child {
  vertical-align: middle;
}

html .group-bottom > *, html .group-bottom > *:first-child {
  vertical-align: bottom;
}

* {
  -webkit-box-sizing: border-box;
  -moz-box-sizing: border-box;
  box-sizing: border-box;
}

*:before,
*:after {
  -webkit-box-sizing: border-box;
  -moz-box-sizing: border-box;
  box-sizing: border-box;
}

html {
  font-size: 10px;
  -webkit-tap-highlight-color: transparent;
}

body {
  font-family: "Open Sans", Helvetica, Arial, sans-serif;
  -webkit-text-size-adjust: none;
  color: #313132;
  background-color: #fff;
  font-weight: 400;
  -webkit-font-smoothing: subpixel-antialiased;
}

body.flex {
  display: -ms-flexbox;
  display: -webkit-flex;
  display: flex;
}

.body-gray {
  color: #777;
}

.page {
  overflow: hidden;
}

/*
* @section      Page Header
* @description  This section holds specific style redeclarations for some
*               of common elements in page header
*/
.page-head {
  position: relative;
  z-index: 1000;
  background-color: #fff;
}

/*
* @section      Page Content
* @description  This section holds specific style redeclarations for some
*               of common elements in page content
*/
.page-content {
  z-index: 1;
  position: relative;
}

@media (min-width: 992px) {
  .desktop .page-content {
    min-height: 100vh;
  }
}

.section-single.bg-venice-blue .page-head,
.section-single.bg-venice-blue .page-foot {
  background: #084884;
}

.section-single {
  width: 100%;
}

.section-single .page-head {
  padding-top: 35px;
  padding-bottom: 20px;
}

.section-single .page-content {
  padding-top: 60px;
  padding-bottom: 60px;
}

.section-single .page-foot {
  padding-top: 20px;
  padding-bottom: 40px;
}

.section-single .rights {
  color: #fff;
}

@media (min-width: 768px) {
  .section-single {
    min-height: 100vh;
    display: -ms-flexbox;
    display: -webkit-flex;
    display: flex;
    -webkit-flex-direction: column;
    -ms-flex-direction: column;
    flex-direction: column;
    -webkit-align-items: center;
    -ms-flex-align: center;
    align-items: center;
    -webkit-justify-content: space-between;
    -ms-flex-pack: justify;
    justify-content: space-between;
  }
  .section-single .page-head {
    padding-top: 50px;
  }
  .section-single .page-foot {
    padding-bottom: 60px;
  }
}

@media (min-width: 1200px) {
  .section-single .page-head {
    padding-top: 75px;
  }
  .section-single .page-foot {
    padding-bottom: 90px;
  }
}

@media (min-width: 1200px) {
  .section-single .page-content {
    padding-top: 90px;
    padding-bottom: 90px;
  }
}

@media (min-width: 768px) and (max-height: 680px) {
  .section-single .page-head {
    padding-top: 40px;
    padding-bottom: 0;
  }
  .section-single .page-content {
    padding-top: 80px;
    padding-bottom: 80px;
  }
  .section-single .page-foot {
    padding-top: 0;
    padding-bottom: 40px;
  }
}

.ie-10 .section-single,
.ie-11 .section-single {
  overflow-x: hidden;
  overflow-y: auto;
}

@media (min-width: 992px) {
  .desktop .section-single .page-content {
    min-height: 301px;
    width: 100%;
    margin: auto;
  }
}

/*
* @section      Page Footer
* @description  This section holds specific style redeclarations for some
*               of common elements in page footer
*/
.page-foot {
  padding: 65px 0 40px;
}

@media (min-width: 768px) {
  .page-foot {
    padding-top: 77px;
    padding-bottom: 22px;
  }
}

input,
button,
select,
textarea {
  font-family: inherit;
  font-size: inherit;
  line-height: inherit;
}

a {
  display: inline-block;
  text-decoration: none;
  transition: .33s all ease-out;
}

a, a:active, a:focus {
  color: #42a4ff;
}

a:hover, a:focus {
  color: #084884;
  text-decoration: none;
}

a:focus {
  outline: 0;
}

figure {
  margin: 0;
}

img {
  vertical-align: middle;
  max-width: 100%;
  height: auto;
}

.img-responsive {
  display: block;
  max-width: 100%;
  height: auto;
}

.img-rounded {
  border-radius: 50px;
}

.img-thumbnail {
  padding: 4px;
  line-height: 1.57143;
  background-color: #fff;
  border: 1px solid #ddd;
  border-radius: 0;
  -webkit-transition: all 0.2s ease-in-out;
  -o-transition: all 0.2s ease-in-out;
  transition: all 0.2s ease-in-out;
  display: inline-block;
  max-width: 100%;
  height: auto;
}

.img-circle {
  border-radius: 50%;
}

hr {
  margin-top: 11px;
  margin-bottom: 0;
  border: 0;
  border-top: 1px solid #ebebeb;
}

.sr-only {
  position: absolute;
  width: 1px;
  height: 1px;
  margin: -1px;
  padding: 0;
  overflow: hidden;
  clip: rect(0, 0, 0, 0);
  border: 0;
}

.sr-only-focusable:active, .sr-only-focusable:focus {
  position: static;
  width: auto;
  height: auto;
  margin: 0;
  overflow: visible;
  clip: auto;
}

[role="button"] {
  cursor: pointer;
}

@media (min-width: 768px) {
  .brand-wrap {
    padding-top: 13px;
  }
}

.brand {
  font-size: 20px;
  text-transform: uppercase;
}

.brand, .brand:active, .brand:focus, .brand:hover {
  color: #42a4ff;
}

.rights {
  display: inline-block;
  margin: 0;
  line-height: 1.45;
  vertical-align: baseline;
  color: #777;
}

.privacy-link {
  margin-top: 26px;
}

.relative {
  position: relative;
}

.block-top-level {
  position: relative;
  z-index: 3;
}

.height-fill {
  display: -ms-flexbox;
  display: -webkit-flex;
  display: flex;
  -webkit-flex-direction: column;
  -ms-flex-direction: column;
  flex-direction: column;
  -webkit-align-items: stretch;
  -ms-flex-align: stretch;
  align-items: stretch;
}

.height-fill > * {
  -webkit-flex-grow: 1;
  -ms-flex-positive: 1;
  flex-grow: 1;
}

.centered {
  display: -ms-flexbox;
  display: -webkit-flex;
  display: flex;
  -webkit-justify-content: center;
  -ms-flex-pack: center;
  justify-content: center;
  -webkit-align-items: center;
  -ms-flex-align: center;
  align-items: center;
}

.nowrap {
  white-space: nowrap;
}

.max-width-300 {
  display: inline-block;
  max-width: 300px;
}

.max-width-370 {
  max-width: 370px;
}

.max-width-490 {
  margin-left: auto;
  margin-right: auto;
  max-width: 490px;
}

.max-width-560 {
  margin-left: auto;
  margin-right: auto;
  max-width: 560px;
}

.max-width-570 {
  max-width: 570px;
}

.min-width-230 {
  min-width: 230px;
}

@media (min-width: 992px) {
  html .page .shift-md-top-10 {
    margin-top: -10px;
  }
}

* + h1,
* + .h1 {
  margin-top: 10px;
}

* + h2,
* + .h2 {
  margin-top: 15px;
}

* + h3,
* + .h3 {
  margin-top: 20px;
}

* + h4,
* + .h4 {
  margin-top: 25px;
}

* + h5,
* + .h5 {
  margin-top: 20px;
}

* + h6,
* + .h6 {
  margin-top: 20px;
}

@media (min-width: 768px) {
  * + h6,
  * + .h6 {
    margin-top: 30px;
  }
}

* + p {
  margin-top: 10px;
}

@media (min-width: 768px) {
  * + p {
    margin-top: 18px;
  }
}

@media (min-width: 1200px) {
  * + p {
    margin-top: 35px;
  }
}

hr + * {
  margin-top: 18px;
}

@media (min-width: 768px) {
  hr + * {
    margin-top: 30px;
  }
}

* + .divider-md {
  margin-top: 20px;
}

@media (min-width: 768px) {
  * + .divider-md {
    margin-top: 32px;
  }
}

p + p {
  margin-top: 11px;
}

* + .btn {
  margin-top: 30px;
}

@media (min-width: 1200px) {
  * + .btn {
    margin-top: 44px;
  }
}

* + .big {
  margin-top: 20px;
}

@media (min-width: 768px) {
  * + .big {
    margin-top: 30px;
  }
}

* + .link {
  margin-top: 18px;
}

* + .contact-info {
  margin-top: 25px;
}

* + .list-inline {
  margin-top: 32px;
}

* + .list-terms {
  margin-top: 42px;
}

@media (min-width: 1200px) {
  * + .list-terms {
    margin-top: 62px;
  }
}

* + .group-xl {
  margin-top: 30px;
}

h1 + p,
.h1 + p {
  margin-top: 35px;
}

h2 + p,
.h2 + p {
  margin-top: 30px;
}

h3 + p,
.h3 + p {
  margin-top: 30px;
}

h4 + p,
.h4 + p {
  margin-top: 24px;
}

h5 + p,
.h5 + p {
  margin-top: 21px;
}

h5 + hr,
.h5 + hr {
  margin-top: 10px;
}

h6 + p,
.h6 + p {
  margin-top: 13px;
}

* + .btn-sm, .btn-group-sm > * + .btn {
  margin-top: 20px;
}

* + .list {
  margin-top: 14px;
}

@media (min-width: 768px) {
  * + .list {
    margin-top: 20px;
  }
}

* + .list-marked-variant-2 {
  margin-top: 20px;
}

* + .table-mobile {
  margin-top: 16px;
}

* + .text-extra-big {
  margin-top: 25px;
}

.contact-info {
   max-width: 175px;
    overflow: hidden;
    vertical-align: baseline;
    white-space: nowrap;
}
footer  .contact-info{max-width:none}
.contact-info a {
  display: inline-block;
}

.contact-info dl dt, .contact-info dl dd {
  display: inline-block;
}

@media (min-width: 768px) {
  .contact-info dl dt {
    padding-right: 8px;
  }
}

.contact-info dl dt:after {
  content: ':';
  display: inline-block;
  text-align: center;
}

.contact-info .dl-inline dt {
  padding-right: 0;
}

.contact-info .unit-body span {
  display: block;
}

.contact-info .unit-body a {
  display: inline;
}

.contact-info-inline {
  vertical-align: middle;
}

.contact-info-inline > * {
  display: inline-block;
  margin-top: 0;
  vertical-align: middle;
}

.contact-info-inline > * + * {
  margin-left: 5px;
}

.contact-info-mod-1 br {
  display: none;
}

.contact-info-mod-1 span {
  display: inline;
}

.contact-info-mod-1 span {
  margin-right: .25em;
}

.contact-info-mod-1 span:last-child {
  margin-right: 0;
}

.rd-navbar-fixed-linked .contact-info-mod-1 {
  text-align: left;
}

.rd-navbar-fixed-linked .contact-info-mod-1 br {
  display: block;
}

.rd-navbar-fixed-linked .contact-info-mod-1 .list-links-1 li {
  display: block;
}

.contact-info-contrast a, .contact-info-contrast a:active, .contact-info-contrast a:focus {
  color: #777;
}

.contact-info-contrast a:hover {
  color: #42a4ff;
}

.block-image img {
  width: 100%;
  height: auto;
  max-width: none;
}

.grid-element {
  padding: 12px 5px;
  color: #777;
  background: #f9f9f9;
}

@media (min-width: 768px) {
  .grid-element {
    padding: 15px 10px;
  }
}

@media (min-width: 992px) {
  .grid-element {
    padding: 25px 15px;
  }
}

@media (min-width: 1200px) {
  .grid-element {
    padding: 29px 15px 29px 31px;
  }
}

@media (max-width: 1199px) {
  .grid-element p {
    white-space: nowrap;
    overflow: hidden;
    text-overflow: ellipsis;
  }
}

@media (max-width: 767px) {
  .grid-system-row [class*='col'] {
    padding-left: 8px;
    padding-right: 8px;
  }
}

@media (min-width: 1200px) {
  .grid-element-spacing-1 {
    padding: 29px 22px 29px 31px;
  }
  .min-height-lg-204 {
    min-height: 204px;
  }
  .min-height-lg-184 {
    min-height: 184px;
  }
}

.row-no-gutter {
  margin-left: 0;
  margin-right: 0;
}

.row-no-gutter > [class*='col'] {
  margin-top: 0;
  padding-left: 0;
  padding-right: 0;
}

.range-mod-1 {
  position: relative;
  z-index: 1;
}

.container-fluid-variant-1 {
  max-width: 2050px;
  padding-left: 0;
  padding-right: 0;
  margin-left: auto;
  margin-right: auto;
  margin-bottom: -2px;
}

@media (min-width: 1200px) and (max-width: 1279px) {
  .shell-mod-1 {
    max-width: 1170px;
  }
}

html .page .shell-fluid {
  max-width: 100%;
  padding: 0 15px;
}

@media (min-width: 1800px) {
  html .page .shell-fluid {
    padding: 0 60px;
  }
}

.shift-left-5 {
  position: relative;
  left: -5px;
}

.aside-list-group .list-item + .list-item {
  margin-top: 45px;
}

.aside-list-group + .aside-list-group {
  margin-top: 45px;
}

@media (min-width: 768px) {
  .aside-list-group .list-item + .list-item {
    margin-top: 60px;
  }
  .aside-list-group + .aside-list-group {
    margin-top: 0;
  }
}

@media (min-width: 992px) {
  .aside-list-group {
    padding-left: 33px;
  }
  .aside-list-group + .aside-list-group {
    margin-top: 60px;
  }
}

@media (min-width: 1200px) {
  .aside-list-group {
    padding-left: 45px;
  }
  .aside-list-group .list-item + .list-item {
    margin-top: 88px;
  }
  .aside-list-group + .aside-list-group {
    margin-top: 89px;
  }
}

.breadcrumbs-custom {
  position: relative;
}

.breadcrumbs-custom a, .breadcrumbs-custom a:active, .breadcrumbs-custom a:focus {
  color: #42a4ff;
}

.breadcrumbs-custom li {
  position: relative;
  display: inline-block;
  padding-right: 36px;
}

.breadcrumbs-custom li:after {
  content: "";
  position: absolute;
  top: 50%;
  right: 9px;
  display: inline-block;
  color: #b1b1b1;
  font-family: 'Material Design Icons';
  -webkit-transform: translateY(-50%);
  transform: translateY(-50%);
}

.breadcrumbs-custom li:last-child {
  padding-right: 0;
}

.breadcrumbs-custom li:last-child:after {
  display: none;
}

.breadcrumbs-custom a:hover,
.breadcrumbs-custom li.active {
  color: #777;
}

@media (min-width: 768px) {
  .breadcrumbs-custom li {
    padding-right: 44px;
  }
  .breadcrumbs-custom li:after {
    right: 13px;
  }
}

.pagination-custom {
  position: relative;
}

.pagination-custom li {
  display: inline-block;
  margin-right: calc(10px - .25em);
}

.pagination-custom li, .pagination-custom a {
  width: 36px;
  height: 36px;
  border-radius: 100px;
  text-align: center;
  line-height: 34px;
}

.pagination-custom li a {
  font-size: 13px;
  font-weight: 700;
}

.pagination-custom li a, .pagination-custom li a:active, .pagination-custom li a:focus {
  color: #fff;
  background: #42a4ff;
}

.pagination-custom li a:hover {
  color: #fff;
  background: #084884;
}

.pagination-custom li:first-child a,
.pagination-custom li:last-child a {
  font-size: 12px;
}

.pagination-custom li:first-child a:before,
.pagination-custom li:last-child a:before {
  position: relative;
  font-family: 'FontAwesome';
}

.pagination-custom li:first-child a:before {
  left: -1px;
  content: '\f053';
}

.pagination-custom li:last-child {
  margin-right: 0;
}

.pagination-custom li:last-child a:before {
  right: -1px;
  content: '\f054';
}

.pagination-custom li.disabled,
.pagination-custom li.active {
  pointer-events: none;
}

.pagination-custom li.disabled, .pagination-custom li.disabled a,
.pagination-custom li.active,
.pagination-custom li.active a {
  color: #777;
  background: #f9f9f9;
}

.pagination-custom li.active, .pagination-custom li.active a {
  color: #777;
}

@media (min-width: 480px) {
  .pagination-custom li, .pagination-custom a {
    width: 40px;
    height: 40px;
    line-height: 38px;
  }
  .pagination-custom li:first-child a:before,
  .pagination-custom li:last-child a:before {
    top: 1px;
  }
}

table {
  background-color: transparent;
}

caption {
  padding-top: 13px 19px;
  padding-bottom: 13px 19px;
  color: #ccc;
  text-align: left;
}

th {
  text-align: left;
}

.table {
  width: 100%;
  max-width: 100%;
  margin-bottom: 0;
}

.table > thead > tr > th,
.table > thead > tr > td,
.table > tbody > tr > th,
.table > tbody > tr > td,
.table > tfoot > tr > th,
.table > tfoot > tr > td {
  padding: 13px 19px;
  line-height: 1.57143;
  vertical-align: top;
  border-top: 0;
  border-bottom: 1px solid #dbdbdb;
}

.table > thead > tr > th {
  vertical-align: middle;
  font-weight: 700;
  border-bottom: 1px solid #777;
}

.table > tfoot > tr > td {
  font-weight: 500;
  color: #777;
}

.table > caption + thead > tr:first-child > th,
.table > caption + thead > tr:first-child > td,
.table > colgroup + thead > tr:first-child > th,
.table > colgroup + thead > tr:first-child > td,
.table > thead:first-child > tr:first-child > th,
.table > thead:first-child > tr:first-child > td {
  border-top: 0;
}

.table > tbody + tbody {
  border-top: 1px solid #dbdbdb;
}

.table .table {
  background-color: #fff;
}

.table a {
  display: inline;
}

.table-condensed > tbody > tr > td,
.table-condensed > tfoot > tr > td {
  padding: 9px 19px;
}

.table-bordered {
  border: 1px solid #dbdbdb;
}

.table-bordered > thead > tr > td,
.table-bordered > tbody > tr > td,
.table-bordered > tfoot > tr > td {
  border: 1px solid #dbdbdb;
}

.table-bordered > thead {
  position: relative;
}

.table-bordered > thead:after {
  content: '';
  position: absolute;
  bottom: 0;
  left: 0;
  right: 0;
  z-index: 10000;
  border-top: 1px solid #777;
}

.table-bordered > thead > tr > th {
  border-bottom-width: 0;
}

.table-primary thead {
  color: #fff;
  background: #42a4ff;
}

.table-primary > thead > tr > th,
.table-primary > thead > tr > td,
.table-primary > tbody > tr > th,
.table-primary > tbody > tr > td,
.table-primary > tfoot > tr > th,
.table-primary > tfoot > tr > td {
  border: 0;
  padding: 14px 19px;
}

.table-venice-blue thead {
  color: #fff;
  background: #084884;
}

.table-venice-blue > caption + thead > tr:first-child > th,
.table-venice-blue > caption + thead > tr:first-child > td,
.table-venice-blue > colgroup + thead > tr:first-child > th,
.table-venice-blue > colgroup + thead > tr:first-child > td,
.table-venice-blue > thead:first-child > tr:first-child > th,
.table-venice-blue > thead:first-child > tr:first-child > td {
  border-top: 0;
}

.table-striped-variant-1 > tbody > tr:nth-of-type(odd) {
  background-color: #fff;
}

.table-striped-variant-1 > tbody > tr:nth-of-type(even) {
  background-color: #f9f9f9;
}

@media (max-width: 767px) {
  .table-mobile .table {
    width: 100%;
    max-width: 100%;
  }
  .table-mobile .table thead {
    display: none;
  }
  .table-mobile .table tr td:first-child,
  .table-mobile .table tr td:nth-child(4) {
    width: 100%;
  }
  .table-mobile .table tr {
    position: relative;
    display: inline-block;
    width: 100%;
    display: -ms-flexbox;
    display: -webkit-flex;
    display: flex;
    -webkit-flex-wrap: wrap;
    -ms-flex-wrap: wrap;
    flex-wrap: wrap;
  }
  .table-mobile .table td {
    display: inline-flex;
    -webkit-align-items: center;
    -ms-flex-align: center;
    align-items: center;
    -webkit-justify-content: center;
    -ms-flex-pack: center;
    justify-content: center;
    text-align: center;
    -webkit-flex-grow: 2;
    -ms-flex-positive: 2;
    flex-grow: 2;
    padding: 12px 5px;
  }
  .table-mobile .table td:nth-child(2),
  .table-mobile .table td:nth-child(3) {
    width: 50%;
    -webkit-flex-grow: 1;
    -ms-flex-positive: 1;
    flex-grow: 1;
    border-bottom: 1px solid #dbdbdb;
  }
  .table-mobile .table td:nth-child(4) {
    position: relative;
  }
  .table-mobile .table td:nth-child(4):before, .table-mobile .table td:nth-child(4):after {
    content: '';
    position: absolute;
    left: 50%;
    -webkit-transform: translateX(-50%);
    transform: translateX(-50%);
  }
  .table-mobile .table td:nth-child(4):before {
    top: 0;
    width: 0;
    height: 0;
    border-style: solid;
    border-width: 8px 8px 0 8px;
    border-color: #dbdbdb transparent transparent transparent;
  }
  .table-mobile .table td:nth-child(4):after {
    top: -1px;
    width: 0;
    height: 0;
    border-style: solid;
    border-width: 8px 8px 0 8px;
    border-color: #fff transparent transparent transparent;
  }
  .table-mobile .table-primary tbody tr td:first-child {
    color: #fff;
    background: #42a4ff;
  }
  .table-mobile .table-venice-blue tbody tr td:first-child {
    color: #fff;
    background: #084884;
  }
  .table-mobile .table-bordered td {
    border: 0;
  }
  .table-mobile .table-bordered tr + tr {
    border-top: 1px solid #dbdbdb;
  }
  .table-mobile .table-striped > tbody > tr:nth-of-type(odd) td:last-child:after {
    width: 0;
    height: 0;
    border-style: solid;
    border-width: 8px 8px 0 8px;
    border-color: #f9f9f9 transparent transparent transparent;
  }
  .table-mobile .table-striped-variant-1 > tbody > tr:nth-of-type(even) td:last-child:after {
    width: 0;
    height: 0;
    border-style: solid;
    border-width: 8px 8px 0 8px;
    border-color: #f9f9f9 transparent transparent transparent;
  }
  .table-mobile .table-hover > tbody > tr:hover {
    background: #fff;
  }
}

.table-striped > tbody > tr:nth-of-type(odd) {
  background-color: #f9f9f9;
}

.table-striped > tbody > tr:nth-of-type(even) {
  background-color: #fff;
}

.table-hover > tbody tr {
  background: #fff;
}

@media (min-width: 768px) {
  .table-hover > tbody > tr {
    transition: .33s all ease;
    background: #fff;
  }
  .table-hover > tbody > tr:hover {
    background: #f9f9f9;
    cursor: default;
  }
}

.table-border-top {
  border-top: 7px solid #f9f9f9;
}

.table-border-top thead > tr > th {
  color: #000;
  padding-top: 28px;
  padding-bottom: 28px;
}

.table-border-top tbody tr:first-child td {
  border-top: 1px solid #dbdbdb;
}

.table-fixed {
  table-layout: fixed;
}

table col[class*="col-"] {
  position: static;
  float: none;
  display: table-column;
}

table td[class*="col-"],
table th[class*="col-"] {
  position: static;
  float: none;
  display: table-cell;
}

table a {
  font-weight: 500;
}

table a:hover {
  color: #000;
}

.table > thead > tr > td.active,
.table > thead > tr > th.active,
.table > thead > tr.active > td,
.table > thead > tr.active > th,
.table > tbody > tr > td.active,
.table > tbody > tr > th.active,
.table > tbody > tr.active > td,
.table > tbody > tr.active > th,
.table > tfoot > tr > td.active,
.table > tfoot > tr > th.active,
.table > tfoot > tr.active > td,
.table > tfoot > tr.active > th {
  background-color: #f9f9f9;
}

.table-hover > tbody > tr > td.active:hover,
.table-hover > tbody > tr > th.active:hover,
.table-hover > tbody > tr.active:hover > td,
.table-hover > tbody > tr:hover > .active,
.table-hover > tbody > tr.active:hover > th {
  background-color: #ececec;
}

.table > thead > tr > td.success,
.table > thead > tr > th.success,
.table > thead > tr.success > td,
.table > thead > tr.success > th,
.table > tbody > tr > td.success,
.table > tbody > tr > th.success,
.table > tbody > tr.success > td,
.table > tbody > tr.success > th,
.table > tfoot > tr > td.success,
.table > tfoot > tr > th.success,
.table > tfoot > tr.success > td,
.table > tfoot > tr.success > th {
  background-color: #dff0d8;
}

.table-hover > tbody > tr > td.success:hover,
.table-hover > tbody > tr > th.success:hover,
.table-hover > tbody > tr.success:hover > td,
.table-hover > tbody > tr:hover > .success,
.table-hover > tbody > tr.success:hover > th {
  background-color: #d0e9c6;
}

.table > thead > tr > td.info,
.table > thead > tr > th.info,
.table > thead > tr.info > td,
.table > thead > tr.info > th,
.table > tbody > tr > td.info,
.table > tbody > tr > th.info,
.table > tbody > tr.info > td,
.table > tbody > tr.info > th,
.table > tfoot > tr > td.info,
.table > tfoot > tr > th.info,
.table > tfoot > tr.info > td,
.table > tfoot > tr.info > th {
  background-color: #d9edf7;
}

.table-hover > tbody > tr > td.info:hover,
.table-hover > tbody > tr > th.info:hover,
.table-hover > tbody > tr.info:hover > td,
.table-hover > tbody > tr:hover > .info,
.table-hover > tbody > tr.info:hover > th {
  background-color: #c4e3f3;
}

.table > thead > tr > td.warning,
.table > thead > tr > th.warning,
.table > thead > tr.warning > td,
.table > thead > tr.warning > th,
.table > tbody > tr > td.warning,
.table > tbody > tr > th.warning,
.table > tbody > tr.warning > td,
.table > tbody > tr.warning > th,
.table > tfoot > tr > td.warning,
.table > tfoot > tr > th.warning,
.table > tfoot > tr.warning > td,
.table > tfoot > tr.warning > th {
  background-color: #fcf8e3;
}

.table-hover > tbody > tr > td.warning:hover,
.table-hover > tbody > tr > th.warning:hover,
.table-hover > tbody > tr.warning:hover > td,
.table-hover > tbody > tr:hover > .warning,
.table-hover > tbody > tr.warning:hover > th {
  background-color: #faf2cc;
}

.table > thead > tr > td.danger,
.table > thead > tr > th.danger,
.table > thead > tr.danger > td,
.table > thead > tr.danger > th,
.table > tbody > tr > td.danger,
.table > tbody > tr > th.danger,
.table > tbody > tr.danger > td,
.table > tbody > tr.danger > th,
.table > tfoot > tr > td.danger,
.table > tfoot > tr > th.danger,
.table > tfoot > tr.danger > td,
.table > tfoot > tr.danger > th {
  background-color: #ff4242;
}

.table-hover > tbody > tr > td.danger:hover,
.table-hover > tbody > tr > th.danger:hover,
.table-hover > tbody > tr.danger:hover > td,
.table-hover > tbody > tr:hover > .danger,
.table-hover > tbody > tr.danger:hover > th {
  background-color: #ff2929;
}

.table-responsive {
  overflow-x: auto;
  min-height: 0.01%;
}

@media screen and (max-width: 767px) {
  .table-responsive {
    width: 100%;
    margin-bottom: 16.5px;
    overflow-y: hidden;
    -ms-overflow-style: -ms-autohiding-scrollbar;
    border: 1px solid #dbdbdb;
  }
  .table-responsive > .table {
    margin-bottom: 0;
  }
  .table-responsive > .table > thead > tr > th,
  .table-responsive > .table > thead > tr > td,
  .table-responsive > .table > tbody > tr > th,
  .table-responsive > .table > tbody > tr > td,
  .table-responsive > .table > tfoot > tr > th,
  .table-responsive > .table > tfoot > tr > td {
    white-space: nowrap;
  }
  .table-responsive > .table-bordered {
    border: 0;
  }
  .table-responsive > .table-bordered > thead > tr > th:first-child,
  .table-responsive > .table-bordered > thead > tr > td:first-child,
  .table-responsive > .table-bordered > tbody > tr > th:first-child,
  .table-responsive > .table-bordered > tbody > tr > td:first-child,
  .table-responsive > .table-bordered > tfoot > tr > th:first-child,
  .table-responsive > .table-bordered > tfoot > tr > td:first-child {
    border-left: 0;
  }
  .table-responsive > .table-bordered > thead > tr > th:last-child,
  .table-responsive > .table-bordered > thead > tr > td:last-child,
  .table-responsive > .table-bordered > tbody > tr > th:last-child,
  .table-responsive > .table-bordered > tbody > tr > td:last-child,
  .table-responsive > .table-bordered > tfoot > tr > th:last-child,
  .table-responsive > .table-bordered > tfoot > tr > td:last-child {
    border-right: 0;
  }
  .table-responsive > .table-bordered > tbody > tr:last-child > th,
  .table-responsive > .table-bordered > tbody > tr:last-child > td,
  .table-responsive > .table-bordered > tfoot > tr:last-child > th,
  .table-responsive > .table-bordered > tfoot > tr:last-child > td {
    border-bottom: 0;
  }
}

.quote-variant-1 cite {
  font-size: 16px;
  font-weight: 700;
  color: #42a4ff;
}

.quote-variant-1 q {
  font-style: italic;
  color: #313132;
}

.quote-variant-1 .small {
  margin-top: 0;
  font-size: 14px;
  color: #b1b1b1;
}

.quote-variant-1 .small:before {
  display: none;
}

.quote-variant-1 .quote-image img {
  height: auto;
  width: auto;
}

.quote-variant-1 .quote-image, .quote-variant-1 .quote-image img {
  border-radius: 100px;
}

.quote-variant-1 .quote-body {
  position: relative;
  margin-top: 15px;
  padding: 10px 20px 0 0;
}

.quote-variant-1 .quote-body:before, .quote-variant-1 .quote-body:after {
  content: '';
  position: absolute;
}

.quote-variant-1 .quote-body:before {
  top: 0;
  left: 0;
  width: 90%;
  border-top: 1px solid #ebebeb;
}

.quote-variant-1 .quote-body:after {
  left: 17px;
  top: -5px;
  width: 10px;
  height: 10px;
  background: #fff;
  border-style: solid;
  border-color: #ebebeb;
  border-width: 1px 0 0 1px;
  -webkit-transform: rotate(45deg);
  -ms-transform: rotate(45deg);
  -o-transform: rotate(45deg);
  transform: rotate(45deg);
}

.quote-variant-2 {
  position: relative;
  padding-left: 40px;
  text-align: left;
}

.quote-variant-2 q {
  font-size: 16px;
  font-style: italic;
  font-weight: 600;
  line-height: 1.5;
}

.quote-variant-2 cite {
  color: #777;
}

.quote-variant-2:before {
  position: absolute;
  top: -6px;
  left: 0;
  content: '\f10d';
  font-family: "FontAwesome";
  color: #42a4ff;
  font-size: 24px;
}

.quote-variant-2 .quote-meta {
  margin-top: 10px;
}

@media (min-width: 768px) {
  .quote-variant-1 cite {
    font-size: 18px;
  }
  .quote-variant-1 .unit-body {
    margin-top: 2px;
  }
  .quote-variant-2 q {
    font-size: 18px;
  }
}

.page .progress-variant-1 {
  position: relative;
  padding-right: 60px;
}

.page .progress-variant-1 .progress {
  margin: 0;
  height: 10px;
  -webkit-box-shadow: none;
  box-shadow: none;
}

.page .progress-variant-1 .caption {
  position: absolute;
  top: 50%;
  -webkit-transform: translateY(-50%);
  transform: translateY(-50%);
  right: 5px;
  width: 60px;
  padding-left: 20px;
  font-size: 16px;
  font-weight: 700;
  color: #313132;
}

.page .progress-variant-1 .progress-bar {
  margin: 0;
  border-radius: 15px;
  background: #42a4ff;
  background: -moz-linear-gradient(left, #42a4ff 0%, #136cbf 100%);
  background: -webkit-linear-gradient(left, #42a4ff 0%, #136cbf 100%);
  background: linear-gradient(to right, #42a4ff 0%, #136cbf 100%);
  filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#42a4ff', endColorstr='#136cbf', GradientType=1);
  -webkit-box-shadow: none;
  box-shadow: none;
}

.page .progress-variant-1-contrast .caption {
  color: #fff;
}

.page * + .progress-variant-1 {
  margin-top: 6px;
}

@media (min-width: 768px) {
  .page .progress-variant-1 .caption {
    font-size: 18px;
  }
}

.post {
  background: #fff;
}

.post time {
  font-style: italic;
  color: #b1b1b1;
}

.post .post-meta {
  margin-top: 9px;
}

.post-variant-1 {
  border-radius: 5px;
  overflow: hidden;
  -webkit-box-shadow: 0px 2px 10px 0px rgba(49, 49, 50, 0.13);
  box-shadow: 0px 2px 10px 0px rgba(49, 49, 50, 0.13);
}

.post-variant-1 .post-text {
  margin-top: 17px;
  padding-right: 5px;
}

.post-variant-1 .post-body {
  padding: 25px 15px;
}

.post-variant-1 .post-footer {
  margin-top: 15px;
}

.post-variant-2 {
  padding-bottom: 30px;
  border-bottom: 1px solid #ebebeb;
}

.post-variant-2 .post-text {
  margin-top: 13px;
}

.post-variant-2 .post-body {
  margin-top: 20px;
  padding-right: 20px;
}

.post-variant-2 .post-footer {
  margin-top: 10px;
}

.post-variant-3 {
  padding-bottom: 30px;
  border-bottom: 1px solid #ebebeb;
}

.post-variant-3 .post-body {
  margin-top: 20px;
}

.post-variant-3 .post-text {
  margin-top: 20px;
}

.post-variant-3 .post-footer {
  margin-top: 20px;
}

.post-variant-3 .post-footer > * + * {
  margin-top: 22px;
}

.post-variant-3 + .post-variant-3 {
  margin-top: 60px;
}

.post-variant-4 .post-text {
  margin-top: 13px;
}

.post-variant-4 .post-body {
  margin-top: 20px;
  padding-right: 20px;
}

.post-variant-4 .post-footer {
  margin-top: 10px;
}

.blog-modern > li {
  position: relative;
  overflow: hidden;
}

.blog-modern > li + li {
  margin-top: 60px;
}

.blog-modern time {
  color: #313132;
}

.blog-modern .link {
  margin-top: 5px;
  font-size: 14px;
  font-weight: 700;
}

.blog-modern .post-wrap-header {
  position: relative;
  z-index: 1;
  text-align: center;
}

.blog-modern .post-wrap-header figure,
.blog-modern .post-wrap-header figure > img {
  border-radius: 100px;
}

.blog-modern .post-wrap-header figure > img {
  width: auto;
}

.blog-modern .post-wrap-header figure {
  position: relative;
  margin-top: 21px;
}

.blog-modern .post-wrap-header:after {
  content: '';
  position: absolute;
  left: 50%;
  height: 1000px;
  border-right: 1px solid #dbdbdb;
  margin-left: -1px;
  bottom: -15px;
  -webkit-transform: translateY(100%);
  transform: translateY(100%);
}

.blog-modern .post-wrap-body {
  position: relative;
  z-index: 2;
  margin-top: 45px;
}

.post-recent time {
  color: #b1b1b1;
}

.post-recent .post-meta {
  margin-top: 10px;
}

.post-single .post-meta {
  margin-top: 21px;
  font-style: italic;
  color: #b1b1b1;
}

.post-single .post-meta * {
  margin-right: .25em;
}

.post-single .post-body {
  margin-top: 33px;
}

.post-single .post-footer {
  margin-top: 30px;
}

.post-single .post-footer > * + * {
  margin-top: 15px;
}

.post-single .post-image {
  margin-top: 28px;
}

.post-single .post-text {
  margin-top: 30px;
}

.post-info figure, .post-info figure > img {
  border-radius: 300px;
}

.post-info img {
  width: auto;
}

.post-info p + p {
  margin-top: 19px;
}

.post-mod-1 {
  padding-bottom: 0;
  border-bottom: 0;
}

@media (min-width: 768px) {
  .post-variant-1 .post-body {
    padding: 24px 30px 21px;
  }
  .post-variant-1 .post-footer {
    margin-top: 20px;
  }
  .post-variant-3 .post-footer {
    display: -ms-flexbox;
    display: -webkit-flex;
    display: flex;
    -webkit-flex-direction: row;
    -ms-flex-direction: row;
    flex-direction: row;
    -webkit-align-items: center;
    -ms-flex-align: center;
    align-items: center;
    -webkit-justify-content: space-between;
    -ms-flex-pack: justify;
    justify-content: space-between;
  }
  .post-variant-3 .post-footer > * + * {
    margin-top: 0;
    margin-left: 25px;
  }
  .blog-modern .post-wrap-header {
    -webkit-flex-basis: 170px;
    -ms-flex-preferred-size: 170px;
    flex-basis: 170px;
    max-width: 170px;
    -ms-flex-negative: 0;
    -webkit-flex-shrink: 0;
    flex-shrink: 0;
  }
  .blog-modern .post-wrap-header:before {
    content: '';
    position: absolute;
    left: 50%;
    height: 1000px;
    border-right: 1px solid #dbdbdb;
    margin-left: -1px;
    bottom: -10px;
    -webkit-transform: translateY(100%);
    transform: translateY(100%);
  }
  .blog-modern .post-wrap-header:after {
    top: 54%;
    left: auto;
    margin: 0;
    right: -30px;
    bottom: auto;
    height: 0;
    width: 65px;
    border-right: 0;
    border-bottom: 1px solid #dbdbdb;
    -webkit-transform: none;
    transform: none;
  }
  .blog-modern .post-wrap-header figure {
    position: relative;
    z-index: 1;
  }
  .blog-modern .post-wrap-header figure img {
    position: relative;
    z-index: 2;
  }
  .blog-modern .post-wrap-body {
    -webkit-flex-grow: 1;
    -ms-flex-positive: 1;
    flex-grow: 1;
    width: auto;
    margin-top: 0;
    margin-left: 30px;
  }
  .blog-modern > li {
    display: -ms-flexbox;
    display: -webkit-flex;
    display: flex;
    -webkit-flex-direction: row;
    -ms-flex-direction: row;
    flex-direction: row;
    -webkit-flex-wrap: nowrap;
    -ms-flex-wrap: nowrap;
    flex-wrap: nowrap;
    -webkit-align-items: flex-start;
    -ms-flex-align: start;
    align-items: flex-start;
    padding-bottom: 60px;
  }
  .blog-modern > li:last-child {
    padding-bottom: 0;
  }
  .blog-modern > li:last-child .post-wrap-header:before {
    display: none;
  }
  .blog-modern > li + li {
    margin-top: 0;
  }
  .post-single .post-footer {
    display: -ms-flexbox;
    display: -webkit-flex;
    display: flex;
    -webkit-flex-direction: row;
    -ms-flex-direction: row;
    flex-direction: row;
    -webkit-flex-wrap: nowrap;
    -ms-flex-wrap: nowrap;
    flex-wrap: nowrap;
    -webkit-align-items: center;
    -ms-flex-align: center;
    align-items: center;
    -webkit-justify-content: space-between;
    -ms-flex-pack: justify;
    justify-content: space-between;
  }
  .post-single .post-footer > * + * {
    margin-top: 0;
    margin-left: 25px;
  }
}

@media (min-width: 992px) {
  .post-variant-2 .post-body {
    padding-right: 14px;
  }
}

@media (min-width: 1200px) {
  .post-variant-2 .post-body {
    padding-right: 20px;
  }
}

.post-preview h6, .post-preview .h6 {
  margin-top: 15px;
  line-height: 1.45;
  letter-spacing: -.01em;
}

.post-preview p {
  font-size: 16px;
  line-height: 1.65;
}

@media (min-width: 768px) {
  .post-preview h6, .post-preview .h6 {
    margin-top: 30px;
  }
  .post-preview p {
    margin-top: 10px;
  }
}

@media (min-width: 1200px) {
  .post-preview h6, .post-preview .h6 {
    line-height: 1.8;
  }
}

.comment figure, .comment figure > img {
  border-radius: 100px;
}

.comment img {
  width: auto;
}

.comment time {
  margin-top: 5px;
  color: #b1b1b1;
  font-style: italic;
}

.comment .comment-text {
  margin-top: 17px;
}

.comment + .comment {
  margin-top: 30px;
}

.comment-reply {
  padding-left: 11.6%;
}

.comment-footer {
  margin-top: 17px;
}

.inset-left-0 {
  padding-left: 0;
}

.inset-left-9 {
  padding-left: 9px;
}

.inset-left-18 {
  padding-left: 18px;
}

.inset-left-24 {
  padding-left: 24px;
}

.inset-left-30 {
  padding-left: 30px;
}

.inset-left-70 {
  padding-left: 70px;
}

@media (min-width: 480px) {
  .inset-xs-left-0 {
    padding-left: 0;
  }
  .inset-xs-left-9 {
    padding-left: 9px;
  }
  .inset-xs-left-18 {
    padding-left: 18px;
  }
  .inset-xs-left-24 {
    padding-left: 24px;
  }
  .inset-xs-left-30 {
    padding-left: 30px;
  }
  .inset-xs-left-70 {
    padding-left: 70px;
  }
}

@media (min-width: 768px) {
  .inset-sm-left-0 {
    padding-left: 0;
  }
  .inset-sm-left-9 {
    padding-left: 9px;
  }
  .inset-sm-left-18 {
    padding-left: 18px;
  }
  .inset-sm-left-24 {
    padding-left: 24px;
  }
  .inset-sm-left-30 {
    padding-left: 30px;
  }
  .inset-sm-left-70 {
    padding-left: 70px;
  }
}

@media (min-width: 992px) {
  .inset-md-left-0 {
    padding-left: 0;
  }
  .inset-md-left-9 {
    padding-left: 9px;
  }
  .inset-md-left-18 {
    padding-left: 18px;
  }
  .inset-md-left-24 {
    padding-left: 24px;
  }
  .inset-md-left-30 {
    padding-left: 30px;
  }
  .inset-md-left-70 {
    padding-left: 70px;
  }
}

@media (min-width: 1200px) {
  .inset-lg-left-0 {
    padding-left: 0;
  }
  .inset-lg-left-9 {
    padding-left: 9px;
  }
  .inset-lg-left-18 {
    padding-left: 18px;
  }
  .inset-lg-left-24 {
    padding-left: 24px;
  }
  .inset-lg-left-30 {
    padding-left: 30px;
  }
  .inset-lg-left-70 {
    padding-left: 70px;
  }
}

@media (min-width: 1800px) {
  .inset-xl-left-0 {
    padding-left: 0;
  }
  .inset-xl-left-9 {
    padding-left: 9px;
  }
  .inset-xl-left-18 {
    padding-left: 18px;
  }
  .inset-xl-left-24 {
    padding-left: 24px;
  }
  .inset-xl-left-30 {
    padding-left: 30px;
  }
  .inset-xl-left-70 {
    padding-left: 70px;
  }
}

.inset-right-0 {
  padding-right: 0;
}

.inset-right-9 {
  padding-right: 9px;
}

.inset-right-18 {
  padding-right: 18px;
}

.inset-right-24 {
  padding-right: 24px;
}

.inset-right-30 {
  padding-right: 30px;
}

.inset-right-70 {
  padding-right: 70px;
}

@media (min-width: 480px) {
  .inset-xs-right-0 {
    padding-right: 0;
  }
  .inset-xs-right-9 {
    padding-right: 9px;
  }
  .inset-xs-right-18 {
    padding-right: 18px;
  }
  .inset-xs-right-24 {
    padding-right: 24px;
  }
  .inset-xs-right-30 {
    padding-right: 30px;
  }
  .inset-xs-right-70 {
    padding-right: 70px;
  }
}

@media (min-width: 768px) {
  .inset-sm-right-0 {
    padding-right: 0;
  }
  .inset-sm-right-9 {
    padding-right: 9px;
  }
  .inset-sm-right-18 {
    padding-right: 18px;
  }
  .inset-sm-right-24 {
    padding-right: 24px;
  }
  .inset-sm-right-30 {
    padding-right: 30px;
  }
  .inset-sm-right-70 {
    padding-right: 70px;
  }
}

@media (min-width: 992px) {
  .inset-md-right-0 {
    padding-right: 0;
  }
  .inset-md-right-9 {
    padding-right: 9px;
  }
  .inset-md-right-18 {
    padding-right: 18px;
  }
  .inset-md-right-24 {
    padding-right: 24px;
  }
  .inset-md-right-30 {
    padding-right: 30px;
  }
  .inset-md-right-70 {
    padding-right: 70px;
  }
}

@media (min-width: 1200px) {
  .inset-lg-right-0 {
    padding-right: 0;
  }
  .inset-lg-right-9 {
    padding-right: 9px;
  }
  .inset-lg-right-18 {
    padding-right: 18px;
  }
  .inset-lg-right-24 {
    padding-right: 24px;
  }
  .inset-lg-right-30 {
    padding-right: 30px;
  }
  .inset-lg-right-70 {
    padding-right: 70px;
  }
}

@media (min-width: 1800px) {
  .inset-xl-right-0 {
    padding-right: 0;
  }
  .inset-xl-right-9 {
    padding-right: 9px;
  }
  .inset-xl-right-18 {
    padding-right: 18px;
  }
  .inset-xl-right-24 {
    padding-right: 24px;
  }
  .inset-xl-right-30 {
    padding-right: 30px;
  }
  .inset-xl-right-70 {
    padding-right: 70px;
  }
}

html .page .offset-top-0 {
  margin-top: 0;
}

html .page .offset-top-7 {
  margin-top: 7px;
}

html .page .offset-top-10 {
  margin-top: 10px;
}

html .page .offset-top-15 {
  margin-top: 15px;
}

html .page .offset-top-18 {
  margin-top: 18px;
}

html .page .offset-top-22 {
  margin-top: 22px;
}

html .page .offset-top-25 {
  margin-top: 25px;
}

html .page .offset-top-30 {
  margin-top: 30px;
}

html .page .offset-top-32 {
  margin-top: 32px;
}

html .page .offset-top-35 {
  margin-top: 35px;
}

html .page .offset-top-40 {
  margin-top: 40px;
}

html .page .offset-top-45 {
  margin-top: 45px;
}

html .page .offset-top-50 {
  margin-top: 50px;
}

html .page .offset-top-55 {
  margin-top: 55px;
}

html .page .offset-top-60 {
  margin-top: 60px;
}

html .page .offset-top-65 {
  margin-top: 65px;
}

html .page .offset-top-70 {
  margin-top: 70px;
}

html .page .offset-top-75 {
  margin-top: 75px;
}

html .page .offset-top-80 {
  margin-top: 80px;
}

html .page .offset-top-88 {
  margin-top: 88px;
}

@media (min-width: 480px) {
  html .page .offset-xs-top-0 {
    margin-top: 0;
  }
  html .page .offset-xs-top-7 {
    margin-top: 7px;
  }
  html .page .offset-xs-top-10 {
    margin-top: 10px;
  }
  html .page .offset-xs-top-15 {
    margin-top: 15px;
  }
  html .page .offset-xs-top-18 {
    margin-top: 18px;
  }
  html .page .offset-xs-top-22 {
    margin-top: 22px;
  }
  html .page .offset-xs-top-25 {
    margin-top: 25px;
  }
  html .page .offset-xs-top-30 {
    margin-top: 30px;
  }
  html .page .offset-xs-top-32 {
    margin-top: 32px;
  }
  html .page .offset-xs-top-35 {
    margin-top: 35px;
  }
  html .page .offset-xs-top-40 {
    margin-top: 40px;
  }
  html .page .offset-xs-top-45 {
    margin-top: 45px;
  }
  html .page .offset-xs-top-50 {
    margin-top: 50px;
  }
  html .page .offset-xs-top-55 {
    margin-top: 55px;
  }
  html .page .offset-xs-top-60 {
    margin-top: 60px;
  }
  html .page .offset-xs-top-65 {
    margin-top: 65px;
  }
  html .page .offset-xs-top-70 {
    margin-top: 70px;
  }
  html .page .offset-xs-top-75 {
    margin-top: 75px;
  }
  html .page .offset-xs-top-80 {
    margin-top: 80px;
  }
  html .page .offset-xs-top-88 {
    margin-top: 88px;
  }
}

@media (min-width: 768px) {
  html .page .offset-sm-top-0 {
    margin-top: 0;
  }
  html .page .offset-sm-top-7 {
    margin-top: 7px;
  }
  html .page .offset-sm-top-10 {
    margin-top: 10px;
  }
  html .page .offset-sm-top-15 {
    margin-top: 15px;
  }
  html .page .offset-sm-top-18 {
    margin-top: 18px;
  }
  html .page .offset-sm-top-22 {
    margin-top: 22px;
  }
  html .page .offset-sm-top-25 {
    margin-top: 25px;
  }
  html .page .offset-sm-top-30 {
    margin-top: 30px;
  }
  html .page .offset-sm-top-32 {
    margin-top: 32px;
  }
  html .page .offset-sm-top-35 {
    margin-top: 35px;
  }
  html .page .offset-sm-top-40 {
    margin-top: 40px;
  }
  html .page .offset-sm-top-45 {
    margin-top: 45px;
  }
  html .page .offset-sm-top-50 {
    margin-top: 50px;
  }
  html .page .offset-sm-top-55 {
    margin-top: 55px;
  }
  html .page .offset-sm-top-60 {
    margin-top: 60px;
  }
  html .page .offset-sm-top-65 {
    margin-top: 65px;
  }
  html .page .offset-sm-top-70 {
    margin-top: 70px;
  }
  html .page .offset-sm-top-75 {
    margin-top: 75px;
  }
  html .page .offset-sm-top-80 {
    margin-top: 80px;
  }
  html .page .offset-sm-top-88 {
    margin-top: 88px;
  }
}

@media (min-width: 992px) {
  html .page .offset-md-top-0 {
    margin-top: 0;
  }
  html .page .offset-md-top-7 {
    margin-top: 7px;
  }
  html .page .offset-md-top-10 {
    margin-top: 10px;
  }
  html .page .offset-md-top-15 {
    margin-top: 15px;
  }
  html .page .offset-md-top-18 {
    margin-top: 18px;
  }
  html .page .offset-md-top-22 {
    margin-top: 22px;
  }
  html .page .offset-md-top-25 {
    margin-top: 25px;
  }
  html .page .offset-md-top-30 {
    margin-top: 30px;
  }
  html .page .offset-md-top-32 {
    margin-top: 32px;
  }
  html .page .offset-md-top-35 {
    margin-top: 35px;
  }
  html .page .offset-md-top-40 {
    margin-top: 40px;
  }
  html .page .offset-md-top-45 {
    margin-top: 45px;
  }
  html .page .offset-md-top-50 {
    margin-top: 50px;
  }
  html .page .offset-md-top-55 {
    margin-top: 55px;
  }
  html .page .offset-md-top-60 {
    margin-top: 60px;
  }
  html .page .offset-md-top-65 {
    margin-top: 65px;
  }
  html .page .offset-md-top-70 {
    margin-top: 70px;
  }
  html .page .offset-md-top-75 {
    margin-top: 75px;
  }
  html .page .offset-md-top-80 {
    margin-top: 80px;
  }
  html .page .offset-md-top-88 {
    margin-top: 88px;
  }
}

@media (min-width: 1200px) {
  html .page .offset-lg-top-0 {
    margin-top: 0;
  }
  html .page .offset-lg-top-7 {
    margin-top: 7px;
  }
  html .page .offset-lg-top-10 {
    margin-top: 10px;
  }
  html .page .offset-lg-top-15 {
    margin-top: 15px;
  }
  html .page .offset-lg-top-18 {
    margin-top: 18px;
  }
  html .page .offset-lg-top-22 {
    margin-top: 22px;
  }
  html .page .offset-lg-top-25 {
    margin-top: 25px;
  }
  html .page .offset-lg-top-30 {
    margin-top: 30px;
  }
  html .page .offset-lg-top-32 {
    margin-top: 32px;
  }
  html .page .offset-lg-top-35 {
    margin-top: 35px;
  }
  html .page .offset-lg-top-40 {
    margin-top: 40px;
  }
  html .page .offset-lg-top-45 {
    margin-top: 45px;
  }
  html .page .offset-lg-top-50 {
    margin-top: 50px;
  }
  html .page .offset-lg-top-55 {
    margin-top: 55px;
  }
  html .page .offset-lg-top-60 {
    margin-top: 60px;
  }
  html .page .offset-lg-top-65 {
    margin-top: 65px;
  }
  html .page .offset-lg-top-70 {
    margin-top: 70px;
  }
  html .page .offset-lg-top-75 {
    margin-top: 75px;
  }
  html .page .offset-lg-top-80 {
    margin-top: 80px;
  }
  html .page .offset-lg-top-88 {
    margin-top: 88px;
  }
}

@media (min-width: 1800px) {
  html .page .offset-xl-top-0 {
    margin-top: 0;
  }
  html .page .offset-xl-top-7 {
    margin-top: 7px;
  }
  html .page .offset-xl-top-10 {
    margin-top: 10px;
  }
  html .page .offset-xl-top-15 {
    margin-top: 15px;
  }
  html .page .offset-xl-top-18 {
    margin-top: 18px;
  }
  html .page .offset-xl-top-22 {
    margin-top: 22px;
  }
  html .page .offset-xl-top-25 {
    margin-top: 25px;
  }
  html .page .offset-xl-top-30 {
    margin-top: 30px;
  }
  html .page .offset-xl-top-32 {
    margin-top: 32px;
  }
  html .page .offset-xl-top-35 {
    margin-top: 35px;
  }
  html .page .offset-xl-top-40 {
    margin-top: 40px;
  }
  html .page .offset-xl-top-45 {
    margin-top: 45px;
  }
  html .page .offset-xl-top-50 {
    margin-top: 50px;
  }
  html .page .offset-xl-top-55 {
    margin-top: 55px;
  }
  html .page .offset-xl-top-60 {
    margin-top: 60px;
  }
  html .page .offset-xl-top-65 {
    margin-top: 65px;
  }
  html .page .offset-xl-top-70 {
    margin-top: 70px;
  }
  html .page .offset-xl-top-75 {
    margin-top: 75px;
  }
  html .page .offset-xl-top-80 {
    margin-top: 80px;
  }
  html .page .offset-xl-top-88 {
    margin-top: 88px;
  }
}

.link {
  display: inline-block;
}

.link-inline {
  font: inherit;
  line-height: inherit;
}

.link-inline, .link-inline:focus {
  color: #42a4ff;
}

.link-inline:hover, .link-inline.hover {
  color: #084884;
}

.link-inline:active, .link-inline.active {
  color: #b1b1b1;
}

.link-md {
  font-size: 16px;
  font-weight: 700;
}

@media (min-width: 992px) {
  .link-md {
    font-size: 18px;
  }
}

.page .link-primary, .page .link-primary:active, .page .link-primary:focus {
  color: #42a4ff;
}

.page .link-primary:hover {
  color: #084884;
}

.page .link-primary-contrast, .page .link-primary-contrast:active, .page .link-primary-contrast:focus {
  color: #42a4ff;
}

.page .link-primary-contrast:hover {
  color: #a5d4ff;
}

.page .link-gray, .page .link-gray:active, .page .link-gray:focus {
  color: #777;
}

.page .link-gray:hover {
  color: #42a4ff;
}

.page .link-dark, .page .link-dark:active, .page .link-dark:focus {
  color: #313132;
}

.page .link-dark:hover {
  color: #42a4ff;
}

.page .link-anakiva, .page .link-anakiva:active, .page .link-anakiva:focus {
  color: #a5d4ff;
}

.page .link-anakiva:hover {
  color: #fff;
}

.link-image {
  display: inline-block;
  cursor: pointer;
  text-align: center;
  max-width: 190px;
}

.link-image img {
  position: relative;
  z-index: 1;
  width: 100%;
  transition: .33s all ease;
  -webkit-transform: translate3d(0, 0, 0);
  transform: translate3d(0, 0, 0);
  will-change: transform;
}

.link-image-variant-1, .link-image-variant-2 {
  display: inline-block;
  cursor: pointer;
  text-align: center;
}

.link-image-variant-1 img, .link-image-variant-2 img {
  position: relative;
  z-index: 1;
  width: 100%;
  transition: .33s all ease;
  -webkit-transform: translate3d(0, 0, 0);
  transform: translate3d(0, 0, 0);
  will-change: transform;
}

.link-image-variant-1 {
  max-width: 190px;
}

.link-image-variant-1 img {
  opacity: .4;
}

.link-image-variant-1:hover img {
  opacity: .8;
}

.link-image-variant-2 {
  max-width: 190px;
}

.link-image-variant-2 img {
  opacity: 1;
}

.link-image-variant-2:hover img {
  opacity: .6;
}

.link-image-contrast img {
  opacity: .75;
}

.link-image-contrast:hover img {
  opacity: 1;
}

.link-icon {
  vertical-align: middle;
}

.link-icon > * {
  display: inline-block;
}

.link-icon > * + * {
  margin-left: .5em;
}

.object-wrap {
  position: relative;
  overflow: hidden;
}

.object-wrap-right > .object-wrap-body {
  right: 0;
}

.object-wrap-left > .object-wrap-body {
  left: 0;
}

@media (min-width: 768px) {
  .object-wrap-sm-right > .object-wrap-body {
    right: 0;
  }
  .object-wrap-sm-left > .object-wrap-body {
    left: 0;
  }
}

@media (max-width: 767px) {
  .object-wrap-body {
    position: relative;
    overflow: hidden;
    min-height: 300px;
    width: 100%;
  }
  .object-wrap-body > img {
    position: absolute;
    min-width: 100%;
    max-width: none;
    height: auto;
    max-height: none;
    top: 20%;
    left: 50%;
    -webkit-transform: translate(-50%, -20%);
    transform: translate(-50%, -20%);
  }
}

@media (min-width: 768px) {
  .object-wrap-body {
    overflow: hidden;
    position: absolute;
    top: 0;
    bottom: 0;
    width: 100vw;
    min-width: 1px;
    max-width: none;
    height: 100%;
    min-height: 100%;
    max-height: none;
    margin: 0;
    background: inherit;
    z-index: 0;
  }
  .object-wrap-body > img {
    position: relative;
    height: auto;
    min-height: 100.5%;
    width: auto;
    min-width: 102%;
    max-width: none;
    left: 50%;
    -webkit-transform: translateX(-50%);
    transform: translateX(-50%);
  }
  .object-wrap-body + * {
    margin-top: 0;
  }
}

@media (min-width: 768px) {
  .sm-width-c6 {
    width: calc(50vw - 750px / 2 + (750px / 12) * 6);
  }
}

@media (min-width: 992px) {
  .md-width-c7d20 {
    width: calc(50vw - 970px / 2 + 20px + (970px / 12) * 7);
  }
}

@media (min-width: 1200px) {
  .md-width-c7d20 {
    width: calc(50vw - 1200px / 2 + 20px + (1200px / 12) * 7);
  }
}

@media (min-width: 992px) {
  .md-width-c5dm20 {
    width: calc(50vw - 970px / 2 - 20px + (970px / 12) * 5);
  }
}

@media (min-width: 1200px) {
  .md-width-c5dm20 {
    width: calc(50vw - 1200px / 2 - 20px + (1200px / 12) * 5);
  }
}

.bg-wrap {
  position: relative;
}

.bg-wrap:before {
  content: '';
  position: absolute;
  top: 0;
  bottom: 0;
  width: 120vw;
  left: 50%;
  -webkit-transform: translateX(-50%);
  transform: translateX(-50%);
  background: inherit;
  z-index: -1;
}

.bg-wrap-sm-left {
  z-index: 1;
}

@media (min-width: 992px) {
  .bg-wrap-sm-left:before {
    width: 100vw;
    right: 0;
    -webkit-transform: none;
    transform: none;
  }
}

.bg-wrap-sm-right {
  z-index: 1;
}

@media (min-width: 992px) {
  .bg-wrap-sm-right:before {
    width: 100vw;
    left: 0;
    -webkit-transform: none;
    transform: none;
  }
}

.block-wrap span {
  display: block;
}

.block-wrap a {
  display: inline;
}

.block-wrap a span {
  display: inline;
}

@media (min-width: 1200px) {
  .wrap-lg-justify-vertical {
    display: -ms-flexbox;
    display: -webkit-flex;
    display: flex;
    -webkit-flex-direction: column;
    -ms-flex-direction: column;
    flex-direction: column;
    -webkit-justify-content: space-between;
    -ms-flex-pack: justify;
    justify-content: space-between;
  }
}

@media (min-width: 768px) {
  .wrap-sm-justify-horizontal {
    display: -ms-flexbox;
    display: -webkit-flex;
    display: flex;
    -webkit-flex-direction: row;
    -ms-flex-direction: row;
    flex-direction: row;
    -webkit-flex-wrap: nowrap;
    -ms-flex-wrap: nowrap;
    flex-wrap: nowrap;
    -webkit-align-items: center;
    -ms-flex-align: center;
    align-items: center;
    -webkit-justify-content: space-between;
    -ms-flex-pack: justify;
    justify-content: space-between;
  }
  .wrap-sm-justify-horizontal > * {
    -webkit-flex-grow: 1;
    -ms-flex-positive: 1;
    flex-grow: 1;
  }
  .wrap-sm-justify-horizontal > *:first-child {
    -ms-flex-negative: 1;
    -webkit-flex-shrink: 1;
    flex-shrink: 1;
  }
  .wrap-sm-justify-horizontal > *:last-child {
    -ms-flex-negative: 0;
    -webkit-flex-shrink: 0;
    flex-shrink: 0;
  }
  .wrap-sm-justify-horizontal > * + * {
    margin-left: 40px;
  }
}

@media (min-width: 768px) {
  .breadcrumbs-wrap h1, .breadcrumbs-wrap h2, .breadcrumbs-wrap h3, .breadcrumbs-wrap h4, .breadcrumbs-wrap h5, .breadcrumbs-wrap h6, .breadcrumbs-wrap .h1, .breadcrumbs-wrap .h2, .breadcrumbs-wrap .h3, .breadcrumbs-wrap .h4, .breadcrumbs-wrap .h5, .breadcrumbs-wrap .h6 {
    position: relative;
    top: -4px;
  }
}

.gallery-wrap {
  position: relative;
  -webkit-transform: translateY(-10px);
  transform: translateY(-10px);
  margin: 0 -5px -10px -5px;
}

.gallery-wrap:before, .gallery-wrap:after {
  content: " ";
  display: table;
}

.gallery-wrap:after {
  clear: both;
}

.gallery-wrap > * {
  float: left;
  margin-top: 10px;
  max-width: 50%;
  width: 50%;
  padding: 0 5px;
}

.gallery-wrap > *:nth-child(2n + 1) {
  clear: left;
}

.flickr-item .thumbnail {
  position: relative;
  padding-bottom: 100%;
  width: 100%;
}

.flickr-item .thumbnail > * {
  position: absolute;
  top: 0;
  right: 0;
  bottom: 0;
  left: 0;
}

.counter-wrap {
  text-align: center;
}

.counter-wrap span {
  display: inline;
}

.counter-wrap .counter-value > *:before {
  content: '';
  height: 100%;
  display: inline-block;
  vertical-align: middle;
  font: inherit;
}

.counter-wrap .symbol {
  visibility: hidden;
}

.counter-wrap .animated + .symbol {
  visibility: visible;
}

.counter-wrap span + span {
  margin-left: .05em;
}

.counter-wrap .counter-value {
  margin-top: 15px;
}

.counter-wrap .counter-text {
  margin-top: 10px;
}

@media (min-width: 992px) {
  .counter-wrap * + .counter-value {
    margin-top: 28px;
  }
}

.product {
  position: relative;
  padding: 20px 5px 10px;
  text-align: center;
  border: 1px solid #ebebeb;
  background: #fff;
  transition: .2s;
}

.product .product-image {
  padding: 10px;
}

.product .product-caption {
  padding: 15px 10px;
}

.product .product-title {
  margin-top: 8px;
}

.product .product-title a, .product .product-title a:active, .product .product-title a:focus {
  color: #42a4ff;
}

.product .product-title a:hover {
  color: #084884;
}

.product:before {
  content: '';
  position: absolute;
  top: 0;
  right: 0;
  bottom: 0;
  left: 0;
  z-index: -1;
  -webkit-box-shadow: 0px 2px 10px 0px rgba(19, 108, 191, 0.2);
  box-shadow: 0px 2px 10px 0px rgba(19, 108, 191, 0.2);
  transition: .33s all ease;
  opacity: 0;
  visibility: hidden;
}

.product:hover {
  border-color: transparent;
}

.product:hover:before {
  opacity: 1;
  visibility: visible;
}

@media (min-width: 480px) {
  .product {
    padding: 20px 11px 10px;
  }
  .product .product-caption {
    padding: 15px 26px;
  }
}

.divider {
  display: inline-block;
}

.divider-sm {
  height: 2px;
  width: 30px;
}

.divider-md {
  height: 2px;
  width: 40px;
}

.divider-center {
  margin-left: auto;
  margin-right: auto;
}

.divider-denim {
  background: #136cbf;
}

.divider-primary {
  background: #42a4ff;
}

.box-custom {
  padding: 22px 28px 15px;
  -webkit-box-shadow: 0px 2px 10px 0px rgba(49, 49, 50, 0.13);
  box-shadow: 0px 2px 10px 0px rgba(49, 49, 50, 0.13);
  background: #fff;
}

.box-custom-header {
  font-weight: 400;
}

.box-custom.hot .box-custom-header:before {
  position: relative;
  left: -6px;
  content: '\f32d';
  font-family: "Material Design Icons";
  display: inline-block;
  margin-right: .5em;
  line-height: inherit;
  font-size: .83333em;
  color: #d60909;
  pointer-events: none;
  vertical-align: bottom;
}

.box-custom-variant-1 {
  text-align: center;
}

.box-custom-variant-1 .box-header:before, .box-custom-variant-1 .box-header:after,
.box-custom-variant-1 .box-image:before,
.box-custom-variant-1 .box-image:after {
  content: '';
  position: absolute;
  top: -1px;
  left: 50%;
  z-index: -1;
  width: 120vw;
  -webkit-transform: translateX(-50%);
  transform: translateX(-50%);
  background: #084884;
}

.box-custom-variant-1 .box-header:after,
.box-custom-variant-1 .box-image:after {
  content: '';
  opacity: .4;
  background: -moz-linear-gradient(left, #136cbf 0%, #42a4ff 100%);
  background: -webkit-linear-gradient(left, #136cbf 0%, #42a4ff 100%);
  background: linear-gradient(to right, #136cbf 0%, #42a4ff 100%);
  filter: progid:DXImageTransform.Microsoft.gradient( startColorstr='#1e5799', endColorstr='#42a4ff',GradientType=1 );
}

.box-custom-variant-1 .box-header {
  position: relative;
  z-index: 1;
  padding: 30px 0;
}

.box-custom-variant-1 .box-header, .box-custom-variant-1 .box-header * {
  color: #fff;
}

.box-custom-variant-1 .box-header:before, .box-custom-variant-1 .box-header:after {
  bottom: 0;
}

.box-custom-variant-1 .box-body {
  position: relative;
  display: -ms-flexbox;
  display: -webkit-flex;
  display: flex;
  -webkit-flex-direction: column;
  -ms-flex-direction: column;
  flex-direction: column;
  -webkit-align-items: flex-start;
  -ms-flex-align: start;
  align-items: flex-start;
  -webkit-flex-wrap: nowrap;
  -ms-flex-wrap: nowrap;
  flex-wrap: nowrap;
  -webkit-flex-grow: 1;
  -ms-flex-positive: 1;
  flex-grow: 1;
}

.box-custom-variant-1 .box-image {
  position: relative;
  z-index: 2;
}

.box-custom-variant-1 .box-image:before, .box-custom-variant-1 .box-image:after {
  height: 50%;
}

.box-custom-variant-1 .box-image img {
  -ms-flex-negative: 0;
  -webkit-flex-shrink: 0;
  flex-shrink: 0;
  height: auto;
}

.box-custom-variant-1 .box-content {
  padding: 20px 0;
}

.box-custom-variant-1 .box-content > * + * {
  margin-top: 30px;
}

.page .box-custom-variant-1 + * {
  margin-top: 21px;
}

@media (min-width: 768px) {
  .box-custom-variant-1 {
    position: relative;
    text-align: left;
  }
  .box-custom-variant-1 .box-header {
    padding: 23px 10px 32px 26.1%;
  }
  .box-custom-variant-1 .box-header:before, .box-custom-variant-1 .box-header:after {
    width: auto;
    left: 0;
    right: -10px;
    -webkit-transform: none;
    transform: none;
  }
  .box-custom-variant-1 .box-image {
    position: absolute;
    left: 0;
    top: 7%;
    padding-left: 17px;
    width: 23.1%;
  }
  .box-custom-variant-1 .box-image:before, .box-custom-variant-1 .box-image:after {
    display: none;
  }
  .box-custom-variant-1 .box-image img {
    max-width: 100%;
  }
  .box-custom-variant-1 .box-content {
    display: -ms-flexbox;
    display: -webkit-flex;
    display: flex;
    -webkit-flex-direction: row;
    -ms-flex-direction: row;
    flex-direction: row;
    -webkit-align-items: center;
    -ms-flex-align: center;
    align-items: center;
    -webkit-justify-content: flex-start;
    -ms-flex-pack: start;
    justify-content: flex-start;
    margin-top: 8px;
  }
  .box-custom-variant-1 .box-content > * + * {
    margin-top: 0;
    margin-left: 30px;
  }
}

@media (min-width: 992px) {
  .box-custom-variant-1 .box-header,
  .box-custom-variant-1 .box-content {
    padding-left: 25.1%;
  }
  .box-custom-variant-1 .box-image {
    top: 50%;
    -webkit-transform: translateY(-50%);
    transform: translateY(-50%);
  }
  .box-custom-variant-1 .box-content {
    margin-top: 0;
  }
}

@media (min-width: 1200px) {
  .box-custom-variant-1 .box-header,
  .box-custom-variant-1 .box-content {
    padding-left: 23.1%;
  }
}

.page .box-custom-variant-1.box-custom-no-image {
  padding-left: 17px;
}

.page .box-custom-variant-1.box-custom-no-image .box-header,
.page .box-custom-variant-1.box-custom-no-image .box-content {
  padding-left: 17px;
}

.page .box-custom-variant-1.box-custom-no-image .box-header:before, .page .box-custom-variant-1.box-custom-no-image .box-header:after {
  left: -17px;
}

@media (min-width: 992px) {
  .profile .profile-header {
    padding-right: 18px;
  }
}

.profile .list {
  margin-top: 30px;
}

.profile * + hr {
  margin-top: 20px;
}

.profile .list-inline {
  margin-top: 26px;
}

.profile-preview h6 + p,
.profile-preview .h6 + p {
  margin-top: 2px;
}

.profile-preview figure img {
  width: auto;
}

.profile-preview .list > li {
  text-align: left;
}

.profile-preview-body {
  margin-top: 21px;
}

.pricing-table {
  border-radius: 10px;
  overflow: hidden;
  border: 1px solid #dbdbdb;
  text-align: center;
  background: #fff;
}

.pricing-table .price {
  margin-top: 10px;
  font-size: 22px;
  font-weight: 700;
  color: #136cbf;
}

.pricing-table .icon {
  width: auto;
}

.pricing-table-header {
  padding: 20px 20px 23px;
}

.pricing-table-body {
  padding: 19px 20px;
}

.pricing-table-footer {
  padding-bottom: 27px;
}

.pricing-table * + .pricing-table-heading {
  margin-top: 14px;
}

.pricing-table * + .btn {
  margin-top: 10px;
}

.pricing-table-style-lighter .pricing-table-header {
  background: #f9f9f9;
}

.pricing-table-style-transparent .pricing-table-header {
  background: transparent;
  padding-bottom: 0;
}

.pricing-table-style-transparent .pricing-table-body {
  padding: 8px 20px 5px;
}

.pricing-table-style-primary .pricing-table-header {
  background: #42a4ff;
}

.pricing-table-style-primary .pricing-table-header > * {
  color: #fff;
}

.pricing-table-style-primary .price {
  color: #084884;
}

.pricing-table-group {
  margin-left: 0;
  margin-right: 0;
  border: 1px solid #dbdbdb;
  border-radius: 10px;
}

.pricing-table-group .pricing-table {
  border: 0;
}

.pricing-table-group [class*='pricing-table-preferred'] {
  margin: -5px;
}

.pricing-table-group > [class*='cell'] {
  padding-left: 0;
  padding-right: 0;
  margin-top: 0;
}

.pricing-table-group > [class*='cell']:nth-child(3) .pricing-table {
  border-radius: 0 0 0 10px;
}

.pricing-table-group > [class*='cell']:last-child .pricing-table {
  border-radius: 0 0 10px 10px;
}

@media (min-width: 768px) {
  .pricing-table-group [class*='pricing-table-preferred'] {
    margin: -9px;
  }
  .pricing-table-group > [class*='cell'] .pricing-table {
    border-radius: 0;
  }
  .pricing-table-group > [class*='cell'] [class*='pricing-table-preferred'] {
    border-radius: 10px 10px;
  }
  .pricing-table-group > [class*='cell']:first-child .pricing-table {
    border-radius: 10px 0 0 10px;
  }
  .pricing-table-group > [class*='cell']:last-child .pricing-table {
    border-radius: 0 10px 10px 0;
  }
}

@media (min-width: 1200px) {
  .pricing-table-group [class*='pricing-table-preferred'] {
    margin: -20px 0 -23px -8px;
  }
  .pricing-table-group > [class*='cell'] .pricing-table {
    border-radius: 0;
  }
  .pricing-table-group > [class*='cell'] [class*='pricing-table-preferred'] {
    border-radius: 10px 10px;
  }
  .pricing-table-group > [class*='cell']:first-child .pricing-table {
    border-radius: 10px 0 0 10px;
  }
  .pricing-table-group > [class*='cell']:last-child .pricing-table {
    border-radius: 0 10px 10px 0;
  }
}

[class*='pricing-table-preferred'] {
  -webkit-box-shadow: 0px 2px 10px 0px rgba(49, 49, 50, 0.13);
  box-shadow: 0px 2px 10px 0px rgba(49, 49, 50, 0.13);
}

[class*='pricing-table-preferred'] .pricing-table-header {
  background: #084884;
}

[class*='pricing-table-preferred'] .pricing-table-header > * {
  color: #fff;
}

[class*='pricing-table-preferred'] .price {
  color: #42a4ff;
}

.pricing-table-preferred-variant-2 {
  position: relative;
}

.pricing-table-preferred-variant-2 .pricing-table-body {
  padding: 40px 35px 20px;
}

.pricing-table-preferred-variant-2 .pricing-table-footer {
  padding-bottom: 48px;
}

@media (min-width: 768px) {
  .pricing-table .price {
    margin-top: 15px;
    font-size: 26px;
  }
}

@media (min-width: 992px) {
  .pricing-table .price {
    font-size: 30px;
  }
}

/*
 * Custom Plugins
 */
/**
* @subsection   Animate.css
*
* @description  A bunch of cool, fun, and cross-browser animations
*               for you to use.
*
* @author       Daniel Eden
* @link         https://daneden.me/animate
* @license      MIT license - https://opensource.org/licenses/MIT
*/
.animated {
  -webkit-animation-duration: 1s;
  animation-duration: 1s;
  -webkit-animation-fill-mode: both;
  animation-fill-mode: both;
  opacity: 1;
}

.animated.infinite {
  -webkit-animation-iteration-count: infinite;
  animation-iteration-count: infinite;
}

.animated.hinge {
  -webkit-animation-duration: 2s;
  animation-duration: 2s;
}

html:not(.lt-ie10) .not-animated {
  opacity: 0;
}

/**
* Bounce Keyframes Animation
*/
@-webkit-keyframes bounce {
  0%, 20%, 53%, 80%, 100% {
    -webkit-transition-timing-function: cubic-bezier(0.215, 0.61, 0.355, 1);
    transition-timing-function: cubic-bezier(0.215, 0.61, 0.355, 1);
    -webkit-transform: translate3d(0, 0, 0);
    transform: translate3d(0, 0, 0);
  }
  40%, 43% {
    -webkit-transition-timing-function: cubic-bezier(0.755, 0.05, 0.855, 0.06);
    transition-timing-function: cubic-bezier(0.755, 0.05, 0.855, 0.06);
    -webkit-transform: translate3d(0, -30px, 0);
    transform: translate3d(0, -30px, 0);
  }
  70% {
    -webkit-transition-timing-function: cubic-bezier(0.755, 0.05, 0.855, 0.06);
    transition-timing-function: cubic-bezier(0.755, 0.05, 0.855, 0.06);
    -webkit-transform: translate3d(0, -15px, 0);
    transform: translate3d(0, -15px, 0);
  }
  90% {
    -webkit-transform: translate3d(0, -4px, 0);
    transform: translate3d(0, -4px, 0);
  }
}

.bounce {
  -webkit-animation-name: bounce;
  animation-name: bounce;
  -webkit-transform-origin: center bottom;
  transform-origin: center bottom;
}

/**
* Flas Keyframes Animation
*/
@-webkit-keyframes flash {
  0%, 50%, 100% {
    opacity: 1;
  }
  25%, 75% {
    opacity: 0;
  }
}

@keyframes flash {
  0%, 50%, 100% {
    opacity: 1;
  }
  25%, 75% {
    opacity: 0;
  }
}

.flash {
  -webkit-animation-name: flash;
  animation-name: flash;
}

/**
* Pulse Keyframes Animation
*
* @author Nick Pettit
* @link https://github.com/nickpettit/glide
*/
@-webkit-keyframes pulse {
  0% {
    -webkit-transform: scale3d(1, 1, 1);
    transform: scale3d(1, 1, 1);
  }
  50% {
    -webkit-transform: scale3d(1.05, 1.05, 1.05);
    transform: scale3d(1.05, 1.05, 1.05);
  }
  100% {
    -webkit-transform: scale3d(1, 1, 1);
    transform: scale3d(1, 1, 1);
  }
}

@keyframes pulse {
  0% {
    -webkit-transform: scale3d(1, 1, 1);
    transform: scale3d(1, 1, 1);
  }
  50% {
    -webkit-transform: scale3d(1.05, 1.05, 1.05);
    transform: scale3d(1.05, 1.05, 1.05);
  }
  100% {
    -webkit-transform: scale3d(1, 1, 1);
    transform: scale3d(1, 1, 1);
  }
}

.pulse {
  -webkit-animation-name: pulse;
  animation-name: pulse;
}

/**
* RubberBand Keyframes Animation
*/
@-webkit-keyframes rubberBand {
  0% {
    -webkit-transform: scale3d(1, 1, 1);
    transform: scale3d(1, 1, 1);
  }
  30% {
    -webkit-transform: scale3d(1.25, 0.75, 1);
    transform: scale3d(1.25, 0.75, 1);
  }
  40% {
    -webkit-transform: scale3d(0.75, 1.25, 1);
    transform: scale3d(0.75, 1.25, 1);
  }
  50% {
    -webkit-transform: scale3d(1.15, 0.85, 1);
    transform: scale3d(1.15, 0.85, 1);
  }
  65% {
    -webkit-transform: scale3d(0.95, 1.05, 1);
    transform: scale3d(0.95, 1.05, 1);
  }
  75% {
    -webkit-transform: scale3d(1.05, 0.95, 1);
    transform: scale3d(1.05, 0.95, 1);
  }
  100% {
    -webkit-transform: scale3d(1, 1, 1);
    transform: scale3d(1, 1, 1);
  }
}

@keyframes rubberBand {
  0% {
    -webkit-transform: scale3d(1, 1, 1);
    transform: scale3d(1, 1, 1);
  }
  30% {
    -webkit-transform: scale3d(1.25, 0.75, 1);
    transform: scale3d(1.25, 0.75, 1);
  }
  40% {
    -webkit-transform: scale3d(0.75, 1.25, 1);
    transform: scale3d(0.75, 1.25, 1);
  }
  50% {
    -webkit-transform: scale3d(1.15, 0.85, 1);
    transform: scale3d(1.15, 0.85, 1);
  }
  65% {
    -webkit-transform: scale3d(0.95, 1.05, 1);
    transform: scale3d(0.95, 1.05, 1);
  }
  75% {
    -webkit-transform: scale3d(1.05, 0.95, 1);
    transform: scale3d(1.05, 0.95, 1);
  }
  100% {
    -webkit-transform: scale3d(1, 1, 1);
    transform: scale3d(1, 1, 1);
  }
}

.rubberBand {
  -webkit-animation-name: rubberBand;
  animation-name: rubberBand;
}

/**
* Shake Keyframes Animation
*/
@-webkit-keyframes shake {
  0%, 100% {
    -webkit-transform: translate3d(0, 0, 0);
    transform: translate3d(0, 0, 0);
  }
  10%, 30%, 50%, 70%, 90% {
    -webkit-transform: translate3d(-10px, 0, 0);
    transform: translate3d(-10px, 0, 0);
  }
  20%, 40%, 60%, 80% {
    -webkit-transform: translate3d(10px, 0, 0);
    transform: translate3d(10px, 0, 0);
  }
}

@keyframes shake {
  0%, 100% {
    -webkit-transform: translate3d(0, 0, 0);
    transform: translate3d(0, 0, 0);
  }
  10%, 30%, 50%, 70%, 90% {
    -webkit-transform: translate3d(-10px, 0, 0);
    transform: translate3d(-10px, 0, 0);
  }
  20%, 40%, 60%, 80% {
    -webkit-transform: translate3d(10px, 0, 0);
    transform: translate3d(10px, 0, 0);
  }
}

.shake {
  -webkit-animation-name: shake;
  animation-name: shake;
}

/**
* Swing Keyframes Animation
*/
@-webkit-keyframes swing {
  20% {
    -webkit-transform: rotate3d(0, 0, 1, 15deg);
    transform: rotate3d(0, 0, 1, 15deg);
  }
  40% {
    -webkit-transform: rotate3d(0, 0, 1, -10deg);
    transform: rotate3d(0, 0, 1, -10deg);
  }
  60% {
    -webkit-transform: rotate3d(0, 0, 1, 5deg);
    transform: rotate3d(0, 0, 1, 5deg);
  }
  80% {
    -webkit-transform: rotate3d(0, 0, 1, -5deg);
    transform: rotate3d(0, 0, 1, -5deg);
  }
  100% {
    -webkit-transform: rotate3d(0, 0, 1, 0deg);
    transform: rotate3d(0, 0, 1, 0deg);
  }
}

@keyframes swing {
  20% {
    -webkit-transform: rotate3d(0, 0, 1, 15deg);
    transform: rotate3d(0, 0, 1, 15deg);
  }
  40% {
    -webkit-transform: rotate3d(0, 0, 1, -10deg);
    transform: rotate3d(0, 0, 1, -10deg);
  }
  60% {
    -webkit-transform: rotate3d(0, 0, 1, 5deg);
    transform: rotate3d(0, 0, 1, 5deg);
  }
  80% {
    -webkit-transform: rotate3d(0, 0, 1, -5deg);
    transform: rotate3d(0, 0, 1, -5deg);
  }
  100% {
    -webkit-transform: rotate3d(0, 0, 1, 0deg);
    transform: rotate3d(0, 0, 1, 0deg);
  }
}

.swing {
  -webkit-transform-origin: top center;
  transform-origin: top center;
  -webkit-animation-name: swing;
  animation-name: swing;
}

/**
* Tada Keyframes Animation
*/
@-webkit-keyframes tada {
  0% {
    -webkit-transform: scale3d(1, 1, 1);
    transform: scale3d(1, 1, 1);
  }
  10%, 20% {
    -webkit-transform: scale3d(0.9, 0.9, 0.9) rotate3d(0, 0, 1, -3deg);
    transform: scale3d(0.9, 0.9, 0.9) rotate3d(0, 0, 1, -3deg);
  }
  30%, 50%, 70%, 90% {
    -webkit-transform: scale3d(1.1, 1.1, 1.1) rotate3d(0, 0, 1, 3deg);
    transform: scale3d(1.1, 1.1, 1.1) rotate3d(0, 0, 1, 3deg);
  }
  40%, 60%, 80% {
    -webkit-transform: scale3d(1.1, 1.1, 1.1) rotate3d(0, 0, 1, -3deg);
    transform: scale3d(1.1, 1.1, 1.1) rotate3d(0, 0, 1, -3deg);
  }
  100% {
    -webkit-transform: scale3d(1, 1, 1);
    transform: scale3d(1, 1, 1);
  }
}

@keyframes tada {
  0% {
    -webkit-transform: scale3d(1, 1, 1);
    transform: scale3d(1, 1, 1);
  }
  10%, 20% {
    -webkit-transform: scale3d(0.9, 0.9, 0.9) rotate3d(0, 0, 1, -3deg);
    transform: scale3d(0.9, 0.9, 0.9) rotate3d(0, 0, 1, -3deg);
  }
  30%, 50%, 70%, 90% {
    -webkit-transform: scale3d(1.1, 1.1, 1.1) rotate3d(0, 0, 1, 3deg);
    transform: scale3d(1.1, 1.1, 1.1) rotate3d(0, 0, 1, 3deg);
  }
  40%, 60%, 80% {
    -webkit-transform: scale3d(1.1, 1.1, 1.1) rotate3d(0, 0, 1, -3deg);
    transform: scale3d(1.1, 1.1, 1.1) rotate3d(0, 0, 1, -3deg);
  }
  100% {
    -webkit-transform: scale3d(1, 1, 1);
    transform: scale3d(1, 1, 1);
  }
}

.tada {
  -webkit-animation-name: tada;
  animation-name: tada;
}

/**
* Wobble Keyframes Animation
*
* @author Nick Pettit
* @link https://github.com/nickpettit/glide
*/
@-webkit-keyframes wobble {
  0% {
    -webkit-transform: none;
    transform: none;
  }
  15% {
    -webkit-transform: translate3d(-25%, 0, 0) rotate3d(0, 0, 1, -5deg);
    transform: translate3d(-25%, 0, 0) rotate3d(0, 0, 1, -5deg);
  }
  30% {
    -webkit-transform: translate3d(20%, 0, 0) rotate3d(0, 0, 1, 3deg);
    transform: translate3d(20%, 0, 0) rotate3d(0, 0, 1, 3deg);
  }
  45% {
    -webkit-transform: translate3d(-15%, 0, 0) rotate3d(0, 0, 1, -3deg);
    transform: translate3d(-15%, 0, 0) rotate3d(0, 0, 1, -3deg);
  }
  60% {
    -webkit-transform: translate3d(10%, 0, 0) rotate3d(0, 0, 1, 2deg);
    transform: translate3d(10%, 0, 0) rotate3d(0, 0, 1, 2deg);
  }
  75% {
    -webkit-transform: translate3d(-5%, 0, 0) rotate3d(0, 0, 1, -1deg);
    transform: translate3d(-5%, 0, 0) rotate3d(0, 0, 1, -1deg);
  }
  100% {
    -webkit-transform: none;
    transform: none;
  }
}

@keyframes wobble {
  0% {
    -webkit-transform: none;
    transform: none;
  }
  15% {
    -webkit-transform: translate3d(-25%, 0, 0) rotate3d(0, 0, 1, -5deg);
    transform: translate3d(-25%, 0, 0) rotate3d(0, 0, 1, -5deg);
  }
  30% {
    -webkit-transform: translate3d(20%, 0, 0) rotate3d(0, 0, 1, 3deg);
    transform: translate3d(20%, 0, 0) rotate3d(0, 0, 1, 3deg);
  }
  45% {
    -webkit-transform: translate3d(-15%, 0, 0) rotate3d(0, 0, 1, -3deg);
    transform: translate3d(-15%, 0, 0) rotate3d(0, 0, 1, -3deg);
  }
  60% {
    -webkit-transform: translate3d(10%, 0, 0) rotate3d(0, 0, 1, 2deg);
    transform: translate3d(10%, 0, 0) rotate3d(0, 0, 1, 2deg);
  }
  75% {
    -webkit-transform: translate3d(-5%, 0, 0) rotate3d(0, 0, 1, -1deg);
    transform: translate3d(-5%, 0, 0) rotate3d(0, 0, 1, -1deg);
  }
  100% {
    -webkit-transform: none;
    transform: none;
  }
}

.wobble {
  -webkit-animation-name: wobble;
  animation-name: wobble;
}

/**
* BounceIn Keyframes Animation
*/
@-webkit-keyframes bounceIn {
  0%, 20%, 40%, 60%, 80%, 100% {
    -webkit-transition-timing-function: cubic-bezier(0.215, 0.61, 0.355, 1);
    transition-timing-function: cubic-bezier(0.215, 0.61, 0.355, 1);
  }
  0% {
    opacity: 0;
    -webkit-transform: scale3d(0.3, 0.3, 0.3);
    transform: scale3d(0.3, 0.3, 0.3);
  }
  20% {
    -webkit-transform: scale3d(1.1, 1.1, 1.1);
    transform: scale3d(1.1, 1.1, 1.1);
  }
  40% {
    -webkit-transform: scale3d(0.9, 0.9, 0.9);
    transform: scale3d(0.9, 0.9, 0.9);
  }
  60% {
    opacity: 1;
    -webkit-transform: scale3d(1.03, 1.03, 1.03);
    transform: scale3d(1.03, 1.03, 1.03);
  }
  80% {
    -webkit-transform: scale3d(0.97, 0.97, 0.97);
    transform: scale3d(0.97, 0.97, 0.97);
  }
  100% {
    opacity: 1;
    -webkit-transform: scale3d(1, 1, 1);
    transform: scale3d(1, 1, 1);
  }
}

@keyframes bounceIn {
  0%, 20%, 40%, 60%, 80%, 100% {
    -webkit-transition-timing-function: cubic-bezier(0.215, 0.61, 0.355, 1);
    transition-timing-function: cubic-bezier(0.215, 0.61, 0.355, 1);
  }
  0% {
    opacity: 0;
    -webkit-transform: scale3d(0.3, 0.3, 0.3);
    transform: scale3d(0.3, 0.3, 0.3);
  }
  20% {
    -webkit-transform: scale3d(1.1, 1.1, 1.1);
    transform: scale3d(1.1, 1.1, 1.1);
  }
  40% {
    -webkit-transform: scale3d(0.9, 0.9, 0.9);
    transform: scale3d(0.9, 0.9, 0.9);
  }
  60% {
    opacity: 1;
    -webkit-transform: scale3d(1.03, 1.03, 1.03);
    transform: scale3d(1.03, 1.03, 1.03);
  }
  80% {
    -webkit-transform: scale3d(0.97, 0.97, 0.97);
    transform: scale3d(0.97, 0.97, 0.97);
  }
  100% {
    opacity: 1;
    -webkit-transform: scale3d(1, 1, 1);
    transform: scale3d(1, 1, 1);
  }
}

.bounceIn {
  -webkit-animation-name: bounceIn;
  animation-name: bounceIn;
  -webkit-animation-duration: .75s;
  animation-duration: .75s;
}

/**
* BounceInDown Keyframes Animation
*/
@-webkit-keyframes bounceInDown {
  0%, 60%, 75%, 90%, 100% {
    -webkit-transition-timing-function: cubic-bezier(0.215, 0.61, 0.355, 1);
    transition-timing-function: cubic-bezier(0.215, 0.61, 0.355, 1);
  }
  0% {
    opacity: 0;
    -webkit-transform: translate3d(0, -3000px, 0);
    transform: translate3d(0, -3000px, 0);
  }
  60% {
    opacity: 1;
    -webkit-transform: translate3d(0, 25px, 0);
    transform: translate3d(0, 25px, 0);
  }
  75% {
    -webkit-transform: translate3d(0, -10px, 0);
    transform: translate3d(0, -10px, 0);
  }
  90% {
    -webkit-transform: translate3d(0, 5px, 0);
    transform: translate3d(0, 5px, 0);
  }
  100% {
    -webkit-transform: none;
    transform: none;
  }
}

@keyframes bounceInDown {
  0%, 60%, 75%, 90%, 100% {
    -webkit-transition-timing-function: cubic-bezier(0.215, 0.61, 0.355, 1);
    transition-timing-function: cubic-bezier(0.215, 0.61, 0.355, 1);
  }
  0% {
    opacity: 0;
    -webkit-transform: translate3d(0, -3000px, 0);
    transform: translate3d(0, -3000px, 0);
  }
  60% {
    opacity: 1;
    -webkit-transform: translate3d(0, 25px, 0);
    transform: translate3d(0, 25px, 0);
  }
  75% {
    -webkit-transform: translate3d(0, -10px, 0);
    transform: translate3d(0, -10px, 0);
  }
  90% {
    -webkit-transform: translate3d(0, 5px, 0);
    transform: translate3d(0, 5px, 0);
  }
  100% {
    -webkit-transform: none;
    transform: none;
  }
}

.bounceInDown {
  -webkit-animation-name: bounceInDown;
  animation-name: bounceInDown;
}

/**
* BounceInLeft Keyframes Animation
*/
@-webkit-keyframes bounceInLeft {
  0%, 60%, 75%, 90%, 100% {
    -webkit-transition-timing-function: cubic-bezier(0.215, 0.61, 0.355, 1);
    transition-timing-function: cubic-bezier(0.215, 0.61, 0.355, 1);
  }
  0% {
    opacity: 0;
    -webkit-transform: translate3d(-3000px, 0, 0);
    transform: translate3d(-3000px, 0, 0);
  }
  60% {
    opacity: 1;
    -webkit-transform: translate3d(25px, 0, 0);
    transform: translate3d(25px, 0, 0);
  }
  75% {
    -webkit-transform: translate3d(-10px, 0, 0);
    transform: translate3d(-10px, 0, 0);
  }
  90% {
    -webkit-transform: translate3d(5px, 0, 0);
    transform: translate3d(5px, 0, 0);
  }
  100% {
    -webkit-transform: none;
    transform: none;
  }
}

@keyframes bounceInLeft {
  0%, 60%, 75%, 90%, 100% {
    -webkit-transition-timing-function: cubic-bezier(0.215, 0.61, 0.355, 1);
    transition-timing-function: cubic-bezier(0.215, 0.61, 0.355, 1);
  }
  0% {
    opacity: 0;
    -webkit-transform: translate3d(-3000px, 0, 0);
    transform: translate3d(-3000px, 0, 0);
  }
  60% {
    opacity: 1;
    -webkit-transform: translate3d(25px, 0, 0);
    transform: translate3d(25px, 0, 0);
  }
  75% {
    -webkit-transform: translate3d(-10px, 0, 0);
    transform: translate3d(-10px, 0, 0);
  }
  90% {
    -webkit-transform: translate3d(5px, 0, 0);
    transform: translate3d(5px, 0, 0);
  }
  100% {
    -webkit-transform: none;
    transform: none;
  }
}

.bounceInLeft {
  -webkit-animation-name: bounceInLeft;
  animation-name: bounceInLeft;
}

/**
* BounceInRight Keyframes Animation
*/
@-webkit-keyframes bounceInRight {
  0%, 60%, 75%, 90%, 100% {
    -webkit-transition-timing-function: cubic-bezier(0.215, 0.61, 0.355, 1);
    transition-timing-function: cubic-bezier(0.215, 0.61, 0.355, 1);
  }
  0% {
    opacity: 0;
    -webkit-transform: translate3d(3000px, 0, 0);
    transform: translate3d(3000px, 0, 0);
  }
  60% {
    opacity: 1;
    -webkit-transform: translate3d(-25px, 0, 0);
    transform: translate3d(-25px, 0, 0);
  }
  75% {
    -webkit-transform: translate3d(10px, 0, 0);
    transform: translate3d(10px, 0, 0);
  }
  90% {
    -webkit-transform: translate3d(-5px, 0, 0);
    transform: translate3d(-5px, 0, 0);
  }
  100% {
    -webkit-transform: none;
    transform: none;
  }
}

@keyframes bounceInRight {
  0%, 60%, 75%, 90%, 100% {
    -webkit-transition-timing-function: cubic-bezier(0.215, 0.61, 0.355, 1);
    transition-timing-function: cubic-bezier(0.215, 0.61, 0.355, 1);
  }
  0% {
    opacity: 0;
    -webkit-transform: translate3d(3000px, 0, 0);
    transform: translate3d(3000px, 0, 0);
  }
  60% {
    opacity: 1;
    -webkit-transform: translate3d(-25px, 0, 0);
    transform: translate3d(-25px, 0, 0);
  }
  75% {
    -webkit-transform: translate3d(10px, 0, 0);
    transform: translate3d(10px, 0, 0);
  }
  90% {
    -webkit-transform: translate3d(-5px, 0, 0);
    transform: translate3d(-5px, 0, 0);
  }
  100% {
    -webkit-transform: none;
    transform: none;
  }
}

.bounceInRight {
  -webkit-animation-name: bounceInRight;
  animation-name: bounceInRight;
}

/**
* BounceInUp Keyframes Animation
*/
@-webkit-keyframes bounceInUp {
  0%, 60%, 75%, 90%, 100% {
    -webkit-transition-timing-function: cubic-bezier(0.215, 0.61, 0.355, 1);
    transition-timing-function: cubic-bezier(0.215, 0.61, 0.355, 1);
  }
  0% {
    opacity: 0;
    -webkit-transform: translate3d(0, 3000px, 0);
    transform: translate3d(0, 3000px, 0);
  }
  60% {
    opacity: 1;
    -webkit-transform: translate3d(0, -20px, 0);
    transform: translate3d(0, -20px, 0);
  }
  75% {
    -webkit-transform: translate3d(0, 10px, 0);
    transform: translate3d(0, 10px, 0);
  }
  90% {
    -webkit-transform: translate3d(0, -5px, 0);
    transform: translate3d(0, -5px, 0);
  }
  100% {
    -webkit-transform: translate3d(0, 0, 0);
    transform: translate3d(0, 0, 0);
  }
}

@keyframes bounceInUp {
  0%, 60%, 75%, 90%, 100% {
    -webkit-transition-timing-function: cubic-bezier(0.215, 0.61, 0.355, 1);
    transition-timing-function: cubic-bezier(0.215, 0.61, 0.355, 1);
  }
  0% {
    opacity: 0;
    -webkit-transform: translate3d(0, 3000px, 0);
    transform: translate3d(0, 3000px, 0);
  }
  60% {
    opacity: 1;
    -webkit-transform: translate3d(0, -20px, 0);
    transform: translate3d(0, -20px, 0);
  }
  75% {
    -webkit-transform: translate3d(0, 10px, 0);
    transform: translate3d(0, 10px, 0);
  }
  90% {
    -webkit-transform: translate3d(0, -5px, 0);
    transform: translate3d(0, -5px, 0);
  }
  100% {
    -webkit-transform: translate3d(0, 0, 0);
    transform: translate3d(0, 0, 0);
  }
}

.bounceInUp {
  -webkit-animation-name: bounceInUp;
  animation-name: bounceInUp;
}

/**
* BounceOut Keyframes Animation
*/
@-webkit-keyframes bounceOut {
  20% {
    -webkit-transform: scale3d(0.9, 0.9, 0.9);
    transform: scale3d(0.9, 0.9, 0.9);
  }
  50%, 55% {
    opacity: 1;
    -webkit-transform: scale3d(1.1, 1.1, 1.1);
    transform: scale3d(1.1, 1.1, 1.1);
  }
  100% {
    opacity: 0;
    -webkit-transform: scale3d(0.3, 0.3, 0.3);
    transform: scale3d(0.3, 0.3, 0.3);
  }
}

@keyframes bounceOut {
  20% {
    -webkit-transform: scale3d(0.9, 0.9, 0.9);
    transform: scale3d(0.9, 0.9, 0.9);
  }
  50%, 55% {
    opacity: 1;
    -webkit-transform: scale3d(1.1, 1.1, 1.1);
    transform: scale3d(1.1, 1.1, 1.1);
  }
  100% {
    opacity: 0;
    -webkit-transform: scale3d(0.3, 0.3, 0.3);
    transform: scale3d(0.3, 0.3, 0.3);
  }
}

.bounceOut {
  -webkit-animation-name: bounceOut;
  animation-name: bounceOut;
  -webkit-animation-duration: .75s;
  animation-duration: .75s;
}

/**
* BounceOutDown Keyframes Animation
*/
@-webkit-keyframes bounceOutDown {
  20% {
    -webkit-transform: translate3d(0, 10px, 0);
    transform: translate3d(0, 10px, 0);
  }
  40%, 45% {
    opacity: 1;
    -webkit-transform: translate3d(0, -20px, 0);
    transform: translate3d(0, -20px, 0);
  }
  100% {
    opacity: 0;
    -webkit-transform: translate3d(0, 2000px, 0);
    transform: translate3d(0, 2000px, 0);
  }
}

@keyframes bounceOutDown {
  20% {
    -webkit-transform: translate3d(0, 10px, 0);
    transform: translate3d(0, 10px, 0);
  }
  40%, 45% {
    opacity: 1;
    -webkit-transform: translate3d(0, -20px, 0);
    transform: translate3d(0, -20px, 0);
  }
  100% {
    opacity: 0;
    -webkit-transform: translate3d(0, 2000px, 0);
    transform: translate3d(0, 2000px, 0);
  }
}

.bounceOutDown {
  -webkit-animation-name: bounceOutDown;
  animation-name: bounceOutDown;
}

/**
* BounceOutLeft Keyframes Animation
*/
@-webkit-keyframes bounceOutLeft {
  20% {
    opacity: 1;
    -webkit-transform: translate3d(20px, 0, 0);
    transform: translate3d(20px, 0, 0);
  }
  100% {
    opacity: 0;
    -webkit-transform: translate3d(-2000px, 0, 0);
    transform: translate3d(-2000px, 0, 0);
  }
}

@keyframes bounceOutLeft {
  20% {
    opacity: 1;
    -webkit-transform: translate3d(20px, 0, 0);
    transform: translate3d(20px, 0, 0);
  }
  100% {
    opacity: 0;
    -webkit-transform: translate3d(-2000px, 0, 0);
    transform: translate3d(-2000px, 0, 0);
  }
}

.bounceOutLeft {
  -webkit-animation-name: bounceOutLeft;
  animation-name: bounceOutLeft;
}

/**
* BounceOutRight Keyframes Animation
*/
@-webkit-keyframes bounceOutRight {
  20% {
    opacity: 1;
    -webkit-transform: translate3d(-20px, 0, 0);
    transform: translate3d(-20px, 0, 0);
  }
  100% {
    opacity: 0;
    -webkit-transform: translate3d(2000px, 0, 0);
    transform: translate3d(2000px, 0, 0);
  }
}

@keyframes bounceOutRight {
  20% {
    opacity: 1;
    -webkit-transform: translate3d(-20px, 0, 0);
    transform: translate3d(-20px, 0, 0);
  }
  100% {
    opacity: 0;
    -webkit-transform: translate3d(2000px, 0, 0);
    transform: translate3d(2000px, 0, 0);
  }
}

.bounceOutRight {
  -webkit-animation-name: bounceOutRight;
  animation-name: bounceOutRight;
}

/**
* BounceOutUp Keyframes Animation
*/
@-webkit-keyframes bounceOutUp {
  20% {
    -webkit-transform: translate3d(0, -10px, 0);
    transform: translate3d(0, -10px, 0);
  }
  40%, 45% {
    opacity: 1;
    -webkit-transform: translate3d(0, 20px, 0);
    transform: translate3d(0, 20px, 0);
  }
  100% {
    opacity: 0;
    -webkit-transform: translate3d(0, -2000px, 0);
    transform: translate3d(0, -2000px, 0);
  }
}

@keyframes bounceOutUp {
  20% {
    -webkit-transform: translate3d(0, -10px, 0);
    transform: translate3d(0, -10px, 0);
  }
  40%, 45% {
    opacity: 1;
    -webkit-transform: translate3d(0, 20px, 0);
    transform: translate3d(0, 20px, 0);
  }
  100% {
    opacity: 0;
    -webkit-transform: translate3d(0, -2000px, 0);
    transform: translate3d(0, -2000px, 0);
  }
}

.bounceOutUp {
  -webkit-animation-name: bounceOutUp;
  animation-name: bounceOutUp;
}

/**
* FadeIn Keyframes Animation
*/
@-webkit-keyframes fadeIn {
  0% {
    opacity: 0;
  }
  100% {
    opacity: 1;
  }
}

@keyframes fadeIn {
  0% {
    opacity: 0;
  }
  100% {
    opacity: 1;
  }
}

.fadeIn {
  -webkit-animation-name: fadeIn;
  animation-name: fadeIn;
}

/**
* FadeInDown Keyframes Animation
*/
@-webkit-keyframes fadeInDown {
  0% {
    opacity: 0;
    -webkit-transform: translate3d(0, -100%, 0);
    transform: translate3d(0, -100%, 0);
  }
  100% {
    opacity: 1;
    -webkit-transform: none;
    transform: none;
  }
}

@keyframes fadeInDown {
  0% {
    opacity: 0;
    -webkit-transform: translate3d(0, -100%, 0);
    transform: translate3d(0, -100%, 0);
  }
  100% {
    opacity: 1;
    -webkit-transform: none;
    transform: none;
  }
}

.fadeInDown {
  -webkit-animation-name: fadeInDown;
  animation-name: fadeInDown;
}

/**
* FadeInDownBig Keyframes Animation
*/
@-webkit-keyframes fadeInDownBig {
  0% {
    opacity: 0;
    -webkit-transform: translate3d(0, -2000px, 0);
    transform: translate3d(0, -2000px, 0);
  }
  100% {
    opacity: 1;
    -webkit-transform: none;
    transform: none;
  }
}

@keyframes fadeInDownBig {
  0% {
    opacity: 0;
    -webkit-transform: translate3d(0, -2000px, 0);
    transform: translate3d(0, -2000px, 0);
  }
  100% {
    opacity: 1;
    -webkit-transform: none;
    transform: none;
  }
}

.fadeInDownBig {
  -webkit-animation-name: fadeInDownBig;
  animation-name: fadeInDownBig;
}

/**
* FadeInLeft Keyframes Animation
*/
@-webkit-keyframes fadeInLeft {
  0% {
    opacity: 0;
    -webkit-transform: translate3d(-100%, 0, 0);
    transform: translate3d(-100%, 0, 0);
  }
  100% {
    opacity: 1;
    -webkit-transform: none;
    transform: none;
  }
}

@keyframes fadeInLeft {
  0% {
    opacity: 0;
    -webkit-transform: translate3d(-100%, 0, 0);
    transform: translate3d(-100%, 0, 0);
  }
  100% {
    opacity: 1;
    -webkit-transform: none;
    transform: none;
  }
}

.fadeInLeft {
  -webkit-animation-name: fadeInLeft;
  animation-name: fadeInLeft;
}

/**
* FadeInLeftBig Keyframes Animation
*/
@-webkit-keyframes fadeInLeftBig {
  0% {
    opacity: 0;
    -webkit-transform: translate3d(-2000px, 0, 0);
    transform: translate3d(-2000px, 0, 0);
  }
  100% {
    opacity: 1;
    -webkit-transform: none;
    transform: none;
  }
}

@keyframes fadeInLeftBig {
  0% {
    opacity: 0;
    -webkit-transform: translate3d(-2000px, 0, 0);
    transform: translate3d(-2000px, 0, 0);
  }
  100% {
    opacity: 1;
    -webkit-transform: none;
    transform: none;
  }
}

.fadeInLeftBig {
  -webkit-animation-name: fadeInLeftBig;
  animation-name: fadeInLeftBig;
}

/**
* FadeInRight Keyframes Animation
*/
@-webkit-keyframes fadeInRight {
  0% {
    opacity: 0;
    -webkit-transform: translate3d(100%, 0, 0);
    transform: translate3d(100%, 0, 0);
  }
  100% {
    opacity: 1;
    -webkit-transform: none;
    transform: none;
  }
}

@keyframes fadeInRight {
  0% {
    opacity: 0;
    -webkit-transform: translate3d(100%, 0, 0);
    transform: translate3d(100%, 0, 0);
  }
  100% {
    opacity: 1;
    -webkit-transform: none;
    transform: none;
  }
}

.fadeInRight {
  -webkit-animation-name: fadeInRight;
  animation-name: fadeInRight;
}

/**
* FadeInRightBig Keyframes Animation
*/
@-webkit-keyframes fadeInRightBig {
  0% {
    opacity: 0;
    -webkit-transform: translate3d(2000px, 0, 0);
    transform: translate3d(2000px, 0, 0);
  }
  100% {
    opacity: 1;
    -webkit-transform: none;
    transform: none;
  }
}

@keyframes fadeInRightBig {
  0% {
    opacity: 0;
    -webkit-transform: translate3d(2000px, 0, 0);
    transform: translate3d(2000px, 0, 0);
  }
  100% {
    opacity: 1;
    -webkit-transform: none;
    transform: none;
  }
}

.fadeInRightBig {
  -webkit-animation-name: fadeInRightBig;
  animation-name: fadeInRightBig;
}

/**
* FadeInUp Keyframes Animation
*/
@-webkit-keyframes fadeInUp {
  0% {
    opacity: 0;
    -webkit-transform: translate3d(0, 100%, 0);
    transform: translate3d(0, 100%, 0);
  }
  100% {
    opacity: 1;
    -webkit-transform: none;
    transform: none;
  }
}

@keyframes fadeInUp {
  0% {
    opacity: 0;
    -webkit-transform: translate3d(0, 100%, 0);
    transform: translate3d(0, 100%, 0);
  }
  100% {
    opacity: 1;
    -webkit-transform: none;
    transform: none;
  }
}

.fadeInUp {
  -webkit-animation-name: fadeInUp;
  animation-name: fadeInUp;
}

/**
* FadeInUpBig Keyframes Animation
*/
@-webkit-keyframes fadeInUpBig {
  0% {
    opacity: 0;
    -webkit-transform: translate3d(0, 2000px, 0);
    transform: translate3d(0, 2000px, 0);
  }
  100% {
    opacity: 1;
    -webkit-transform: none;
    transform: none;
  }
}

@keyframes fadeInUpBig {
  0% {
    opacity: 0;
    -webkit-transform: translate3d(0, 2000px, 0);
    transform: translate3d(0, 2000px, 0);
  }
  100% {
    opacity: 1;
    -webkit-transform: none;
    transform: none;
  }
}

.fadeInUpBig {
  -webkit-animation-name: fadeInUpBig;
  animation-name: fadeInUpBig;
}

/**
* FadeOut Keyframes Animation
*/
@-webkit-keyframes fadeOut {
  0% {
    opacity: 1;
  }
  100% {
    opacity: 0;
  }
}

@keyframes fadeOut {
  0% {
    opacity: 1;
  }
  100% {
    opacity: 0;
  }
}

.fadeOut {
  -webkit-animation-name: fadeOut;
  animation-name: fadeOut;
}

/**
* FadeOutDown Keyframes Animation
*/
@-webkit-keyframes fadeOutDown {
  0% {
    opacity: 1;
  }
  100% {
    opacity: 0;
    -webkit-transform: translate3d(0, 100%, 0);
    transform: translate3d(0, 100%, 0);
  }
}

@keyframes fadeOutDown {
  0% {
    opacity: 1;
  }
  100% {
    opacity: 0;
    -webkit-transform: translate3d(0, 100%, 0);
    transform: translate3d(0, 100%, 0);
  }
}

.fadeOutDown {
  -webkit-animation-name: fadeOutDown;
  animation-name: fadeOutDown;
}

/**
* FadeOutDownBig Keyframes Animation
*/
@-webkit-keyframes fadeOutDownBig {
  0% {
    opacity: 1;
  }
  100% {
    opacity: 0;
    -webkit-transform: translate3d(0, 2000px, 0);
    transform: translate3d(0, 2000px, 0);
  }
}

@keyframes fadeOutDownBig {
  0% {
    opacity: 1;
  }
  100% {
    opacity: 0;
    -webkit-transform: translate3d(0, 2000px, 0);
    transform: translate3d(0, 2000px, 0);
  }
}

.fadeOutDownBig {
  -webkit-animation-name: fadeOutDownBig;
  animation-name: fadeOutDownBig;
}

/**
* FadeOutLeft Keyframes Animation
*/
@-webkit-keyframes fadeOutLeft {
  0% {
    opacity: 1;
  }
  100% {
    opacity: 0;
    -webkit-transform: translate3d(-100%, 0, 0);
    transform: translate3d(-100%, 0, 0);
  }
}

@keyframes fadeOutLeft {
  0% {
    opacity: 1;
  }
  100% {
    opacity: 0;
    -webkit-transform: translate3d(-100%, 0, 0);
    transform: translate3d(-100%, 0, 0);
  }
}

.fadeOutLeft {
  -webkit-animation-name: fadeOutLeft;
  animation-name: fadeOutLeft;
}

/**
* FadeOutLeftBig Keyframes Animation
*/
@-webkit-keyframes fadeOutLeftBig {
  0% {
    opacity: 1;
  }
  100% {
    opacity: 0;
    -webkit-transform: translate3d(-2000px, 0, 0);
    transform: translate3d(-2000px, 0, 0);
  }
}

@keyframes fadeOutLeftBig {
  0% {
    opacity: 1;
  }
  100% {
    opacity: 0;
    -webkit-transform: translate3d(-2000px, 0, 0);
    transform: translate3d(-2000px, 0, 0);
  }
}

.fadeOutLeftBig {
  -webkit-animation-name: fadeOutLeftBig;
  animation-name: fadeOutLeftBig;
}

/**
* FadeOutRight Keyframes Animation
*/
@-webkit-keyframes fadeOutRight {
  0% {
    opacity: 1;
  }
  100% {
    opacity: 0;
    -webkit-transform: translate3d(100%, 0, 0);
    transform: translate3d(100%, 0, 0);
  }
}

@keyframes fadeOutRight {
  0% {
    opacity: 1;
  }
  100% {
    opacity: 0;
    -webkit-transform: translate3d(100%, 0, 0);
    transform: translate3d(100%, 0, 0);
  }
}

.fadeOutRight {
  -webkit-animation-name: fadeOutRight;
  animation-name: fadeOutRight;
}

/**
* FadeOutRightBig Keyframes Animation
*/
@-webkit-keyframes fadeOutRightBig {
  0% {
    opacity: 1;
  }
  100% {
    opacity: 0;
    -webkit-transform: translate3d(2000px, 0, 0);
    transform: translate3d(2000px, 0, 0);
  }
}

@keyframes fadeOutRightBig {
  0% {
    opacity: 1;
  }
  100% {
    opacity: 0;
    -webkit-transform: translate3d(2000px, 0, 0);
    transform: translate3d(2000px, 0, 0);
  }
}

.fadeOutRightBig {
  -webkit-animation-name: fadeOutRightBig;
  animation-name: fadeOutRightBig;
}

/**
* FadeOutUp Keyframes Animation
*/
@-webkit-keyframes fadeOutUp {
  0% {
    opacity: 1;
  }
  100% {
    opacity: 0;
    -webkit-transform: translate3d(0, -100%, 0);
    transform: translate3d(0, -100%, 0);
  }
}

@keyframes fadeOutUp {
  0% {
    opacity: 1;
  }
  100% {
    opacity: 0;
    -webkit-transform: translate3d(0, -100%, 0);
    transform: translate3d(0, -100%, 0);
  }
}

.fadeOutUp {
  -webkit-animation-name: fadeOutUp;
  animation-name: fadeOutUp;
}

/**
* FadeOutUpBig Keyframes Animation
*/
@-webkit-keyframes fadeOutUpBig {
  0% {
    opacity: 1;
  }
  100% {
    opacity: 0;
    -webkit-transform: translate3d(0, -2000px, 0);
    transform: translate3d(0, -2000px, 0);
  }
}

@keyframes fadeOutUpBig {
  0% {
    opacity: 1;
  }
  100% {
    opacity: 0;
    -webkit-transform: translate3d(0, -2000px, 0);
    transform: translate3d(0, -2000px, 0);
  }
}

.fadeOutUpBig {
  -webkit-animation-name: fadeOutUpBig;
  animation-name: fadeOutUpBig;
}

/**
* Flip Keyframes Animation
*/
@-webkit-keyframes flip {
  0% {
    -webkit-transform: perspective(400px) rotate3d(0, 1, 0, -360deg);
    transform: perspective(400px) rotate3d(0, 1, 0, -360deg);
    -webkit-animation-timing-function: ease-out;
    animation-timing-function: ease-out;
  }
  40% {
    -webkit-transform: perspective(400px) translate3d(0, 0, 150px) rotate3d(0, 1, 0, -190deg);
    transform: perspective(400px) translate3d(0, 0, 150px) rotate3d(0, 1, 0, -190deg);
    -webkit-animation-timing-function: ease-out;
    animation-timing-function: ease-out;
  }
  50% {
    -webkit-transform: perspective(400px) translate3d(0, 0, 150px) rotate3d(0, 1, 0, -170deg);
    transform: perspective(400px) translate3d(0, 0, 150px) rotate3d(0, 1, 0, -170deg);
    -webkit-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
  80% {
    -webkit-transform: perspective(400px) scale3d(0.95, 0.95, 0.95);
    transform: perspective(400px) scale3d(0.95, 0.95, 0.95);
    -webkit-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
  100% {
    -webkit-transform: perspective(400px);
    transform: perspective(400px);
    -webkit-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
}

@keyframes flip {
  0% {
    -webkit-transform: perspective(400px) rotate3d(0, 1, 0, -360deg);
    transform: perspective(400px) rotate3d(0, 1, 0, -360deg);
    -webkit-animation-timing-function: ease-out;
    animation-timing-function: ease-out;
  }
  40% {
    -webkit-transform: perspective(400px) translate3d(0, 0, 150px) rotate3d(0, 1, 0, -190deg);
    transform: perspective(400px) translate3d(0, 0, 150px) rotate3d(0, 1, 0, -190deg);
    -webkit-animation-timing-function: ease-out;
    animation-timing-function: ease-out;
  }
  50% {
    -webkit-transform: perspective(400px) translate3d(0, 0, 150px) rotate3d(0, 1, 0, -170deg);
    transform: perspective(400px) translate3d(0, 0, 150px) rotate3d(0, 1, 0, -170deg);
    -webkit-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
  80% {
    -webkit-transform: perspective(400px) scale3d(0.95, 0.95, 0.95);
    transform: perspective(400px) scale3d(0.95, 0.95, 0.95);
    -webkit-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
  100% {
    -webkit-transform: perspective(400px);
    transform: perspective(400px);
    -webkit-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
}

.animated.flip {
  -webkit-backface-visibility: visible;
  backface-visibility: visible;
  -webkit-animation-name: flip;
  animation-name: flip;
}

/**
* FlipInX Keyframes Animation
*/
@-webkit-keyframes flipInX {
  0% {
    -webkit-transform: perspective(400px) rotate3d(1, 0, 0, 90deg);
    transform: perspective(400px) rotate3d(1, 0, 0, 90deg);
    -webkit-transition-timing-function: ease-in;
    transition-timing-function: ease-in;
    opacity: 0;
  }
  40% {
    -webkit-transform: perspective(400px) rotate3d(1, 0, 0, -20deg);
    transform: perspective(400px) rotate3d(1, 0, 0, -20deg);
    -webkit-transition-timing-function: ease-in;
    transition-timing-function: ease-in;
  }
  60% {
    -webkit-transform: perspective(400px) rotate3d(1, 0, 0, 10deg);
    transform: perspective(400px) rotate3d(1, 0, 0, 10deg);
    opacity: 1;
  }
  80% {
    -webkit-transform: perspective(400px) rotate3d(1, 0, 0, -5deg);
    transform: perspective(400px) rotate3d(1, 0, 0, -5deg);
  }
  100% {
    -webkit-transform: perspective(400px);
    transform: perspective(400px);
  }
}

@keyframes flipInX {
  0% {
    -webkit-transform: perspective(400px) rotate3d(1, 0, 0, 90deg);
    transform: perspective(400px) rotate3d(1, 0, 0, 90deg);
    -webkit-transition-timing-function: ease-in;
    transition-timing-function: ease-in;
    opacity: 0;
  }
  40% {
    -webkit-transform: perspective(400px) rotate3d(1, 0, 0, -20deg);
    transform: perspective(400px) rotate3d(1, 0, 0, -20deg);
    -webkit-transition-timing-function: ease-in;
    transition-timing-function: ease-in;
  }
  60% {
    -webkit-transform: perspective(400px) rotate3d(1, 0, 0, 10deg);
    transform: perspective(400px) rotate3d(1, 0, 0, 10deg);
    opacity: 1;
  }
  80% {
    -webkit-transform: perspective(400px) rotate3d(1, 0, 0, -5deg);
    transform: perspective(400px) rotate3d(1, 0, 0, -5deg);
  }
  100% {
    -webkit-transform: perspective(400px);
    transform: perspective(400px);
  }
}

.flipInX {
  -webkit-backface-visibility: visible !important;
  backface-visibility: visible !important;
  -webkit-animation-name: flipInX;
  animation-name: flipInX;
}

/**
* FlipInY Keyframes Animation
*/
@-webkit-keyframes flipInY {
  0% {
    -webkit-transform: perspective(400px) rotate3d(0, 1, 0, 90deg);
    transform: perspective(400px) rotate3d(0, 1, 0, 90deg);
    -webkit-transition-timing-function: ease-in;
    transition-timing-function: ease-in;
    opacity: 0;
  }
  40% {
    -webkit-transform: perspective(400px) rotate3d(0, 1, 0, -20deg);
    transform: perspective(400px) rotate3d(0, 1, 0, -20deg);
    -webkit-transition-timing-function: ease-in;
    transition-timing-function: ease-in;
  }
  60% {
    -webkit-transform: perspective(400px) rotate3d(0, 1, 0, 10deg);
    transform: perspective(400px) rotate3d(0, 1, 0, 10deg);
    opacity: 1;
  }
  80% {
    -webkit-transform: perspective(400px) rotate3d(0, 1, 0, -5deg);
    transform: perspective(400px) rotate3d(0, 1, 0, -5deg);
  }
  100% {
    -webkit-transform: perspective(400px);
    transform: perspective(400px);
  }
}

@keyframes flipInY {
  0% {
    -webkit-transform: perspective(400px) rotate3d(0, 1, 0, 90deg);
    transform: perspective(400px) rotate3d(0, 1, 0, 90deg);
    -webkit-transition-timing-function: ease-in;
    transition-timing-function: ease-in;
    opacity: 0;
  }
  40% {
    -webkit-transform: perspective(400px) rotate3d(0, 1, 0, -20deg);
    transform: perspective(400px) rotate3d(0, 1, 0, -20deg);
    -webkit-transition-timing-function: ease-in;
    transition-timing-function: ease-in;
  }
  60% {
    -webkit-transform: perspective(400px) rotate3d(0, 1, 0, 10deg);
    transform: perspective(400px) rotate3d(0, 1, 0, 10deg);
    opacity: 1;
  }
  80% {
    -webkit-transform: perspective(400px) rotate3d(0, 1, 0, -5deg);
    transform: perspective(400px) rotate3d(0, 1, 0, -5deg);
  }
  100% {
    -webkit-transform: perspective(400px);
    transform: perspective(400px);
  }
}

.flipInY {
  -webkit-backface-visibility: visible !important;
  backface-visibility: visible !important;
  -webkit-animation-name: flipInY;
  animation-name: flipInY;
}

/**
* FlipOutX Keyframes Animation
*/
@-webkit-keyframes flipOutX {
  0% {
    -webkit-transform: perspective(400px);
    transform: perspective(400px);
  }
  30% {
    -webkit-transform: perspective(400px) rotate3d(1, 0, 0, -20deg);
    transform: perspective(400px) rotate3d(1, 0, 0, -20deg);
    opacity: 1;
  }
  100% {
    -webkit-transform: perspective(400px) rotate3d(1, 0, 0, 90deg);
    transform: perspective(400px) rotate3d(1, 0, 0, 90deg);
    opacity: 0;
  }
}

@keyframes flipOutX {
  0% {
    -webkit-transform: perspective(400px);
    transform: perspective(400px);
  }
  30% {
    -webkit-transform: perspective(400px) rotate3d(1, 0, 0, -20deg);
    transform: perspective(400px) rotate3d(1, 0, 0, -20deg);
    opacity: 1;
  }
  100% {
    -webkit-transform: perspective(400px) rotate3d(1, 0, 0, 90deg);
    transform: perspective(400px) rotate3d(1, 0, 0, 90deg);
    opacity: 0;
  }
}

.flipOutX {
  -webkit-animation-name: flipOutX;
  animation-name: flipOutX;
  -webkit-animation-duration: .75s;
  animation-duration: .75s;
  -webkit-backface-visibility: visible !important;
  backface-visibility: visible !important;
}

/**
* FlipOutY Keyframes Animation
*/
@-webkit-keyframes flipOutY {
  0% {
    -webkit-transform: perspective(400px);
    transform: perspective(400px);
  }
  30% {
    -webkit-transform: perspective(400px) rotate3d(0, 1, 0, -15deg);
    transform: perspective(400px) rotate3d(0, 1, 0, -15deg);
    opacity: 1;
  }
  100% {
    -webkit-transform: perspective(400px) rotate3d(0, 1, 0, 90deg);
    transform: perspective(400px) rotate3d(0, 1, 0, 90deg);
    opacity: 0;
  }
}

@keyframes flipOutY {
  0% {
    -webkit-transform: perspective(400px);
    transform: perspective(400px);
  }
  30% {
    -webkit-transform: perspective(400px) rotate3d(0, 1, 0, -15deg);
    transform: perspective(400px) rotate3d(0, 1, 0, -15deg);
    opacity: 1;
  }
  100% {
    -webkit-transform: perspective(400px) rotate3d(0, 1, 0, 90deg);
    transform: perspective(400px) rotate3d(0, 1, 0, 90deg);
    opacity: 0;
  }
}

.flipOutY {
  -webkit-backface-visibility: visible !important;
  backface-visibility: visible !important;
  -webkit-animation-name: flipOutY;
  animation-name: flipOutY;
  -webkit-animation-duration: .75s;
  animation-duration: .75s;
}

/**
* LightSpeedIn Keyframes Animation
*/
@-webkit-keyframes lightSpeedIn {
  0% {
    -webkit-transform: translate3d(100%, 0, 0) skewX(-30deg);
    transform: translate3d(100%, 0, 0) skewX(-30deg);
    opacity: 0;
  }
  60% {
    -webkit-transform: skewX(20deg);
    transform: skewX(20deg);
    opacity: 1;
  }
  80% {
    -webkit-transform: skewX(-5deg);
    transform: skewX(-5deg);
    opacity: 1;
  }
  100% {
    -webkit-transform: none;
    transform: none;
    opacity: 1;
  }
}

@keyframes lightSpeedIn {
  0% {
    -webkit-transform: translate3d(100%, 0, 0) skewX(-30deg);
    transform: translate3d(100%, 0, 0) skewX(-30deg);
    opacity: 0;
  }
  60% {
    -webkit-transform: skewX(20deg);
    transform: skewX(20deg);
    opacity: 1;
  }
  80% {
    -webkit-transform: skewX(-5deg);
    transform: skewX(-5deg);
    opacity: 1;
  }
  100% {
    -webkit-transform: none;
    transform: none;
    opacity: 1;
  }
}

.lightSpeedIn {
  -webkit-animation-name: lightSpeedIn;
  animation-name: lightSpeedIn;
  -webkit-animation-timing-function: ease-out;
  animation-timing-function: ease-out;
}

/**
* LightSpeedOut Keyframes Animation
*/
@-webkit-keyframes lightSpeedOut {
  0% {
    opacity: 1;
  }
  100% {
    -webkit-transform: translate3d(100%, 0, 0) skewX(30deg);
    transform: translate3d(100%, 0, 0) skewX(30deg);
    opacity: 0;
  }
}

@keyframes lightSpeedOut {
  0% {
    opacity: 1;
  }
  100% {
    -webkit-transform: translate3d(100%, 0, 0) skewX(30deg);
    transform: translate3d(100%, 0, 0) skewX(30deg);
    opacity: 0;
  }
}

.lightSpeedOut {
  -webkit-animation-name: lightSpeedOut;
  animation-name: lightSpeedOut;
  -webkit-animation-timing-function: ease-in;
  animation-timing-function: ease-in;
}

/**
* RotateIn Keyframes Animation
*/
@-webkit-keyframes rotateIn {
  0% {
    -webkit-transform-origin: center;
    transform-origin: center;
    -webkit-transform: rotate3d(0, 0, 1, -200deg);
    transform: rotate3d(0, 0, 1, -200deg);
    opacity: 0;
  }
  100% {
    -webkit-transform-origin: center;
    transform-origin: center;
    -webkit-transform: none;
    transform: none;
    opacity: 1;
  }
}

@keyframes rotateIn {
  0% {
    -webkit-transform-origin: center;
    transform-origin: center;
    -webkit-transform: rotate3d(0, 0, 1, -200deg);
    transform: rotate3d(0, 0, 1, -200deg);
    opacity: 0;
  }
  100% {
    -webkit-transform-origin: center;
    transform-origin: center;
    -webkit-transform: none;
    transform: none;
    opacity: 1;
  }
}

.rotateIn {
  -webkit-animation-name: rotateIn;
  animation-name: rotateIn;
}

/**
* RotateInDownLeft Keyframes Animation
*/
@-webkit-keyframes rotateInDownLeft {
  0% {
    -webkit-transform-origin: left bottom;
    transform-origin: left bottom;
    -webkit-transform: rotate3d(0, 0, 1, -45deg);
    transform: rotate3d(0, 0, 1, -45deg);
    opacity: 0;
  }
  100% {
    -webkit-transform-origin: left bottom;
    transform-origin: left bottom;
    -webkit-transform: none;
    transform: none;
    opacity: 1;
  }
}

@keyframes rotateInDownLeft {
  0% {
    -webkit-transform-origin: left bottom;
    transform-origin: left bottom;
    -webkit-transform: rotate3d(0, 0, 1, -45deg);
    transform: rotate3d(0, 0, 1, -45deg);
    opacity: 0;
  }
  100% {
    -webkit-transform-origin: left bottom;
    transform-origin: left bottom;
    -webkit-transform: none;
    transform: none;
    opacity: 1;
  }
}

.rotateInDownLeft {
  -webkit-animation-name: rotateInDownLeft;
  animation-name: rotateInDownLeft;
}

/**
* RotateInDownRight Keyframes Animation
*/
@-webkit-keyframes rotateInDownRight {
  0% {
    -webkit-transform-origin: right bottom;
    transform-origin: right bottom;
    -webkit-transform: rotate3d(0, 0, 1, 45deg);
    transform: rotate3d(0, 0, 1, 45deg);
    opacity: 0;
  }
  100% {
    -webkit-transform-origin: right bottom;
    transform-origin: right bottom;
    -webkit-transform: none;
    transform: none;
    opacity: 1;
  }
}

@keyframes rotateInDownRight {
  0% {
    -webkit-transform-origin: right bottom;
    transform-origin: right bottom;
    -webkit-transform: rotate3d(0, 0, 1, 45deg);
    transform: rotate3d(0, 0, 1, 45deg);
    opacity: 0;
  }
  100% {
    -webkit-transform-origin: right bottom;
    transform-origin: right bottom;
    -webkit-transform: none;
    transform: none;
    opacity: 1;
  }
}

.rotateInDownRight {
  -webkit-animation-name: rotateInDownRight;
  animation-name: rotateInDownRight;
}

/**
* RotateInUpLeft Keyframes Animation
*/
@-webkit-keyframes rotateInUpLeft {
  0% {
    -webkit-transform-origin: left bottom;
    transform-origin: left bottom;
    -webkit-transform: rotate3d(0, 0, 1, 45deg);
    transform: rotate3d(0, 0, 1, 45deg);
    opacity: 0;
  }
  100% {
    -webkit-transform-origin: left bottom;
    transform-origin: left bottom;
    -webkit-transform: none;
    transform: none;
    opacity: 1;
  }
}

@keyframes rotateInUpLeft {
  0% {
    -webkit-transform-origin: left bottom;
    transform-origin: left bottom;
    -webkit-transform: rotate3d(0, 0, 1, 45deg);
    transform: rotate3d(0, 0, 1, 45deg);
    opacity: 0;
  }
  100% {
    -webkit-transform-origin: left bottom;
    transform-origin: left bottom;
    -webkit-transform: none;
    transform: none;
    opacity: 1;
  }
}

.rotateInUpLeft {
  -webkit-animation-name: rotateInUpLeft;
  animation-name: rotateInUpLeft;
}

/**
* RotateInUpRight Keyframes Animation
*/
@-webkit-keyframes rotateInUpRight {
  0% {
    -webkit-transform-origin: right bottom;
    transform-origin: right bottom;
    -webkit-transform: rotate3d(0, 0, 1, -90deg);
    transform: rotate3d(0, 0, 1, -90deg);
    opacity: 0;
  }
  100% {
    -webkit-transform-origin: right bottom;
    transform-origin: right bottom;
    -webkit-transform: none;
    transform: none;
    opacity: 1;
  }
}

@keyframes rotateInUpRight {
  0% {
    -webkit-transform-origin: right bottom;
    transform-origin: right bottom;
    -webkit-transform: rotate3d(0, 0, 1, -90deg);
    transform: rotate3d(0, 0, 1, -90deg);
    opacity: 0;
  }
  100% {
    -webkit-transform-origin: right bottom;
    transform-origin: right bottom;
    -webkit-transform: none;
    transform: none;
    opacity: 1;
  }
}

.rotateInUpRight {
  -webkit-animation-name: rotateInUpRight;
  animation-name: rotateInUpRight;
}

/**
* RotateOut Keyframes Animation
*/
@-webkit-keyframes rotateOut {
  0% {
    -webkit-transform-origin: center;
    transform-origin: center;
    opacity: 1;
  }
  100% {
    -webkit-transform-origin: center;
    transform-origin: center;
    -webkit-transform: rotate3d(0, 0, 1, 200deg);
    transform: rotate3d(0, 0, 1, 200deg);
    opacity: 0;
  }
}

@keyframes rotateOut {
  0% {
    -webkit-transform-origin: center;
    transform-origin: center;
    opacity: 1;
  }
  100% {
    -webkit-transform-origin: center;
    transform-origin: center;
    -webkit-transform: rotate3d(0, 0, 1, 200deg);
    transform: rotate3d(0, 0, 1, 200deg);
    opacity: 0;
  }
}

.rotateOut {
  -webkit-animation-name: rotateOut;
  animation-name: rotateOut;
}

/**
* RotateOutDownLeft Keyframes Animation
*/
@-webkit-keyframes rotateOutDownLeft {
  0% {
    -webkit-transform-origin: left bottom;
    transform-origin: left bottom;
    opacity: 1;
  }
  100% {
    -webkit-transform-origin: left bottom;
    transform-origin: left bottom;
    -webkit-transform: rotate3d(0, 0, 1, 45deg);
    transform: rotate3d(0, 0, 1, 45deg);
    opacity: 0;
  }
}

@keyframes rotateOutDownLeft {
  0% {
    -webkit-transform-origin: left bottom;
    transform-origin: left bottom;
    opacity: 1;
  }
  100% {
    -webkit-transform-origin: left bottom;
    transform-origin: left bottom;
    -webkit-transform: rotate3d(0, 0, 1, 45deg);
    transform: rotate3d(0, 0, 1, 45deg);
    opacity: 0;
  }
}

.rotateOutDownLeft {
  -webkit-animation-name: rotateOutDownLeft;
  animation-name: rotateOutDownLeft;
}

/**
* RotateOutDownRight Keyframes Animation
*/
@-webkit-keyframes rotateOutDownRight {
  0% {
    -webkit-transform-origin: right bottom;
    transform-origin: right bottom;
    opacity: 1;
  }
  100% {
    -webkit-transform-origin: right bottom;
    transform-origin: right bottom;
    -webkit-transform: rotate3d(0, 0, 1, -45deg);
    transform: rotate3d(0, 0, 1, -45deg);
    opacity: 0;
  }
}

@keyframes rotateOutDownRight {
  0% {
    -webkit-transform-origin: right bottom;
    transform-origin: right bottom;
    opacity: 1;
  }
  100% {
    -webkit-transform-origin: right bottom;
    transform-origin: right bottom;
    -webkit-transform: rotate3d(0, 0, 1, -45deg);
    transform: rotate3d(0, 0, 1, -45deg);
    opacity: 0;
  }
}

.rotateOutDownRight {
  -webkit-animation-name: rotateOutDownRight;
  animation-name: rotateOutDownRight;
}

/**
* RotateOutUpLeft Keyframes Animation
*/
@-webkit-keyframes rotateOutUpLeft {
  0% {
    -webkit-transform-origin: left bottom;
    transform-origin: left bottom;
    opacity: 1;
  }
  100% {
    -webkit-transform-origin: left bottom;
    transform-origin: left bottom;
    -webkit-transform: rotate3d(0, 0, 1, -45deg);
    transform: rotate3d(0, 0, 1, -45deg);
    opacity: 0;
  }
}

@keyframes rotateOutUpLeft {
  0% {
    -webkit-transform-origin: left bottom;
    transform-origin: left bottom;
    opacity: 1;
  }
  100% {
    -webkit-transform-origin: left bottom;
    transform-origin: left bottom;
    -webkit-transform: rotate3d(0, 0, 1, -45deg);
    transform: rotate3d(0, 0, 1, -45deg);
    opacity: 0;
  }
}

.rotateOutUpLeft {
  -webkit-animation-name: rotateOutUpLeft;
  animation-name: rotateOutUpLeft;
}

/**
* RotateOutUpRight Keyframes Animation
*/
@-webkit-keyframes rotateOutUpRight {
  0% {
    -webkit-transform-origin: right bottom;
    transform-origin: right bottom;
    opacity: 1;
  }
  100% {
    -webkit-transform-origin: right bottom;
    transform-origin: right bottom;
    -webkit-transform: rotate3d(0, 0, 1, 90deg);
    transform: rotate3d(0, 0, 1, 90deg);
    opacity: 0;
  }
}

@keyframes rotateOutUpRight {
  0% {
    -webkit-transform-origin: right bottom;
    transform-origin: right bottom;
    opacity: 1;
  }
  100% {
    -webkit-transform-origin: right bottom;
    transform-origin: right bottom;
    -webkit-transform: rotate3d(0, 0, 1, 90deg);
    transform: rotate3d(0, 0, 1, 90deg);
    opacity: 0;
  }
}

.rotateOutUpRight {
  -webkit-animation-name: rotateOutUpRight;
  animation-name: rotateOutUpRight;
}

/**
* Hinge Keyframes Animation
*/
@-webkit-keyframes hinge {
  0% {
    -webkit-transform-origin: top left;
    transform-origin: top left;
    -webkit-animation-timing-function: ease-in-out;
    animation-timing-function: ease-in-out;
  }
  20%, 60% {
    -webkit-transform: rotate3d(0, 0, 1, 80deg);
    transform: rotate3d(0, 0, 1, 80deg);
    -webkit-transform-origin: top left;
    transform-origin: top left;
    -webkit-animation-timing-function: ease-in-out;
    animation-timing-function: ease-in-out;
  }
  40%, 80% {
    -webkit-transform: rotate3d(0, 0, 1, 60deg);
    transform: rotate3d(0, 0, 1, 60deg);
    -webkit-transform-origin: top left;
    transform-origin: top left;
    -webkit-animation-timing-function: ease-in-out;
    animation-timing-function: ease-in-out;
    opacity: 1;
  }
  100% {
    -webkit-transform: translate3d(0, 700px, 0);
    transform: translate3d(0, 700px, 0);
    opacity: 0;
  }
}

@keyframes hinge {
  0% {
    -webkit-transform-origin: top left;
    transform-origin: top left;
    -webkit-animation-timing-function: ease-in-out;
    animation-timing-function: ease-in-out;
  }
  20%, 60% {
    -webkit-transform: rotate3d(0, 0, 1, 80deg);
    transform: rotate3d(0, 0, 1, 80deg);
    -webkit-transform-origin: top left;
    transform-origin: top left;
    -webkit-animation-timing-function: ease-in-out;
    animation-timing-function: ease-in-out;
  }
  40%, 80% {
    -webkit-transform: rotate3d(0, 0, 1, 60deg);
    transform: rotate3d(0, 0, 1, 60deg);
    -webkit-transform-origin: top left;
    transform-origin: top left;
    -webkit-animation-timing-function: ease-in-out;
    animation-timing-function: ease-in-out;
    opacity: 1;
  }
  100% {
    -webkit-transform: translate3d(0, 700px, 0);
    transform: translate3d(0, 700px, 0);
    opacity: 0;
  }
}

.hinge {
  -webkit-animation-name: hinge;
  animation-name: hinge;
}

/**
* RollIn Keyframes Animation
*
* @author Nick Pettit
* @link https://github.com/nickpettit/glide
*/
@-webkit-keyframes rollIn {
  0% {
    opacity: 0;
    -webkit-transform: translate3d(-100%, 0, 0) rotate3d(0, 0, 1, -120deg);
    transform: translate3d(-100%, 0, 0) rotate3d(0, 0, 1, -120deg);
  }
  100% {
    opacity: 1;
    -webkit-transform: none;
    transform: none;
  }
}

@keyframes rollIn {
  0% {
    opacity: 0;
    -webkit-transform: translate3d(-100%, 0, 0) rotate3d(0, 0, 1, -120deg);
    -ms-transform: translate3d(-100%, 0, 0) rotate3d(0, 0, 1, -120deg);
    transform: translate3d(-100%, 0, 0) rotate3d(0, 0, 1, -120deg);
  }
  100% {
    opacity: 1;
    -webkit-transform: none;
    -ms-transform: none;
    transform: none;
  }
}

.rollIn {
  -webkit-animation-name: rollIn;
  animation-name: rollIn;
}

/**
* RollOut Keyframes Animation
*
* @author Nick Pettit
* @link https://github.com/nickpettit/glide
*/
@-webkit-keyframes rollOut {
  0% {
    opacity: 1;
  }
  100% {
    opacity: 0;
    -webkit-transform: translate3d(100%, 0, 0) rotate3d(0, 0, 1, 120deg);
    transform: translate3d(100%, 0, 0) rotate3d(0, 0, 1, 120deg);
  }
}

@keyframes rollOut {
  0% {
    opacity: 1;
  }
  100% {
    opacity: 0;
    -webkit-transform: translate3d(100%, 0, 0) rotate3d(0, 0, 1, 120deg);
    transform: translate3d(100%, 0, 0) rotate3d(0, 0, 1, 120deg);
  }
}

.rollOut {
  -webkit-animation-name: rollOut;
  animation-name: rollOut;
}

/**
* ZoomIn Keyframes Animation
*/
@-webkit-keyframes zoomIn {
  0% {
    opacity: 0;
    -webkit-transform: scale3d(0.3, 0.3, 0.3);
    transform: scale3d(0.3, 0.3, 0.3);
  }
  50% {
    opacity: 1;
  }
}

@keyframes zoomIn {
  0% {
    opacity: 0;
    -webkit-transform: scale3d(0.3, 0.3, 0.3);
    transform: scale3d(0.3, 0.3, 0.3);
  }
  50% {
    opacity: 1;
  }
}

.zoomIn {
  -webkit-animation-name: zoomIn;
  animation-name: zoomIn;
}

/**
* ZoomInDown Keyframes Animation
*/
@-webkit-keyframes zoomInDown {
  0% {
    opacity: 0;
    -webkit-transform: scale3d(0.1, 0.1, 0.1) translate3d(0, -1000px, 0);
    transform: scale3d(0.1, 0.1, 0.1) translate3d(0, -1000px, 0);
    -webkit-animation-timing-function: cubic-bezier(0.55, 0.055, 0.675, 0.19);
    animation-timing-function: cubic-bezier(0.55, 0.055, 0.675, 0.19);
  }
  60% {
    opacity: 1;
    -webkit-transform: scale3d(0.475, 0.475, 0.475) translate3d(0, 60px, 0);
    transform: scale3d(0.475, 0.475, 0.475) translate3d(0, 60px, 0);
    -webkit-animation-timing-function: cubic-bezier(0.175, 0.885, 0.32, 1);
    animation-timing-function: cubic-bezier(0.175, 0.885, 0.32, 1);
  }
}

@keyframes zoomInDown {
  0% {
    opacity: 0;
    -webkit-transform: scale3d(0.1, 0.1, 0.1) translate3d(0, -1000px, 0);
    transform: scale3d(0.1, 0.1, 0.1) translate3d(0, -1000px, 0);
    -webkit-animation-timing-function: cubic-bezier(0.55, 0.055, 0.675, 0.19);
    animation-timing-function: cubic-bezier(0.55, 0.055, 0.675, 0.19);
  }
  60% {
    opacity: 1;
    -webkit-transform: scale3d(0.475, 0.475, 0.475) translate3d(0, 60px, 0);
    transform: scale3d(0.475, 0.475, 0.475) translate3d(0, 60px, 0);
    -webkit-animation-timing-function: cubic-bezier(0.175, 0.885, 0.32, 1);
    animation-timing-function: cubic-bezier(0.175, 0.885, 0.32, 1);
  }
}

.zoomInDown {
  -webkit-animation-name: zoomInDown;
  animation-name: zoomInDown;
}

/**
* ZoomInLeft Keyframes Animation
*/
@-webkit-keyframes zoomInLeft {
  0% {
    opacity: 0;
    -webkit-transform: scale3d(0.1, 0.1, 0.1) translate3d(-1000px, 0, 0);
    transform: scale3d(0.1, 0.1, 0.1) translate3d(-1000px, 0, 0);
    -webkit-animation-timing-function: cubic-bezier(0.55, 0.055, 0.675, 0.19);
    animation-timing-function: cubic-bezier(0.55, 0.055, 0.675, 0.19);
  }
  60% {
    opacity: 1;
    -webkit-transform: scale3d(0.475, 0.475, 0.475) translate3d(10px, 0, 0);
    transform: scale3d(0.475, 0.475, 0.475) translate3d(10px, 0, 0);
    -webkit-animation-timing-function: cubic-bezier(0.175, 0.885, 0.32, 1);
    animation-timing-function: cubic-bezier(0.175, 0.885, 0.32, 1);
  }
}

@keyframes zoomInLeft {
  0% {
    opacity: 0;
    -webkit-transform: scale3d(0.1, 0.1, 0.1) translate3d(-1000px, 0, 0);
    transform: scale3d(0.1, 0.1, 0.1) translate3d(-1000px, 0, 0);
    -webkit-animation-timing-function: cubic-bezier(0.55, 0.055, 0.675, 0.19);
    animation-timing-function: cubic-bezier(0.55, 0.055, 0.675, 0.19);
  }
  60% {
    opacity: 1;
    -webkit-transform: scale3d(0.475, 0.475, 0.475) translate3d(10px, 0, 0);
    transform: scale3d(0.475, 0.475, 0.475) translate3d(10px, 0, 0);
    -webkit-animation-timing-function: cubic-bezier(0.175, 0.885, 0.32, 1);
    animation-timing-function: cubic-bezier(0.175, 0.885, 0.32, 1);
  }
}

.zoomInLeft {
  -webkit-animation-name: zoomInLeft;
  animation-name: zoomInLeft;
}

/**
* ZoomInRight Keyframes Animation
*/
@-webkit-keyframes zoomInRight {
  0% {
    opacity: 0;
    -webkit-transform: scale3d(0.1, 0.1, 0.1) translate3d(1000px, 0, 0);
    transform: scale3d(0.1, 0.1, 0.1) translate3d(1000px, 0, 0);
    -webkit-animation-timing-function: cubic-bezier(0.55, 0.055, 0.675, 0.19);
    animation-timing-function: cubic-bezier(0.55, 0.055, 0.675, 0.19);
  }
  60% {
    opacity: 1;
    -webkit-transform: scale3d(0.475, 0.475, 0.475) translate3d(-10px, 0, 0);
    transform: scale3d(0.475, 0.475, 0.475) translate3d(-10px, 0, 0);
    -webkit-animation-timing-function: cubic-bezier(0.175, 0.885, 0.32, 1);
    animation-timing-function: cubic-bezier(0.175, 0.885, 0.32, 1);
  }
}

@keyframes zoomInRight {
  0% {
    opacity: 0;
    -webkit-transform: scale3d(0.1, 0.1, 0.1) translate3d(1000px, 0, 0);
    transform: scale3d(0.1, 0.1, 0.1) translate3d(1000px, 0, 0);
    -webkit-animation-timing-function: cubic-bezier(0.55, 0.055, 0.675, 0.19);
    animation-timing-function: cubic-bezier(0.55, 0.055, 0.675, 0.19);
  }
  60% {
    opacity: 1;
    -webkit-transform: scale3d(0.475, 0.475, 0.475) translate3d(-10px, 0, 0);
    transform: scale3d(0.475, 0.475, 0.475) translate3d(-10px, 0, 0);
    -webkit-animation-timing-function: cubic-bezier(0.175, 0.885, 0.32, 1);
    animation-timing-function: cubic-bezier(0.175, 0.885, 0.32, 1);
  }
}

.zoomInRight {
  -webkit-animation-name: zoomInRight;
  animation-name: zoomInRight;
}

/**
* ZoomInUp Keyframes Animation
*/
@-webkit-keyframes zoomInUp {
  0% {
    opacity: 0;
    -webkit-transform: scale3d(0.1, 0.1, 0.1) translate3d(0, 1000px, 0);
    transform: scale3d(0.1, 0.1, 0.1) translate3d(0, 1000px, 0);
    -webkit-animation-timing-function: cubic-bezier(0.55, 0.055, 0.675, 0.19);
    animation-timing-function: cubic-bezier(0.55, 0.055, 0.675, 0.19);
  }
  60% {
    opacity: 1;
    -webkit-transform: scale3d(0.475, 0.475, 0.475) translate3d(0, -60px, 0);
    transform: scale3d(0.475, 0.475, 0.475) translate3d(0, -60px, 0);
    -webkit-animation-timing-function: cubic-bezier(0.175, 0.885, 0.32, 1);
    animation-timing-function: cubic-bezier(0.175, 0.885, 0.32, 1);
  }
}

@keyframes zoomInUp {
  0% {
    opacity: 0;
    -webkit-transform: scale3d(0.1, 0.1, 0.1) translate3d(0, 1000px, 0);
    transform: scale3d(0.1, 0.1, 0.1) translate3d(0, 1000px, 0);
    -webkit-animation-timing-function: cubic-bezier(0.55, 0.055, 0.675, 0.19);
    animation-timing-function: cubic-bezier(0.55, 0.055, 0.675, 0.19);
  }
  60% {
    opacity: 1;
    -webkit-transform: scale3d(0.475, 0.475, 0.475) translate3d(0, -60px, 0);
    transform: scale3d(0.475, 0.475, 0.475) translate3d(0, -60px, 0);
    -webkit-animation-timing-function: cubic-bezier(0.175, 0.885, 0.32, 1);
    animation-timing-function: cubic-bezier(0.175, 0.885, 0.32, 1);
  }
}

.zoomInUp {
  -webkit-animation-name: zoomInUp;
  animation-name: zoomInUp;
}

/**
* ZoomOut Keyframes Animation
*/
@-webkit-keyframes zoomOut {
  0% {
    opacity: 1;
  }
  50% {
    opacity: 0;
    -webkit-transform: scale3d(0.3, 0.3, 0.3);
    transform: scale3d(0.3, 0.3, 0.3);
  }
  100% {
    opacity: 0;
  }
}

@keyframes zoomOut {
  0% {
    opacity: 1;
  }
  50% {
    opacity: 0;
    -webkit-transform: scale3d(0.3, 0.3, 0.3);
    transform: scale3d(0.3, 0.3, 0.3);
  }
  100% {
    opacity: 0;
  }
}

.zoomOut {
  -webkit-animation-name: zoomOut;
  animation-name: zoomOut;
}

/**
* ZoomOutDown Keyframes Animation
*/
@-webkit-keyframes zoomOutDown {
  40% {
    opacity: 1;
    -webkit-transform: scale3d(0.475, 0.475, 0.475) translate3d(0, -60px, 0);
    transform: scale3d(0.475, 0.475, 0.475) translate3d(0, -60px, 0);
    -webkit-animation-timing-function: cubic-bezier(0.55, 0.055, 0.675, 0.19);
    animation-timing-function: cubic-bezier(0.55, 0.055, 0.675, 0.19);
  }
  100% {
    opacity: 0;
    -webkit-transform: scale3d(0.1, 0.1, 0.1) translate3d(0, 2000px, 0);
    transform: scale3d(0.1, 0.1, 0.1) translate3d(0, 2000px, 0);
    -webkit-transform-origin: center bottom;
    transform-origin: center bottom;
    -webkit-animation-timing-function: cubic-bezier(0.175, 0.885, 0.32, 1);
    animation-timing-function: cubic-bezier(0.175, 0.885, 0.32, 1);
  }
}

@keyframes zoomOutDown {
  40% {
    opacity: 1;
    -webkit-transform: scale3d(0.475, 0.475, 0.475) translate3d(0, -60px, 0);
    transform: scale3d(0.475, 0.475, 0.475) translate3d(0, -60px, 0);
    -webkit-animation-timing-function: cubic-bezier(0.55, 0.055, 0.675, 0.19);
    animation-timing-function: cubic-bezier(0.55, 0.055, 0.675, 0.19);
  }
  100% {
    opacity: 0;
    -webkit-transform: scale3d(0.1, 0.1, 0.1) translate3d(0, 2000px, 0);
    transform: scale3d(0.1, 0.1, 0.1) translate3d(0, 2000px, 0);
    -webkit-transform-origin: center bottom;
    transform-origin: center bottom;
    -webkit-animation-timing-function: cubic-bezier(0.175, 0.885, 0.32, 1);
    animation-timing-function: cubic-bezier(0.175, 0.885, 0.32, 1);
  }
}

.zoomOutDown {
  -webkit-animation-name: zoomOutDown;
  animation-name: zoomOutDown;
}

/**
* ZoomOutLeft Keyframes Animation
*/
@-webkit-keyframes zoomOutLeft {
  40% {
    opacity: 1;
    -webkit-transform: scale3d(0.475, 0.475, 0.475) translate3d(42px, 0, 0);
    transform: scale3d(0.475, 0.475, 0.475) translate3d(42px, 0, 0);
  }
  100% {
    opacity: 0;
    -webkit-transform: scale(0.1) translate3d(-2000px, 0, 0);
    transform: scale(0.1) translate3d(-2000px, 0, 0);
    -webkit-transform-origin: left center;
    transform-origin: left center;
  }
}

@keyframes zoomOutLeft {
  40% {
    opacity: 1;
    -webkit-transform: scale3d(0.475, 0.475, 0.475) translate3d(42px, 0, 0);
    transform: scale3d(0.475, 0.475, 0.475) translate3d(42px, 0, 0);
  }
  100% {
    opacity: 0;
    -webkit-transform: scale(0.1) translate3d(-2000px, 0, 0);
    transform: scale(0.1) translate3d(-2000px, 0, 0);
    -webkit-transform-origin: left center;
    transform-origin: left center;
  }
}

.zoomOutLeft {
  -webkit-animation-name: zoomOutLeft;
  animation-name: zoomOutLeft;
}

/**
* ZoomOutRight Keyframes Animation
*/
@-webkit-keyframes zoomOutRight {
  40% {
    opacity: 1;
    -webkit-transform: scale3d(0.475, 0.475, 0.475) translate3d(-42px, 0, 0);
    transform: scale3d(0.475, 0.475, 0.475) translate3d(-42px, 0, 0);
  }
  100% {
    opacity: 0;
    -webkit-transform: scale(0.1) translate3d(2000px, 0, 0);
    transform: scale(0.1) translate3d(2000px, 0, 0);
    -webkit-transform-origin: right center;
    transform-origin: right center;
  }
}

@keyframes zoomOutRight {
  40% {
    opacity: 1;
    -webkit-transform: scale3d(0.475, 0.475, 0.475) translate3d(-42px, 0, 0);
    transform: scale3d(0.475, 0.475, 0.475) translate3d(-42px, 0, 0);
  }
  100% {
    opacity: 0;
    -webkit-transform: scale(0.1) translate3d(2000px, 0, 0);
    transform: scale(0.1) translate3d(2000px, 0, 0);
    -webkit-transform-origin: right center;
    transform-origin: right center;
  }
}

.zoomOutRight {
  -webkit-animation-name: zoomOutRight;
  animation-name: zoomOutRight;
}

/**
* ZoomOutUp Keyframes Animation
*/
@-webkit-keyframes zoomOutUp {
  40% {
    opacity: 1;
    -webkit-transform: scale3d(0.475, 0.475, 0.475) translate3d(0, 60px, 0);
    transform: scale3d(0.475, 0.475, 0.475) translate3d(0, 60px, 0);
    -webkit-animation-timing-function: cubic-bezier(0.55, 0.055, 0.675, 0.19);
    animation-timing-function: cubic-bezier(0.55, 0.055, 0.675, 0.19);
  }
  100% {
    opacity: 0;
    -webkit-transform: scale3d(0.1, 0.1, 0.1) translate3d(0, -2000px, 0);
    transform: scale3d(0.1, 0.1, 0.1) translate3d(0, -2000px, 0);
    -webkit-transform-origin: center bottom;
    transform-origin: center bottom;
    -webkit-animation-timing-function: cubic-bezier(0.175, 0.885, 0.32, 1);
    animation-timing-function: cubic-bezier(0.175, 0.885, 0.32, 1);
  }
}

@keyframes zoomOutUp {
  40% {
    opacity: 1;
    -webkit-transform: scale3d(0.475, 0.475, 0.475) translate3d(0, 60px, 0);
    transform: scale3d(0.475, 0.475, 0.475) translate3d(0, 60px, 0);
    -webkit-animation-timing-function: cubic-bezier(0.55, 0.055, 0.675, 0.19);
    animation-timing-function: cubic-bezier(0.55, 0.055, 0.675, 0.19);
  }
  100% {
    opacity: 0;
    -webkit-transform: scale3d(0.1, 0.1, 0.1) translate3d(0, -2000px, 0);
    transform: scale3d(0.1, 0.1, 0.1) translate3d(0, -2000px, 0);
    -webkit-transform-origin: center bottom;
    transform-origin: center bottom;
    -webkit-animation-timing-function: cubic-bezier(0.175, 0.885, 0.32, 1);
    animation-timing-function: cubic-bezier(0.175, 0.885, 0.32, 1);
  }
}

.zoomOutUp {
  -webkit-animation-name: zoomOutUp;
  animation-name: zoomOutUp;
}

/**
* SlideInDown Keyframes Animation
*/
@-webkit-keyframes slideInDown {
  0% {
    -webkit-transform: translate3d(0, -100%, 0);
    transform: translate3d(0, -100%, 0);
    visibility: visible;
  }
  100% {
    -webkit-transform: translate3d(0, 0, 0);
    transform: translate3d(0, 0, 0);
  }
}

@keyframes slideInDown {
  0% {
    -webkit-transform: translate3d(0, -100%, 0);
    transform: translate3d(0, -100%, 0);
    visibility: visible;
  }
  100% {
    -webkit-transform: translate3d(0, 0, 0);
    transform: translate3d(0, 0, 0);
  }
}

.slideInDown {
  -webkit-animation-name: slideInDown;
  animation-name: slideInDown;
}

/**
* SlideInLeft Keyframes Animation
*/
@-webkit-keyframes slideInLeft {
  0% {
    -webkit-transform: translate3d(-100%, 0, 0);
    transform: translate3d(-100%, 0, 0);
    visibility: visible;
  }
  100% {
    -webkit-transform: translate3d(0, 0, 0);
    transform: translate3d(0, 0, 0);
  }
}

@keyframes slideInLeft {
  0% {
    -webkit-transform: translate3d(-100%, 0, 0);
    transform: translate3d(-100%, 0, 0);
    visibility: visible;
  }
  100% {
    -webkit-transform: translate3d(0, 0, 0);
    transform: translate3d(0, 0, 0);
  }
}

.slideInLeft {
  -webkit-animation-name: slideInLeft;
  animation-name: slideInLeft;
}

/**
* SlideInRight Keyframes Animation
*/
@-webkit-keyframes slideInRight {
  0% {
    -webkit-transform: translate3d(100%, 0, 0);
    transform: translate3d(100%, 0, 0);
    visibility: visible;
  }
  100% {
    -webkit-transform: translate3d(0, 0, 0);
    transform: translate3d(0, 0, 0);
  }
}

@keyframes slideInRight {
  0% {
    -webkit-transform: translate3d(100%, 0, 0);
    transform: translate3d(100%, 0, 0);
    visibility: visible;
  }
  100% {
    -webkit-transform: translate3d(0, 0, 0);
    transform: translate3d(0, 0, 0);
  }
}

.slideInRight {
  -webkit-animation-name: slideInRight;
  animation-name: slideInRight;
}

/**
* SlideInUp Keyframes Animation
*/
@-webkit-keyframes slideInUp {
  0% {
    -webkit-transform: translate3d(0, 100%, 0);
    transform: translate3d(0, 100%, 0);
    visibility: visible;
  }
  100% {
    -webkit-transform: translate3d(0, 0, 0);
    transform: translate3d(0, 0, 0);
  }
}

@keyframes slideInUp {
  0% {
    -webkit-transform: translate3d(0, 100%, 0);
    transform: translate3d(0, 100%, 0);
    visibility: visible;
  }
  100% {
    -webkit-transform: translate3d(0, 0, 0);
    transform: translate3d(0, 0, 0);
  }
}

.slideInUp {
  -webkit-animation-name: slideInUp;
  animation-name: slideInUp;
}

/**
* SlideOutDown Keyframes Animation
*/
@-webkit-keyframes slideOutDown {
  0% {
    -webkit-transform: translate3d(0, 0, 0);
    transform: translate3d(0, 0, 0);
  }
  100% {
    visibility: hidden;
    -webkit-transform: translate3d(0, 100%, 0);
    transform: translate3d(0, 100%, 0);
  }
}

@keyframes slideOutDown {
  0% {
    -webkit-transform: translate3d(0, 0, 0);
    transform: translate3d(0, 0, 0);
  }
  100% {
    visibility: hidden;
    -webkit-transform: translate3d(0, 100%, 0);
    transform: translate3d(0, 100%, 0);
  }
}

.slideOutDown {
  -webkit-animation-name: slideOutDown;
  animation-name: slideOutDown;
}

/**
* SlideOutLeft Keyframes Animation
*/
@-webkit-keyframes slideOutLeft {
  0% {
    -webkit-transform: translate3d(0, 0, 0);
    transform: translate3d(0, 0, 0);
  }
  100% {
    visibility: hidden;
    -webkit-transform: translate3d(-100%, 0, 0);
    transform: translate3d(-100%, 0, 0);
  }
}

@keyframes slideOutLeft {
  0% {
    -webkit-transform: translate3d(0, 0, 0);
    transform: translate3d(0, 0, 0);
  }
  100% {
    visibility: hidden;
    -webkit-transform: translate3d(-100%, 0, 0);
    transform: translate3d(-100%, 0, 0);
  }
}

.slideOutLeft {
  -webkit-animation-name: slideOutLeft;
  animation-name: slideOutLeft;
}

/**
* SlideOutRight Keyframes Animation
*/
@-webkit-keyframes slideOutRight {
  0% {
    -webkit-transform: translate3d(0, 0, 0);
    transform: translate3d(0, 0, 0);
  }
  100% {
    visibility: hidden;
    -webkit-transform: translate3d(100%, 0, 0);
    transform: translate3d(100%, 0, 0);
  }
}

@keyframes slideOutRight {
  0% {
    -webkit-transform: translate3d(0, 0, 0);
    transform: translate3d(0, 0, 0);
  }
  100% {
    visibility: hidden;
    -webkit-transform: translate3d(100%, 0, 0);
    transform: translate3d(100%, 0, 0);
  }
}

.slideOutRight {
  -webkit-animation-name: slideOutRight;
  animation-name: slideOutRight;
}

/**
* SlideOutUp Keyframes Animation
*/
@-webkit-keyframes slideOutUp {
  0% {
    -webkit-transform: translate3d(0, 0, 0);
    transform: translate3d(0, 0, 0);
  }
  100% {
    visibility: hidden;
    -webkit-transform: translate3d(0, -100%, 0);
    transform: translate3d(0, -100%, 0);
  }
}

@keyframes slideOutUp {
  0% {
    -webkit-transform: translate3d(0, 0, 0);
    transform: translate3d(0, 0, 0);
  }
  100% {
    visibility: hidden;
    -webkit-transform: translate3d(0, -100%, 0);
    transform: translate3d(0, -100%, 0);
  }
}

.slideOutUp {
  -webkit-animation-name: slideOutUp;
  animation-name: slideOutUp;
}

.counter {
  margin-bottom: 0;
}

/*
* @subsection   Isotope
*/
.isotope-wrap {
  position: relative;
  -webkit-transform: translateY(-30px);
  transform: translateY(-30px);
  margin-bottom: -30px;
}

[data-isotope-layout] {
  position: relative;
  display: block;
  transition: .4s all ease;
  min-height: 160px;
}

[data-isotope-layout]:after {
  content: '';
  position: absolute;
  margin-top: 15px;
  width: 64px;
  height: 64px;
  top: 50%;
  left: 50%;
  background-image: url("data:image/png;base64,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AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAzMDcyMA==");
  background-position: -1152px 0;
  animation: 0.7s sprite-animation steps(18) infinite;
  transition: .4s all ease;
  -webkit-transform: translate(-50%, -50%);
  transform: translate(-50%, -50%);
}

[data-isotope-layout] [class*="col-"] {
  display: block;
  opacity: 0;
  transition: .4s opacity ease;
  /*
     * @bugfix item position after filtering
     * @affected iOS
    */
}

[data-isotope-layout].isotope--loaded [class*="col-"] {
  opacity: 1;
}

[data-isotope-layout].isotope--loaded:after {
  opacity: 0;
  visibility: hidden;
}

.isotope-spacing-1 [class*="col"] {
  margin-top: 30px;
}

.isotope-spacing-2 {
  -webkit-transform: translateY(-60px);
  transform: translateY(-60px);
  margin-bottom: -60px;
}

.isotope-spacing-2 [data-isotope-layout] [class*="col-"] {
  margin-top: 60px;
}

.isotope-filters {
  position: relative;
  z-index: 10;
  text-align: center;
}

.isotope-filters > * {
  margin-top: 0;
  display: inline-block;
  vertical-align: middle;
}

.isotope-filters .list-inline {
  position: relative;
  -webkit-transform: translateY(-10px);
  transform: translateY(-10px);
  margin-bottom: -10px;
}

.isotope-filters .list-inline li {
  display: inline-block;
  text-align: center;
  margin: 10px 30px 0 0;
}

.isotope-filters .list-inline li a {
  position: relative;
  padding-bottom: 9px;
  cursor: pointer;
  transition: .3s;
}

.isotope-filters .list-inline li a, .isotope-filters .list-inline li a:active, .isotope-filters .list-inline li a:focus {
  color: #b1b1b1;
}

.isotope-filters .list-inline li a:after {
  content: '';
  position: absolute;
  bottom: 0;
  left: 0;
  right: 0;
  width: 100%;
  height: 1px;
  background: #136cbf;
  opacity: 0;
  visibility: hidden;
  transition: .2s ease-in-out;
}

.isotope-filters .list-inline li a.active, .isotope-filters .list-inline li a:hover {
  color: #313132;
}

.isotope-filters .list-inline li a.active:after, .isotope-filters .list-inline li a:hover:after {
  opacity: 1;
  visibility: visible;
}

.isotope-filters .list-inline li:last-child {
  margin-right: 0;
}

@media (min-width: 768px) {
  .isotope-filters li a {
    font-size: 18px;
  }
  .isotope-filters li:not(:last-child) {
    margin-right: 47px;
  }
}

@media (min-width: 992px) {
  .isotope-filters .isotope-filters-trigger {
    display: none;
  }
}

/* 
 *  Owl Carousel - Animate Plugin
 */
.owl-carousel .animated {
  -webkit-animation-duration: 1000ms;
  animation-duration: 1000ms;
  -webkit-animation-fill-mode: both;
  animation-fill-mode: both;
}

.owl-carousel .owl-animated-in {
  z-index: 0;
}

.owl-carousel .owl-animated-out {
  z-index: 1;
}

.owl-carousel .fadeOut {
  -webkit-animation-name: fadeOut;
  animation-name: fadeOut;
}

@-webkit-keyframes fadeOut {
  0% {
    opacity: 1;
  }
  100% {
    opacity: 0;
  }
}

@keyframes fadeOut {
  0% {
    opacity: 1;
  }
  100% {
    opacity: 0;
  }
}

/* 
 * 	Owl Carousel - Auto Height Plugin
 */
.owl-height {
  -webkit-transition: height 500ms ease-in-out;
  -moz-transition: height 500ms ease-in-out;
  -ms-transition: height 500ms ease-in-out;
  -o-transition: height 500ms ease-in-out;
  transition: height 500ms ease-in-out;
}

/* 
 *  Core Owl Carousel CSS File
 */
.owl-carousel {
  display: none;
  width: 100%;
  -webkit-tap-highlight-color: transparent;
  /* position relative and z-index fix webkit rendering fonts issue */
  position: relative;
  z-index: 1;
}

.owl-carousel .owl-stage {
  position: relative;
  -ms-touch-action: pan-Y;
}

.owl-carousel .owl-stage:after {
  content: ".";
  display: block;
  clear: both;
  visibility: hidden;
  line-height: 0;
  height: 0;
}

.owl-carousel .owl-stage-outer {
  position: relative;
  overflow: hidden;
  /* fix for flashing background */
  -webkit-transform: translate3d(0px, 0px, 0px);
}

.owl-carousel .owl-controls .owl-nav .owl-prev,
.owl-carousel .owl-controls .owl-nav .owl-next,
.owl-carousel .owl-controls .owl-dot {
  cursor: pointer;
  cursor: hand;
  -webkit-user-select: none;
  -khtml-user-select: none;
  -moz-user-select: none;
  -ms-user-select: none;
  user-select: none;
}

.owl-carousel.owl-loaded {
  display: block;
}

.owl-carousel.owl-loading {
  opacity: 0;
  display: block;
}

.owl-carousel.owl-hidden {
  opacity: 0;
}

.owl-carousel .owl-refresh .owl-item {
  display: none;
}

.owl-carousel .owl-item {
  position: relative;
  min-height: 1px;
  float: left;
  -webkit-tap-highlight-color: transparent;
  -webkit-touch-callout: none;
  -webkit-user-select: none;
  -moz-user-select: none;
  -ms-user-select: none;
  user-select: none;
}

.owl-carousel.owl-text-select-on .owl-item {
  -webkit-user-select: none;
  -moz-user-select: none;
  -ms-user-select: none;
  user-select: none;
}

.owl-carousel .owl-grab {
  cursor: move;
  cursor: -webkit-grab;
  cursor: grab;
}

.owl-carousel.owl-rtl {
  direction: rtl;
}

.owl-carousel.owl-rtl .owl-item {
  float: right;
}

/* No Js */
.no-js .owl-carousel {
  display: block;
}

/* 
 * 	Owl Carousel - Lazy Load Plugin
 */
.owl-carousel .owl-item .owl-lazy {
  opacity: 0;
  -webkit-transition: opacity 400ms ease;
  -moz-transition: opacity 400ms ease;
  -ms-transition: opacity 400ms ease;
  -o-transition: opacity 400ms ease;
  transition: opacity 400ms ease;
}

/* 
 * 	Owl Carousel - Video Plugin
 */
.owl-carousel .owl-video-wrapper {
  position: relative;
  height: 100%;
  background: #000;
}

.owl-carousel .owl-video-play-icon {
  position: absolute;
  height: 80px;
  width: 80px;
  left: 50%;
  top: 50%;
  margin-left: -40px;
  margin-top: -40px;
  font: 400 40px/80px 'FontAwesome';
  cursor: pointer;
  z-index: 1;
  -webkit-transition: scale 100ms ease;
  -moz-transition: scale 100ms ease;
  -ms-transition: scale 100ms ease;
  -o-transition: scale 100ms ease;
  transition: scale 100ms ease;
}

.owl-carousel .owl-video-play-icon:before {
  content: '\f144';
}

.owl-carousel .owl-video-play-icon:hover {
  -webkit-transform: scale(1.3);
  transform: scale(1.3);
}

.owl-carousel .owl-video-playing .owl-video-tn,
.owl-carousel .owl-video-playing .owl-video-play-icon {
  display: none;
}

.owl-carousel .owl-video-tn {
  opacity: 0;
  height: 100%;
  background-position: center center;
  background-repeat: no-repeat;
  -webkit-background-size: contain;
  -moz-background-size: contain;
  -o-background-size: contain;
  background-size: contain;
  -webkit-transition: opacity 400ms ease;
  -moz-transition: opacity 400ms ease;
  -ms-transition: opacity 400ms ease;
  -o-transition: opacity 400ms ease;
  transition: opacity 400ms ease;
}

.owl-carousel .owl-video-frame {
  position: relative;
  z-index: 1;
}

/*
 * Owl Navigation
 */
.owl-nav {
  margin-top: 35px;
}

@media (min-width: 768px) {
  .owl-nav {
    margin-top: 55px;
  }
}

.owl-prev, .owl-next {
  position: absolute;
  top: 50%;
  -webkit-transform: translateY(-50%);
  transform: translateY(-50%);
  font: 400 46px/50px 'FontAwesome';
  opacity: .5;
}

.owl-prev:hover, .owl-next:hover {
  opacity: 1;
}

.owl-prev {
  left: 0;
}

.owl-prev:before {
  content: '\f104';
}

.owl-next {
  right: 0;
}

.owl-next:before {
  content: '\f105';
}

/*
 * Owl Pagination
 */
.owl-dots {
  margin-top: 10px;
  text-align: center;
}

.owl-dot {
  position: relative;
  display: inline-block;
  width: 6px;
  height: 6px;
  border: 1px solid transparent;
  margin-left: 10px;
  text-align: center;
  border-radius: 30px;
  outline: none;
  cursor: pointer;
  background: #c6c6c6;
  pointer-events: none;
  transition: background .2s ease-out;
}

.owl-dot + * {
  margin-left: 10px;
}

.owl-dot:hover, .owl-dot:focus, .owl-dot.active {
  background: #42a4ff;
}

@media (min-width: 768px) {
  .owl-dot {
    width: 12px;
    height: 12px;
    pointer-events: auto;
  }
  .owl-dot + * {
    margin-left: 20px;
  }
}

.owl-carousel-style-1 .item {
  text-align: center;
}

.owl-carousel-style-1 .owl-dot {
  background: rgba(255, 255, 255, 0.3);
}

.owl-carousel-style-1 .owl-dot:hover, .owl-carousel-style-1 .owl-dot:focus, .owl-carousel-style-1 .owl-dot.active {
  background: #42a4ff;
}

.owl-carousel-centered .item {
  text-align: center;
}

/*
* @subsection   RD Navbar
*
* @description  Describes style declarations for RD Navbar extension
*
* @author       Evgeniy Gusarov
* @link         https://ua.linkedin.com/pub/evgeniy-gusarov/8a/a40/54a
*/
@-webkit-keyframes rd-navbar-slide-down {
  0% {
    -webkit-transform: translateY(-100%);
    transform: translateY(-100%);
  }
  100% {
    -webkit-transform: translateY(0);
    transform: translateY(0);
  }
}

@keyframes rd-navbar-slide-down {
  0% {
    -webkit-transform: translateY(-100%);
    transform: translateY(-100%);
  }
  100% {
    -webkit-transform: translateY(0);
    transform: translateY(0);
  }
}

@-webkit-keyframes rd-navbar-slide-up {
  0% {
    -webkit-transform: translateY(0);
    transform: translateY(0);
  }
  100% {
    -webkit-transform: translateY(-100%);
    transform: translateY(-100%);
  }
}

@keyframes rd-navbar-slide-up {
  0% {
    -webkit-transform: translateY(0);
    transform: translateY(0);
  }
  100% {
    -webkit-transform: translateY(-100%);
    transform: translateY(-100%);
  }
}

/*
* @subsection General Styles
*/
.rd-navbar-wrap, .rd-navbar-static .rd-navbar-megamenu,
.rd-navbar-fullwidth .rd-navbar-megamenu, .rd-navbar-fixed .rd-navbar-outer-panel, .rd-navbar-fixed .rd-navbar-submenu {
  transition: 0.3s all cubic-bezier(0.785, 0.135, 0.15, 0.86);
}

.rd-navbar, .rd-navbar.rd-navbar--is-clone {
  display: none;
}

.rd-navbar-fixed,
.rd-navbar-static,
.rd-navbar-fullwidth,
.rd-navbar-sidebar {
  display: block;
}

.rd-navbar--no-transition, .rd-navbar--no-transition * {
  transition: none !important;
}

.rd-navbar-wrap {
  position: relative;
  z-index: 10;
}

.rd-navbar-wrap,
.rd-navbar,
.rd-navbar-brand,
.rd-navbar-slogan,
.rd-navbar-dropdown,
.rd-navbar-megamenu,
.rd-navbar-collapse-items,
.brand-name,
.rd-navbar-nav,
.rd-navbar-panel,
.rd-navbar-search-form-input,
.rd-navbar-search-form-submit,
.rd-navbar-search-toggle,
.rd-navbar-live-search-results,
.rd-navbar-search-form {
  transition: .0s all ease-out;
}

.rd-navbar-collapse-toggle {
  background: none;
  border: none;
  display: inline-block;
  padding: 0;
  outline: none;
  outline-offset: 0;
  cursor: pointer;
  -webkit-appearance: none;
  display: inline-block;
  position: relative;
  width: 48px;
  height: 48px;
  line-height: 48px;
  cursor: pointer;
  color: #313132;
  display: none;
}

.rd-navbar-collapse-toggle::-moz-focus-inner {
  border: none;
  padding: 0;
}

.rd-navbar-collapse-toggle span {
  top: 50%;
  margin-top: -3px;
}

.rd-navbar-collapse-toggle span, .rd-navbar-collapse-toggle span:before, .rd-navbar-collapse-toggle span:after {
  position: absolute;
  width: 6px;
  height: 6px;
  line-height: 6px;
  text-align: center;
  background: #313132;
  left: 50%;
  margin-left: -3px;
  border-radius: 50%;
  transition: .3s all ease;
}

.rd-navbar-collapse-toggle span:before, .rd-navbar-collapse-toggle span:after {
  content: '';
}

.rd-navbar-collapse-toggle span:before {
  bottom: 100%;
  margin-bottom: 3px;
}

.rd-navbar-collapse-toggle span:after {
  top: 100%;
  margin-top: 3px;
}

.rd-navbar-collapse-toggle.active span {
  -webkit-transform: scale(0.7);
  transform: scale(0.7);
}

.rd-navbar-collapse-toggle.active span:before {
  -webkit-transform: translateY(18px);
  transform: translateY(18px);
}

.rd-navbar-collapse-toggle.active span:after {
  -webkit-transform: translateY(-18px);
  transform: translateY(-18px);
}

.rd-navbar--has-sidebar body {
  padding-left: 0;
}

.rd-navbar--is-stuck {
  border-bottom: none;
}

.rd-navbar.rd-navbar-fixed + .rd-navbar.rd-navbar--is-clone,
.rd-navbar.rd-navbar-sidebar + .rd-navbar.rd-navbar--is-clone {
  display: none;
}

/*
* Navbar components
*/
.rd-navbar {
  display: none;
  background: #fff;
  box-shadow: none;
}

.rd-navbar-toggle {
  background: none;
  border: none;
  display: inline-block;
  padding: 0;
  outline: none;
  outline-offset: 0;
  cursor: pointer;
  -webkit-appearance: none;
  display: inline-block;
  position: relative;
  width: 48px;
  height: 48px;
  line-height: 48px;
  cursor: pointer;
  color: #000;
  background-color: transparent;
  border: none;
  display: none;
}

.rd-navbar-toggle::-moz-focus-inner {
  border: none;
  padding: 0;
}

.rd-navbar-toggle span {
  position: relative;
  display: block;
  margin: auto;
  transition: .3s all ease;
}

.rd-navbar-toggle span:after, .rd-navbar-toggle span:before {
  content: "";
  position: absolute;
  left: 0;
  top: -8px;
  transition: .3s all ease;
}

.rd-navbar-toggle span:after {
  top: 8px;
}

.rd-navbar-toggle span:after, .rd-navbar-toggle span:before, .rd-navbar-toggle span {
  width: 24px;
  height: 4px;
  background-color: #000;
  backface-visibility: hidden;
  border-radius: 2px;
}

.rd-navbar-toggle span {
  -webkit-transform: rotate(180deg);
  transform: rotate(180deg);
}

.rd-navbar-toggle span:before, .rd-navbar-toggle span:after {
  -webkit-transform-origin: 1.71429px center;
  -moz-transform-origin: 1.71429px center;
  -ms-transform-origin: 1.71429px center;
  transform-origin: 1.71429px center;
  -webkit-transform-origin: 1.71429px center;
  -moz-transform-origin: 1.71429px center;
  -ms-transform-origin: 1.71429px center;
  transform-origin: 1.71429px center;
}

.rd-navbar-toggle.active span {
  -webkit-transform: rotate(360deg);
  transform: rotate(360deg);
}

.rd-navbar-toggle.active span:before, .rd-navbar-toggle.active span:after {
  top: 0;
  width: 15px;
}

.rd-navbar-toggle.active span:before {
  -webkit-transform: rotate3d(0, 0, 1, -40deg);
  transform: rotate3d(0, 0, 1, -40deg);
}

.rd-navbar-toggle.active span:after {
  -webkit-transform: rotate3d(0, 0, 1, 40deg);
  transform: rotate3d(0, 0, 1, 40deg);
}

.rd-navbar-toggle:focus {
  outline: none;
}

.rd-navbar-brand {
  display: inline-block;
  transition: none;
  font-size: 2em;
  font-weight: 900;
  fill: #00b3f5;
	margin-top: -9px;
}

.rd-navbar-brand > * {
  display: block;
}

.rd-navbar-brand .brand-name {
  font-size: 36px;
  font-weight: 700;
  line-height: 1;
  text-transform: uppercase;
}

.rd-navbar-brand .brand-name, .rd-navbar-brand .brand-name:focus, .rd-navbar-brand .brand-name:active, .rd-navbar-brand .brand-name:hover {
  color: #42a4ff;
}

.rd-navbar-brand .brand-slogan {
  font-size: 16px;
  line-height: 1;
}

.rd-navbar-brand .brand-slogan, .rd-navbar-brand .brand-slogan:focus, .rd-navbar-brand .brand-slogan:active, .rd-navbar-brand .brand-slogan:hover {
  color: #ccc;
}

.rd-navbar-dropdown {
  display: none;
}

.rd-navbar-search-toggle {
  display: inline-block;
  font: 400 18px/36px "FontAwesome";
  transition: none;
}

.rd-navbar-search-toggle, .rd-navbar-search-toggle:before, .rd-navbar-search-toggle:after {
  text-align: center;
  width: 36px;
  height: 36px;
}

.rd-navbar-search-toggle:before, .rd-navbar-search-toggle:after {
  position: absolute;
  left: 0;
  top: 0;
}

.rd-navbar-search-toggle:before {
  content: '\f002';
  transition: .33s all;
  -webkit-transform: scale(1) rotate(0deg);
  transform: scale(1) rotate(0deg);
}

.rd-navbar-search-toggle:focus {
  outline: 0;
}

.rd-navbar:not(.rd-navbar-fixed) .rd-navbar-search-toggle:after {
  content: '\f00d';
  transition: .33s all;
  -webkit-transform: scale(0) rotate(-90deg);
  transform: scale(0) rotate(-90deg);
}

.rd-navbar:not(.rd-navbar-fixed) .rd-navbar-search-toggle.active:before {
  -webkit-transform: scale(0) rotate(90deg);
  transform: scale(0) rotate(90deg);
}

.rd-navbar:not(.rd-navbar-fixed) .rd-navbar-search-toggle.active:after {
  -webkit-transform: scale(1) rotate(0deg);
  transform: scale(1) rotate(0deg);
}

.rd-navbar-fixed .rd-navbar-search-toggle, .rd-navbar-fixed .rd-navbar-search-toggle:before {
  width: 48px;
  line-height: 48px;
}

.rd-navbar-search-submit {
  background: none;
  border: none;
  display: inline-block;
  padding: 0;
  outline: none;
  outline-offset: 0;
  cursor: pointer;
  -webkit-appearance: none;
  display: inline-block;
  position: relative;
  width: 48px;
  height: 48px;
  line-height: 48px;
  cursor: pointer;
  color: #313132;
  text-align: center;
  font-size: 18px;
}

.rd-navbar-search-submit::-moz-focus-inner {
  border: none;
  padding: 0;
}

.rd-navbar-search-submit:before {
  content: "\f002";
  font-weight: 400;
  font-family: "FontAwesome";
}

.rd-navbar-search-submit.active {
  -webkit-transform: scale(0.7);
  transform: scale(0.7);
}

.rd-navbar-search-results .result-item {
  padding: 35px 5px;
}

.rd-navbar-search-results .result-item, .rd-navbar-search-results .result-item * {
  text-align: left;
}

.rd-navbar-search-results .result-item + .result-item {
  border-top: 1px solid #ebebeb;
}

.rd-navbar-search-results .result-item * + p {
  margin-top: 21px;
}

.search_error {
  max-width: 100%;
  overflow: hidden;
  text-overflow: ellipsis;
}

.rd-navbar-aside {
  pointer-events: none;
}

.rd-navbar-aside > * {
  pointer-events: auto;
}

.rd-navbar-aside-toggle {
  display: none;
  pointer-events: auto;
}

/*
* @subsection   Hybrid  Styles
*/
.rd-navbar-static .rd-navbar-search .rd-search input, .rd-navbar-sidebar .rd-navbar-search .rd-search input, .rd-navbar-fullwidth .rd-navbar-search .rd-search input {
  width: 100%;
  border-radius: 100px;
}

.rd-navbar-static .rd-navbar-nav > li > a, .rd-navbar-sidebar .rd-navbar-nav > li > a, .rd-navbar-fullwidth .rd-navbar-nav > li > a {
  font-size: 16px;
  font-weight: 700;
  line-height: 1.2;
}

.rd-navbar-static:after,
.rd-navbar-fullwidth:after {
  content: '';
  background: #fff;
}

.rd-navbar-static .rd-navbar-brand,
.rd-navbar-static .rd-navbar-nav > li > a,
.rd-navbar-static .rd-navbar-search-toggle,
.rd-navbar-fullwidth .rd-navbar-brand,
.rd-navbar-fullwidth .rd-navbar-nav > li > a,
.rd-navbar-fullwidth .rd-navbar-search-toggle {
  position: relative;
  z-index: 2;
}

.rd-navbar-static .rd-navbar-nav > li > a,
.rd-navbar-fullwidth .rd-navbar-nav > li > a {
  display: inline;
  position: relative;
  background: transparent;
}

.rd-navbar-static .rd-navbar-nav > li.focus > a,
.rd-navbar-static .rd-navbar-nav > li > a:hover,
.rd-navbar-fullwidth .rd-navbar-nav > li.focus > a,
.rd-navbar-fullwidth .rd-navbar-nav > li > a:hover {
  color: #a5d4ff;
  background: transparent;
}

.rd-navbar-static .rd-navbar-nav > li.active > a,
.rd-navbar-fullwidth .rd-navbar-nav > li.active > a {
  color: #a5d4ff;
  background: transparent;
}

.rd-navbar-static .rd-navbar-nav > .rd-navbar-submenu > .rd-navbar-dropdown,
.rd-navbar-static .rd-navbar-nav > .rd-navbar-submenu > .rd-navbar-megamenu,
.rd-navbar-fullwidth .rd-navbar-nav > .rd-navbar-submenu > .rd-navbar-dropdown,
.rd-navbar-fullwidth .rd-navbar-nav > .rd-navbar-submenu > .rd-navbar-megamenu {
  opacity: 0;
  visibility: hidden;
  -webkit-transform: translateY(30px);
  transform: translateY(30px);
}

.rd-navbar-static .rd-navbar-nav > .rd-navbar-submenu.focus > .rd-navbar-dropdown,
.rd-navbar-static .rd-navbar-nav > .rd-navbar-submenu.focus > .rd-navbar-megamenu,
.rd-navbar-fullwidth .rd-navbar-nav > .rd-navbar-submenu.focus > .rd-navbar-dropdown,
.rd-navbar-fullwidth .rd-navbar-nav > .rd-navbar-submenu.focus > .rd-navbar-megamenu {
  opacity: 1;
  visibility: visible;
  -webkit-transform: translateY(0);
  transform: translateY(0);
}

.rd-navbar-static .rd-navbar-nav > .rd-navbar-submenu .rd-navbar-submenu.focus > .rd-navbar-dropdown,
.rd-navbar-static .rd-navbar-nav > .rd-navbar-submenu .rd-navbar-submenu.opened > .rd-navbar-dropdown,
.rd-navbar-fullwidth .rd-navbar-nav > .rd-navbar-submenu .rd-navbar-submenu.focus > .rd-navbar-dropdown,
.rd-navbar-fullwidth .rd-navbar-nav > .rd-navbar-submenu .rd-navbar-submenu.opened > .rd-navbar-dropdown {
  display: -ms-flexbox;
  display: -webkit-flex;
  display: flex;
}

.rd-navbar-static .rd-navbar-inner,
.rd-navbar-fullwidth .rd-navbar-inner {
  position: relative;
  max-width: 1200px;
  padding-left: 15px;
  padding-right: 15px;
  margin-left: auto;
  margin-right: auto;
}

.rd-navbar-static .rd-navbar-nav > li > .rd-navbar-dropdown,
.rd-navbar-fullwidth .rd-navbar-nav > li > .rd-navbar-dropdown {
  position: absolute;
  left: 0;
  z-index: 5;
  display: block;
  width: 200px;
  margin-top: 11px;
  margin-left: -10px;
  text-align: left;
  background: #fff;
}

@media (min-width: 1280px) {
  .rd-navbar-static .rd-navbar-nav > li > .rd-navbar-dropdown,
  .rd-navbar-fullwidth .rd-navbar-nav > li > .rd-navbar-dropdown {
    margin-left: -30px;
  }
}

.rd-navbar-static .rd-navbar-nav li.rd-navbar--has-dropdown,
.rd-navbar-fullwidth .rd-navbar-nav li.rd-navbar--has-dropdown {
  position: relative;
}

.rd-navbar-static .rd-navbar-nav li.focus > .rd-navbar-dropdown, .rd-navbar-static .rd-navbar-nav li.focus > .rd-navbar-megamenu,
.rd-navbar-static .rd-navbar-nav li.opened > .rd-navbar-dropdown,
.rd-navbar-static .rd-navbar-nav li.opened > .rd-navbar-megamenu,
.rd-navbar-fullwidth .rd-navbar-nav li.focus > .rd-navbar-dropdown,
.rd-navbar-fullwidth .rd-navbar-nav li.focus > .rd-navbar-megamenu,
.rd-navbar-fullwidth .rd-navbar-nav li.opened > .rd-navbar-dropdown,
.rd-navbar-fullwidth .rd-navbar-nav li.opened > .rd-navbar-megamenu {
  opacity: 1;
  visibility: visible;
  -webkit-transform: translateY(0);
  transform: translateY(0);
}

.rd-navbar-static .rd-navbar-nav > li,
.rd-navbar-fullwidth .rd-navbar-nav > li {
  display: inline-block;
}

.rd-navbar-static .rd-navbar-nav > li > .rd-navbar-dropdown,
.rd-navbar-static .rd-navbar-nav > li > .rd-navbar-megamenu,
.rd-navbar-fullwidth .rd-navbar-nav > li > .rd-navbar-dropdown,
.rd-navbar-fullwidth .rd-navbar-nav > li > .rd-navbar-megamenu {
  top: 100%;
  z-index: 1;
}

.rd-navbar-static .rd-navbar-nav > li > .rd-navbar-dropdown,
.rd-navbar-fullwidth .rd-navbar-nav > li > .rd-navbar-dropdown {
  display: -ms-flexbox;
  display: -webkit-flex;
  display: flex;
}

.rd-navbar-static .rd-navbar-nav > li > .rd-navbar-dropdown .rd-navbar-dropdown,
.rd-navbar-fullwidth .rd-navbar-nav > li > .rd-navbar-dropdown .rd-navbar-dropdown {
  top: 0;
  left: 100%;
  z-index: 2;
}

.rd-navbar-static .rd-navbar-dropdown,
.rd-navbar-fullwidth .rd-navbar-dropdown {
  -webkit-flex-wrap: wrap;
  -ms-flex-wrap: wrap;
  flex-wrap: wrap;
  width: 200px;
  background: #fff;
  padding: 22px 20px 30px;
}

@media (min-width: 1280px) {
  .rd-navbar-static .rd-navbar-dropdown,
  .rd-navbar-fullwidth .rd-navbar-dropdown {
    padding: 22px 30px 30px;
  }
}

.rd-navbar-static .rd-navbar-dropdown > li,
.rd-navbar-fullwidth .rd-navbar-dropdown > li {
  display: block;
  width: 100%;
}

.rd-navbar-static .rd-navbar-dropdown > li + li,
.rd-navbar-fullwidth .rd-navbar-dropdown > li + li {
  margin-top: 18px;
}

.rd-navbar-static .rd-navbar-dropdown > li > a,
.rd-navbar-fullwidth .rd-navbar-dropdown > li > a {
  background: transparent;
}

.rd-navbar-static .rd-navbar-dropdown > li > a, .rd-navbar-static .rd-navbar-dropdown > li > a:focus, .rd-navbar-static .rd-navbar-dropdown > li > a:active,
.rd-navbar-fullwidth .rd-navbar-dropdown > li > a,
.rd-navbar-fullwidth .rd-navbar-dropdown > li > a:focus,
.rd-navbar-fullwidth .rd-navbar-dropdown > li > a:active {
  color: #42a4ff;
}

.rd-navbar-static .rd-navbar-dropdown > li > a:hover,
.rd-navbar-fullwidth .rd-navbar-dropdown > li > a:hover {
  color: #084884;
  background: transparent;
}

.rd-navbar-static .rd-navbar-dropdown > li.focus > a,
.rd-navbar-static .rd-navbar-dropdown > li.opened > a,
.rd-navbar-fullwidth .rd-navbar-dropdown > li.focus > a,
.rd-navbar-fullwidth .rd-navbar-dropdown > li.opened > a {
  color: #084884;
  background: transparent;
}

.rd-navbar-static .rd-navbar-megamenu,
.rd-navbar-fullwidth .rd-navbar-megamenu {
  left: 15px;
  display: table;
  table-layout: fixed;
  width: 940px;
  position: absolute;
  text-align: left;
  table-layout: fixed;
  margin-top: 6px;
  max-width: 1200px;
  background: #fff;
  z-index: 4;
}

@media (min-width: 1200px) {
  .rd-navbar-static .rd-navbar-megamenu,
  .rd-navbar-fullwidth .rd-navbar-megamenu {
    width: 1170px;
  }
}

.rd-navbar-static .rd-navbar-megamenu > li,
.rd-navbar-fullwidth .rd-navbar-megamenu > li {
  position: relative;
  display: table-cell;
  padding: 25px;
}

.rd-navbar-static .rd-navbar-megamenu > li + li,
.rd-navbar-fullwidth .rd-navbar-megamenu > li + li {
  border-left: 1px solid #dbdbdb;
}

@media (min-width: 1200px) {
  .rd-navbar-static .rd-navbar-megamenu > li,
  .rd-navbar-fullwidth .rd-navbar-megamenu > li {
    padding: 33px 43px 36px;
  }
  .rd-navbar-static .rd-navbar-megamenu > li:nth-child(3),
  .rd-navbar-fullwidth .rd-navbar-megamenu > li:nth-child(3) {
    padding: 23px 43px 23px 51px;
  }
  .rd-navbar-static .rd-navbar-megamenu > li:nth-child(4),
  .rd-navbar-fullwidth .rd-navbar-megamenu > li:nth-child(4) {
    padding: 23px 44px 21px 59px;
  }
}

.rd-navbar-static .rd-navbar-dropdown,
.rd-navbar-static .rd-navbar-megamenu,
.rd-navbar-fullwidth .rd-navbar-dropdown,
.rd-navbar-fullwidth .rd-navbar-megamenu {
  border-top: 2px solid #084884;
  -webkit-box-shadow: 0px 2px 10px 0px rgba(49, 49, 50, 0.13);
  box-shadow: 0px 2px 10px 0px rgba(49, 49, 50, 0.13);
}

.rd-navbar-static .rd-navbar-submenu-toggle,
.rd-navbar-fullwidth .rd-navbar-submenu-toggle {
  cursor: pointer;
  z-index: 100;
}

.rd-navbar-static .rd-navbar-submenu-toggle::after,
.rd-navbar-fullwidth .rd-navbar-submenu-toggle::after {
  content: '\f236';
  position: relative;
  display: inline-block;
  font: 400 20px "Material Design Icons";
  text-align: center;
  transition: 0.4s all ease;
  z-index: 2;
  color: #313132;
  will-change: transform;
  -webkit-filter: blur(0);
}

.rd-navbar-static .rd-navbar-submenu-toggle:hover,
.rd-navbar-fullwidth .rd-navbar-submenu-toggle:hover {
  color: #a5d4ff;
}

.rd-navbar-static li.focus > .rd-navbar-submenu-toggle::after,
.rd-navbar-static li.opened > .rd-navbar-submenu-toggle::after,
.rd-navbar-static li > a:hover + .rd-navbar-submenu-toggle::after,
.rd-navbar-fullwidth li.focus > .rd-navbar-submenu-toggle::after,
.rd-navbar-fullwidth li.opened > .rd-navbar-submenu-toggle::after,
.rd-navbar-fullwidth li > a:hover + .rd-navbar-submenu-toggle::after {
  -webkit-transform: rotate(180deg);
  transform: rotate(180deg);
}

.rd-navbar-static .rd-navbar-nav > li > .rd-navbar-submenu-toggle,
.rd-navbar-fullwidth .rd-navbar-nav > li > .rd-navbar-submenu-toggle {
  display: inline-block;
  width: 20px;
  text-align: center;
  vertical-align: middle;
}

.rd-navbar-static .rd-navbar-nav > li.focus > .rd-navbar-submenu-toggle::after,
.rd-navbar-static .rd-navbar-nav > li.opened > .rd-navbar-submenu-toggle::after,
.rd-navbar-static .rd-navbar-nav > li > a:hover + .rd-navbar-submenu-toggle::after,
.rd-navbar-fullwidth .rd-navbar-nav > li.focus > .rd-navbar-submenu-toggle::after,
.rd-navbar-fullwidth .rd-navbar-nav > li.opened > .rd-navbar-submenu-toggle::after,
.rd-navbar-fullwidth .rd-navbar-nav > li > a:hover + .rd-navbar-submenu-toggle::after {
  color: #a5d4ff;
}

.rd-navbar-static .rd-navbar-dropdown .rd-navbar-submenu-toggle,
.rd-navbar-fullwidth .rd-navbar-dropdown .rd-navbar-submenu-toggle {
  position: absolute;
  top: 0;
  right: 10px;
  display: inline-block;
  height: 32px;
  vertical-align: middle;
  margin-left: -25px;
}

.rd-navbar-static .rd-navbar-dropdown .rd-navbar-submenu-toggle::after,
.rd-navbar-fullwidth .rd-navbar-dropdown .rd-navbar-submenu-toggle::after {
  top: 1px;
}

.rd-navbar-static .rd-navbar-dropdown > li.focus > .rd-navbar-submenu-toggle::after,
.rd-navbar-static .rd-navbar-dropdown > li.opened > .rd-navbar-submenu-toggle::after,
.rd-navbar-static .rd-navbar-dropdown > li > a:hover + .rd-navbar-submenu-toggle::after,
.rd-navbar-fullwidth .rd-navbar-dropdown > li.focus > .rd-navbar-submenu-toggle::after,
.rd-navbar-fullwidth .rd-navbar-dropdown > li.opened > .rd-navbar-submenu-toggle::after,
.rd-navbar-fullwidth .rd-navbar-dropdown > li > a:hover + .rd-navbar-submenu-toggle::after {
  color: #084884;
}

.rd-navbar-static.rd-navbar--is-clone,
.rd-navbar-fullwidth.rd-navbar--is-clone {
  display: none;
}

.rd-navbar-static.rd-navbar--is-clone.rd-navbar--is-stuck,
.rd-navbar-fullwidth.rd-navbar--is-clone.rd-navbar--is-stuck {
  display: block;
}

.rd-navbar-static .rd-navbar-search,
.rd-navbar-fullwidth .rd-navbar-search {
  position: relative;
}

.rd-navbar-static .rd-navbar-search .rd-search,
.rd-navbar-fullwidth .rd-navbar-search .rd-search {
  position: absolute;
  top: 53px;
  right: 0;
  width: 370px;
  opacity: 0;
  visibility: hidden;
  transition: .25s all ease;
}

.rd-navbar-static .rd-navbar-search .rd-search label,
.rd-navbar-fullwidth .rd-navbar-search .rd-search label {
  top: 24px;
}

.rd-navbar-static .rd-navbar-search .rd-search .form-group,
.rd-navbar-fullwidth .rd-navbar-search .rd-search .form-group {
  margin-bottom: 0;
  border-radius: 100px;
}

.rd-navbar-static .rd-navbar-search .rd-search .form-control,
.rd-navbar-fullwidth .rd-navbar-search .rd-search .form-control {
  padding: 14px 41px 14px 21px;
  background: #fff;
  -webkit-box-shadow: 0px 2px 10px 0px rgba(49, 49, 50, 0.13);
  box-shadow: 0px 2px 10px 0px rgba(49, 49, 50, 0.13);
}

.rd-navbar-static .rd-navbar-search .rd-search:after,
.rd-navbar-fullwidth .rd-navbar-search .rd-search:after {
  left: 100%;
}

.rd-navbar-static .rd-navbar-search-submit,
.rd-navbar-fullwidth .rd-navbar-search-submit {
  position: absolute;
  top: 0;
  right: 2px;
  z-index: 10;
  transition: .2s all ease;
}

.rd-navbar-static .rd-navbar-search-submit:hover,
.rd-navbar-fullwidth .rd-navbar-search-submit:hover {
  color: #42a4ff;
}

.rd-navbar-static .rd-navbar-search-toggle,
.rd-navbar-fullwidth .rd-navbar-search-toggle {
  right: -11px;
  color: #fff;
  background-color: transparent;
  border: none;
}

.rd-navbar-static .rd-navbar-search-toggle:hover,
.rd-navbar-fullwidth .rd-navbar-search-toggle:hover {
  color: #a5d4ff;
}

.rd-navbar-static .rd-navbar-search .rd-search-results-live,
.rd-navbar-fullwidth .rd-navbar-search .rd-search-results-live {
  background: #fff;
}

.rd-navbar-static .rd-navbar-search.active .rd-search,
.rd-navbar-fullwidth .rd-navbar-search.active .rd-search {
  visibility: visible;
  opacity: 1;
}

.rd-navbar-static.rd-navbar--is-stuck, .rd-navbar-static.rd-navbar--is-clone,
.rd-navbar-fullwidth.rd-navbar--is-stuck,
.rd-navbar-fullwidth.rd-navbar--is-clone {
  position: fixed;
  left: 0;
  top: 0;
  right: 0;
  z-index: 999;
}

.rd-navbar-static .rd-navbar-megamenu,
.rd-navbar-fullwidth .rd-navbar-megamenu {
  position: absolute;
  -webkit-transform: translateY(30px);
  transform: translateY(30px);
  text-align: left;
  visibility: hidden;
  opacity: 0;
}

.rd-navbar-static .rd-navbar-megamenu * + .list-marked-variant-1,
.rd-navbar-fullwidth .rd-navbar-megamenu * + .list-marked-variant-1 {
  margin-top: 20px;
}

.rd-navbar-static .rd-navbar--has-dropdown,
.rd-navbar-fullwidth .rd-navbar--has-dropdown {
  position: relative;
}

.rd-navbar-fixed .rd-navbar-collapse-toggle,
.rd-navbar-sidebar .rd-navbar-collapse-toggle {
  display: inline-block;
  z-index: 9999;
}

.rd-navbar-fixed .rd-navbar-dropdown,
.rd-navbar-sidebar .rd-navbar-dropdown {
  display: block;
}

.rd-navbar-fixed .rd-navbar-collapse-items,
.rd-navbar-sidebar .rd-navbar-collapse-items {
  position: absolute;
  width: 260px;
  padding: 25px 15px;
  box-shadow: none;
  color: #313132;
  background: #fff;
  font-size: 16px;
  line-height: 34px;
}

.rd-navbar-fixed .rd-navbar-collapse-items li > *,
.rd-navbar-sidebar .rd-navbar-collapse-items li > * {
  vertical-align: middle;
}

.rd-navbar-fixed .rd-navbar-collapse-items li + li,
.rd-navbar-sidebar .rd-navbar-collapse-items li + li {
  margin-top: 10px;
}

.rd-navbar-fixed .rd-navbar-collapse-items .icon,
.rd-navbar-fixed .rd-navbar-collapse-items a,
.rd-navbar-sidebar .rd-navbar-collapse-items .icon,
.rd-navbar-sidebar .rd-navbar-collapse-items a {
  display: inline-block;
  font-size: 16px;
  line-height: 30px;
}

.rd-navbar-fixed .rd-navbar-collapse-items .icon, .rd-navbar-fixed .rd-navbar-collapse-items a[class*="fa"]:before,
.rd-navbar-sidebar .rd-navbar-collapse-items .icon,
.rd-navbar-sidebar .rd-navbar-collapse-items a[class*="fa"]:before {
  display: inline-block;
  width: 30px;
  height: 30px;
  padding-right: 5px;
}

.rd-navbar-fixed .rd-navbar-search,
.rd-navbar-sidebar .rd-navbar-search {
  display: block;
}

.rd-navbar-fixed .rd-navbar-search .rd-search,
.rd-navbar-sidebar .rd-navbar-search .rd-search {
  border: 0;
}

.rd-navbar-fixed .rd-navbar-search-toggle,
.rd-navbar-sidebar .rd-navbar-search-toggle {
  display: block;
  width: 48px;
  height: 48px;
  z-index: 18;
  color: #777;
}

.rd-navbar-fixed .rd-navbar-search .rd-search,
.rd-navbar-sidebar .rd-navbar-search .rd-search {
  position: relative;
  margin-top: 53px;
  padding: 0;
  height: 56px;
}

.rd-navbar-fixed .rd-navbar-search .rd-search label,
.rd-navbar-fixed .rd-navbar-search .rd-search input,
.rd-navbar-sidebar .rd-navbar-search .rd-search label,
.rd-navbar-sidebar .rd-navbar-search .rd-search input {
  color: #777;
}

.rd-navbar-fixed .rd-navbar-search .rd-search .form-group,
.rd-navbar-fixed .rd-navbar-search .rd-search input,
.rd-navbar-sidebar .rd-navbar-search .rd-search .form-group,
.rd-navbar-sidebar .rd-navbar-search .rd-search input {
  border-radius: 100px;
}

.rd-navbar-fixed .rd-navbar-search .rd-search .form-group label,
.rd-navbar-sidebar .rd-navbar-search .rd-search .form-group label {
  top: 25px;
}

.rd-navbar-fixed .rd-navbar-search .rd-search .form-group input,
.rd-navbar-sidebar .rd-navbar-search .rd-search .form-group input {
  width: 100%;
  padding: 15px 42px 14px 17px;
  margin: 0;
  color: #313132;
  background: #f5f5f5;
  border: 1px solid #dbdbdb;
}

.rd-navbar-fixed .rd-navbar-search .rd-search .rd-navbar-search-submit,
.rd-navbar-sidebar .rd-navbar-search .rd-search .rd-navbar-search-submit {
  position: absolute;
  top: 4px;
  right: 2px;
  z-index: 10;
  height: 39px;
  line-height: 34px;
  border: 0;
  background: none;
  color: #777;
  transition: .33s;
}

.rd-navbar-fixed .rd-navbar-search .rd-search .rd-navbar-search-submit:before,
.rd-navbar-sidebar .rd-navbar-search .rd-search .rd-navbar-search-submit:before {
  line-height: 33px;
  font-size: 18px;
}

.rd-navbar-fixed .rd-navbar-search .rd-search .rd-navbar-search-submit:focus,
.rd-navbar-sidebar .rd-navbar-search .rd-search .rd-navbar-search-submit:focus {
  outline: none;
}

.rd-navbar-fixed .rd-navbar-search .rd-search .rd-navbar-search-submit:hover,
.rd-navbar-sidebar .rd-navbar-search .rd-search .rd-navbar-search-submit:hover {
  color: #42a4ff;
}

.rd-navbar-fixed .rd-navbar-search-toggle,
.rd-navbar-sidebar .rd-navbar-search-toggle {
  display: none;
}

.rd-navbar-fixed .rd-search-results-live,
.rd-navbar-sidebar .rd-search-results-live {
  display: none;
}

.rd-navbar-fixed .rd-navbar-nav,
.rd-navbar-sidebar {
  width: 270px;
  height: 100%;
  left: 0;
  top: 0;
  overflow-y: auto;
  overflow-x: hidden;
  -webkit-overflow-scrolling: touch;
  font-size: 16px;
  line-height: 34px;
  color: #313132;
  background: #fff;
  z-index: 998;
  padding: 10px 0;
}

.rd-navbar-fixed .rd-navbar-nav:before, .rd-navbar-fixed .rd-navbar-nav:after,
.rd-navbar-sidebar:before,
.rd-navbar-sidebar:after {
  content: '';
  display: block;
  height: 56px;
}

.rd-navbar-fixed .rd-navbar-nav::-webkit-scrollbar,
.rd-navbar-sidebar::-webkit-scrollbar {
  width: 4px;
}

.rd-navbar-fixed .rd-navbar-nav::-webkit-scrollbar-thumb,
.rd-navbar-sidebar::-webkit-scrollbar-thumb {
  background: white;
  border: none;
  border-radius: 0;
  opacity: .2;
}

.rd-navbar-fixed .rd-navbar-nav::-webkit-scrollbar-track,
.rd-navbar-sidebar::-webkit-scrollbar-track {
  background: #fff;
  border: none;
  border-radius: 0;
}

.rd-navbar-fixed .rd-navbar-nav .rd-navbar-submenu-toggle::after,
.rd-navbar-sidebar .rd-navbar-nav .rd-navbar-submenu-toggle::after {
  content: '\f236';
  position: absolute;
  top: 22px;
  right: 0;
  margin-top: -22px;
  width: 65px;
  height: 44px;
  font: 400 20px "Material Design Icons";
  line-height: 42px;
  text-align: center;
  transition: 0.4s all ease;
  z-index: 2;
  cursor: pointer;
  color: #313132;
}

@media (min-width: 768px) {
  .rd-navbar-fixed .rd-navbar-nav .rd-navbar-submenu-toggle:after,
  .rd-navbar-sidebar .rd-navbar-nav .rd-navbar-submenu-toggle:after {
    top: 25px;
  }
}

.rd-navbar-fixed .rd-navbar-nav li,
.rd-navbar-sidebar .rd-navbar-nav li {
  position: relative;
}

.rd-navbar-fixed .rd-navbar-nav li li > a,
.rd-navbar-sidebar .rd-navbar-nav li li > a {
  font-size: 14px;
  padding: 8px 56px 8px 20px;
}

.rd-navbar-fixed .rd-navbar-nav li > a,
.rd-navbar-sidebar .rd-navbar-nav li > a {
  position: relative;
  display: block;
  padding: 5px 45px 5px 15px;
}

.rd-navbar-fixed .rd-navbar-nav li.active > a,
.rd-navbar-fixed .rd-navbar-nav li.focus > a,
.rd-navbar-fixed .rd-navbar-nav li > a:hover,
.rd-navbar-sidebar .rd-navbar-nav li.active > a,
.rd-navbar-sidebar .rd-navbar-nav li.focus > a,
.rd-navbar-sidebar .rd-navbar-nav li > a:hover {
  color: #fff;
  background: #084884;
}

.rd-navbar-fixed .rd-navbar-nav li + li, .rd-navbar-fixed .rd-navbar-nav li > img + a, .rd-navbar-fixed .rd-navbar-nav li > a + a, .rd-navbar-fixed .rd-navbar-nav li > a + ul,
.rd-navbar-sidebar .rd-navbar-nav li + li,
.rd-navbar-sidebar .rd-navbar-nav li > img + a,
.rd-navbar-sidebar .rd-navbar-nav li > a + a,
.rd-navbar-sidebar .rd-navbar-nav li > a + ul {
  margin-top: 4px;
}

.rd-navbar-fixed .rd-navbar-nav .rd-navbar-dropdown > li > a,
.rd-navbar-sidebar .rd-navbar-nav .rd-navbar-dropdown > li > a {
  padding-left: 20px;
}

.rd-navbar-fixed .rd-navbar-nav .rd-navbar-dropdown ul > li > a,
.rd-navbar-sidebar .rd-navbar-nav .rd-navbar-dropdown ul > li > a {
  padding-left: 25px;
}

.rd-navbar-fixed .rd-navbar-search .rd-search-submit,
.rd-navbar-sidebar .rd-navbar-search .rd-search-submit {
  -webkit-transform: scale(0.7);
  transform: scale(0.7);
}

/*
* Static Layout
*/
.rd-navbar-static {
  display: block;
}

.rd-navbar-static .rd-navbar-panel {
  min-width: 260px;
}

@media (min-width: 1200px) {
  .rd-navbar-static .rd-navbar-panel {
    min-width: 300px;
  }
}

.rd-navbar-static .rd-navbar-nav-wrap {
  text-align: center;
}

.rd-navbar-static .rd-navbar-nav > li {
  display: inline-block;
}

.rd-navbar-static .rd-navbar-nav > li + li {
  margin-left: 35px;
}

@media (min-width: 1200px) {
  .rd-navbar-static .rd-navbar-nav > li + li {
    margin-left: 63px;
  }
}

.rd-navbar-static .rd-navbar-inner {
  position: relative;
}

.rd-navbar-static .block-wrap-list {
  font-size: 13px;
}

.rd-navbar-static .block-wrap-list li {
  display: inline-block;
}

.rd-navbar-static .block-wrap-list li + li {
  margin-left: 30px;
}

@media (min-width: 1200px) {
  .rd-navbar-static .block-wrap-list {
    font-size: 14px;
  }
  .rd-navbar-static .block-wrap-list li + li {
    margin-left: 66px;
  }
}

.rd-navbar-static.rd-navbar-corporate .rd-navbar-nav-wrap, .rd-navbar-static.rd-navbar-center .rd-navbar-nav-wrap {
  border-top: 1px solid #42a4ff;
}

.rd-navbar-static.rd-navbar-corporate .rd-navbar-inner {
 /* padding-top: 60px; */
}

.rd-navbar-static.rd-navbar-corporate .rd-navbar-top-panel {
  position: absolute;
  top: 0;
  right: 0;
  left: 0;
  background: #084884;
}

.rd-navbar-static.rd-navbar-corporate .rd-navbar-top-panel:before {
  content: '';
  position: absolute;
  top: 0;
  bottom: 0;
  width: 120vw;
  left: 50%;
  -webkit-transform: translateX(-50%);
  transform: translateX(-50%);
  background: inherit;
  z-index: 0;
  height: 100%;
}

.rd-navbar-static.rd-navbar-corporate .rd-navbar-top-panel-inner {
  position: relative;
  padding: 12px;
  margin: 0 auto;
  z-index: 0;
  width: 970px;
}

.rd-navbar-static.rd-navbar-corporate .rd-navbar-top-panel-inner > * {
  margin-top: 0;
}

@media (min-width: 1200px) {
  .rd-navbar-static.rd-navbar-corporate .rd-navbar-top-panel-inner {
    width: 1200px;
  }
}

.rd-navbar-static.rd-navbar-corporate .rd-navbar-panel,
.rd-navbar-static.rd-navbar-corporate .rd-navbar-top-panel-inner,
.rd-navbar-static.rd-navbar-corporate .rd-navbar-middle-panel,
.rd-navbar-static.rd-navbar-corporate .rd-navbar-nav-wrap {
  display: -ms-flexbox;
  display: -webkit-flex;
  display: flex;
  -webkit-flex-wrap: nowrap;
  -ms-flex-wrap: nowrap;
  flex-wrap: nowrap;
  -webkit-justify-content: space-between;
  -ms-flex-pack: justify;
  justify-content: space-between;
  -webkit-align-items: center;
  -ms-flex-align: center;
  align-items: center;
}

.rd-navbar-static.rd-navbar-corporate .rd-navbar-middle-panel, .rd-navbar-static.rd-navbar-center .rd-navbar-middle-panel {
  padding: 47px 0;
}

.rd-navbar-static.rd-navbar-corporate .rd-navbar-nav-wrap, .rd-navbar-static.rd-navbar-center .rd-navbar-nav-wrap {
  padding: 5px 0;
}

.rd-navbar-static.rd-navbar-corporate .rd-navbar-nav-wrap .rd-navbar-nav > li, .rd-navbar-static.rd-navbar-center .rd-navbar-nav-wrap .rd-navbar-nav > li {
  padding: 13px 0;
}

.rd-navbar-static.rd-navbar-center .rd-navbar-panel {
  text-align: center;
}

.rd-navbar-static.rd-navbar-center .rd-navbar-nav-wrap,
.rd-navbar-static.rd-navbar-center .rd-navbar-top-panel-inner,
.rd-navbar-static.rd-navbar-center .unit-list {
  display: -ms-flexbox;
  display: -webkit-flex;
  display: flex;
  -webkit-flex-wrap: nowrap;
  -ms-flex-wrap: nowrap;
  flex-wrap: nowrap;
  -webkit-justify-content: space-between;
  -ms-flex-pack: justify;
  justify-content: space-between;
  -webkit-align-items: center;
  -ms-flex-align: center;
  align-items: center;
}

.rd-navbar-static.rd-navbar-center .rd-navbar-nav-wrap {
  position: relative;
  z-index: 5;
}

.rd-navbar-static.rd-navbar-center .rd-navbar-aside {
  position: relative;
  z-index: 0;
  background: #084884;
}

.rd-navbar-static.rd-navbar-center .rd-navbar-aside:before {
  content: '';
  position: absolute;
  top: 0;
  bottom: 0;
  width: 120vw;
  background: inherit;
  z-index: -1;
  left: 50%;
  -webkit-transform: translateX(-50%);
  transform: translateX(-50%);
}

.rd-navbar-static.rd-navbar-center .rd-navbar-aside-content {
  padding: 17px 0;
}

.rd-navbar-static.rd-navbar-center .rd-navbar-aside-content .unit-list li {
  display: inline-block;
}

@media (max-width: 1199px) {
  .rd-navbar-static.rd-navbar-center .rd-navbar-aside-content .unit-list > li .unit {
    text-align: center;
    -webkit-flex-direction: column;
    -ms-flex-direction: column;
    flex-direction: column;
  }
  .rd-navbar-static.rd-navbar-center .rd-navbar-aside-content .unit-list > li .unit .unit-body {
    padding-top: 8px;
    padding-left: 0;
  }
}

.rd-navbar-static.rd-navbar-center .rd-navbar-aside-content .unit-list > li {
  margin-right: 20px;
}

.rd-navbar-static.rd-navbar-center .rd-navbar-aside-content .unit-list > li:first-child {
  text-align: left;
}

.rd-navbar-static.rd-navbar-center .rd-navbar-aside-content .unit-list > li:first-child .unit {
  -webkit-justify-content: flex-start;
  -ms-flex-pack: start;
  justify-content: flex-start;
}

.rd-navbar-static.rd-navbar-center .rd-navbar-aside-content .unit-list > li:nth-child(2) {
  text-align: center;
  -webkit-flex-grow: 1;
  -ms-flex-positive: 1;
  flex-grow: 1;
}

.rd-navbar-static.rd-navbar-center .rd-navbar-aside-content .unit-list > li:nth-child(2) .unit {
  -webkit-justify-content: center;
  -ms-flex-pack: center;
  justify-content: center;
}

.rd-navbar-static.rd-navbar-center .rd-navbar-aside-content .unit-list > li:last-child {
  margin-right: 0;
  text-align: right;
}

.rd-navbar-static.rd-navbar-center .rd-navbar-aside-content .unit-list > li:last-child .unit {
  -webkit-justify-content: flex-end;
  -ms-flex-pack: end;
  justify-content: flex-end;
}

.rd-navbar-static.rd-navbar-center .rd-navbar-top-panel {
  position: absolute;
  left: 15px;
  right: 15px;
  bottom: 105px;
}

.rd-navbar-static.rd-navbar-center .rd-navbar-top-panel * + .btn {
  margin-top: 0;
}

.rd-navbar-static.rd-navbar-center .rd-navbar-megamenu {
  left: 0;
}

.rd-navbar-static.rd-navbar-minimal .rd-navbar-inner,
.rd-navbar-static.rd-navbar-minimal .rd-navbar-outer-panel,
.rd-navbar-static.rd-navbar-minimal .rd-navbar-nav-wrap {
  display: -ms-flexbox;
  display: -webkit-flex;
  display: flex;
  -webkit-flex-wrap: nowrap;
  -ms-flex-wrap: nowrap;
  flex-wrap: nowrap;
  -webkit-justify-content: space-between;
  -ms-flex-pack: justify;
  justify-content: space-between;
  -webkit-align-items: center;
  -ms-flex-align: center;
  align-items: center;
}

.rd-navbar-static.rd-navbar-minimal .rd-navbar-outer-panel {
  margin-top: 30px;
  -webkit-flex-direction: row;
  -ms-flex-direction: row;
  flex-direction: row;
}

.rd-navbar-static.rd-navbar-minimal .rd-navbar-top-panel {
  margin-top: 20px;
}

.rd-navbar-static.rd-navbar-minimal .rd-navbar-panel {
  text-align: center;
}

.rd-navbar-static.rd-navbar-minimal .rd-navbar-inner {
  -webkit-flex-direction: column;
  -ms-flex-direction: column;
  flex-direction: column;
}

.rd-navbar-static.rd-navbar-minimal .rd-navbar-search .rd-search {
  top: 84px;
}

.rd-navbar-static.rd-navbar-minimal .rd-navbar-search .rd-navbar-search-toggle {
  top: -2px;
}

.rd-navbar-static.rd-navbar-minimal .rd-navbar-nav > li > .rd-navbar-dropdown {
  margin-top: 40px;
}

.rd-navbar-static.rd-navbar-minimal .rd-navbar-megamenu {
  left: calc(50vw - 970px / 2 + 15px + (970px / 12) * 0);
}

@media (min-width: 1200px) {
  .rd-navbar-static.rd-navbar-minimal .rd-navbar-megamenu {
    left: calc(50vw - 1200px / 2 + 15px + (1200px / 12) * 0);
  }
}

@media (min-width: 1200px) {
  .rd-navbar-static.rd-navbar-minimal .rd-navbar-panel {
    text-align: left;
    min-width: 170px;
  }
  .rd-navbar-static.rd-navbar-minimal .rd-navbar-inner {
    -webkit-flex-direction: row;
    -ms-flex-direction: row;
    flex-direction: row;
  }
  .rd-navbar-static.rd-navbar-minimal .rd-navbar-outer-panel {
    margin-top: 0;
  }
}

.rd-navbar-static.rd-navbar-minimal .rd-navbar-inner {
  padding: 30px 15px;
  width: 100%;
  max-width: 100%;
}

.rd-navbar-static.rd-navbar-minimal .rd-navbar-nav-wrap {
  padding: 5px 0;
  text-align: center;
}

.rd-navbar-static.rd-navbar-minimal .rd-navbar-nav-wrap .rd-navbar-nav > li {
  padding: 13px 0;
}

.rd-navbar-static.rd-navbar-minimal .rd-navbar-nav > li > .rd-navbar-dropdown {
  margin-top: 40px;
}

@media (min-width: 1800px) {
  .rd-navbar-static.rd-navbar-minimal .rd-navbar-inner {
    padding-left: 68px;
    padding-right: 68px;
  }
  .rd-navbar-static.rd-navbar-minimal .rd-navbar-panel {
    width: calc(50vw - 1200px / 2 - 15px + (1200px / 12) * 0);
  }
  .rd-navbar-static.rd-navbar-minimal .rd-navbar-outer-panel {
    margin-top: 0;
    width: calc(50vw - 1200px / 2 + (1200px / 12) * 12);
  }
}

@media (max-width: 1799px) {
  .rd-navbar-static.rd-navbar-minimal .rd-navbar-aside {
    position: relative;
    margin-left: 33px;
  }
  .rd-navbar-static.rd-navbar-minimal .rd-navbar-aside .rd-navbar-aside-content {
    position: absolute;
    top: calc(100% + 34px);
    right: 0;
    width: auto;
    padding: 20px;
    margin: 0 -1px;
    text-align: center;
    pointer-events: auto;
    background: #fff;
    border: none;
    opacity: 0;
    visibility: hidden;
    transition: .23s all ease-out;
    -webkit-box-shadow: 0px 2px 10px 0px rgba(49, 49, 50, 0.13);
    box-shadow: 0px 2px 10px 0px rgba(49, 49, 50, 0.13);
  }
  .rd-navbar-static.rd-navbar-minimal .rd-navbar-aside.active .rd-navbar-aside-content {
    visibility: visible;
    opacity: 1;
  }
  .rd-navbar-static.rd-navbar-minimal .rd-navbar-aside-toggle {
    display: block;
    top: 2px;
    right: 4px;
    width: 48px;
    background: none;
    border: none;
    display: inline-block;
    padding: 0;
    outline: none;
    outline-offset: 0;
    cursor: pointer;
    -webkit-appearance: none;
    display: inline-block;
    position: relative;
    width: 48px;
    height: 48px;
    line-height: 48px;
    cursor: pointer;
    color: #fff;
  }
  .rd-navbar-static.rd-navbar-minimal .rd-navbar-aside-toggle::-moz-focus-inner {
    border: none;
    padding: 0;
  }
  .rd-navbar-static.rd-navbar-minimal .rd-navbar-aside-toggle span {
    top: 50%;
    margin-top: -3px;
  }
  .rd-navbar-static.rd-navbar-minimal .rd-navbar-aside-toggle span, .rd-navbar-static.rd-navbar-minimal .rd-navbar-aside-toggle span:before, .rd-navbar-static.rd-navbar-minimal .rd-navbar-aside-toggle span:after {
    position: absolute;
    width: 6px;
    height: 6px;
    line-height: 6px;
    text-align: center;
    background: #fff;
    left: 50%;
    margin-left: -3px;
    border-radius: 50%;
    transition: .3s all ease;
  }
  .rd-navbar-static.rd-navbar-minimal .rd-navbar-aside-toggle span:before, .rd-navbar-static.rd-navbar-minimal .rd-navbar-aside-toggle span:after {
    content: '';
  }
  .rd-navbar-static.rd-navbar-minimal .rd-navbar-aside-toggle span:before {
    bottom: 100%;
    margin-bottom: 3px;
  }
  .rd-navbar-static.rd-navbar-minimal .rd-navbar-aside-toggle span:after {
    top: 100%;
    margin-top: 3px;
  }
  .rd-navbar-static.rd-navbar-minimal .rd-navbar-aside-toggle.active span {
    -webkit-transform: scale(0.7);
    transform: scale(0.7);
  }
  .rd-navbar-static.rd-navbar-minimal .rd-navbar-aside-toggle.active span:before {
    -webkit-transform: translateY(18px);
    transform: translateY(18px);
  }
  .rd-navbar-static.rd-navbar-minimal .rd-navbar-aside-toggle.active span:after {
    -webkit-transform: translateY(-18px);
    transform: translateY(-18px);
  }
  .rd-navbar-static.rd-navbar-minimal .rd-navbar-aside-toggle:hover span, .rd-navbar-static.rd-navbar-minimal .rd-navbar-aside-toggle:hover span:before, .rd-navbar-static.rd-navbar-minimal .rd-navbar-aside-toggle:hover span:after {
    background: #084884;
  }
}

.rd-navbar-static.rd-navbar-minimal .rd-navbar-inner,
.rd-navbar-static.rd-navbar-minimal .rd-navbar-outer-panel,
.rd-navbar-static.rd-navbar-minimal .rd-navbar-nav-wrap, .rd-navbar-static.rd-navbar-transparent .rd-navbar-inner,
.rd-navbar-static.rd-navbar-transparent .rd-navbar-outer-panel,
.rd-navbar-static.rd-navbar-transparent .rd-navbar-nav-wrap {
  display: -ms-flexbox;
  display: -webkit-flex;
  display: flex;
  -webkit-flex-wrap: nowrap;
  -ms-flex-wrap: nowrap;
  flex-wrap: nowrap;
  -webkit-justify-content: space-between;
  -ms-flex-pack: justify;
  justify-content: space-between;
  -webkit-align-items: center;
  -ms-flex-align: center;
  align-items: center;
}

.rd-navbar-static.rd-navbar-minimal .rd-navbar-nav > li + li, .rd-navbar-static.rd-navbar-transparent .rd-navbar-nav > li + li {
  margin-left: 30px;
}

.rd-navbar-static.rd-navbar-minimal .rd-navbar-search, .rd-navbar-static.rd-navbar-transparent .rd-navbar-search {
  margin-left: 33px;
}

@media (min-width: 1200px) {
  .rd-navbar-static.rd-navbar-minimal .rd-navbar-nav > li + li, .rd-navbar-static.rd-navbar-transparent .rd-navbar-nav > li + li {
    margin-left: 35px;
  }
}

@media (min-width: 1800px) {
  .rd-navbar-static.rd-navbar-minimal .rd-navbar-nav > li + li, .rd-navbar-static.rd-navbar-transparent .rd-navbar-nav > li + li {
    margin-left: 44px;
  }
}

.rd-navbar-static.rd-navbar-transparent {
  background: transparent;
  transition: .15s all ease-in-out;
}

.rd-navbar-static.rd-navbar-transparent .rd-navbar-inner {
  padding-top: 30px;
  padding-bottom: 30px;
}

.rd-navbar-static.rd-navbar-transparent .rd-navbar-panel {
  min-width: 225px;
}

.rd-navbar-static.rd-navbar-transparent .rd-navbar-nav > li > a, .rd-navbar-static.rd-navbar-transparent .rd-navbar-nav > li > a:active, .rd-navbar-static.rd-navbar-transparent .rd-navbar-nav > li > a:focus {
  color: #313132;
}

.rd-navbar-static.rd-navbar-transparent .rd-navbar-nav > li > a:hover {
  color: #42a4ff;
}

.rd-navbar-static.rd-navbar-transparent .rd-navbar-nav > li.focus > a,
.rd-navbar-static.rd-navbar-transparent .rd-navbar-nav > li.focus > .rd-navbar-submenu-toggle:after,
.rd-navbar-static.rd-navbar-transparent .rd-navbar-nav > li.active > a,
.rd-navbar-static.rd-navbar-transparent .rd-navbar-nav > li.active > .rd-navbar-submenu-toggle:after,
.rd-navbar-static.rd-navbar-transparent .rd-navbar-nav > li.opened > a,
.rd-navbar-static.rd-navbar-transparent .rd-navbar-nav > li.opened > .rd-navbar-submenu-toggle:after {
  color: #42a4ff;
}

.rd-navbar-static.rd-navbar-transparent .rd-navbar-nav > li > .rd-navbar-dropdown {
  margin-top: 47px;
}

.rd-navbar-static.rd-navbar-transparent .rd-navbar-search .rd-search {
  top: 78px;
}

.rd-navbar-static.rd-navbar-transparent .rd-navbar-search .rd-navbar-search-toggle, .rd-navbar-static.rd-navbar-transparent .rd-navbar-search .rd-navbar-search-toggle:active, .rd-navbar-static.rd-navbar-transparent .rd-navbar-search .rd-navbar-search-toggle:focus {
  color: #313132;
}

.rd-navbar-static.rd-navbar-transparent .rd-navbar-search .rd-navbar-search-toggle:hover {
  color: #42a4ff;
}

@media (max-width: 1199px) {
  .rd-navbar-static.rd-navbar-transparent .rd-navbar-panel {
    min-width: 200px;
  }
  .rd-navbar-static.rd-navbar-transparent .rd-navbar-nav > li > a {
    font-size: 15px;
  }
  .rd-navbar-static.rd-navbar-transparent .rd-navbar-nav > li + li {
    margin-left: 20px;
  }
  .rd-navbar-static.rd-navbar-transparent .rd-navbar-search {
    margin-left: 25px;
  }
}

.rd-navbar-static.rd-navbar--is-stuck.rd-navbar-corporate .rd-navbar-top-panel,
.rd-navbar-static.rd-navbar--is-stuck.rd-navbar-corporate .rd-navbar-middle-panel, .rd-navbar-static.rd-navbar--is-stuck.rd-navbar-center .rd-navbar-top-panel,
.rd-navbar-static.rd-navbar--is-stuck.rd-navbar-center .rd-navbar-middle-panel {
  display: none;
}

.rd-navbar-static.rd-navbar--is-stuck.rd-navbar-corporate .rd-navbar-nav-wrap, .rd-navbar-static.rd-navbar--is-stuck.rd-navbar-center .rd-navbar-nav-wrap {
  border-top: 0;
}

.rd-navbar-static.rd-navbar--is-stuck.rd-navbar-corporate .rd-navbar-inner, .rd-navbar-static.rd-navbar--is-stuck.rd-navbar-center .rd-navbar-inner {
  padding-top: 0;
}

.rd-navbar-static.rd-navbar--is-stuck.rd-navbar-center .rd-navbar-aside {
  display: none;
}

.rd-navbar-static.rd-navbar--is-stuck.rd-navbar-minimal .rd-navbar-inner {
  padding-top: 7px;
  padding-bottom: 7px;
}

.rd-navbar-static.rd-navbar--is-stuck.rd-navbar-minimal .rd-navbar-nav > li > .rd-navbar-dropdown {
  margin-top: 17px;
}

@media (max-width: 1199px) {
  .rd-navbar-static.rd-navbar--is-stuck.rd-navbar-minimal .rd-navbar-panel {
    display: none;
  }
  .rd-navbar-static.rd-navbar--is-stuck.rd-navbar-minimal .rd-navbar-outer-panel {
    margin-top: 0;
  }
}

@media (max-width: 1799px) {
  .rd-navbar-static.rd-navbar--is-stuck.rd-navbar-minimal .rd-navbar-aside .rd-navbar-aside-content {
    top: calc(100% + 11px);
  }
}

.rd-navbar-static.rd-navbar--is-stuck.rd-navbar-minimal .rd-navbar-search .rd-search, .rd-navbar-static.rd-navbar--is-stuck.rd-navbar-transparent .rd-navbar-search .rd-search {
  top: 60px;
}

.rd-navbar-static.rd-navbar--is-stuck.rd-navbar-transparent {
  background: url("../images/bg-color-1.png") repeat;
  background-position: center center;
}

.rd-navbar-static.rd-navbar--is-stuck.rd-navbar-transparent .rd-navbar-nav > li > .rd-navbar-dropdown {
  margin-top: 29px;
}

.rd-navbar-static.rd-navbar--is-stuck.rd-navbar-transparent .rd-navbar-inner {
  padding-top: 12px;
  padding-bottom: 12px;
}

.rd-navbar-wrap-absolute {
  position: absolute;
  top: 0;
  right: 0;
  left: 0;
}

.rd-navbar-wrap-fixed {
  position: fixed;
  top: 0;
  bottom: 0;
  left: 0;
}

/*
* Fullwidth Layout
*/
.rd-navbar-fullwidth {
  display: block;
  text-align: center;
}

.rd-navbar-fullwidth .rd-navbar-nav {
  width: 100%;
}

.rd-navbar-fullwidth .rd-navbar-nav > li + li {
  margin-left: 20px;
}

.rd-navbar-fullwidth.rd-navbar--is-stuck .rd-navbar-panel {
  display: none;
}

/*
* Fixed Layout
*/
.rd-navbar-fixed {
  display: block;
}

.rd-navbar-fixed .rd-navbar-panel .rd-navbar-brand {
  position: fixed;
  top: 13px;
  left: 56px;
  z-index: 17;
  display: block;
  overflow: hidden;
  text-align: left;
  white-space: nowrap;
  text-overflow: ellipsis;
}

.rd-navbar-fixed .rd-navbar-panel .rd-navbar-brand img {
  height: 30px;
  width: auto;
}

.rd-navbar-fixed .rd-navbar-panel {
  display: -ms-flexbox;
  display: -webkit-flex;
  display: flex;
  position: fixed;
  left: 0;
  top: 0;
  right: 0;
  padding: 4px;
  height: 56px;
  color: #313132;
  z-index: 999;
}

.rd-navbar-fixed .rd-navbar-panel:before {
  content: '';
  position: absolute;
  left: 0;
  top: 0;
  bottom: 0;
  right: 0;
  box-shadow: 0px 2px 10px 0px rgba(49, 49, 50, 0.13);
  border-bottom: none;
  background: #fff;
}

.rd-navbar-fixed .rd-navbar-toggle {
  display: inline-block;
}

.rd-navbar-fixed .rd-navbar-outer-panel {
  position: fixed;
  top: -56px;
  left: 0;
  width: 270px;
  padding: 112px 0 140px;
  bottom: 0;
  color: #fff;
  background: #fff;
  z-index: 15;
  overflow-x: hidden;
  overflow-y: auto;
  -webkit-transform: translateX(-120%);
  transform: translateX(-120%);
  -webkit-box-shadow: 0px 2px 10px 0px rgba(49, 49, 50, 0.13);
  box-shadow: 0px 2px 10px 0px rgba(49, 49, 50, 0.13);
}

.rd-navbar-fixed .rd-navbar-outer-panel.active {
  -webkit-transform: translateX(0);
  transform: translateX(0);
}

.rd-navbar-fixed .rd-navbar-outer-panel .rd-navbar-brand {
  display: none;
}

.rd-navbar-fixed .rd-navbar-nav {
  display: block;
  height: auto;
  font-size: 16px;
  line-height: 26px;
  text-align: left;
}

.rd-navbar-fixed .rd-navbar-nav:before, .rd-navbar-fixed .rd-navbar-nav:after {
  content: '';
  display: block;
  height: 8px;
}

.rd-navbar-fixed .rd-navbar-nav li > a {
  display: block;
  padding: 11px 56px 11px 16px;
  color: #313132;
}

.rd-navbar-fixed .rd-navbar-nav li:hover > a, .rd-navbar-fixed .rd-navbar-nav li:hover > a:hover, .rd-navbar-fixed .rd-navbar-nav li.focus > a, .rd-navbar-fixed .rd-navbar-nav li.focus > a:hover, .rd-navbar-fixed .rd-navbar-nav li.active > a, .rd-navbar-fixed .rd-navbar-nav li.active > a:hover, .rd-navbar-fixed .rd-navbar-nav li.opened > a, .rd-navbar-fixed .rd-navbar-nav li.opened > a:hover {
  color: #fff;
  background: #084884;
}

.rd-navbar-fixed .rd-navbar-nav li:hover > .rd-navbar-submenu-toggle::after, .rd-navbar-fixed .rd-navbar-nav li.focus > .rd-navbar-submenu-toggle::after, .rd-navbar-fixed .rd-navbar-nav li.active > .rd-navbar-submenu-toggle::after, .rd-navbar-fixed .rd-navbar-nav li.opened > .rd-navbar-submenu-toggle::after {
  color: #fff;
}

.rd-navbar-fixed .rd-navbar-dropdown,
.rd-navbar-fixed .rd-navbar-megamenu {
  display: none;
}

.rd-navbar-fixed .rd-navbar-megamenu {
  padding: 15px 0;
}

.rd-navbar-fixed .rd-navbar-megamenu > li + li {
  margin-top: 22px;
}

.rd-navbar-fixed .rd-navbar-megamenu h6, .rd-navbar-fixed .rd-navbar-megamenu .h6 {
  font-size: 14px;
  padding-left: 15px;
}

.rd-navbar-fixed .rd-navbar-megamenu .list-marked-variant-1 {
  margin-top: 15px;
}

.rd-navbar-fixed .rd-navbar-megamenu .list-marked-variant-1 li {
  padding-left: 0;
}

.rd-navbar-fixed .rd-navbar-megamenu .list-marked-variant-1 li:before {
  display: none;
}

.rd-navbar-fixed .rd-navbar-megamenu .list-marked-variant-1 a {
  padding: 8px 56px 8px 23px;
}

.rd-navbar-fixed .rd-navbar-submenu {
  position: relative;
}

.rd-navbar-fixed .rd-navbar-submenu li > a {
  padding-left: 32px;
}

.rd-navbar-fixed .rd-navbar-submenu .rd-navbar-dropdown li li > a,
.rd-navbar-fixed .rd-navbar-submenu .rd-navbar-megamenu ul li li > a {
  padding-left: 48px;
}

.rd-navbar-fixed .rd-navbar-submenu.opened > .rd-navbar-dropdown,
.rd-navbar-fixed .rd-navbar-submenu.opened > .rd-navbar-megamenu {
  display: block;
}

.rd-navbar-fixed .rd-navbar-top-panel {
  width: 100%;
  text-align: center;
  margin-top: 15px;
  margin-bottom: 50px;
}

.rd-navbar-fixed .rd-navbar-top-panel-inner {
  max-width: 100%;
  padding-left: 10px;
  padding-right: 10px;
}

.rd-navbar-fixed .rd-navbar-top-panel-inner > * {
  width: 100%;
}

.rd-navbar-fixed .rd-navbar-top-panel a.icon-primary:hover {
  color: #084884;
}

.rd-navbar-fixed .rd-navbar-top-panel .btn.btn-primary-variant-1:hover {
  background: #084884;
  border-color: #084884;
}

.rd-navbar-fixed .rd-navbar-nav li .rd-navbar-dropdown,
.rd-navbar-fixed .rd-navbar-nav li .rd-navbar-megamenu {
  transition: opacity 0.3s, height 0.4s ease;
  opacity: 0;
  height: 0;
  overflow: hidden;
}

.rd-navbar-fixed .rd-navbar-nav li.opened > .rd-navbar-dropdown,
.rd-navbar-fixed .rd-navbar-nav li.opened > .rd-navbar-megamenu {
  opacity: 1;
  height: auto;
}

.rd-navbar-fixed .rd-navbar-nav li.opened > .rd-navbar-submenu-toggle {
  color: #fff;
}

.rd-navbar-fixed .rd-navbar-nav li.opened > .rd-navbar-submenu-toggle::after {
  -webkit-transform: rotate(180deg);
  transform: rotate(180deg);
}

.rd-navbar-fixed .rd-navbar-collapse,
.rd-navbar-fixed .rd-navbar-search-toggle {
  position: fixed;
  top: 4px;
  height: 48px;
  z-index: 1000;
  background-color: transparent;
  border: none;
}

.rd-navbar-fixed .rd-navbar-collapse:focus,
.rd-navbar-fixed .rd-navbar-search-toggle:focus {
  outline: none;
}

@media (min-width: 768px) {
  .rd-navbar-fixed .rd-navbar-collapse,
  .rd-navbar-fixed .rd-navbar-search-toggle {
    top: 22px;
  }
}

.rd-navbar-fixed .rd-navbar-aside {
  top: 0;
  right: 0;
  width: 100%;
}

.rd-navbar-fixed .rd-navbar-aside, .rd-navbar-fixed .rd-navbar-aside .rd-navbar-aside-toggle {
  position: fixed;
  z-index: 1000;
  display: block;
  height: 48px;
}

.rd-navbar-fixed .rd-navbar-aside .block-wrap-list {
  margin-left: -20px;
}

.rd-navbar-fixed .rd-navbar-aside .block-wrap {
  display: inline-block;
  margin-top: 15px;
  margin-left: 20px;
  text-align: left;
}

@media (max-width: 767px) {
  .rd-navbar-fixed .rd-navbar-aside .block-wrap {
    text-align: center;
  }
  .rd-navbar-fixed .rd-navbar-aside .block-wrap .icon-sm,
  .rd-navbar-fixed .rd-navbar-aside .block-wrap .icon-sm-variant-1 {
    width: 22px;
    height: 22px;
    font-size: 22px;
    line-height: 22px;
    background: transparent;
    color: #084884;
  }
}

.rd-navbar-fixed .rd-navbar-aside.active .rd-navbar-aside-content {
  visibility: visible;
  opacity: 1;
}

.rd-navbar-fixed .rd-navbar-aside-toggle {
  top: 4px;
  right: 4px;
  width: 48px;
  background: none;
  border: none;
  display: inline-block;
  padding: 0;
  outline: none;
  outline-offset: 0;
  cursor: pointer;
  -webkit-appearance: none;
  display: inline-block;
  position: relative;
  width: 48px;
  height: 48px;
  line-height: 48px;
  cursor: pointer;
  color: #000;
}

.rd-navbar-fixed .rd-navbar-aside-toggle::-moz-focus-inner {
  border: none;
  padding: 0;
}

.rd-navbar-fixed .rd-navbar-aside-toggle span {
  top: 50%;
  margin-top: -3px;
}

.rd-navbar-fixed .rd-navbar-aside-toggle span, .rd-navbar-fixed .rd-navbar-aside-toggle span:before, .rd-navbar-fixed .rd-navbar-aside-toggle span:after {
  position: absolute;
  width: 6px;
  height: 6px;
  line-height: 6px;
  text-align: center;
  background: #000;
  left: 50%;
  margin-left: -3px;
  border-radius: 50%;
  transition: .3s all ease;
}

.rd-navbar-fixed .rd-navbar-aside-toggle span:before, .rd-navbar-fixed .rd-navbar-aside-toggle span:after {
  content: '';
}

.rd-navbar-fixed .rd-navbar-aside-toggle span:before {
  bottom: 100%;
  margin-bottom: 3px;
}

.rd-navbar-fixed .rd-navbar-aside-toggle span:after {
  top: 100%;
  margin-top: 3px;
}

.rd-navbar-fixed .rd-navbar-aside-toggle.active span {
  -webkit-transform: scale(0.7);
  transform: scale(0.7);
}

.rd-navbar-fixed .rd-navbar-aside-toggle.active span:before {
  -webkit-transform: translateY(18px);
  transform: translateY(18px);
}

.rd-navbar-fixed .rd-navbar-aside-toggle.active span:after {
  -webkit-transform: translateY(-18px);
  transform: translateY(-18px);
}

.rd-navbar-fixed .rd-navbar-aside-content {
  position: absolute;
  top: calc(100% + 8px);
  right: 0;
  width: calc(100% + 2px);
  padding: 20px 15px 35px;
  margin: 0 -1px;
  text-align: center;
  pointer-events: auto;
  background: #fff;
  border: none;
  opacity: 0;
  visibility: hidden;
  transition: .23s all ease-out;
  -webkit-box-shadow: 0px 2px 10px 0px rgba(49, 49, 50, 0.13);
  box-shadow: 0px 2px 10px 0px rgba(49, 49, 50, 0.13);
}

.rd-navbar-fixed .rd-navbar-aside-content a, .rd-navbar-fixed .rd-navbar-aside-content a:active, .rd-navbar-fixed .rd-navbar-aside-content a:focus {
  color: #313132;
}

.rd-navbar-fixed .rd-navbar-aside-content a:hover {
  color: #42a4ff;
}

.rd-navbar-fixed .rd-navbar-aside-content .icon-white {
  color: #084884;
}

@media (min-width: 768px) {
  .rd-navbar-fixed .rd-navbar-aside-content {
    padding: 20px 15px 40px;
  }
  .rd-navbar-fixed .rd-navbar-aside-content .block-wrap-list {
    position: relative;
    display: inline-block;
    margin-left: -45px;
  }
  .rd-navbar-fixed .rd-navbar-aside-content .block-wrap {
    margin-top: 20px;
    margin-left: 45px;
  }
}

.rd-navbar-fixed .image-wrap-1 {
  position: fixed;
  top: 9px;
  left: 210px;
}

.rd-navbar-fixed .image-wrap-1 img {
  height: 34px;
  width: auto;
}

.rd-navbar-fixed .rd-navbar-search {
  margin-top: 10px;
  padding: 10px 10px;
}

.rd-navbar-fixed.rd-navbar-corporate .rd-navbar-aside-content .icon-white {
  color: #084884;
}

@media (min-width: 768px) {
  .rd-navbar-fixed.rd-navbar-corporate .rd-navbar-aside-content .icon-white {
    color: #fff;
  }
}

.rd-navbar-fixed.rd-navbar-center .rd-navbar-aside {
  text-align: center;
}

.rd-navbar-fixed.rd-navbar-center .rd-navbar-aside .unit {
  -webkit-justify-content: flex-start;
  -ms-flex-pack: start;
  justify-content: flex-start;
  -webkit-align-items: flex-start;
  -ms-flex-align: start;
  align-items: flex-start;
  text-align: left;
}

.rd-navbar-fixed.rd-navbar-center .rd-navbar-aside .unit-list > li + li {
  margin-top: 25px;
}

.rd-navbar-fixed.rd-navbar-center .rd-navbar-aside .unit-left {
  display: -ms-flexbox;
  display: -webkit-flex;
  display: flex;
}

.rd-navbar-fixed.rd-navbar-center .rd-navbar-aside .unit-left > * {
  margin: auto;
}

.rd-navbar-fixed.rd-navbar-center .rd-navbar-aside .list-links {
  display: block;
}

.rd-navbar-fixed.rd-navbar-center .rd-navbar-aside-content {
  width: auto;
  padding: 30px 35px;
}

.rd-navbar-fixed.rd-navbar-minimal .rd-navbar-aside {
  position: relative;
}

.rd-navbar-fixed.rd-navbar-minimal .rd-navbar-aside .rd-navbar-aside-toggle {
  display: none;
}

.rd-navbar-fixed.rd-navbar-minimal .rd-navbar-aside .rd-navbar-aside-content {
  position: relative;
  top: auto;
  right: auto;
  opacity: 1;
  padding: 0;
  visibility: visible;
  -webkit-box-shadow: none;
  box-shadow: none;
}

.rd-navbar-fixed.rd-navbar-minimal .rd-navbar-aside .rd-navbar-aside-content .btn, .rd-navbar-fixed.rd-navbar-minimal .rd-navbar-aside .rd-navbar-aside-content .btn:active, .rd-navbar-fixed.rd-navbar-minimal .rd-navbar-aside .rd-navbar-aside-content .btn:focus {
  color: #fff;
}

.rd-navbar-fixed .rd-navbar-search .rd-search {
  margin-top: 0;
}

.rd-navbar-fixed.active .rd-navbar-nav {
  -webkit-transform: translateX(0);
  transform: translateX(0);
}

@media (max-width: 1199px) {
  .rd-navbar-fixed.rd-navbar--on-search .brand-name {
    opacity: 0;
    visibility: hidden;
    -webkit-transform: scale(0.7);
    transform: scale(0.7);
  }
}

.rd-navbar-fixed.rd-navbar--is-clone {
  display: none;
}

.rd-navbar-fixed.rd-navbar--is-clone .rd-navbar-panel {
  -webkit-transform: translateY(-110%);
  transform: translateY(-110%);
}

.rd-navbar-fixed.rd-navbar--is-clone.rd-navbar--is-stuck .rd-navbar-panel {
  -webkit-transform: translateY(0);
  transform: translateY(0);
}

.rd-navbar-fixed .rd-navbar-fixed--visible {
  display: block;
}

.rd-navbar-fixed .rd-navbar-fixed--hidden {
  display: none;
}

.rd-navbar-fixed--visible {
  display: none;
}

html.rd-navbar-fixed-linked .page {
  padding-top: 56px;
}

/*
* Sidebar Layout
*/
html.rd-navbar-sidebar-linked body {
  padding-left: 0;
}

.rd-navbar-sidebar {
  display: block;
  background-color: transparent;
}

.rd-navbar-sidebar .rd-navbar-panel {
  display: inline-block;
  margin-left: auto;
  margin-right: auto;
  text-align: center;
}

.rd-navbar-sidebar .rd-navbar-panel .rd-navbar-brand {
  display: none;
}

.rd-navbar-sidebar .rd-navbar-outer-panel {
  position: fixed;
  top: 0;
  bottom: 0;
  left: 0;
  width: 300px;
  padding: 61px 12px 11px 3px;
  background: #fff;
  -webkit-box-shadow: 0px 2px 10px 0px rgba(49, 49, 50, 0.13);
  box-shadow: 0px 2px 10px 0px rgba(49, 49, 50, 0.13);
  overflow-x: hidden;
  overflow-y: auto;
  text-align: center;
  -webkit-transform: translate3d(-110%, 0, 0);
  transform: translate3d(-110%, 0, 0);
  transition: .4s all ease-in-out;
}

.rd-navbar-sidebar .rd-navbar-nav-wrap {
  margin-top: 37px;
  padding: 60px 19px 0 27px;
  text-align: left;
}

.rd-navbar-sidebar .rd-navbar-brand {
  position: relative;
  left: 0;
  right: 0;
  top: 0;
  text-align: center;
}

.rd-navbar-sidebar .rd-navbar-brand img {
  display: inline-block;
}

.rd-navbar-sidebar .rd-navbar-nav {
  padding-left: 7px;
  padding-right: 4px;
}

.rd-navbar-sidebar .rd-navbar-nav > li {
  line-height: 1;
}

.rd-navbar-sidebar .rd-navbar-nav > li > a, .rd-navbar-sidebar .rd-navbar-nav > li > a:active, .rd-navbar-sidebar .rd-navbar-nav > li > a:focus,
.rd-navbar-sidebar .rd-navbar-nav > li.focus > a,
.rd-navbar-sidebar .rd-navbar-nav > li.focus > a:active,
.rd-navbar-sidebar .rd-navbar-nav > li.focus > a:focus,
.rd-navbar-sidebar .rd-navbar-nav > li:hover > a,
.rd-navbar-sidebar .rd-navbar-nav > li:hover > a:active,
.rd-navbar-sidebar .rd-navbar-nav > li:hover > a:focus {
  color: #313132;
  background-color: transparent;
}

.rd-navbar-sidebar .rd-navbar-nav > li > a:hover,
.rd-navbar-sidebar .rd-navbar-nav > li.focus > a:hover,
.rd-navbar-sidebar .rd-navbar-nav > li:hover > a:hover {
  color: #42a4ff;
  background-color: transparent;
}

.rd-navbar-sidebar .rd-navbar-nav > li > a {
  display: inline-block;
  padding: 0;
}

.rd-navbar-sidebar .rd-navbar-nav > li + li {
  margin-top: 17px;
}

.rd-navbar-sidebar .rd-navbar-nav .rd-navbar-submenu-toggle {
  cursor: pointer;
}

.rd-navbar-sidebar .rd-navbar-nav .rd-navbar-submenu-toggle:after {
  width: auto;
  height: auto;
  top: 2px;
  margin: 0;
  line-height: 1;
}

.rd-navbar-sidebar .rd-navbar-nav .rd-navbar-submenu-toggle:after:hover {
  color: #42a4ff;
}

.rd-navbar-sidebar .rd-navbar-nav li .rd-navbar-dropdown,
.rd-navbar-sidebar .rd-navbar-nav li .rd-navbar-megamenu {
  transition: opacity 0.3s, height 0.4s ease;
  opacity: 0;
  height: 0;
  overflow: hidden;
}

.rd-navbar-sidebar .rd-navbar-nav li .rd-navbar-megamenu h6 {
  font-size: 14px;
  margin-bottom: 18px;
}

.rd-navbar-sidebar .rd-navbar-nav li .rd-navbar-megamenu > li + li {
  margin-top: 24px;
}

.rd-navbar-sidebar .rd-navbar-nav li .rd-navbar-dropdown li a,
.rd-navbar-sidebar .rd-navbar-nav li .rd-navbar-megamenu li a {
  display: inline;
  padding: 0;
  font-size: 14px;
}

.rd-navbar-sidebar .rd-navbar-nav li .rd-navbar-dropdown li a, .rd-navbar-sidebar .rd-navbar-nav li .rd-navbar-dropdown li a:active, .rd-navbar-sidebar .rd-navbar-nav li .rd-navbar-dropdown li a:focus,
.rd-navbar-sidebar .rd-navbar-nav li .rd-navbar-megamenu li a,
.rd-navbar-sidebar .rd-navbar-nav li .rd-navbar-megamenu li a:active,
.rd-navbar-sidebar .rd-navbar-nav li .rd-navbar-megamenu li a:focus {
  color: #42a4ff;
  background-color: transparent;
}

.rd-navbar-sidebar .rd-navbar-nav li .rd-navbar-dropdown li a:hover,
.rd-navbar-sidebar .rd-navbar-nav li .rd-navbar-megamenu li a:hover {
  color: #084884;
  background-color: transparent;
}

.rd-navbar-sidebar .rd-navbar-nav li .rd-navbar-dropdown li + li,
.rd-navbar-sidebar .rd-navbar-nav li .rd-navbar-megamenu li + li {
  margin-top: 22px;
}

.rd-navbar-sidebar .rd-navbar-nav li.opened > .rd-navbar-dropdown,
.rd-navbar-sidebar .rd-navbar-nav li.opened > .rd-navbar-megamenu {
  padding: 20px 0 20px 15px;
  opacity: 1;
  height: auto;
}

.rd-navbar-sidebar .rd-navbar-nav li.opened > a {
  background: transparent;
  color: #a5d4ff;
}

.rd-navbar-sidebar .rd-navbar-nav li.opened > .rd-navbar-submenu-toggle {
  color: #fff;
}

.rd-navbar-sidebar .rd-navbar-nav li.opened > .rd-navbar-submenu-toggle::after {
  -webkit-transform: rotate(180deg);
  transform: rotate(180deg);
}

.rd-navbar-sidebar .rd-navbar-top-panel {
  margin-top: 50px;
  text-align: center;
}

.rd-navbar-sidebar .rd-navbar-top-panel a.icon-primary, .rd-navbar-sidebar .rd-navbar-top-panel a.icon-primary:active, .rd-navbar-sidebar .rd-navbar-top-panel a.icon-primary:focus {
  color: #b1b1b1;
}

.rd-navbar-sidebar .rd-navbar-top-panel a.icon-primary:hover {
  color: #42a4ff;
}

.rd-navbar-sidebar .rd-navbar-toggle {
  background: none;
  border: none;
  display: inline-block;
  padding: 0;
  outline: none;
  outline-offset: 0;
  cursor: pointer;
  -webkit-appearance: none;
  display: inline-block;
  position: relative;
  width: 48px;
  height: 48px;
  line-height: 48px;
  cursor: pointer;
  color: #fff;
  background-color: transparent;
  border: none;
  transition: .4s all ease-in-out;
  will-change: transform;
}

.rd-navbar-sidebar .rd-navbar-toggle::-moz-focus-inner {
  border: none;
  padding: 0;
}

.rd-navbar-sidebar .rd-navbar-toggle span {
  position: relative;
  display: block;
  margin: auto;
  transition: .3s all ease;
}

.rd-navbar-sidebar .rd-navbar-toggle span:after, .rd-navbar-sidebar .rd-navbar-toggle span:before {
  content: "";
  position: absolute;
  left: 0;
  top: -8px;
  transition: .3s all ease;
}

.rd-navbar-sidebar .rd-navbar-toggle span:after {
  top: 8px;
}

.rd-navbar-sidebar .rd-navbar-toggle span:after, .rd-navbar-sidebar .rd-navbar-toggle span:before, .rd-navbar-sidebar .rd-navbar-toggle span {
  width: 24px;
  height: 4px;
  background-color: #fff;
  backface-visibility: hidden;
  border-radius: 2px;
}

.rd-navbar-sidebar .rd-navbar-toggle span:before, .rd-navbar-sidebar .rd-navbar-toggle span:after {
  -webkit-transition-duration: 0.3s, 0.3s;
  transition-duration: 0.3s, 0.3s;
  -webkit-transition-delay: 0.3s, 0s;
  transition-delay: 0.3s, 0s;
  -webkit-transition-property: top, -webkit-transform;
  transition-property: top, transform;
}

.rd-navbar-sidebar .rd-navbar-toggle.active span {
  -webkit-transform: rotate(180deg);
  transform: rotate(180deg);
  transition: background .3s 0s ease;
  background: transparent;
}

.rd-navbar-sidebar .rd-navbar-toggle.active span:before, .rd-navbar-sidebar .rd-navbar-toggle.active span:after {
  top: 0;
  -webkit-transition-delay: 0s, 0.3s;
  transition-delay: 0s, 0.3s;
}

.rd-navbar-sidebar .rd-navbar-toggle.active span:before {
  -webkit-transform: rotate(45deg);
  -ms-transform: rotate(45deg);
  transform: rotate(45deg);
}

.rd-navbar-sidebar .rd-navbar-toggle.active span:after {
  -webkit-transform: rotate(-45deg);
  -ms-transform: rotate(-45deg);
  transform: rotate(-45deg);
}

.rd-navbar-sidebar .rd-navbar-toggle:focus {
  outline: none;
}

.rd-navbar-sidebar .rd-navbar-toggle {
  position: fixed;
  top: 30px;
  left: 30px;
  height: 50px;
  width: 50px;
  border-radius: 100px;
  z-index: 1000;
  display: block;
  background: #42a4ff;
  -webkit-box-shadow: 0px 2px 10px 0px rgba(19, 108, 191, 0.31);
  box-shadow: 0px 2px 10px 0px rgba(19, 108, 191, 0.31);
  transition: .4s all ease-in-out;
}

.rd-navbar-sidebar .rd-navbar-toggle:before {
  content: '';
  position: absolute;
  top: 0;
  right: 0;
  bottom: 0;
  left: 0;
  background: #084884;
  border-radius: 100px;
  opacity: 0;
  visibility: hidden;
  transition: .33s;
}

.rd-navbar-sidebar .rd-navbar-toggle:hover:before {
  opacity: 1;
  visibility: visible;
}

.rd-navbar-sidebar .rd-navbar-toggle span, .rd-navbar-sidebar .rd-navbar-toggle span:before, .rd-navbar-sidebar .rd-navbar-toggle span:after {
  border-radius: 0;
  width: 21px;
  height: 4px;
  -webkit-transform-origin: 50% 50%;
  -moz-transform-origin: 50% 50%;
  -ms-transform-origin: 50% 50%;
  transform-origin: 50% 50%;
}

.rd-navbar-sidebar .rd-navbar-toggle.active span, .rd-navbar-sidebar .rd-navbar-toggle.active span:before, .rd-navbar-sidebar .rd-navbar-toggle.active span:after {
  width: 20px;
  height: 5px;
}

.rd-navbar-sidebar .rd-navbar-toggle.active {
  -webkit-transform: translate3d(300px, 0, 0);
  transform: translate3d(300px, 0, 0);
}

.rd-navbar-sidebar .rd-navbar-outer-panel.active {
  -webkit-transform: translate3d(0, 0, 0);
  transform: translate3d(0, 0, 0);
}

.rd-navbar-sidebar .rd-navbar-submenu-toggle::after {
  content: '\f078';
  position: absolute;
  top: 22px;
  right: 0;
  margin-top: -22px;
  width: 65px;
  height: 44px;
  font: 400 14px "FontAwesome";
  line-height: 42px;
  text-align: center;
  transition: 0.4s all ease;
  z-index: 2;
}

.rd-navbar-sidebar .rd-navbar-brand {
  text-align: center;
}

.rd-navbar-sidebar .rd-navbar-collapse-items {
  top: 0;
  left: 0;
  padding-top: 45px;
  -webkit-transform: scale(0.7);
  transform: scale(0.7);
  -webkit-transform-origin: 0% 0%;
  -moz-transform-origin: 0% 0%;
  -ms-transform-origin: 0% 0%;
  transform-origin: 0% 0%;
  opacity: 0;
  visibility: hidden;
}

.rd-navbar-sidebar .rd-navbar-collapse {
  position: absolute;
  top: 4px;
  left: 4px;
  display: inline-block;
  z-index: 1;
}

.rd-navbar-sidebar .rd-navbar-collapse.active .rd-navbar-collapse-items {
  opacity: 1;
  visibility: visible;
  -webkit-transform: scale(1);
  transform: scale(1);
}

/*
* @subsection   Page boxed layout style redeclaration
*
* @description  Redefines navbar style inside boxed layout
*
* @see          ../modules/_page-layouts.scss
*/
html.boxed.rd-navbar--has-sidebar body {
  padding-left: 300px;
  padding-right: 30px;
}

html.boxed .rd-navbar--is-clone {
  max-width: 1920px;
  margin-left: auto;
  margin-right: auto;
}

ul ul, ul ol, ol ul, ol ol {
  padding-left: 0;
}

.rd-navbar-static.rd-navbar-dark,
.rd-navbar-fullwidth.rd-navbar-dark,
.rd-navbar-sidebar.rd-navbar-dark {
  color: #a5d4ff;
  background: #1872c5;
}

.rd-navbar-static.rd-navbar-dark:before, .rd-navbar-static.rd-navbar-dark:after,
.rd-navbar-fullwidth.rd-navbar-dark:before,
.rd-navbar-fullwidth.rd-navbar-dark:after,
.rd-navbar-sidebar.rd-navbar-dark:before,
.rd-navbar-sidebar.rd-navbar-dark:after {
  content: '';
  position: absolute;
  top: 0;
  bottom: 0;
  left: 50%;
  z-index: -1;
  width: 130vw;
  -webkit-transform: translateX(-50%);
  transform: translateX(-50%);
  background: #136cbf;
}

.rd-navbar-static.rd-navbar-dark:after,
.rd-navbar-fullwidth.rd-navbar-dark:after,
.rd-navbar-sidebar.rd-navbar-dark:after {
  background: -moz-linear-gradient(left, rgba(19, 108, 191, 0.4) 0%, rgba(66, 164, 255, 0.4) 100%);
  background: -webkit-linear-gradient(left, rgba(19, 108, 191, 0.4) 0%, rgba(66, 164, 255, 0.4) 100%);
  background: linear-gradient(to right, rgba(19, 108, 191, 0.4) 0%, rgba(66, 164, 255, 0.4) 100%);
  filter: progid:DXImageTransform.Microsoft.gradient( startColorstr='#66136cbf', endColorstr='#6642a4ff',GradientType=1 );
}

.rd-navbar-static.rd-navbar-dark .block-wrap a, .rd-navbar-static.rd-navbar-dark .block-wrap a:active, .rd-navbar-static.rd-navbar-dark .block-wrap a:focus,
.rd-navbar-fullwidth.rd-navbar-dark .block-wrap a,
.rd-navbar-fullwidth.rd-navbar-dark .block-wrap a:active,
.rd-navbar-fullwidth.rd-navbar-dark .block-wrap a:focus,
.rd-navbar-sidebar.rd-navbar-dark .block-wrap a,
.rd-navbar-sidebar.rd-navbar-dark .block-wrap a:active,
.rd-navbar-sidebar.rd-navbar-dark .block-wrap a:focus {
  color: #a5d4ff;
}

.rd-navbar-static.rd-navbar-dark .block-wrap a:hover,
.rd-navbar-fullwidth.rd-navbar-dark .block-wrap a:hover,
.rd-navbar-sidebar.rd-navbar-dark .block-wrap a:hover {
  color: #fff;
}

.rd-navbar-static.rd-navbar-dark .btn,
.rd-navbar-fullwidth.rd-navbar-dark .btn,
.rd-navbar-sidebar.rd-navbar-dark .btn {
  color: #fff;
}

.rd-navbar-static.rd-navbar-dark .rd-navbar-nav > li > a, .rd-navbar-static.rd-navbar-dark .rd-navbar-nav > li > a:active, .rd-navbar-static.rd-navbar-dark .rd-navbar-nav > li > a:focus,
.rd-navbar-fullwidth.rd-navbar-dark .rd-navbar-nav > li > a,
.rd-navbar-fullwidth.rd-navbar-dark .rd-navbar-nav > li > a:active,
.rd-navbar-fullwidth.rd-navbar-dark .rd-navbar-nav > li > a:focus,
.rd-navbar-sidebar.rd-navbar-dark .rd-navbar-nav > li > a,
.rd-navbar-sidebar.rd-navbar-dark .rd-navbar-nav > li > a:active,
.rd-navbar-sidebar.rd-navbar-dark .rd-navbar-nav > li > a:focus {
  color: #fff;
}

.rd-navbar-static.rd-navbar-dark .rd-navbar-nav > li > a:hover,
.rd-navbar-fullwidth.rd-navbar-dark .rd-navbar-nav > li > a:hover,
.rd-navbar-sidebar.rd-navbar-dark .rd-navbar-nav > li > a:hover {
  color: #a5d4ff;
}

.rd-navbar-static.rd-navbar-dark .rd-navbar-nav > li.focus > a,
.rd-navbar-static.rd-navbar-dark .rd-navbar-nav > li.focus > .rd-navbar-submenu-toggle:after,
.rd-navbar-static.rd-navbar-dark .rd-navbar-nav > li.active > a,
.rd-navbar-static.rd-navbar-dark .rd-navbar-nav > li.active > .rd-navbar-submenu-toggle:after,
.rd-navbar-static.rd-navbar-dark .rd-navbar-nav > li.opened > a,
.rd-navbar-static.rd-navbar-dark .rd-navbar-nav > li.opened > .rd-navbar-submenu-toggle:after,
.rd-navbar-fullwidth.rd-navbar-dark .rd-navbar-nav > li.focus > a,
.rd-navbar-fullwidth.rd-navbar-dark .rd-navbar-nav > li.focus > .rd-navbar-submenu-toggle:after,
.rd-navbar-fullwidth.rd-navbar-dark .rd-navbar-nav > li.active > a,
.rd-navbar-fullwidth.rd-navbar-dark .rd-navbar-nav > li.active > .rd-navbar-submenu-toggle:after,
.rd-navbar-fullwidth.rd-navbar-dark .rd-navbar-nav > li.opened > a,
.rd-navbar-fullwidth.rd-navbar-dark .rd-navbar-nav > li.opened > .rd-navbar-submenu-toggle:after,
.rd-navbar-sidebar.rd-navbar-dark .rd-navbar-nav > li.focus > a,
.rd-navbar-sidebar.rd-navbar-dark .rd-navbar-nav > li.focus > .rd-navbar-submenu-toggle:after,
.rd-navbar-sidebar.rd-navbar-dark .rd-navbar-nav > li.active > a,
.rd-navbar-sidebar.rd-navbar-dark .rd-navbar-nav > li.active > .rd-navbar-submenu-toggle:after,
.rd-navbar-sidebar.rd-navbar-dark .rd-navbar-nav > li.opened > a,
.rd-navbar-sidebar.rd-navbar-dark .rd-navbar-nav > li.opened > .rd-navbar-submenu-toggle:after {
  color: #a5d4ff;
}

.rd-navbar-static.rd-navbar-dark .rd-navbar-submenu-toggle:after,
.rd-navbar-fullwidth.rd-navbar-dark .rd-navbar-submenu-toggle:after,
.rd-navbar-sidebar.rd-navbar-dark .rd-navbar-submenu-toggle:after {
  color: #fff;
}

.rd-navbar-static.rd-navbar-center .btn-xs, .rd-navbar-static.rd-navbar-center .btn-group-xs > .btn,
.rd-navbar-fullwidth.rd-navbar-center .btn-xs,
.rd-navbar-fullwidth.rd-navbar-center .btn-group-xs > .btn,
.rd-navbar-sidebar.rd-navbar-center .btn-xs,
.rd-navbar-sidebar.rd-navbar-center .btn-group-xs > .btn {
  padding: 10px 32px;
}

.rd-navbar-static.rd-navbar-dark.rd-navbar--is-stuck {
  border-bottom: 1px solid #1369ba;
}

/*
* @subsection   RD Parallax
*
* @description  Describes style declarations for RD Parallax extension
*
* @author       Evgeniy Gusarov
* @link         https://ua.linkedin.com/pub/evgeniy-gusarov/8a/a40/54a
* @version      3.5.1
*/
.rd-parallax-inner {
  position: relative;
  overflow: hidden;
  -webkit-transform: translate3d(0px, 0px, 0px);
  transform: translate3d(0px, 0px, 0px);
  z-index: 1;
}

.rd-parallax-layer[data-type="media"] {
  position: absolute;
  top: 0;
  left: 0;
  right: 0;
  bottom: 0;
  height: 100%;
  pointer-events: none;
}

.rd-parallax-layer[data-type="media"] iframe {
  width: 100%;
  height: 100%;
}

.rd-parallax-layer[data-type="html"] {
  will-change: transform;
}

.rd-parallax-layer[data-url] {
  -webkit-background-size: cover;
  background-size: cover;
  background-position: center center;
}

.rd-parallax[class*="rd-parallax-overlay"] .rd-parallax-layer[data-type="media"] {
  opacity: 0.35;
}

.rd-parallax.rd-parallax-overlay-2 .rd-parallax-layer[data-type="media"] {
  opacity: 0.8;
}

/*
* @subsection   RD Material Tabs
*
* @description  Describes style declarations for RD Material Tabs extension
*
* @author       Rafael Shayvolodyan
* @version      1.0.3
*/
.rd-material-tabs {
  -webkit-tap-highlight-color: transparent;
  width: 100%;
  position: relative;
  opacity: 0;
  visibility: hidden;
}

.rd-material-tabs.loaded {
  opacity: 1;
  visibility: visible;
}

.rd-material-tabs__list {
  white-space: nowrap;
}

.rd-material-tabs__list .rd-material-tab {
  display: inline-block;
}

.rd-material-tabs img {
  -webkit-user-select: none;
  -moz-user-select: none;
  user-select: none;
}

.rd-material-tabs__stage-outer {
  position: relative;
  overflow: hidden;
}

.rd-material-tabs__stage:before, .rd-material-tabs__stage:after {
  content: " ";
  display: table;
}

.rd-material-tabs__stage:after {
  clear: both;
}

.rd-material-tabs__container {
  padding: 0 5px;
  margin-top: 60px;
}

.rd-material-tabs__container .rd-material-tab {
  float: left;
  width: 100%;
}

.rd-material-tabs__container .thumb {
  margin-top: 10px;
}

.rd-material-tabs-canMove {
  cursor: w-resize;
}

.rd-material-tabs-grab, .rd-material-tabs-grab a {
  cursor: -moz-grabbing;
  cursor: -webkit-grabbing;
  cursor: grabbing;
}

/*
* @subsection   RD Video
* @description  Describes style declarations for RD Video extension
* @author       Rafael Shayvolodyan
* @link         https://ua.linkedin.com/in/rafael-shayvolodyan-3a297b96
* @version      1.0.0
*/
.rd-video {
  position: relative;
}

.rd-video video {
  margin: auto;
  position: absolute;
  opacity: 0;
  visibility: hidden;
}

.rd-video video.transition {
  transition: .3s all linear;
}

.rd-video-wrapper {
  position: absolute;
  top: 0;
  left: 0;
  bottom: 0;
  right: 0;
  overflow: hidden;
  background-size: cover;
  background-repeat: no-repeat;
}

.rd-video-preloader {
  position: absolute;
  left: 0;
  top: 0;
  right: 0;
  bottom: 0;
  opacity: 0;
  visibility: hidden;
  transition: .3s all ease;
  background: url(../images/preloader.gif) no-repeat rgba(255, 255, 255, 0.8) center center;
  z-index: 6;
}

.rd-video.loading .rd-video-preloader {
  opacity: 1;
  visibility: visible;
}

.rd-video-context-wrapper {
  z-index: 99999;
  position: fixed;
  top: 0;
  bottom: 0;
  left: 0;
  right: 0;
  background: none;
  opacity: 0;
  visibility: hidden;
  text-align: left;
  transition: .3s background ease;
}

.rd-video-context-wrapper.show {
  background: rgba(0, 0, 0, 0.7);
  opacity: 1;
  visibility: visible;
}

.rd-video-context-wrapper.show .rd-video-context {
  bottom: 0;
}

.rd-video-context-wrapper .rd-video-context {
  padding: 2px 0;
  background: #fff;
  position: absolute;
  left: 0;
  bottom: -100%;
  right: 0;
  transition: .5s bottom ease;
}

.rd-video-context-wrapper h6 {
  padding: 5px 10px 5px 15px;
  text-transform: none;
}

.rd-video-context-wrapper ul li {
  cursor: pointer;
  font-size: 14px;
  padding: 5px 5px 5px 15px;
  text-transform: none;
  border-top: 1px solid #E9E9E9;
}

.rd-video-context-wrapper ul li:hover, .rd-video-context-wrapper ul li.active {
  background: #42a4ff;
  color: #fff;
}

.rd-video-context-wrapper ul li.active {
  cursor: default;
}

.desktop .rd-video-context-wrapper {
  position: absolute;
  width: 160px;
  transform: none;
  background: #fff;
}

.desktop .rd-video-context-wrapper.show {
  opacity: 1;
  visibility: visible;
}

.desktop .rd-video-context-wrapper .rd-video-context {
  position: static;
}

.rd-video.rd-video-bg {
  height: 100vh;
}

.rd-video.rd-video-bg > .rd-video-wrapper, .rd-video.rd-video-bg > .rd-video-wrapper > video {
  z-index: -1;
}

.rd-video.rd-video-bg .play-btn {
  display: none;
}

/*
* @subsection   RD Calendar
*
*
* @author       Evgeniy Gusarov
* @see          https://ua.linkedin.com/pub/evgeniy-gusarov/8a/a40/54a
* @version      1.0.0
*/
.rd-calendar {
  position: relative;
}

.rdc-month,
.rdc-fullyear {
  font-size: 18px;
  font-weight: 700;
  line-height: 1.2;
  color: #313132;
}

.rdc-month {
  margin-right: .25em;
}

.rdc-panel {
  position: relative;
  display: -ms-flexbox;
  display: -webkit-flex;
  display: flex;
  -webkit-flex-direction: row;
  -ms-flex-direction: row;
  flex-direction: row;
  -webkit-flex-wrap: nowrap;
  -ms-flex-wrap: nowrap;
  flex-wrap: nowrap;
  -webkit-justify-content: center;
  -ms-flex-pack: center;
  justify-content: center;
  -webkit-align-items: center;
  -ms-flex-align: center;
  align-items: center;
  width: 100%;
  margin-left: auto;
  margin-right: auto;
}

@media (min-width: 480px) {
  .rdc-panel {
    max-width: 350px;
    padding-left: 30px;
    padding-right: 30px;
  }
}

.rdc-next,
.rdc-prev {
  position: absolute;
  top: 50%;
  -webkit-transform: translateY(-50%);
  transform: translateY(-50%);
}

.rdc-next,
.rdc-prev,
.rdc-events_close {
  font: 400 16px/16px "FontAwesome";
  color: #42a4ff;
  transition: .3s all ease;
  cursor: pointer;
}

.rdc-next:hover,
.rdc-prev:hover,
.rdc-events_close:hover {
  color: #084884;
}

.rdc-next {
  right: 0;
}

.rdc-next:before {
  content: '\f054';
}

.rdc-prev {
  left: 0;
}

.rdc-prev:before {
  content: '\f053';
}

.rdc-events_close {
  position: absolute;
  top: 5px;
  right: 11px;
}

.rdc-events_close:before {
  content: '\f00d';
}

.rdc-events {
  position: absolute;
  right: 15px;
  z-index: 10;
  width: 100%;
  max-width: 260px;
  max-height: 90%;
  overflow-y: auto;
  top: 50%;
  left: 50%;
  -webkit-transform: translate(-50%, -50%);
  transform: translate(-50%, -50%);
  padding: 10px 20px 15px;
  background: #fff;
  -webkit-box-shadow: 0px 2px 10px 0px rgba(49, 49, 50, 0.13);
  box-shadow: 0px 2px 10px 0px rgba(49, 49, 50, 0.13);
  border-radius: 3px;
  border-top: 3px solid #084884;
  opacity: 0;
  visibility: hidden;
  transition: .4s all ease-in-out;
}

.rd-calendar.show-events .rdc-events {
  opacity: 1;
  visibility: visible;
}

.rdc-events .event-widget {
  padding: 0;
  white-space: nowrap;
}

.rdc-events .event-widget > * {
  display: inline-block;
  vertical-align: middle;
  white-space: normal;
}

.rdc-events .event-widget > * + * {
  margin-left: 10px;
}

.rdc-events .event-widget span {
  display: block;
}

.rdc-events .event-widget .icon {
  font-size: 20px;
}

.rdc-event {
  padding: 0 10px;
  max-height: 0;
  opacity: 0;
  overflow: hidden;
  visibility: hidden;
  transition: .2s;
}

.rdc-event.active {
  opacity: 1;
  padding: 10px;
  max-height: 100px;
  visibility: visible;
}

.rdc-table {
  position: relative;
  width: 100%;
  margin-top: 30px;
}

.rdc-table table {
  border-spacing: 4px;
  border-collapse: separate;
  margin-left: auto;
  margin-right: auto;
}

.rdc-table td {
  position: relative;
}

.rdc-table td.rdc-table_has-events:hover, .rdc-table td.rdc-table_has-events:hover * {
  color: #fff;
}

.rdc-table_day {
  padding: 5px 0;
  font-size: 12px;
  font-weight: 400;
  color: #777;
}

.rdc-table_date {
  position: relative;
  width: 37px;
  height: 37px;
  line-height: 30px;
  font-weight: 700;
  font-size: 14px;
  padding: 3px;
  overflow: hidden;
  color: #313132;
  text-align: center;
  border: 1px solid #42a4ff;
  z-index: 3;
  pointer-events: none;
  border-radius: 5px;
  transition: .25s;
}

.rdc-table_today {
  border-width: 2px;
  border-color: #084884;
  background-color: #fff;
}

.rdc-table_events-count {
  display: none;
}

.rdc-table_events {
  position: absolute;
  top: 0;
  right: 0;
  bottom: 0;
  left: 0;
  cursor: pointer;
  z-index: 0;
  transition: .3s all ease;
}

.rdc-table_next,
.rdc-table_prev {
  border: 1px solid #dbdbdb;
  background: #f9f9f9;
}

.event-widget {
  padding: 5px;
  font-size: 12px;
}

.event-widget span {
  display: inline;
}

.event-widget .widget-body {
  margin-top: 5px;
}

@media (max-width: 1199px) {
  .rdc-table_events {
    border-radius: 5px;
    overflow: hidden;
  }
  .rdc-table_events:hover .rdc-table_event {
    width: 110%;
    height: 130%;
    bottom: -10px;
  }
  .rdc-table_event {
    position: absolute;
    top: auto;
    bottom: 3px;
    left: 50%;
    -webkit-transform: translateX(-50%);
    transform: translateX(-50%);
    font-size: 0;
    height: 6px;
    width: 6px;
    background: #42a4ff;
    border-radius: 10px;
    transition: .5s all ease;
  }
  .rdc-table_event > * {
    height: 0;
    width: 0;
    visibility: hidden;
    opacity: 0;
  }
}

@media (min-width: 480px) {
  .rdc-table_day {
    font-size: 16px;
  }
  .rdc-table_event {
    bottom: 8px;
  }
  .rdc-table_date {
    width: 60px;
    height: 60px;
    line-height: 54px;
    font-size: 18px;
  }
}

@media (min-width: 768px) {
  .rdc-table_day {
    font-size: 18px;
  }
  .rdc-events {
    max-width: 320px;
  }
  .event-widget {
    font-size: 13px;
  }
}

@media (min-width: 1200px) {
  .rdc-month,
  .rdc-fullyear {
    font-size: 24px;
  }
  .rdc-next {
    margin-left: 105px;
  }
  .rdc-next:before {
    content: '\f054';
  }
  .rdc-prev {
    margin-right: 105px;
  }
  .rdc-prev:before {
    content: '\f053';
  }
  .rdc-table {
    margin-top: 22px;
  }
  .rdc-table table {
    width: calc(100% + 30px);
    border-spacing: 8px;
    margin-left: -15px;
    table-layout: fixed;
  }
  .rdc-table table td {
    padding-bottom: 12.675%;
  }
  .rdc-table table td > * {
    position: absolute;
    top: 0;
    right: 0;
    bottom: 0;
    left: 0;
  }
  .rdc-table table td, .rdc-table table td > * {
    border-radius: 5px;
  }
  .rdc-table table tr:first-child th {
    padding: 5px 14px;
  }
  .rdc-table_date {
    width: auto;
    height: auto;
    padding: 12px;
    text-align: left;
    font-size: 16px;
    line-height: 1;
  }
  .rdc-table_events {
    white-space: nowrap;
    vertical-align: bottom;
  }
  .rdc-table_events > * {
    display: inline-block;
    white-space: normal;
  }
  .rdc-table_events:before {
    content: '';
    display: inline-block;
    height: 100%;
    width: 0;
    vertical-align: bottom;
  }
  .rdc-table_events:hover {
    background-color: #42a4ff;
  }
  .rdc-table_events:hover, .rdc-table_events:hover * {
    color: #fff;
  }
  .rdc-event {
    vertical-align: bottom;
    z-index: 1;
  }
  .event-widget {
    padding: 12px;
  }
  .event-widget .icon {
    font-size: 18px;
  }
}

@media (min-width: 1800px) {
  .rdc-table table {
    border-spacing: 21px;
  }
  .rdc-table table tr:first-child {
    position: relative;
    top: 16px;
  }
  .rdc-table table td {
    padding-bottom: 9.675%;
  }
  .rdc-table_date {
    padding: 15px;
    font-size: 18px;
  }
  .event-widget {
    font-size: 14px;
    padding: 11px 15px;
  }
  .event-widget .icon {
    font-size: 20px;
  }
}

/*
* @subsection   RD Google Map
*
* @description  Describes style declarations for RD Google Map extension
*
* @author       Evgeniy Gusarov
* @link         https://ua.linkedin.com/pub/evgeniy-gusarov/8a/a40/54a
* @version      1.0.0
*/
.rd-google-map {
  color: #333;
}

.rd-google-map__model {
  height: 250px;
}

.rd-google-map__model img {
  max-width: none !important;
}

@media (min-width: 480px) {
  .rd-google-map__model {
    height: 250px;
  }
}

@media (min-width: 768px) {
  .rd-google-map__model {
    height: 407px;
  }
}

.rd-google-map__locations {
  display: none;
}

@media (min-width: 992px) {
  .rd-google-map-lg.rd-google-map__model {
    height: 500px;
  }
}

/*
* @subsection   RD Audio
* @description  Describes style declarations for RD Audio extension
* @author       Rafael Shayvolodyan
* @link         https://ua.linkedin.com/in/rafael-shayvolodyan-3a297b96
* @version      1.0.0
*/
.rd-audio {
  position: fixed;
  bottom: 0;
  left: 0;
  right: 0;
  background: #ccc;
  padding: 10px 15px 5px;
}

.rd-audio.state-loading .rd-audio-progress-bar {
  background: #222;
}

.rd-audio-progress-bar {
  position: relative;
  width: 100%;
  background: #000;
  height: 4px;
  cursor: pointer;
}

.rd-audio-progress-bar .current {
  position: absolute;
  left: 0;
  top: 0;
  bottom: 0;
  background: #fff;
  z-index: 0;
}

.rd-audio-progress-bar-slider {
  position: absolute;
  width: 10px;
  height: 10px;
  top: -3px;
  margin-left: -5px;
  background: #fff;
  z-index: 1;
}

.rd-audio.state-playing .rd-audio-play-pause:before {
  content: '\f04c';
  font-family: "FontAwesome";
}

.rd-audio.muted .rd-audio-volume:before {
  content: '\f04c';
  font-family: "FontAwesome";
}

.rd-audio-current-time, .rd-audio-duration {
  font-size: 11px;
  color: #fff;
  margin-top: 3px;
}

.rd-audio-current-time {
  float: left;
  margin-left: -5px;
}

.rd-audio-duration {
  float: right;
  margin-right: -5px;
}

.rd-audio-volume-bar {
  position: relative;
  background: #000;
  cursor: pointer;
}

.rd-audio-volume-bar .current {
  position: absolute;
  left: 0;
  top: 0;
  bottom: 0;
  background: #fff;
  z-index: 0;
}

.rd-audio-volume-bar-slider {
  position: absolute;
  background: #fff;
  z-index: 1;
}

.rd-audio-volume-bar-vertical {
  width: 10px;
  height: 100px;
}

.rd-audio-volume-bar-vertical .rd-audio-volume-bar-slider {
  left: -5px;
  right: -5px;
  height: 4px;
  bottom: 0;
  margin-top: 2px;
}

.rd-audio-volume-bar-horizontal {
  width: 100%;
  height: 4px;
}

.rd-audio-volume-bar-horizontal .rd-audio-volume-bar-slider {
  width: 10px;
  height: 10px;
  top: -3px;
  margin-left: -5px;
}

.rd-audio-title {
  display: block;
  text-align: center;
  text-transform: capitalize;
  color: #fff;
  font-size: 12px;
  margin-top: 5px;
  letter-spacing: 1px;
}

.rd-audio-volume {
  display: inline-block;
  vertical-align: middle;
}

.rd-audio-volume-bar {
  display: inline-block;
  width: calc(100% - 35px);
  vertical-align: middle;
  margin-left: 5px;
}

.control-icon {
  font-size: 20px;
  line-height: 20px;
  width: 20px;
  height: 20px;
  color: #fff;
}

.control-icon:hover {
  color: #42a4ff;
}

.rd-video-player {
  cursor: none;
  position: relative;
}

.rd-video-player > * {
  z-index: 1;
}

.rd-video-player.playlist-show video {
  opacity: .5;
}

.rd-video-player.playlist-show .rd-video-playlist {
  opacity: 1;
  visibility: visible;
}

.rd-video-player video {
  position: absolute;
  left: 0;
  top: 0;
  height: 100%;
  width: 100%;
  -webkit-user-select: none;
  -moz-user-select: none;
  -khtml-user-select: none;
  -ms-user-select: none;
}

.desktop .rd-video-player video::-webkit-media-controls {
  display: none !important;
}

.desktop .rd-video-player video::-webkit-media-controls-enclosure {
  display: none !important;
}

.rd-video-player.hovered {
  cursor: default;
}

.rd-video-player.muted .rd-video-volume:before {
  content: '\f66e';
}

.rd-video-player.state-loading .rd-video-wrap:before, .rd-video-player.state-loading .rd-video-preloader {
  opacity: 1;
  visibility: visible;
}

.rd-video-player.state-playing .rd-video-controls, .rd-video-player.state-playing .rd-video-top-controls {
  opacity: 0;
  visibility: hidden;
}

.rd-video-player.state-playing .rd-video-play-pause:before {
  content: '\f4d3';
}

.rd-video-player.hovered .rd-video-controls, .rd-video-player.hovered .rd-video-top-controls {
  opacity: 1;
  visibility: visible;
}

.rd-video-player.fullscreen .rd-video-fullscreen:before {
  content: '\f389';
}

.rd-video-player.fullscreen .rd-video-controls, .rd-video-player.fullscreen .rd-video-top-controls, .rd-video-player.fullscreen .rd-video-playlist {
  z-index: 2147483647;
}

.rd-video-title {
  float: left;
  font-size: 13px;
  font-weight: 700;
  color: #fff;
}

.rd-video-volume-bar {
  position: relative;
  cursor: pointer;
  background: #fff;
}

.rd-video-volume-bar .current {
  position: absolute;
  bottom: 0;
  left: 0;
  height: 100%;
  width: 100%;
  background: #42a4ff;
  z-index: 0;
}

.rd-video-wrap {
  position: relative;
  background: #fff;
}

.rd-video-wrap:before {
  content: '';
  position: absolute;
  left: 0;
  top: 0;
  bottom: 0;
  right: 0;
  background: rgba(34, 34, 34, 0.7) no-repeat;
  transition: .4s all ease;
  opacity: 0;
  visibility: hidden;
  z-index: 5;
}

.rd-video-fullscreen {
  float: right;
  font-size: 14px;
  line-height: 14px;
  color: #fff;
}

@media (min-width: 768px) {
  .rd-video-fullscreen {
    font-size: 20px;
    line-height: 20px;
  }
}

.rd-video-play-pause {
  position: relative;
  font-size: 14px;
}

.rd-video-play-pause.has-controls {
  width: 28px;
  height: 28px;
  margin: 0 5px;
  line-height: 24px;
  border-radius: 50%;
  border: 2px solid rgba(255, 255, 255, 0.5);
}

@media (min-width: 768px) {
  .rd-video-play-pause {
    font-size: 24px;
  }
  .rd-video-play-pause.has-controls {
    width: 36px;
    height: 36px;
    margin: 0;
    line-height: 32px;
  }
}

@-webkit-keyframes sprite-animation {
  from {
    background-position: 0 0;
  }
}

@keyframes sprite-animation {
  from {
    background-position: 0 0;
  }
}

.rd-video-preloader {
  position: absolute;
  width: 54px;
  height: 54px;
  top: 50%;
  left: 50%;
  -webkit-transform: translate(-50%, -50%);
  -moz-transform: translate(-50%, -50%);
  -ms-transform: translate(-50%, -50%);
  transform: translate(-50%, -50%);
  background: url(../images/preloader.png) no-repeat center center;
  background-position: -648px 0;
  animation: 0.7s sprite-animation steps(12) infinite;
  opacity: 0;
  visibility: hidden;
  overflow: hidden;
  transition: .4s all ease;
  z-index: 6;
}

.rd-video-duration, .rd-video-current-time {
  font-size: 13px;
  font-style: italic;
}

.rd-video-duration, .rd-video-time-divider {
  display: none;
}

@media (min-width: 480px) {
  .rd-video-duration, .rd-video-time-divider {
    display: inline-block;
  }
}

.rd-video-time-divider {
  margin: 0 3px;
}

.rd-video-progress-bar {
  position: relative;
  width: 100%;
  height: 8px;
  margin: 0 10px 0 10px;
  cursor: pointer;
}

.rd-video-progress-bar:before {
  content: '';
  position: absolute;
  top: 3px;
  bottom: 3px;
  left: 0;
  right: 0;
  background: #fff;
}

.rd-video-progress-bar .current {
  position: absolute;
  left: 0;
  top: 3px;
  bottom: 3px;
  background: #42a4ff;
  z-index: 0;
}

@media (min-width: 768px) {
  .rd-video-progress-bar {
    margin: 0 17px 0 18px;
  }
}

.desktop .rd-video video::-webkit-media-controls, .desktop .rd-video video::-webkit-media-controls-enclosure {
  display: none !important;
}

.rd-video-volume-wrap {
  position: relative;
  margin-left: 16px;
  display: none;
}

.rd-video-volume-wrap.hover .rd-video-volume-bar-wrap {
  visibility: visible;
  opacity: 1;
}

.desktop .rd-video-volume-wrap {
  display: -ms-flexbox;
  display: -webkit-flex;
  display: flex;
  -ms-flex: 0 0 auto;
  -webkit-flex: 0 0 auto;
  flex: 0 0 auto;
}

.rd-video-volume-bar-wrap {
  opacity: 0;
  visibility: hidden;
  position: absolute;
  bottom: 100%;
  left: 0;
  right: 0;
  padding-bottom: 10px;
  text-align: center;
}

.rd-video-volume-bar-vertical {
  width: 4px;
  height: 70px;
  display: inline-block;
}

.rd-video-volume-bar-horizontal {
  width: 100px;
  height: 10px;
}

.rd-video-controls {
  width: 100%;
  position: absolute;
  left: 0;
  padding: 10px 10px;
  transition: .3s all ease;
  z-index: 3;
  display: -ms-flexbox;
  display: -webkit-flex;
  display: flex;
  -webkit-align-items: center;
  -ms-flex-align: center;
  align-items: center;
  -webkit-justify-content: space-between;
  -ms-flex-pack: justify;
  justify-content: space-between;
  bottom: 0;
  will-change: opacity;
  background: rgba(0, 0, 0, 0.4);
}

.rd-video-controls a {
  color: #fff;
}

.rd-video-controls > * {
  -ms-flex: 0 1 auto;
  -webkit-flex: 0 1 auto;
  flex: 0 1 auto;
  -webkit-align-items: center;
  -ms-flex-align: center;
  align-items: center;
  -webkit-justify-content: space-between;
  -ms-flex-pack: justify;
  justify-content: space-between;
}

.rd-video-controls-buttons {
  -ms-flex: 0 0 auto;
  -webkit-flex: 0 0 auto;
  flex: 0 0 auto;
}

.rd-video-controls > .rd-video-time {
  -ms-flex: 0 0 auto;
  -webkit-flex: 0 0 auto;
  flex: 0 0 auto;
  color: #fff;
}

.rd-video-controls-buttons .rd-video-prev, .rd-video-controls-buttons .rd-video-next {
  position: relative;
  top: -2px;
}

.rd-video-top-controls {
  position: absolute;
  padding: 10px 10px;
  left: 0;
  right: 0;
  top: 0;
  z-index: 4;
  transition: 0.3s all ease;
  color: #fff;
  will-change: opacity;
  background: rgba(0, 0, 0, 0.3);
}

@media (min-width: 480px) {
  .rd-video-top-controls {
    padding: 12px 30px;
  }
}

.rd-video-prev {
  transform: rotate(180deg);
}

.rd-video-preview {
  position: absolute;
  -webkit-background-size: cover;
  background-size: cover;
  left: 0;
  top: 0;
  right: 0;
  bottom: 0;
  opacity: 0;
  visibility: hidden;
  will-change: opacity;
  z-index: 1;
  transition: .3s all ease;
}

.rd-video-preview.show {
  visibility: visible;
  opacity: 1;
}

.rd-video-playlist {
  position: absolute;
  left: 0;
  right: 0;
  top: 50%;
  transform: translateY(-50%);
  z-index: 3;
  list-style-type: none;
  padding-left: 0;
  opacity: 0;
  visibility: hidden;
  will-change: opacity;
}

.rd-video-playlist li {
  opacity: .7;
  transition: .3s opacity ease;
  will-change: opacity;
}

.rd-video-playlist li:hover {
  opacity: 1;
}

.rd-video-playlist li p {
  display: none;
  overflow: hidden;
  max-width: 100%;
  font-weight: 700;
  font-size: 13px;
  text-align: center;
  white-space: nowrap;
  text-overflow: ellipsis;
  color: #fff;
}

.rd-video-playlist li img {
  backface-visibility: hidden;
  width: 100%;
}

.rd-video-playlist li.video-active {
  opacity: 1;
}

@media (min-width: 992px) {
  .rd-video-playlist li {
    margin-top: 25px;
  }
  .rd-video-playlist li p {
    display: block;
  }
}

.rd-search {
  position: relative;
  border-radius: 100px;
}

.rd-search label,
.rd-search input {
  font-size: 14px;
  color: #777;
}

.rd-search label {
  top: 24px;
  margin-bottom: 0;
}

.rd-search input {
  width: 100%;
  background: #f5f5f5;
  border: 1px solid #dbdbdb;
  border-radius: 100px;
}

.rd-search .form-group {
  position: relative;
  z-index: 1;
  display: block;
  margin: 0;
  font-size: 0;
}

.rd-search .form-control {
  position: relative;
  z-index: 2;
  padding: 14px 55px 14px 21px;
  height: auto;
  font-size: 14px;
  line-height: 1.4;
}

.rd-search .form-control, .rd-search .form-control:focus {
  -webkit-box-shadow: none;
  box-shadow: none;
  border: 0;
}

.rd-search .form-label {
  left: 21px;
}

.rd-search .rd-search-submit {
  top: 47%;
  right: 5px;
  z-index: 100;
  background-color: transparent;
  border: none;
  -webkit-transform: translateY(-50%);
  transform: translateY(-50%);
  transition: .2s all ease-in-out;
}

.rd-search-style-1 .rd-submit-transparent {
  background: transparent;
}

.rd-search-style-1 .rd-submit-primary {
  top: 49%;
  right: -1px;
  font-size: 18px;
  color: #fff;
  background: #42a4ff;
  border-radius: 100px;
}

.rd-search-style-1 .rd-submit-primary:hover {
  color: #fff;
  background: #084884;
}

.rd-search-submit {
  background: none;
  border: none;
  display: inline-block;
  padding: 0;
  outline: none;
  outline-offset: 0;
  cursor: pointer;
  -webkit-appearance: none;
  background: none;
  border: none;
  display: inline-block;
  padding: 0;
  outline: none;
  outline-offset: 0;
  cursor: pointer;
  -webkit-appearance: none;
  display: inline-block;
  position: relative;
  width: 48px;
  height: 48px;
  line-height: 48px;
  cursor: pointer;
  color: #777;
  text-align: center;
  font-size: 22px;
  position: absolute;
  right: 0;
  transition: none;
  transition: color .33s;
}

.rd-search-submit::-moz-focus-inner {
  border: none;
  padding: 0;
}

.rd-search-submit::-moz-focus-inner {
  border: none;
  padding: 0;
}

.rd-search-submit:before {
  content: "\f002";
  font-weight: 400;
  font-family: "FontAwesome";
}

.rd-search-submit.active {
  -webkit-transform: scale(0.7);
  transform: scale(0.7);
}

.rd-search-submit:hover {
  color: #42a4ff;
}

.rd-search-results-live {
  position: absolute;
  top: 50%;
  right: 1px;
  left: 1px;
  z-index: 1;
  margin: -3px -1px 0;
  padding: 39px 20px 20px;
  border-radius: 0 0 10px 10px;
  font-size: 14px;
  line-height: 22px;
  color: #313132;
  background: #fff;
  text-align: left;
  -webkit-box-shadow: 0px 2px 10px 0px rgba(49, 49, 50, 0.13);
  box-shadow: 0px 2px 10px 0px rgba(49, 49, 50, 0.13);
  opacity: 0;
  visibility: hidden;
  transition: .22s all;
}

.rd-search-results-live .search-quick-result {
  font-size: 16px;
  font-weight: 500;
  line-height: 30px;
  color: #000;
}

.rd-search-results-live .search_list {
  background: #fff;
  margin-top: 7px;
  font-size: 16px;
  line-height: 30px;
}

.rd-search-results-live .search_list li + li {
  margin-top: 18px;
}

.rd-search-results-live .search_list .search_list li + li:last-child {
  margin-top: 8px;
  border-top: 1px solid #ccc;
  padding-top: 7px;
}

.rd-search-results-live .search_list .search_error {
  font-size: 14px;
  line-height: 1.6;
  color: #777;
}

.rd-search-results-live .search_link {
  color: #222;
}

.rd-search-results-live .search_link:hover {
  color: #42a4ff;
}

.rd-search-results-live p {
  margin-top: 0;
  font-size: 14px;
  line-height: 1.6;
}

.rd-search-results-live .search_title {
  margin-bottom: 0;
  font-size: 14px;
  font-weight: 400;
  color: #222;
}

.rd-search-results-live .search_submit {
  display: block;
  text-align: center;
  padding: 6px;
  font-weight: 400;
  font-size: 14px;
  color: #42a4ff;
  background: #f9f9f9;
  text-transform: none;
  border-radius: 10px;
}

.rd-search-results-live .search_submit:hover {
  color: #fff;
  background: #42a4ff;
}

@media (min-width: 1200px) {
  .rd-search-results-live .search_link p {
    display: block;
  }
}

.not-empty ~ .rd-search-results-live {
  visibility: visible;
  opacity: 1;
}

.search_error {
  max-width: 100%;
  overflow: hidden;
  text-overflow: ellipsis;
}

.rd-search-results {
  margin-top: 58px;
}

.rd-search-results .search_list {
  counter-reset: li;
}

.rd-search-results .search_list > li {
  position: relative;
  padding-left: 25px;
}

.rd-search-results .search_list > li:before {
  content: counter(li, decimal) ".";
  counter-increment: li;
  position: absolute;
  top: -2px;
  left: 0;
  color: #b1b1b1;
}

.rd-search-results .search_list > li:only-of-type {
  padding-left: 0;
}

.rd-search-results .search_list > li:only-of-type:before {
  display: none;
}

.rd-search-results .search_list > li + li {
  margin-top: 30px;
}

.rd-search-results .search {
  color: #fff;
  background: #42a4ff;
}

@media (min-width: 768px) {
  .rd-search-results .search_list > li {
    padding-left: 40px;
  }
  .rd-search-results .search_list > li:before {
    top: 1px;
  }
  .rd-search-results .search_list > li + li {
    margin-top: 60px;
  }
}

.search_list {
  text-align: left;
  padding-left: 0;
  font-size: 14px;
  list-style-type: none;
}

.result-item p {
  margin-top: 3px;
}

.result-item + .result-item {
  margin-top: 30px;
}

.match {
  font-size: 13px;
  line-height: 1.5;
  color: #42a4ff;
}

.rd-navbar-search-results .result-item {
  padding: 35px 5px;
}

.rd-navbar-search-results .result-item, .rd-navbar-search-results .result-item * {
  text-align: left;
}

.rd-navbar-search-results .result-item + .result-item {
  border-top: 1px solid #ebebeb;
}

.rd-navbar-search-results .result-item * + p {
  margin-top: 21px;
}

.not-empty ~ .rd-search-results-live,
.rd-search-results-live.active.cleared {
  opacity: 0;
  visibility: hidden;
  transition-delay: .2s;
}

div.rd-search-results-live.active {
  opacity: 1;
  visibility: visible;
}

.rd-range {
  height: 18px;
  margin-top: 25px;
  display: -ms-flexbox;
  display: -webkit-flex;
  display: flex;
  -webkit-align-items: center;
  -ms-flex-align: center;
  align-items: center;
}

.rd-range__wrap {
  position: relative;
  width: 100%;
  background-color: #bdbdbd;
  transition: background 100ms cubic-bezier(0.23, 1, 0.32, 1);
  height: 2px;
}

.rd-range:hover .rd-range__wrap {
  background-color: #9e9e9e;
}

.rd-range:hover .rd-range__pointer:before {
  transform: scale(1);
  -webkit-animation-name: pulse;
  animation-name: pulse;
}

.rd-range__pointer {
  position: absolute;
  cursor: pointer;
  top: 1px;
  left: 6%;
  z-index: 1;
  width: 19px;
  height: 19px;
  border-radius: 50%;
  transform: translate(-50%, -50%);
  transform-origin: 0% 15%;
  transition: transform 0.2s cubic-bezier(0.35, 0, 0.25, 1);
  overflow: visible;
  background-color: #42a4ff;
  background-clip: padding-box;
}

@media (min-width: 768px) {
  .rd-range__pointer {
    width: 12px;
    height: 12px;
  }
  .rd-range__pointer:before {
    content: '';
    height: 26px;
    width: 26px;
    pointer-events: none;
    background: rgba(66, 164, 255, 0.16);
    position: absolute;
    top: -7px;
    left: -7px;
    border-radius: 50%;
    transform: scale(0);
    transition: transform 100ms cubic-bezier(0.445, 0.05, 0.55, 0.95) 0ms, opacity 60ms cubic-bezier(0.445, 0.05, 0.55, 0.95) 0ms;
    pointer-events: none;
    -webkit-animation-duration: 1s;
    animation-duration: 1s;
    -webkit-animation-fill-mode: both;
    animation-fill-mode: both;
    -webkit-animation-iteration-count: infinite;
    animation-iteration-count: infinite;
  }
  .rd-range__pointer.active {
    transform: scale3d(1.5, 1.5, 1.5) translate(-50%, -50%);
  }
  .rd-range__pointer.active:before {
    animation: none;
    transform: scale(0);
    opacity: 0;
  }
}

.rd-range__line {
  background-color: #42a4ff;
  position: absolute;
  top: 0;
  left: 0;
  height: 2px;
}

.rd-range.hasTooltip .rd-range__pointer-tooltip {
  font-size: 12px;
  color: #fff;
  opacity: 0;
  transition: color 0.3s cubic-bezier(0.35, 0, 0.25, 1);
}

.rd-range.hasTooltip .rd-range__pointer {
  display: -webkit-flex;
  display: -ms-flexbox;
  display: flex;
  -webkit-align-items: center;
  -ms-flex-align: center;
  align-items: center;
  -webkit-justify-content: center;
  -ms-flex-pack: center;
  justify-content: center;
  position: absolute;
  top: -38px;
  width: 28px;
  height: 28px;
  border-radius: 28px;
  -webkit-transform: scale(0.45) translate3d(0, 67.5px, 0);
  transform: scale(0.45) translate3d(0, 67.5px, 0);
  transition: transform 0.3s cubic-bezier(0.35, 0, 0.25, 1);
}

.rd-range.hasTooltip .rd-range__pointer:before {
  content: none;
}

.rd-range.hasTooltip .rd-range__pointer:after {
  position: absolute;
  content: '';
  left: 0;
  border-radius: 16px;
  top: 19px;
  border-left: 14px solid transparent;
  border-right: 14px solid transparent;
  border-top: 16px solid #42a4ff;
  opacity: 0;
  -webkit-transform: translate3d(0, -8px, 0);
  transform: translate3d(0, -8px, 0);
  transition: all 0.2s cubic-bezier(0.35, 0, 0.25, 1);
}

.rd-range.hasTooltip .rd-range__pointer.active {
  opacity: 1;
  -webkit-transform: translate3d(0, 0, 0) scale(1) translateX(-14px);
  transform: translate3d(0, 0, 0) scale(1) translateX(-14px);
}

.rd-range.hasTooltip .rd-range__pointer.active:after {
  opacity: 1;
  -webkit-transform: translate3d(0, 0, 0) scale(1);
  transform: translate3d(0, 0, 0) scale(1);
}

.rd-range.hasTooltip .rd-range__pointer.active .rd-range__pointer-tooltip {
  opacity: 1;
}

/**
 * RD Filepicker
 * @Section
 */
.rd-file-picker {
  position: relative;
  display: -webkit-box;
  display: -webkit-flex;
  display: -moz-flex;
  display: -ms-flexbox;
  display: flex;
  -webkit-box-align: center;
  -ms-flex-align: center;
  -webkit-align-items: center;
  -moz-align-items: center;
  align-items: center;
  max-width: 400px;
  margin-left: auto;
  margin-right: auto;
  font-size: 17px;
  border: 1px solid rgba(20, 69, 61, 0.78);
  background-color: white;
}

.rd-file-picker-btn {
  display: -webkit-inline-box;
  display: -webkit-inline-flex;
  display: -moz-inline-flex;
  display: -ms-inline-flexbox;
  display: inline-flex;
  -webkit-box-align: center;
  -ms-flex-align: center;
  -webkit-align-items: center;
  -moz-align-items: center;
  align-items: center;
  -webkit-box-pack: center;
  -ms-flex-pack: center;
  -webkit-justify-content: center;
  -moz-justify-content: center;
  justify-content: center;
  width: 50%;
  padding: 10px;
  background: rgba(20, 69, 61, 0.78);
  color: white;
  cursor: pointer;
  transition: .2s;
}

.rd-file-picker-btn:hover {
  background: rgba(14, 49, 44, 0.78);
}

.rd-file-picker-btn svg {
  fill: white;
  padding-right: 6px;
}

.rd-file-picker-meta {
  width: 90%;
  padding-left: 20px;
  padding-right: 20px;
  color: #000;
  cursor: default;
  text-overflow: ellipsis;
  overflow: hidden;
  white-space: nowrap;
}

.rd-file-picker input[type="file"] {
  position: absolute;
  width: 6px;
  height: 6px;
  transform: translate(-3px, -3px);
  overflow: hidden;
  background-color: red;
  transition: none;
  visibility: hidden;
}

.rd-file-drop {
  padding-top: 100px;
  padding-bottom: 100px;
  margin-left: auto;
  margin-right: auto;
  text-align: center;
  font-size: 18px;
  background-color: rgba(0, 0, 0, 0.1);
  outline: 2px dashed #92b0b3;
  outline-offset: -10px;
  transition: .2s;
}

.rd-file-drop-logo {
  width: 100px;
  fill: rgba(255, 255, 255, 0);
  stroke: white;
  stroke-width: 6px;
}

.rd-file-drop-wrap {
  margin-top: 20px;
  display: -webkit-box;
  display: -webkit-flex;
  display: -moz-flex;
  display: -ms-flexbox;
  display: flex;
  -webkit-box-align: baseline;
  -ms-flex-align: baseline;
  -webkit-align-items: baseline;
  -moz-align-items: baseline;
  align-items: baseline;
  -webkit-box-pack: center;
  -ms-flex-pack: center;
  -webkit-justify-content: center;
  -moz-justify-content: center;
  justify-content: center;
}

.rd-file-drop-wrap p {
  margin-left: 15px;
  margin-top: 0;
}

.rd-file-drop-meta {
  margin-top: 20px;
}

.rd-file-drop-btn {
  cursor: pointer;
}

.rd-file-drop-btn svg {
  fill: white;
}

.rd-file-drop input[type="file"] {
  position: absolute;
  width: 6px;
  height: 6px;
  transform: translate(-3px, -3px);
  overflow: hidden;
  background-color: red;
  transition: none;
  visibility: hidden;
}

.file-grabbing {
  background-color: rgba(255, 255, 255, 0.05);
  outline-color: rgba(0, 0, 0, 0.15);
}

.scrollToNext {
  width: 50px;
  height: 50px;
  font-size: 24px;
  line-height: 46px;
  color: #FFF;
  border-radius: 50%;
  box-shadow: 0 0 2px 0 rgba(0, 0, 0, 0.11), 3px 4px 5px 0 rgba(0, 0, 0, 0.11);
  position: fixed;
  right: 15px;
  bottom: 15px;
  overflow: hidden;
  text-align: center;
  text-decoration: none;
  z-index: 20;
}

.scrollToNext:before {
  display: block;
  transition: .5s;
  transition-delay: 1.4s;
}

.scrollToNext.toTop {
  animation: rotate 1.6s linear;
  animation-delay: 1s;
}

.scrollToNext.toTop:before {
  transform: rotate(180deg);
}

@keyframes rotate {
  0%, 100% {
    transform: scale(1);
  }
  30%, 60% {
    transform: scale(0.7);
  }
}

.scrollToNext:focus {
  color: #FFF;
}

.scrollToNext:hover {
  color: #FFF;
  text-decoration: none;
}

.scrollToNext.active {
  -webkit-transform: translateY(0);
  transform: translateY(0);
}

.mobile .scrollToNext,
.tablet .scrollToNext {
  display: none !important;
}

@media (min-width: 480px) {
  .scrollToNext {
    right: 40px;
    bottom: 40px;
  }
}

/**
 * @subsection   Swiper 3.1.7
 * @description  Most modern mobile touch slider and framework with
 *               hardware accelerated transitions
 * @author       Vladimir Kharlampidi
 * @see          https://www.idangero.us/swiper/
 * @licesne      MIT License
 */
.swiper-container {
  display: -ms-flexbox;
  display: -webkit-flex;
  display: flex;
  margin: 0 auto;
  position: relative;
  overflow: hidden;
  /* Fix of Webkit flickering */
  z-index: 1;
}

.swiper-container, .swiper-container .swiper-wrapper {
  height: auto;
  min-height: 31.25vw;
}

@media (min-width: 1800px) {
  .swiper-container, .swiper-container .swiper-wrapper {
    height: auto;
    min-height: 600px;
  }
}

@media (min-width: 992px) {
  .swiper-container.swiper-md, .swiper-container.swiper-md .swiper-wrapper {
    min-height: 750px;
  }
  .swiper-container.swiper-md .swiper-slide > img {
    top: auto;
    bottom: 0;
    min-height: 600px;
  }
  .swiper-container.swiper-md .swiper-slide-caption {
    padding-top: 150px;
  }
}

.swiper-container-no-flexbox .swiper-slide {
  float: left;
}

.swiper-container-vertical > .swiper-wrapper {
  -webkit-box-orient: vertical;
  -moz-box-orient: vertical;
  -ms-flex-direction: column;
  -webkit-flex-direction: column;
  flex-direction: column;
}

.swiper-wrapper {
  position: relative;
  width: 100%;
  z-index: 1;
  display: -webkit-box;
  display: -moz-box;
  display: -ms-flexbox;
  display: -webkit-flex;
  display: flex;
  -webkit-transition-property: -webkit-transform;
  -moz-transition-property: -moz-transform;
  -o-transition-property: -o-transform;
  -ms-transition-property: -ms-transform;
  transition-property: transform;
  -webkit-box-sizing: content-box;
  -moz-box-sizing: content-box;
  box-sizing: content-box;
  -webkit-align-self: stretch;
  -ms-flex-item-align: stretch;
  align-self: stretch;
  -webkit-align-items: stretch;
  -ms-flex-align: stretch;
  align-items: stretch;
}

.swiper-container-android .swiper-slide,
.swiper-wrapper {
  -webkit-transform: translate3d(0px, 0, 0);
  -moz-transform: translate3d(0px, 0, 0);
  -o-transform: translate(0px, 0px);
  -ms-transform: translate3d(0px, 0, 0);
  transform: translate3d(0px, 0, 0);
}

.swiper-container-multirow > .swiper-wrapper {
  -webkit-box-lines: multiple;
  -moz-box-lines: multiple;
  -ms-flex-wrap: wrap;
  -webkit-flex-wrap: wrap;
  flex-wrap: wrap;
}

.swiper-container-free-mode > .swiper-wrapper {
  -webkit-transition-timing-function: ease-out;
  -moz-transition-timing-function: ease-out;
  -ms-transition-timing-function: ease-out;
  -o-transition-timing-function: ease-out;
  transition-timing-function: ease-out;
  margin: 0 auto;
}

.swiper-slide {
  position: relative;
  display: -ms-flexbox;
  display: -webkit-flex;
  display: flex;
  -webkit-align-items: center;
  -ms-flex-align: center;
  align-items: center;
  -webkit-flex-shrink: 0;
  -ms-flex: 0 0 auto;
  flex-shrink: 0;
  width: 100%;
}

/* a11y */
.swiper-container .swiper-notification {
  position: absolute;
  left: 0;
  top: 0;
  pointer-events: none;
  opacity: 0;
  z-index: -1000;
}

/* IE10 Windows Phone 8 Fixes */
.swiper-wp8-horizontal {
  -ms-touch-action: pan-y;
  touch-action: pan-y;
}

.swiper-wp8-vertical {
  -ms-touch-action: pan-x;
  touch-action: pan-x;
}

.swiper-nav {
  position: absolute;
  top: 50%;
  right: 0;
  left: 0;
  z-index: 10;
  pointer-events: none;
  -webkit-transform: translateY(-50%);
  transform: translateY(-50%);
}

/* Arrows */
.swiper-button-prev,
.swiper-button-next {
  z-index: 10;
  display: none;
  width: 53px;
  height: 53px;
  font-size: 53px;
  line-height: 53px;
  text-align: center;
  cursor: pointer;
  pointer-events: auto;
}

.swiper-button-prev:before,
.swiper-button-next:before {
  font-family: 'Material Design Icons';
  font-size: 53px;
  line-height: 1;
  color: #fff;
  opacity: 1;
  transition: .33s all ease;
}

.swiper-button-prev:hover:before,
.swiper-button-next:hover:before {
  opacity: .65;
}

@media (min-width: 768px) {
  .swiper-button-prev,
  .swiper-button-next {
    display: block;
  }
}

.swiper-button-prev.swiper-button-disabled,
.swiper-button-next.swiper-button-disabled {
  opacity: 0.35;
  cursor: auto;
  pointer-events: none;
}

.swiper-button-prev:before {
  content: '\f14a';
}

.swiper-button-next:before {
  content: '\f14f';
}

/* Pagination Styles */
.swiper-pagination-wrap {
  position: absolute;
  bottom: 20px;
  left: 50%;
  width: 100%;
  -webkit-transform: translate3d(-50%, 0, 0);
  transform: translate3d(-50%, 0, 0);
  z-index: 10;
}

@media (min-width: 992px) {
  .swiper-pagination-wrap {
    bottom: 35px;
  }
}

@media (min-width: 1200px) {
  .swiper-pagination-wrap {
    bottom: 55px;
  }
}

.swiper-pagination {
  display: block;
  width: 100%;
  text-align: center;
  transition: 300ms;
  -webkit-transform: translate3d(0, 0, 0);
  transform: translate3d(0, 0, 0);
  z-index: 10;
}

@media (min-width: 768px) {
  .swiper-pagination {
    text-align: left;
  }
}

.swiper-pagination.swiper-pagination-hidden {
  opacity: 0;
}

.swiper-pagination-bullet {
  display: inline-block;
  width: 6px;
  height: 6px;
  border-radius: 20px;
  background: #c6c6c6;
  pointer-events: none;
  transition: all .2s ease-out;
}

.swiper-pagination-bullet + * {
  margin-left: 10px;
}

@media (min-width: 768px) {
  .swiper-pagination-bullet {
    width: 12px;
    height: 12px;
    pointer-events: auto;
  }
  .swiper-pagination-bullet + * {
    margin-left: 20px;
  }
}

.swiper-pagination-clickable .swiper-pagination-bullet {
  cursor: pointer;
}

.swiper-pagination-white .swiper-pagination-bullet {
  background: #fff;
}

.swiper-pagination-bullet:hover,
.swiper-pagination-bullet-active {
  background: #42a4ff;
}

.swiper-pagination-white .swiper-pagination-bullet-active {
  background: #fff;
}

.swiper-pagination-black .swiper-pagination-bullet-active {
  background: #000;
}

.swiper-container-vertical > .swiper-pagination {
  right: 10px;
  top: 50%;
  -webkit-transform: translate3d(0px, -50%, 0);
  -moz-transform: translate3d(0px, -50%, 0);
  -o-transform: translate(0px, -50%);
  -ms-transform: translate3d(0px, -50%, 0);
  transform: translate3d(0px, -50%, 0);
}

.swiper-container-vertical > .swiper-pagination .swiper-pagination-bullet {
  margin: 5px 0;
  display: block;
}

.swiper-container-horizontal > .swiper-pagination {
  bottom: 20px;
  left: 0;
  width: 100%;
}

.swiper-container-horizontal > .swiper-pagination .swiper-pagination-bullet {
  margin: 0 5px;
}

/* 3D Container */
.swiper-container-3d {
  -webkit-perspective: 1200px;
  -moz-perspective: 1200px;
  -o-perspective: 1200px;
  perspective: 1200px;
}

.swiper-container-3d .swiper-wrapper,
.swiper-container-3d .swiper-slide,
.swiper-container-3d .swiper-slide-shadow-left,
.swiper-container-3d .swiper-slide-shadow-right,
.swiper-container-3d .swiper-slide-shadow-top,
.swiper-container-3d .swiper-slide-shadow-bottom,
.swiper-container-3d .swiper-cube-shadow {
  -webkit-transform-style: preserve-3d;
  -moz-transform-style: preserve-3d;
  -ms-transform-style: preserve-3d;
  transform-style: preserve-3d;
}

.swiper-container-3d .swiper-slide-shadow-left,
.swiper-container-3d .swiper-slide-shadow-right,
.swiper-container-3d .swiper-slide-shadow-top,
.swiper-container-3d .swiper-slide-shadow-bottom {
  position: absolute;
  left: 0;
  top: 0;
  width: 100%;
  height: 100%;
  pointer-events: none;
  z-index: 10;
}

.swiper-container-3d .swiper-slide-shadow-left {
  background-image: linear-gradient(to left, rgba(0, 0, 0, 0.5), transparent);
}

.swiper-container-3d .swiper-slide-shadow-top {
  background-image: linear-gradient(to top, rgba(0, 0, 0, 0.5), transparent);
}

.swiper-container-3d .swiper-slide-shadow-bottom {
  background-image: linear-gradient(to bottom, rgba(0, 0, 0, 0.5), transparent);
}

/* Coverflow */
.swiper-container-coverflow .swiper-wrapper {
  /* Windows 8 IE 10 fix */
  -ms-perspective: 1200px;
}

/* Fade */
.swiper-container-fade.swiper-container-free-mode .swiper-slide {
  -webkit-transition-timing-function: ease-out;
  transition-timing-function: ease-out;
}

.swiper-container-fade .swiper-slide {
  pointer-events: none;
}

.swiper-container-fade .swiper-slide .swiper-slide {
  pointer-events: none;
}

.swiper-container-fade .swiper-slide-active,
.swiper-container-fade .swiper-slide-active .swiper-slide-active {
  pointer-events: auto;
}

/* Cube */
.swiper-container-cube {
  overflow: visible;
}

.swiper-container-cube .swiper-slide {
  pointer-events: none;
  visibility: hidden;
  -webkit-transform-origin: 0 0;
  -moz-transform-origin: 0 0;
  -ms-transform-origin: 0 0;
  transform-origin: 0 0;
  -webkit-backface-visibility: hidden;
  -moz-backface-visibility: hidden;
  -ms-backface-visibility: hidden;
  backface-visibility: hidden;
  width: 100%;
  height: 100%;
  z-index: 1;
}

.swiper-container-cube.swiper-container-rtl .swiper-slide {
  -webkit-transform-origin: 100% 0;
  -moz-transform-origin: 100% 0;
  -ms-transform-origin: 100% 0;
  transform-origin: 100% 0;
}

.swiper-container-cube .swiper-slide-active,
.swiper-container-cube .swiper-slide-next,
.swiper-container-cube .swiper-slide-prev,
.swiper-container-cube .swiper-slide-next + .swiper-slide {
  pointer-events: auto;
  visibility: visible;
}

.swiper-container-cube .swiper-slide-shadow-top,
.swiper-container-cube .swiper-slide-shadow-bottom,
.swiper-container-cube .swiper-slide-shadow-left,
.swiper-container-cube .swiper-slide-shadow-right {
  z-index: 0;
  -webkit-backface-visibility: hidden;
  -moz-backface-visibility: hidden;
  -ms-backface-visibility: hidden;
  backface-visibility: hidden;
}

.swiper-container-cube .swiper-cube-shadow {
  position: absolute;
  left: 0;
  bottom: 0px;
  width: 100%;
  height: 100%;
  background: #000;
  opacity: 0.6;
  -webkit-filter: blur(50px);
  filter: blur(50px);
  z-index: 0;
}

/* Scrollbar */
.swiper-scrollbar {
  position: relative;
  -ms-touch-action: none;
}

.swiper-container-horizontal > .swiper-scrollbar {
  position: absolute;
  bottom: 0;
  z-index: 50;
  height: 3px;
  width: 100%;
}

.swiper-container-vertical > .swiper-scrollbar {
  position: absolute;
  right: 3px;
  top: 1%;
  z-index: 50;
  width: 5px;
  height: 98%;
}

.swiper-scrollbar-drag {
  height: 100%;
  width: 100%;
  position: relative;
  background: #42a4ff;
  left: 0;
  top: 0;
}

.swiper-scrollbar-cursor-drag {
  cursor: move;
}

/* Preloader */
.swiper-lazy-preloader {
  width: 42px;
  height: 42px;
  position: absolute;
  left: 50%;
  top: 50%;
  margin-left: -21px;
  margin-top: -21px;
  z-index: 10;
  -webkit-transform-origin: 50%;
  -moz-transform-origin: 50%;
  transform-origin: 50%;
  -webkit-animation: swiper-preloader-spin 1s steps(12, end) infinite;
  -moz-animation: swiper-preloader-spin 1s steps(12, end) infinite;
  animation: swiper-preloader-spin 1s steps(12, end) infinite;
}

.swiper-lazy-preloader:after {
  display: block;
  content: "";
  width: 100%;
  height: 100%;
  background-image: url("data:image/svg+xml;charset=utf-8,%3Csvg%20viewBox%3D'0%200%20120%20120'%20xmlns%3D'http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg'%20xmlns%3Axlink%3D'http%3A%2F%2Fwww.w3.org%2F1999%2Fxlink'%3E%3Cdefs%3E%3Cline%20id%3D'l'%20x1%3D'60'%20x2%3D'60'%20y1%3D'7'%20y2%3D'27'%20stroke%3D'%236c6c6c'%20stroke-width%3D'11'%20stroke-linecap%3D'round'%2F%3E%3C%2Fdefs%3E%3Cg%3E%3Cuse%20xlink%3Ahref%3D'%23l'%20opacity%3D'.27'%2F%3E%3Cuse%20xlink%3Ahref%3D'%23l'%20opacity%3D'.27'%20transform%3D'rotate(30%2060%2C60)'%2F%3E%3Cuse%20xlink%3Ahref%3D'%23l'%20opacity%3D'.27'%20transform%3D'rotate(60%2060%2C60)'%2F%3E%3Cuse%20xlink%3Ahref%3D'%23l'%20opacity%3D'.27'%20transform%3D'rotate(90%2060%2C60)'%2F%3E%3Cuse%20xlink%3Ahref%3D'%23l'%20opacity%3D'.27'%20transform%3D'rotate(120%2060%2C60)'%2F%3E%3Cuse%20xlink%3Ahref%3D'%23l'%20opacity%3D'.27'%20transform%3D'rotate(150%2060%2C60)'%2F%3E%3Cuse%20xlink%3Ahref%3D'%23l'%20opacity%3D'.37'%20transform%3D'rotate(180%2060%2C60)'%2F%3E%3Cuse%20xlink%3Ahref%3D'%23l'%20opacity%3D'.46'%20transform%3D'rotate(210%2060%2C60)'%2F%3E%3Cuse%20xlink%3Ahref%3D'%23l'%20opacity%3D'.56'%20transform%3D'rotate(240%2060%2C60)'%2F%3E%3Cuse%20xlink%3Ahref%3D'%23l'%20opacity%3D'.66'%20transform%3D'rotate(270%2060%2C60)'%2F%3E%3Cuse%20xlink%3Ahref%3D'%23l'%20opacity%3D'.75'%20transform%3D'rotate(300%2060%2C60)'%2F%3E%3Cuse%20xlink%3Ahref%3D'%23l'%20opacity%3D'.85'%20transform%3D'rotate(330%2060%2C60)'%2F%3E%3C%2Fg%3E%3C%2Fsvg%3E");
  background-position: 50%;
  -webkit-background-size: 100%;
  background-size: 100%;
  background-repeat: no-repeat;
}

.swiper-lazy-preloader-white:after {
  background-image: url("data:image/svg+xml;charset=utf-8,%3Csvg%20viewBox%3D'0%200%20120%20120'%20xmlns%3D'http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg'%20xmlns%3Axlink%3D'http%3A%2F%2Fwww.w3.org%2F1999%2Fxlink'%3E%3Cdefs%3E%3Cline%20id%3D'l'%20x1%3D'60'%20x2%3D'60'%20y1%3D'7'%20y2%3D'27'%20stroke%3D'%23fff'%20stroke-width%3D'11'%20stroke-linecap%3D'round'%2F%3E%3C%2Fdefs%3E%3Cg%3E%3Cuse%20xlink%3Ahref%3D'%23l'%20opacity%3D'.27'%2F%3E%3Cuse%20xlink%3Ahref%3D'%23l'%20opacity%3D'.27'%20transform%3D'rotate(30%2060%2C60)'%2F%3E%3Cuse%20xlink%3Ahref%3D'%23l'%20opacity%3D'.27'%20transform%3D'rotate(60%2060%2C60)'%2F%3E%3Cuse%20xlink%3Ahref%3D'%23l'%20opacity%3D'.27'%20transform%3D'rotate(90%2060%2C60)'%2F%3E%3Cuse%20xlink%3Ahref%3D'%23l'%20opacity%3D'.27'%20transform%3D'rotate(120%2060%2C60)'%2F%3E%3Cuse%20xlink%3Ahref%3D'%23l'%20opacity%3D'.27'%20transform%3D'rotate(150%2060%2C60)'%2F%3E%3Cuse%20xlink%3Ahref%3D'%23l'%20opacity%3D'.37'%20transform%3D'rotate(180%2060%2C60)'%2F%3E%3Cuse%20xlink%3Ahref%3D'%23l'%20opacity%3D'.46'%20transform%3D'rotate(210%2060%2C60)'%2F%3E%3Cuse%20xlink%3Ahref%3D'%23l'%20opacity%3D'.56'%20transform%3D'rotate(240%2060%2C60)'%2F%3E%3Cuse%20xlink%3Ahref%3D'%23l'%20opacity%3D'.66'%20transform%3D'rotate(270%2060%2C60)'%2F%3E%3Cuse%20xlink%3Ahref%3D'%23l'%20opacity%3D'.75'%20transform%3D'rotate(300%2060%2C60)'%2F%3E%3Cuse%20xlink%3Ahref%3D'%23l'%20opacity%3D'.85'%20transform%3D'rotate(330%2060%2C60)'%2F%3E%3C%2Fg%3E%3C%2Fsvg%3E");
}

@-webkit-keyframes swiper-preloader-spin {
  100% {
    -webkit-transform: rotate(360deg);
  }
}

@keyframes swiper-preloader-spin {
  100% {
    transform: rotate(360deg);
  }
}

.swiper-slide > .vide__body,
.swiper-slide > .parallax_cnt {
  height: 100%;
}

.swiper-slide {
  position: relative;
  text-align: center;
  white-space: nowrap;
  background-position: center center;
  overflow: hidden;
  background: #222;
}

.swiper-slide:not(.vide):not(.rd-parallax):before,
.swiper-slide .parallax_cnt:before, .swiper-slide .vide__body:before {
  content: '';
  display: inline-block;
  height: 50%;
}

.swiper-slide-caption {
  display: inline-block;
  width: 100%;
  max-height: 100%;
  padding: 40px 0 65px;
  margin-left: -.25em;
  vertical-align: middle;
  white-space: normal;
  z-index: 1;
}

.swiper-slide-caption-body {
  padding: 40px 0;
}

.swiper-slide > img {
  position: absolute;
  top: 15%;
  left: 70%;
  -webkit-transform: translate(-70%, -15%);
  transform: translate(-70%, -15%);
  width: auto;
  min-height: 101%;
  min-width: 101%;
  max-width: none;
  z-index: 0;
}

@media (max-width: 767px) {
  .swiper-slide h1, .swiper-slide h2, .swiper-slide h3, .swiper-slide h4, .swiper-slide h5, .swiper-slide h6, .swiper-slide .h1, .swiper-slide .h2, .swiper-slide .h3, .swiper-slide .h4, .swiper-slide .h5, .swiper-slide .h6 {
    color: #fff;
  }
  .swiper-slide .swiper-slide-text {
    color: #f9f9f9;
  }
  .swiper-slide > img {
    opacity: .55;
  }
}

.swiper-slide .swiper-slide-text {
  display: none;
  margin-top: 30px;
  max-width: 480px;
}

@media (max-width: 479px) {
  .swiper-slide-caption {
    padding-top: 68vw;
  }
}

@media (max-width: 767px) {
  .swiper-slide h1 {
    font-size: 26px;
    line-height: 1.35;
	 }
	#msk {    left: 3.5%;
    width: 80px;
    ;}
	
	@media (max-width: 330px) {
		
		#ic {padding-top:40px;}
		
		.rd-navbar-brand {font-size:25px;margin-top:-5px;}
		
		.swiper-container, .swiper-container .swiper-wrapper {height:px;}
		
		#msk {
    width: 55px;background: white;
    border-radius: 5px 5px 25% 25%;
    padding: 3px 3px 3px 2.3px;}
	
	
  .swiper-slide-caption {
    padding-top: 200px;
  }
}

@media (min-width: 768px) {
  .swiper-slide {
    background: url("../images/bg-color-1.png") repeat;
    background-position: center center;
  }
  .swiper-slide > img {
    top: 0;
    left: 58%;
    -webkit-transform: translateX(-58%);
    transform: translateX(-58%);
  }
  .swiper-slide .swiper-slide-caption {
    padding: 30px 0 97px;
  }
  .swiper-slide .swiper-slide-text {
    display: block;
    margin-top: 50px;
  }
}

/*
* @subsection   ToTop
* @license      MIT license - https://opensource.org/licenses/MIT
* @version      1.0.0
*/
.ui-to-top {
  width: 50px;
  height: 50px;
  line-height: 47px;
  color: #fff;
  text-align: center;
  background: #42a4ff;
  border-radius: 100px;
  -webkit-box-shadow: 0px 2px 10px 0px rgba(19, 108, 191, 0.31);
  box-shadow: 0px 2px 10px 0px rgba(19, 108, 191, 0.31);
  transition: .33s all ease-out;
  position: fixed;
  right: 15px;
  bottom: 15px;
  overflow: hidden;
  text-decoration: none;
  z-index: 20;
  -webkit-transform: translateY(100px);
  transform: translateY(100px);
}

.ui-to-top:before {
  position: relative;
  font-family: 'FontAwesome';
  font-size: 16px;
  line-height: inherit;
  opacity: 1;
}

.ui-to-top, .ui-to-top:active, .ui-to-top:focus {
  color: #fff;
  background: #42a4ff;
}

.ui-to-top:hover {
  color: #fff;
  background: #084884;
  -webkit-box-shadow: 0px 2px 10px 0px rgba(8, 72, 132, 0.31);
  box-shadow: 0px 2px 10px 0px rgba(8, 72, 132, 0.31);
}

.ui-to-top:focus {
  outline: 0;
}

.ui-to-top.active {
  -webkit-transform: translateY(0);
  transform: translateY(0);
}

.mobile .ui-to-top,
.tablet .ui-to-top {
  display: none !important;
}

@media (min-width: 480px) {
  .ui-to-top {
    right: 40px;
    bottom: 40px;
  }
}

/*
* @subsection   Easy Responsive Tabs
*
* @description  Describes style declarations for Easy Responsive Tabs extension
*
* @author       Samson Onna
* @link         samson3d@gmail.com
* @version      1.0.0
*/
.resp-tabs-list li {
  cursor: pointer;
}

@media (min-width: 768px) {
  .resp-tabs-list {
    font-size: 16px;
  }
}

@media (min-width: 992px) {
  .resp-tabs-list {
    font-size: 18px;
  }
}

.resp-accordion {
  display: none;
}

.resp-tab-content {
  display: none;
}

.resp-tab-content-active {
  display: block;
}

.responsive-tabs-default .resp-tabs-list {
  display: none;
  word-spacing: -0.25em;
}

.responsive-tabs-default .resp-accordion,
.responsive-tabs-default .resp-tabs-list > li {
  word-spacing: normal;
  padding: 11px 20px;
  text-align: center;
  cursor: pointer;
  transition: all .33s ease;
}

.responsive-tabs-default .resp-accordion:hover, .responsive-tabs-default .resp-accordion.resp-tab-active,
.responsive-tabs-default .resp-tabs-list > li:hover,
.responsive-tabs-default .resp-tabs-list > li.resp-tab-active {
  color: #fff;
  background: #fff;
  border-color: #fff;
}

.responsive-tabs-default .resp-accordion {
  display: block;
  border-radius: 0;
  background: #f9f9f9;
  color: #222;
  word-spacing: normal;
  padding: 11px 20px;
  background: #fff;
  border: 1px solid #dbdbdb;
  text-align: center;
  cursor: pointer;
}

.responsive-tabs-default .resp-tab-content {
  display: none;
  overflow: hidden;
  padding: 20px;
  background: #fff;
  background: #fff;
}

.responsive-tabs-default .resp-accordion {
  border: 1px solid #dbdbdb;
}

.responsive-tabs-default .resp-accordion:not(:first-child) {
  margin-top: 10px;
}

.responsive-tabs-default .resp-accordion:hover, .responsive-tabs-default .resp-accordion.resp-tab-active {
  background: #42a4ff;
}

.responsive-tabs-default .resp-accordion:hover, .responsive-tabs-default .resp-accordion:hover *, .responsive-tabs-default .resp-accordion.resp-tab-active, .responsive-tabs-default .resp-accordion.resp-tab-active * {
  color: #fff;
}

@media (min-width: 768px) {
  .responsive-tabs-silver-chalice .resp-accordion, .responsive-tabs-silver-chalice .resp-accordion a, .responsive-tabs-silver-chalice .resp-tabs-list > li, .responsive-tabs-silver-chalice .resp-tabs-list > li a {
    color: #b1b1b1;
  }
  .responsive-tabs-silver-chalice .resp-accordion:hover, .responsive-tabs-silver-chalice .resp-accordion:hover a, .responsive-tabs-silver-chalice .resp-accordion.resp-tab-active, .responsive-tabs-silver-chalice .resp-accordion.resp-tab-active a, .responsive-tabs-silver-chalice .resp-tabs-list > li:hover, .responsive-tabs-silver-chalice .resp-tabs-list > li:hover a, .responsive-tabs-silver-chalice .resp-tabs-list > li.resp-tab-active, .responsive-tabs-silver-chalice .resp-tabs-list > li.resp-tab-active a {
    color: #222;
  }
  .responsive-tabs-primary .resp-accordion, .responsive-tabs-primary .resp-accordion a, .responsive-tabs-primary .resp-tabs-list > li, .responsive-tabs-primary .resp-tabs-list > li a {
    color: #42a4ff;
  }
  .responsive-tabs-primary .resp-accordion:hover, .responsive-tabs-primary .resp-accordion:hover a, .responsive-tabs-primary .resp-accordion.resp-tab-active, .responsive-tabs-primary .resp-accordion.resp-tab-active a, .responsive-tabs-primary .resp-tabs-list > li:hover, .responsive-tabs-primary .resp-tabs-list > li:hover a, .responsive-tabs-primary .resp-tabs-list > li.resp-tab-active, .responsive-tabs-primary .resp-tabs-list > li.resp-tab-active a {
    color: #222;
  }
}

@media (max-width: 767px) {
  .responsive-tabs:not([data-type='accordion']) .resp-accordion {
    text-align: center;
  }
}

@media (min-width: 768px) {
  .responsive-tabs:not([data-type='accordion']) .resp-accordion {
    display: none;
  }
  .responsive-tabs:not([data-type='accordion']) .resp-tabs-list {
    display: block;
  }
  .responsive-tabs:not([data-type='accordion']) .resp-tabs-list .resp-tab-active {
    pointer-events: none;
  }
}

@media (min-width: 768px) {
  .responsive-tabs.responsive-tabs-horizontal .resp-tabs-list li {
    position: relative;
    z-index: 10;
    display: inline-block;
    padding: 0;
    margin: 0 30px 0 0;
    transition: .33s all ease;
  }
  .responsive-tabs.responsive-tabs-horizontal .resp-tabs-list li:after {
    content: '';
    position: absolute;
    left: 0;
    right: 0;
    bottom: -10px;
    border-bottom: 1px solid #136cbf;
    opacity: 0;
    visibility: hidden;
    transition: .33s all ease;
  }
  .responsive-tabs.responsive-tabs-horizontal .resp-tabs-list li:last-child {
    margin-right: 0;
  }
  .responsive-tabs.responsive-tabs-horizontal .resp-tabs-list .resp-tab-active {
    color: #222;
  }
  .responsive-tabs.responsive-tabs-horizontal .resp-tabs-list .resp-tab-active:after {
    opacity: 1;
    visibility: visible;
  }
  .responsive-tabs.responsive-tabs-horizontal .resp-tab-content {
    padding: 30px 0 26px;
  }
  .responsive-tabs.responsive-tabs-vertical {
    display: -ms-flexbox !important;
    display: -webkit-flex !important;
    display: flex !important;
    -webkit-flex-direction: row;
    -ms-flex-direction: row;
    flex-direction: row;
    -webkit-flex-wrap: nowrap;
    -ms-flex-wrap: nowrap;
    flex-wrap: nowrap;
    -webkit-align-items: flex-start;
    -ms-flex-align: start;
    align-items: flex-start;
  }
  .responsive-tabs.responsive-tabs-vertical .resp-tabs-list {
    position: relative;
    display: -ms-flexbox;
    display: -webkit-flex;
    display: flex;
    -webkit-flex-direction: column;
    -ms-flex-direction: column;
    flex-direction: column;
    -webkit-flex-wrap: nowrap;
    -ms-flex-wrap: nowrap;
    flex-wrap: nowrap;
    -webkit-align-items: stretch;
    -ms-flex-align: stretch;
    align-items: stretch;
    min-width: 220px;
    border-right: 1px solid #ebebeb;
  }
  .responsive-tabs.responsive-tabs-vertical .resp-tabs-list > li {
    position: relative;
    right: -1px;
    z-index: 10;
    width: 100%;
    padding: 0 20px;
    margin: 0;
    text-align: right;
    -webkit-flex-grow: 1;
    -ms-flex-positive: 1;
    flex-grow: 1;
    transition: .33s all ease;
    border-right: 1px solid transparent;
    background-color: transparent;
  }
  .responsive-tabs.responsive-tabs-vertical .resp-tabs-list > li + li {
    margin-top: 10px;
  }
  .responsive-tabs.responsive-tabs-vertical .resp-tabs-list .resp-tab-active {
    border-right-color: #136cbf;
  }
  .responsive-tabs.responsive-tabs-vertical .resp-tabs-container {
    -webkit-flex-grow: 1;
    -ms-flex-positive: 1;
    flex-grow: 1;
  }
  .responsive-tabs.responsive-tabs-vertical .resp-tabs-container {
    padding: 0 30px 3px;
  }
  .responsive-tabs.responsive-tabs-vertical .resp-tab-content {
    padding: 0;
  }
}

@media (min-width: 992px) {
  .responsive-tabs.responsive-tabs-horizontal .resp-tabs-list li {
    margin: 0 59px 0 0;
  }
  .responsive-tabs.responsive-tabs-vertical .resp-tabs-container {
    padding: 0 0 3px 50px;
  }
}

@media (min-width: 1200px) {
  .responsive-tabs.responsive-tabs-vertical .resp-tabs-list {
    min-width: 251px;
  }
}

.responsive-tabs[data-type='accordion'] .resp-arrow {
  position: absolute;
  right: 19px;
  top: 50%;
  -webkit-transform: translateY(-50%);
  transform: translateY(-50%);
  display: inline-block;
  transition: .33s;
  will-change: transform;
}

.responsive-tabs[data-type='accordion'] .resp-arrow:before, .responsive-tabs[data-type='accordion'] .resp-arrow:after {
  content: '';
  position: absolute;
  top: 50%;
  -webkit-transform: translateY(-50%);
  transform: translateY(-50%);
  background: #42a4ff;
}

.responsive-tabs[data-type='accordion'] .resp-arrow:before {
  width: 14px;
  height: 2px;
  right: 0;
}

.responsive-tabs[data-type='accordion'] .resp-arrow:after {
  width: 2px;
  height: 14px;
  right: 6px;
  opacity: 1;
  visibility: visible;
  transition: .2s all ease;
}

.responsive-tabs[data-type='accordion'] .resp-accordion {
  position: relative;
  display: block;
  font-weight: 700;
  color: #42a4ff;
  cursor: pointer;
}

@media (min-width: 768px) {
  .responsive-tabs[data-type='accordion'] .resp-accordion {
    font-size: 16px;
  }
}

@media (min-width: 992px) {
  .responsive-tabs[data-type='accordion'] .resp-accordion {
    font-size: 18px;
  }
}

.responsive-tabs[data-type='accordion'] .resp-accordion {
  border: 1px solid #dbdbdb;
  padding: 11px 38px 11px 29px;
  transition: border-color .2s ease .2s, padding .33s;
}

.responsive-tabs[data-type='accordion'] .resp-accordion:not(:first-child) {
  margin-top: 10px;
}

.responsive-tabs[data-type='accordion'] .resp-tab-content {
  margin-top: -1px;
  border: 1px solid #dbdbdb;
  border-top-width: 0;
  padding: 0 68px 17px 29px;
}

.responsive-tabs[data-type='accordion'] .resp-tab-active {
  padding-bottom: 5px;
  border-bottom-color: transparent;
  transition: border-color 0s ease 0s, padding .33s;
}

.responsive-tabs[data-type='accordion'] .resp-tab-active .resp-arrow:after {
  opacity: 0;
  visibility: hidden;
}

@media (min-width: 768px) {
  .responsive-tabs.responsive-tabs-vertical-1 .resp-tabs-list {
    position: relative;
    z-index: 10;
    background: #fff;
    min-width: calc(33.333% - 20px);
  }
  .responsive-tabs.responsive-tabs-vertical-1 .resp-tabs-list > li {
    font-size: 15px;
    line-height: 1.55556;
    will-change: transform;
  }
  .responsive-tabs.responsive-tabs-vertical-1 .resp-tabs-list > li a {
    display: inline;
  }
  .responsive-tabs.responsive-tabs-vertical-1 .resp-tabs-list > li + li {
    margin-top: 12px;
  }
  .responsive-tabs.responsive-tabs-vertical-1 .resp-tabs-container {
    width: 66.666%;
  }
  .responsive-tabs.responsive-tabs-vertical-1 .resp-tab-content {
    margin: 0;
  }
}

@media (min-width: 992px) {
  .responsive-tabs.responsive-tabs-vertical-1 .resp-tabs-list {
    min-width: calc(25% - 35px);
    width: calc(25% - 35px);
  }
  .responsive-tabs.responsive-tabs-vertical-1 .resp-tabs-list > li {
    right: 0;
    font-size: 16px;
  }
}

@media (min-width: 1200px) {
  .responsive-tabs.responsive-tabs-vertical-1 .resp-tabs-list {
    min-width: 180px;
  }
  .responsive-tabs.responsive-tabs-vertical-1 .resp-tabs-list > li {
    font-size: 18px;
    line-height: 1.55556;
  }
}

.responsive-tabs-vertical-1 * + p {
  margin-top: 10px;
}

/*
* @subsection   Progress Bar
*/
.progress-bar-wrap {
  max-width: 100%;
  text-align: center;
}

.progress-bar-wrap .caption {
  line-height: 1.61111;
  font-weight: 400;
  font-size: 16px;
  color: #313132;
}

@media (min-width: 992px) {
  .progress-bar-wrap .caption {
    font-size: 18px;
  }
}

.progress-bar-wrap * + .caption {
  margin-top: 18px;
}

.progress-bar {
  position: relative;
  width: 100%;
  margin: 30px 0;
}

.progress-bar .progress-bar__body {
  position: absolute;
  right: 50%;
  width: 100%;
  top: 50%;
  padding: 0;
  margin: 0;
  text-align: center;
  white-space: nowrap;
  font-size: 34px;
  font-weight: 400;
  line-height: 26px;
  color: #222;
}

.progress-bar .progress-bar__body:after {
  content: '%';
}

.progress-bar .progress-bar__stroke,
.progress-bar .progress-bar__trail {
  stroke-linejoin: round;
}

.progress-bar-horizontal {
  text-align: left;
}

.progress-bar-horizontal > svg {
  margin-top: 7px;
}

.progress-bar-horizontal .progress-bar__body {
  width: auto !important;
  top: -5px;
  right: 0;
}

.progress-bar-radial {
  position: relative;
  padding-bottom: 100%;
}

.progress-bar-radial > svg {
  position: absolute;
  width: 100%;
  height: 100%;
  left: 0;
  top: 0;
  border-radius: 5px;
  overflow: hidden;
}

.progress-bar-radial .progress-bar__stroke,
.progress-bar-radial .progress-bar__trail {
  stroke-location: outside;
}

.progress-bar-radial .progress-bar__body {
  -webkit-transform: translate(50%, -50%);
  transform: translate(50%, -50%);
}

.progress-bar-default .progress-bar__stroke {
  stroke: #777;
}

.progress-bar-default .progress-bar__trail {
  stroke: rgba(119, 119, 119, 0.05);
}

.progress-bar-primary .progress-bar__stroke {
  stroke: #42a4ff;
}

.progress-bar-primary .progress-bar__trail {
  stroke: rgba(119, 119, 119, 0.05);
}

.progress-bar-secondary-2 .progress-bar__stroke {
  stroke: #ccc;
}

.progress-bar-secondary-2 .progress-bar__trail {
  stroke: rgba(119, 119, 119, 0.05);
}

.progress-bar-secondary-1 .progress-bar__stroke {
  stroke: #ccc;
}

.progress-bar-secondary-1 .progress-bar__trail {
  stroke: rgba(119, 119, 119, 0.05);
}

.progress-bar-secondary-3 .progress-bar__stroke {
  stroke: #ffb142;
}

.progress-bar-secondary-3 .progress-bar__trail {
  stroke: rgba(119, 119, 119, 0.05);
}

.progress-bar-secondary-4 .progress-bar__stroke {
  stroke: #ff4242;
}

.progress-bar-secondary-4 .progress-bar__trail {
  stroke: rgba(119, 119, 119, 0.05);
}

/**
 *	This element is created inside your target element
 *	It is used so that your own element will not need to be altered
 **/
.time_circles {
  position: relative;
  width: 100%;
  height: 100%;
}

/**
 *	This is all the elements used to house all text used
 * in time circles
 **/
.time_circles > div {
  position: absolute;
  text-align: center;
  font-family: Georgia, "Times New Roman", Times, serif;
  top: 50% !important;
  transform: translateY(-63%) !important;
  -webkit-transform: translateY(-63%) !important;
}

@media (min-width: 1200px) {
  #DateCountdown {
    width: 100%;
  }
}

/**
 *	Titles (Days, Hours, etc)
 **/
.time_circles > div > h4 {
  position: absolute;
  right: 0;
  left: 0;
  padding: 0;
  margin: 0;
  text-align: center;
  font-size: 15px !important;
  font-weight: 400;
  top: 16vw;
}

.time_circles > div > h4 + * {
  margin-top: 0;
}

@media (min-width: 480px) {
  .time_circles > div > h4 {
    top: 75px;
  }
}

@media (min-width: 768px) {
  .time_circles > div > h4 {
    top: 96px;
  }
}

/**
 *	Time numbers, ie: 12
 **/
.time_circles > div > span {
  display: block;
  font-family: "Open Sans", Helvetica, Arial, sans-serif;
  font-size: 30px;
  text-align: center;
  font-weight: 900;
  color: #42a4ff;
}

@media (min-width: 768px) {
  .time_circles > div > span {
    font-size: 30px !important;
  }
}

.DateCountdown-1 .time_circles > div > h4 {
  font-weight: 400;
}

@media (min-width: 768px) {
  .DateCountdown-1 .time_circles > div > h4 {
    font-size: 18px !important;
  }
}

.countdown-wrap {
  display: inline-block;
  height: 163px;
  max-width: 670px;
  width: 100%;
  text-align: center;
}

.scrollspy-example {
  position: relative;
  height: 200px;
  margin-top: 10px;
  overflow: auto;
}

.slick-slider {
  position: relative;
  display: block;
  -moz-box-sizing: border-box;
  box-sizing: border-box;
  -webkit-touch-callout: none;
  -webkit-user-select: none;
  -khtml-user-select: none;
  -moz-user-select: none;
  -ms-user-select: none;
  user-select: none;
  -ms-touch-action: pan-y;
  touch-action: pan-y;
  -webkit-tap-highlight-color: transparent;
}

.slick-list {
  position: relative;
  overflow: hidden;
  display: block;
  margin: 0;
  padding: 0;
}

.slick-list:focus {
  outline: none;
}

.slick-list.dragging {
  cursor: pointer;
  cursor: hand;
}

.slick-slider .slick-track,
.slick-slider .slick-list {
  -webkit-transform: translate3d(0, 0, 0);
  -moz-transform: translate3d(0, 0, 0);
  -ms-transform: translate3d(0, 0, 0);
  -o-transform: translate3d(0, 0, 0);
  transform: translate3d(0, 0, 0);
}

.slick-track {
  position: relative;
  left: 0;
  top: 0;
  display: block;
}

.slick-track:before, .slick-track:after {
  content: "";
  display: table;
}

.slick-track:after {
  clear: both;
}

.slick-loading .slick-track {
  visibility: hidden;
}

.slick-slide {
  float: left;
  height: 100%;
  min-height: 1px;
  display: none;
}

[dir="rtl"] .slick-slide {
  float: right;
}

.slick-slide img {
  display: block;
}

.slick-slide.slick-loading img {
  display: none;
}

.slick-slide.dragging img {
  pointer-events: none;
}

.slick-initialized .slick-slide {
  display: block;
}

.slick-loading .slick-slide {
  visibility: hidden;
}

.slick-vertical .slick-slide {
  display: block;
  height: auto;
  border: 1px solid transparent;
}

.slick-arrow.slick-hidden {
  display: none;
}

.slick-loading .slick-list {
  background: #fff url("../images/ajax-loader.gif") center center no-repeat;
}

/* Icons */
/* Arrows */
.slick-prev,
.slick-next {
  position: absolute;
  display: block;
  height: 20px;
  width: 20px;
  line-height: 0;
  font-size: 0;
  cursor: pointer;
  background: rgba(0, 0, 0, 0.6);
  color: transparent;
  top: 50%;
  margin-top: -10px \9;
  /*lte IE 8*/
  -webkit-transform: translate(0, -50%);
  -ms-transform: translate(0, -50%);
  transform: translate(0, -50%);
  padding: 0;
  border: none;
  outline: none;
  z-index: 999;
}

.slick-prev:hover, .slick-prev:focus,
.slick-next:hover,
.slick-next:focus {
  outline: none;
  background: transparent;
  color: transparent;
}

.slick-prev:hover:before, .slick-prev:focus:before,
.slick-next:hover:before,
.slick-next:focus:before {
  opacity: 1;
}

.slick-prev.slick-disabled:before,
.slick-next.slick-disabled:before {
  opacity: 0.25;
}

.slick-prev:before, .slick-next:before {
  font-family: "Open Sans", Helvetica, Arial, sans-serif;
  font-size: 20px;
  line-height: 1;
  color: white;
  opacity: 0.75;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
}

.slick-prev {
  left: 0;
}

[dir="rtl"] .slick-prev {
  left: auto;
  right: 0;
}

.slick-prev:before {
  content: "←";
}

[dir="rtl"] .slick-prev:before {
  content: "→";
}

.slick-next {
  right: 0;
}

[dir="rtl"] .slick-next {
  left: 0;
  right: auto;
}

.slick-next:before {
  content: "→";
}

[dir="rtl"] .slick-next:before {
  content: "←";
}

/* Dots */
.slick-slider {
  margin-bottom: 30px;
}

.slick-dots {
  position: absolute;
  bottom: -45px;
  list-style: none;
  display: block;
  text-align: center;
  padding: 0;
  width: 100%;
}

.slick-dots li {
  position: relative;
  display: inline-block;
  height: 20px;
  width: 20px;
  margin: 0 5px;
  padding: 0;
  cursor: pointer;
}

.slick-dots li button {
  border: 0;
  background: transparent;
  display: block;
  height: 20px;
  width: 20px;
  outline: none;
  line-height: 0;
  font-size: 0;
  color: transparent;
  padding: 5px;
  cursor: pointer;
}

.slick-dots li button:hover, .slick-dots li button:focus {
  outline: none;
}

.slick-dots li button:hover:before, .slick-dots li button:focus:before {
  opacity: 1;
}

.slick-dots li button:before {
  position: absolute;
  top: 0;
  left: 0;
  content: "•";
  width: 20px;
  height: 20px;
  font-family: "Open Sans", Helvetica, Arial, sans-serif;
  font-size: 6px;
  line-height: 20px;
  text-align: center;
  color: black;
  opacity: 0.25;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
}

.slick-dots li.slick-active button:before {
  color: black;
  opacity: 0.75;
}

.slick-slider {
  width: 100%;
  margin-bottom: 0;
}

.slick-slider, .slick-slider * {
  outline: 0 !important;
}

.slick-slider .slick-list {
  padding-top: 20px !important;
  padding-bottom: 20px !important;
}

.slick-slider .slick-track {
  -webkit-flex-direction: row;
  -ms-flex-direction: row;
  flex-direction: row;
  -webkit-flex-wrap: nowrap;
  -ms-flex-wrap: nowrap;
  flex-wrap: nowrap;
  display: -ms-flexbox;
  display: -webkit-flex;
  display: flex;
  -webkit-align-items: stretch;
  -ms-flex-align: stretch;
  align-items: stretch;
}

.slick-slider .slick-slide {
  height: auto;
}

.slick-slider .item {
  position: relative;
  float: none;
  height: auto;
  padding-left: 15px;
  padding-right: 15px;
  display: -ms-flexbox;
  display: -webkit-flex;
  display: flex;
  -webkit-flex-direction: column;
  -ms-flex-direction: column;
  flex-direction: column;
}

.slick-slider .item > * {
  -webkit-flex-grow: 1;
  -ms-flex-positive: 1;
  flex-grow: 1;
  -webkit-align-self: stretch;
  -ms-flex-item-align: stretch;
  align-self: stretch;
}

@media (min-width: 768px) {
  .slick-slider {
    position: relative;
    width: calc(100% - 18px);
    margin-left: 10px;
    margin-right: 10px;
  }
}

@media (min-width: 992px) {
  .slick-slider {
    width: 100%;
    margin-left: 0;
    margin-right: 0;
  }
}

.slick-slider.slick-slider-style-1 .slick-prev,
.slick-slider.slick-slider-style-1 .slick-next {
  display: none !important;
  position: absolute;
  top: 50%;
  -webkit-transform: translateY(-50%);
  transform: translateY(-50%);
  width: 50px;
  height: 50px;
  line-height: 52px;
  z-index: 10;
  color: #fff;
  text-align: center;
  background: #42a4ff;
  border-radius: 100px;
  -webkit-box-shadow: 0px 2px 10px 0px rgba(19, 108, 191, 0.31);
  box-shadow: 0px 2px 10px 0px rgba(19, 108, 191, 0.31);
  transition: .33s all ease-out;
}

.slick-slider.slick-slider-style-1 .slick-prev:before,
.slick-slider.slick-slider-style-1 .slick-next:before {
  position: relative;
  font-family: 'FontAwesome';
  font-size: 16px;
  line-height: inherit;
  opacity: 1;
}

.slick-slider.slick-slider-style-1 .slick-prev:hover,
.slick-slider.slick-slider-style-1 .slick-next:hover {
  background: #084884;
  -webkit-box-shadow: 0px 2px 10px 0px rgba(8, 72, 132, 0.31);
  box-shadow: 0px 2px 10px 0px rgba(8, 72, 132, 0.31);
}

.slick-slider.slick-slider-style-1 .slick-prev {
  left: -10px;
}

.slick-slider.slick-slider-style-1 .slick-prev:before {
  left: -2px;
  content: '\f053';
}

.slick-slider.slick-slider-style-1 .slick-next {
  right: -10px;
}

.slick-slider.slick-slider-style-1 .slick-next:before {
  right: -2px;
  content: '\f054';
}

@media (min-width: 768px) {
  .slick-slider.slick-slider-style-1 .slick-prev,
  .slick-slider.slick-slider-style-1 .slick-next {
    display: inline-block !important;
  }
}

/**
 * @subsection   jquery mousewheel plugin
 * @description  Describes style declarations for jquery mousewheel plugin
 * @author       malihu
 * @license      MIT
 */
/*
== malihu jquery custom scrollbar plugin ==
Plugin URI: https://manos.malihu.gr/jquery-custom-content-scroller
*/
/*
CONTENTS:
	1. BASIC STYLE - Plugin's basic/essential CSS properties (normally, should not be edited).
	2. VERTICAL SCROLLBAR - Positioning and dimensions of vertical scrollbar.
	3. HORIZONTAL SCROLLBAR - Positioning and dimensions of horizontal scrollbar.
	4. VERTICAL AND HORIZONTAL SCROLLBARS - Positioning and dimensions of 2-axis scrollbars.
	5. TRANSITIONS - CSS3 transitions for hover events, auto-expanded and auto-hidden scrollbars.
	6. SCROLLBAR COLORS, OPACITY AND BACKGROUNDS
*/
/*
------------------------------------------------------------------------------------------------------------------------
1. BASIC STYLE
------------------------------------------------------------------------------------------------------------------------
*/
.mCustomScrollbar {
  -ms-touch-action: pinch-zoom;
  touch-action: pinch-zoom;
  /* direct pointer events to js */
}

.mCustomScrollbar.mCS_no_scrollbar, .mCustomScrollbar.mCS_touch_action {
  -ms-touch-action: auto;
  touch-action: auto;
}

.mCustomScrollBox {
  /* contains plugin's markup */
  position: relative;
  overflow: hidden;
  height: 100%;
  max-width: 100%;
  outline: none;
  direction: ltr;
}

.mCSB_container {
  /* contains the original content */
  overflow: hidden;
  width: auto;
  height: auto;
}

/*
------------------------------------------------------------------------------------------------------------------------
2. VERTICAL SCROLLBAR
y-axis
------------------------------------------------------------------------------------------------------------------------
*/
.mCSB_inside > .mCSB_container {
  margin-right: 30px;
}

.mCSB_container.mCS_no_scrollbar_y.mCS_y_hidden {
  margin-right: 0;
}

/* non-visible scrollbar */
.mCS-dir-rtl > .mCSB_inside > .mCSB_container {
  /* RTL direction/left-side scrollbar */
  margin-right: 0;
  margin-left: 30px;
}

.mCS-dir-rtl > .mCSB_inside > .mCSB_container.mCS_no_scrollbar_y.mCS_y_hidden {
  margin-left: 0;
}

/* RTL direction/left-side scrollbar */
.mCSB_scrollTools {
  /* contains scrollbar markup (draggable element, dragger rail, buttons etc.) */
  position: absolute;
  width: 16px;
  height: auto;
  left: auto;
  top: 0;
  right: 0;
  bottom: 0;
}

.mCSB_outside + .mCSB_scrollTools {
  right: -26px;
}

/* scrollbar position: outside */
.mCS-dir-rtl > .mCSB_inside > .mCSB_scrollTools,
.mCS-dir-rtl > .mCSB_outside + .mCSB_scrollTools {
  /* RTL direction/left-side scrollbar */
  right: auto;
  left: 0;
}

.mCS-dir-rtl > .mCSB_outside + .mCSB_scrollTools {
  left: -26px;
}

/* RTL direction/left-side scrollbar (scrollbar position: outside) */
.mCSB_scrollTools .mCSB_draggerContainer {
  /* contains the draggable element and dragger rail markup */
  position: absolute;
  top: 0;
  left: 0;
  bottom: 0;
  right: 0;
  height: auto;
}

.mCSB_scrollTools a + .mCSB_draggerContainer {
  margin: 30px 0;
}

.mCSB_scrollTools .mCSB_draggerRail {
  width: 2px;
  height: 100%;
  margin: 0 auto;
  -webkit-border-radius: 16px;
  -moz-border-radius: 16px;
  border-radius: 16px;
}

.mCSB_scrollTools .mCSB_dragger {
  /* the draggable element */
  cursor: pointer;
  width: 100%;
  height: 30px;
  /* minimum dragger height */
  z-index: 1;
}

.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar {
  /* the dragger element */
  position: relative;
  width: 4px;
  height: 100%;
  margin: 0 auto;
  -webkit-border-radius: 16px;
  -moz-border-radius: 16px;
  border-radius: 16px;
  text-align: center;
}

.mCSB_scrollTools_vertical.mCSB_scrollTools_onDrag_expand .mCSB_dragger.mCSB_dragger_onDrag_expanded .mCSB_dragger_bar,
.mCSB_scrollTools_vertical.mCSB_scrollTools_onDrag_expand .mCSB_draggerContainer:hover .mCSB_dragger .mCSB_dragger_bar {
  width: 12px;
  /* auto-expanded scrollbar */
}

.mCSB_scrollTools_vertical.mCSB_scrollTools_onDrag_expand .mCSB_dragger.mCSB_dragger_onDrag_expanded + .mCSB_draggerRail,
.mCSB_scrollTools_vertical.mCSB_scrollTools_onDrag_expand .mCSB_draggerContainer:hover .mCSB_draggerRail {
  width: 8px;
  /* auto-expanded scrollbar */
}

.mCSB_scrollTools .mCSB_buttonUp,
.mCSB_scrollTools .mCSB_buttonDown {
  display: block;
  position: absolute;
  height: 20px;
  width: 100%;
  overflow: hidden;
  margin: 0 auto;
  cursor: pointer;
}

.mCSB_scrollTools .mCSB_buttonDown {
  bottom: 0;
}

/*
------------------------------------------------------------------------------------------------------------------------
3. HORIZONTAL SCROLLBAR
x-axis
------------------------------------------------------------------------------------------------------------------------
*/
.mCSB_horizontal.mCSB_inside > .mCSB_container {
  margin-right: 0;
  margin-bottom: 30px;
}

.mCSB_horizontal.mCSB_outside > .mCSB_container {
  min-height: 100%;
}

.mCSB_horizontal > .mCSB_container.mCS_no_scrollbar_x.mCS_x_hidden {
  margin-bottom: 0;
}

/* non-visible scrollbar */
.mCSB_scrollTools.mCSB_scrollTools_horizontal {
  width: auto;
  height: 16px;
  top: auto;
  right: 0;
  bottom: 0;
  left: 0;
}

.mCustomScrollBox + .mCSB_scrollTools.mCSB_scrollTools_horizontal,
.mCustomScrollBox + .mCSB_scrollTools + .mCSB_scrollTools.mCSB_scrollTools_horizontal {
  bottom: -26px;
}

/* scrollbar position: outside */
.mCSB_scrollTools.mCSB_scrollTools_horizontal a + .mCSB_draggerContainer {
  margin: 0 20px;
}

.mCSB_scrollTools.mCSB_scrollTools_horizontal .mCSB_draggerRail {
  width: 100%;
  height: 2px;
  margin: 7px 0;
}

.mCSB_scrollTools.mCSB_scrollTools_horizontal .mCSB_dragger {
  width: 30px;
  /* minimum dragger width */
  height: 100%;
  left: 0;
}

.mCSB_scrollTools.mCSB_scrollTools_horizontal .mCSB_dragger .mCSB_dragger_bar {
  width: 100%;
  height: 4px;
  margin: 6px auto;
}

.mCSB_scrollTools_horizontal.mCSB_scrollTools_onDrag_expand .mCSB_dragger.mCSB_dragger_onDrag_expanded .mCSB_dragger_bar,
.mCSB_scrollTools_horizontal.mCSB_scrollTools_onDrag_expand .mCSB_draggerContainer:hover .mCSB_dragger .mCSB_dragger_bar {
  height: 12px;
  /* auto-expanded scrollbar */
  margin: 2px auto;
}

.mCSB_scrollTools_horizontal.mCSB_scrollTools_onDrag_expand .mCSB_dragger.mCSB_dragger_onDrag_expanded + .mCSB_draggerRail,
.mCSB_scrollTools_horizontal.mCSB_scrollTools_onDrag_expand .mCSB_draggerContainer:hover .mCSB_draggerRail {
  height: 8px;
  /* auto-expanded scrollbar */
  margin: 4px 0;
}

.mCSB_scrollTools.mCSB_scrollTools_horizontal .mCSB_buttonLeft,
.mCSB_scrollTools.mCSB_scrollTools_horizontal .mCSB_buttonRight {
  display: block;
  position: absolute;
  width: 20px;
  height: 100%;
  overflow: hidden;
  margin: 0 auto;
  cursor: pointer;
}

.mCSB_scrollTools.mCSB_scrollTools_horizontal .mCSB_buttonLeft {
  left: 0;
}

.mCSB_scrollTools.mCSB_scrollTools_horizontal .mCSB_buttonRight {
  right: 0;
}

/*
------------------------------------------------------------------------------------------------------------------------
4. VERTICAL AND HORIZONTAL SCROLLBARS
yx-axis
------------------------------------------------------------------------------------------------------------------------
*/
.mCSB_container_wrapper {
  position: absolute;
  height: auto;
  width: auto;
  overflow: hidden;
  top: 0;
  left: 0;
  right: 0;
  bottom: 0;
  margin-right: 30px;
  margin-bottom: 30px;
}

.mCSB_container_wrapper > .mCSB_container {
  padding-right: 30px;
  padding-bottom: 30px;
  -webkit-box-sizing: border-box;
  -moz-box-sizing: border-box;
  box-sizing: border-box;
}

.mCSB_vertical_horizontal > .mCSB_scrollTools.mCSB_scrollTools_vertical {
  bottom: 20px;
}

.mCSB_vertical_horizontal > .mCSB_scrollTools.mCSB_scrollTools_horizontal {
  right: 20px;
}

/* non-visible horizontal scrollbar */
.mCSB_container_wrapper.mCS_no_scrollbar_x.mCS_x_hidden + .mCSB_scrollTools.mCSB_scrollTools_vertical {
  bottom: 0;
}

/* non-visible vertical scrollbar/RTL direction/left-side scrollbar */
.mCSB_container_wrapper.mCS_no_scrollbar_y.mCS_y_hidden + .mCSB_scrollTools ~ .mCSB_scrollTools.mCSB_scrollTools_horizontal,
.mCS-dir-rtl > .mCustomScrollBox.mCSB_vertical_horizontal.mCSB_inside > .mCSB_scrollTools.mCSB_scrollTools_horizontal {
  right: 0;
}

/* RTL direction/left-side scrollbar */
.mCS-dir-rtl > .mCustomScrollBox.mCSB_vertical_horizontal.mCSB_inside > .mCSB_scrollTools.mCSB_scrollTools_horizontal {
  left: 20px;
}

/* non-visible scrollbar/RTL direction/left-side scrollbar */
.mCS-dir-rtl > .mCustomScrollBox.mCSB_vertical_horizontal.mCSB_inside > .mCSB_container_wrapper.mCS_no_scrollbar_y.mCS_y_hidden + .mCSB_scrollTools ~ .mCSB_scrollTools.mCSB_scrollTools_horizontal {
  left: 0;
}

.mCS-dir-rtl > .mCSB_inside > .mCSB_container_wrapper {
  /* RTL direction/left-side scrollbar */
  margin-right: 0;
  margin-left: 30px;
}

.mCSB_container_wrapper.mCS_no_scrollbar_y.mCS_y_hidden > .mCSB_container {
  padding-right: 0;
}

.mCSB_container_wrapper.mCS_no_scrollbar_x.mCS_x_hidden > .mCSB_container {
  padding-bottom: 0;
}

.mCustomScrollBox.mCSB_vertical_horizontal.mCSB_inside > .mCSB_container_wrapper.mCS_no_scrollbar_y.mCS_y_hidden {
  margin-right: 0;
  /* non-visible scrollbar */
  margin-left: 0;
}

/* non-visible horizontal scrollbar */
.mCustomScrollBox.mCSB_vertical_horizontal.mCSB_inside > .mCSB_container_wrapper.mCS_no_scrollbar_x.mCS_x_hidden {
  margin-bottom: 0;
}

/*
------------------------------------------------------------------------------------------------------------------------
5. TRANSITIONS
------------------------------------------------------------------------------------------------------------------------
*/
.mCSB_scrollTools,
.mCSB_scrollTools .mCSB_dragger .mCSB_dragger_bar,
.mCSB_scrollTools .mCSB_buttonUp,
.mCSB_scrollTools .mCSB_buttonDown,
.mCSB_scrollTools .mCSB_buttonLeft,
.mCSB_scrollTools .mCSB_buttonRight {
  -webkit-transition: opacity .2s ease-in-out, background-color .2s ease-in-out;
  -moz-transition: opacity .2s ease-in-out, background-color .2s ease-in-out;
  -o-transition: opacity .2s ease-in-out, background-color .2s ease-in-out;
  transition: opacity .2s ease-in-out, background-color .2s ease-in-out;
}

.mCSB_scrollTools_vertical.mCSB_scrollTools_onDrag_expand .mCSB_dragger_bar,
.mCSB_scrollTools_vertical.mCSB_scrollTools_onDrag_expand .mCSB_draggerRail,
.mCSB_scrollTools_horizontal.mCSB_scrollTools_onDrag_expand .mCSB_dragger_bar,
.mCSB_scrollTools_horizontal.mCSB_scrollTools_onDrag_expand .mCSB_draggerRail {
  -webkit-transition: width .2s ease-out .2s, height .2s ease-out .2s,
 margin-left .2s ease-out .2s, margin-right .2s ease-out .2s,
 margin-top .2s ease-out .2s, margin-bottom .2s ease-out .2s,
 opacity .2s ease-in-out, background-color .2s ease-in-out;
  -moz-transition: width .2s ease-out .2s, height .2s ease-out .2s,
 margin-left .2s ease-out .2s, margin-right .2s ease-out .2s,
 margin-top .2s ease-out .2s, margin-bottom .2s ease-out .2s,
 opacity .2s ease-in-out, background-color .2s ease-in-out;
  -o-transition: width .2s ease-out .2s, height .2s ease-out .2s,
 margin-left .2s ease-out .2s, margin-right .2s ease-out .2s,
 margin-top .2s ease-out .2s, margin-bottom .2s ease-out .2s,
 opacity .2s ease-in-out, background-color .2s ease-in-out;
  transition: width .2s ease-out .2s, height .2s ease-out .2s,
 margin-left .2s ease-out .2s, margin-right .2s ease-out .2s,
 margin-top .2s ease-out .2s, margin-bottom .2s ease-out .2s,
 opacity .2s ease-in-out, background-color .2s ease-in-out;
}

._mCS_1 .mCSB_scrollTools {
  width: 30px;
  background: #313132;
}

.mCSB_1_scrollbar .mCSB_buttonUp,
.mCSB_1_scrollbar .mCSB_buttonDown {
  width: 100%;
  height: 30px;
  line-height: 30px;
  text-align: center;
  vertical-align: middle;
  transition: .3s color ease-out;
}

.mCSB_1_scrollbar .mCSB_buttonUp, .mCSB_1_scrollbar .mCSB_buttonUp:active, .mCSB_1_scrollbar .mCSB_buttonUp:focus,
.mCSB_1_scrollbar .mCSB_buttonDown,
.mCSB_1_scrollbar .mCSB_buttonDown:active,
.mCSB_1_scrollbar .mCSB_buttonDown:focus {
  color: #fff;
}

.mCSB_1_scrollbar .mCSB_buttonUp:hover,
.mCSB_1_scrollbar .mCSB_buttonDown:hover {
  color: #000;
}

.mCSB_1_scrollbar .mCSB_buttonUp:before,
.mCSB_1_scrollbar .mCSB_buttonDown:before {
  font-family: "material-design";
  font-size: 24px;
  line-height: inherit;
  color: inherit;
}

.mCSB_1_scrollbar .mCSB_buttonUp:before {
  content: '\e073';
}

.mCSB_1_scrollbar .mCSB_buttonDown:before {
  content: '\e071';
}

._mCS_1 .mCSB_dragger.mCSB_dragger_onDrag .mCSB_dragger_bar {
  background-color: #cccccc;
}

._mCS_1 .mCSB_dragger .mCSB_dragger_bar {
  background-color: #fff;
  border-radius: 0;
}

._mCS_1 .mCSB_dragger .mCSB_dragger_bar:hover {
  background-color: #cccccc;
}

._mCS_1 .mCSB_dragger_bar .mCSB_dragger_bar {
  background-color: #313132;
}

#mCSB_1_scrollbar_vertical .mCSB_dragger {
  min-height: 335px !important;
}

#mCSB_1_scrollbar_horizontal .mCSB_dragger {
  width: 335px;
}

.mCSB_1_scrollbar .mCSB_dragger .mCSB_draggerRail {
  width: 4px;
}

.stepper {
  position: relative;
  display: inline-block;
  max-width: 70px;
  width: 70px;
  margin-bottom: 15px;
}

.stepper input[type="number"] {
  width: 100%;
  padding-left: 20px;
  padding-right: 20px;
  text-align: center;
  -moz-appearance: textfield;
}

.stepper input[type=number]::-webkit-inner-spin-button {
  -webkit-appearance: none;
}

.stepper-arrow {
  position: absolute;
  top: 50%;
  margin-top: -10px;
  width: 20px;
  height: 20px;
  line-height: 20px;
  font-size: 16px;
  font-family: 'Material Icons';
  cursor: pointer;
  color: #313132;
  transition: .3s all ease;
}

.stepper-arrow:hover {
  color: #42a4ff;
}

.stepper-arrow.up {
  right: 0;
  text-align: left;
}

.stepper-arrow.up:before {
  content: '\e316';
}

.stepper-arrow.down {
  left: 0;
  text-align: right;
}

.stepper-arrow.down:before {
  content: '\e313';
}

.stepper.disabled .stepper-arrow {
  pointer-events: none;
  opacity: .5;
}

.dtp {
  position: fixed;
  top: 0;
  left: 0;
  right: 0;
  bottom: 0;
  background: rgba(0, 0, 0, 0.4);
  z-index: 2000;
}

.dtp > .dtp-content {
  background: #fff;
  max-width: 300px;
  box-shadow: 0 3px 11px 0 rgba(0, 0, 0, 0.15);
  position: relative;
  left: 50%;
  margin: 0 auto;
}

@media (max-width: 767px) {
  .dtp > .dtp-content {
    max-height: 90vh;
    overflow-y: auto;
  }
}

.dtp-header {
  background: #42a4ff;
  color: #fff;
  text-align: center;
  padding: 0.3rem;
  position: relative;
}

.dtp-date, .dtp-time {
  background: #75bdff;
  text-align: center;
  color: #fff;
  padding: 10px;
}

.dtp-date > div {
  padding: 0;
  margin: 0;
}

.dtp-actual-month {
  font-size: 1.5em;
}

.dtp-actual-num, .dtp-actual-maxtime {
  font-size: 3em;
  line-height: 0.9;
}

.dtp-actual-year {
  font-size: 1.5em;
  color: #fff;
}

.dtp-picker {
  padding: 1rem;
  text-align: center;
}

.dtp-picker-month, .dtp-actual-time {
  font-weight: 500;
  text-align: center;
}

.dtp-close {
  position: absolute;
  top: 0;
  bottom: 0;
  right: 1rem;
}

.dtp-close > a {
  display: inline-block;
  vertical-align: middle;
  color: #fff;
}

.dtp table.dtp-picker-days {
  margin: 0;
  border: none;
}

.dtp table.dtp-picker-days tr {
  border: none;
}

.dtp table.dtp-picker-days tr > td {
  border: none;
  font-weight: 700;
  font-size: 14px;
  text-align: center;
  padding: 1rem 0.3rem;
}

.dtp table.dtp-picker-days tr > td > span.dtp-select-day {
  color: #bdbdbd !important;
}

.dtp table.dtp-picker-days tr > td > a {
  color: #000;
  width: 24px;
  height: 24px;
  display: inline-block;
  text-align: center;
  line-height: 24px;
  border-radius: 50%;
  transition: .3s all ease;
}

.dtp .dtp-picker-time > a {
  color: #000;
  padding: 0.4rem 0.5rem 0.5rem 0.6rem;
  border-radius: 50% !important;
}

.dtp table.dtp-picker-days tr > td > a.selected {
  background: #42a4ff;
  color: #fff;
}

.dtp table.dtp-picker-days tr > th {
  color: #000;
  text-align: center;
  font-weight: 700;
  padding: 0.4rem 0.3rem;
  border-bottom: none;
}

.dtp .p10, .dtp .p20, .dtp .p60, .dtp .p80 {
  display: inline-block;
  vertical-align: middle;
}

.dtp .p10 {
  width: 10%;
}

.dtp .p10 > a {
  color: #f9f9f9;
  transition: .3s all ease;
}

.dtp .p10 > a:hover {
  color: #fff;
}

.dtp .p20 {
  width: 20%;
}

.dtp .p60 {
  width: 60%;
}

.dtp .p80 {
  width: 80%;
}

.dtp-picker-month {
  display: none !important;
}

.dtp-meridien-am, .dtp-meridien-pm {
  position: relative;
  top: 10px;
  color: #000;
  font-weight: 500;
  padding: 0.7rem 0.75rem;
  border-radius: 50% !important;
  text-decoration: none;
  background: #eee;
  font-size: 1rem;
}

.dtp-meridien-am:hover, .dtp-meridien-pm:hover {
  color: #fff;
  background: #084884;
}

.dtp-actual-meridien a.selected {
  background: #42a4ff;
  color: #fff;
}

.dtp-picker-time {
  position: absolute;
  width: 30px;
  height: 30px;
  font-size: 1em;
  border-radius: 50%;
  cursor: pointer;
  font-weight: 500;
  text-align: center !important;
}

.dtp-picker-time > a {
  display: block;
  line-height: 21px;
  padding: 0.3rem 0.3rem 0.3rem 0.3rem;
}

.dtp-picker-time > a.dtp-select-hour.selected {
  background: #42a4ff;
  color: #fff;
}

.dtp-picker-time > a.dtp-select-hour.disabled {
  color: #313132;
}

.dtp-picker-time > a.dtp-select-minute.disabled {
  color: #313132;
}

.dtp-picker-time > a.dtp-select-minute.selected {
  background: #42a4ff;
  color: #fff;
}

.dtp-picker-clock {
  margin: 1rem 2rem 0 2rem;
  padding: 1rem;
  border-radius: 50% !important;
  background: white;
}

.dtp-clock-center {
  width: 15px;
  height: 15px;
  background: #313132;
  border-radius: 50%;
  position: absolute;
  z-index: 50;
}

html[class*="ie"] .dtp-clock-center {
  display: none;
}

.dtp-hand, .dtp-hour-hand {
  position: absolute;
  width: 4px;
  margin-left: -2px;
  background: #313132;
  -webkit-transform: rotate(0deg);
  transform: rotate(0deg);
  -webkit-transform-origin: bottom;
  -moz-transform-origin: bottom;
  -ms-transform-origin: bottom;
  transform-origin: bottom;
  z-index: 1;
}

html[class*="ie"] .dtp-hand, html[class*="ie"] .dtp-hour-hand {
  display: none;
}

.dtp-minute-hand {
  width: 2px;
  margin-left: -1px;
}

.dtp-hand.on {
  background: #42a4ff;
}

.dtp-buttons {
  padding: 0 1rem 1rem 1rem;
  text-align: right;
}

.dtp .invisible {
  visibility: hidden;
}

.dtp .left {
  float: left;
}

.dtp .right {
  float: right;
}

.dtp table.dtp-picker-days tr > td > a:hover,
.dtp .dtp-picker-time > a:hover {
  color: #fff;
  background: #084884;
}

.pswp {
  display: none;
  position: absolute;
  width: 100%;
  height: 100%;
  left: 0;
  top: 0;
  overflow: hidden;
  -ms-touch-action: none;
  touch-action: none;
  z-index: 999999;
  -webkit-text-size-adjust: 100%;
  /* create separate layer, to avoid paint on window.onscroll in webkit/blink */
  -webkit-backface-visibility: hidden;
  outline: none;
}

.pswp * {
  -webkit-box-sizing: border-box;
  box-sizing: border-box;
}

.pswp img {
  max-width: none;
}

/* style is added when JS option showHideOpacity is set to true */
.pswp--animate_opacity {
  /* 0.001, because opacity:0 doesn't trigger Paint action, which causes lag at start of transition */
  opacity: 0.001;
  will-change: opacity;
  /* for open/close transition */
  -webkit-transition: opacity 333ms cubic-bezier(0.4, 0, 0.22, 1);
  transition: opacity 333ms cubic-bezier(0.4, 0, 0.22, 1);
}

.pswp--open {
  display: block;
}

.pswp--zoom-allowed .pswp__img {
  /* autoprefixer: off */
  cursor: -webkit-zoom-in;
  cursor: -moz-zoom-in;
  cursor: zoom-in;
}

.pswp--zoomed-in .pswp__img {
  /* autoprefixer: off */
  cursor: -webkit-grab;
  cursor: -moz-grab;
  cursor: grab;
}

.pswp--dragging .pswp__img {
  /* autoprefixer: off */
  cursor: -webkit-grabbing;
  cursor: -moz-grabbing;
  cursor: grabbing;
}

/*
	Background is added as a separate element.
	As animating opacity is much faster than animating rgba() background-color.
*/
.pswp__bg {
  position: absolute;
  left: 0;
  top: 0;
  width: 100%;
  height: 100%;
  background: #000;
  opacity: 0;
  -webkit-backface-visibility: hidden;
  will-change: opacity;
}

.pswp__scroll-wrap {
  position: absolute;
  left: 0;
  top: 0;
  width: 100%;
  height: 100%;
  overflow: hidden;
}

.pswp__container,
.pswp__zoom-wrap {
  -ms-touch-action: none;
  touch-action: none;
  position: absolute;
  left: 0;
  right: 0;
  top: 0;
  bottom: 0;
}

/* Prevent selection and tap highlights */
.pswp__container,
.pswp__img {
  -webkit-user-select: none;
  -moz-user-select: none;
  -ms-user-select: none;
  user-select: none;
  -webkit-tap-highlight-color: transparent;
  -webkit-touch-callout: none;
}

.pswp__zoom-wrap {
  position: absolute;
  width: 100%;
  -webkit-transform-origin: left top;
  -ms-transform-origin: left top;
  transform-origin: left top;
  /* for open/close transition */
  -webkit-transition: -webkit-transform 333ms cubic-bezier(0.4, 0, 0.22, 1);
  transition: transform 333ms cubic-bezier(0.4, 0, 0.22, 1);
}

.pswp__bg {
  will-change: opacity;
  /* for open/close transition */
  -webkit-transition: opacity 333ms cubic-bezier(0.4, 0, 0.22, 1);
  transition: opacity 333ms cubic-bezier(0.4, 0, 0.22, 1);
}

.pswp--animated-in .pswp__bg,
.pswp--animated-in .pswp__zoom-wrap {
  -webkit-transition: none;
  transition: none;
}

.pswp__container,
.pswp__zoom-wrap {
  -webkit-backface-visibility: hidden;
}

.pswp__item {
  position: absolute;
  left: 0;
  right: 0;
  top: 0;
  bottom: 0;
  overflow: hidden;
}

.pswp__item .video-warp,
.pswp__item .post-video-warp {
  position: absolute;
  top: 50%;
  width: 600px;
  max-width: 100%;
  left: 50%;
  -webkit-transform: translate(-50%, -50%);
  transform: translate(-50%, -50%);
}

.pswp__img {
  position: absolute;
  width: auto;
  height: auto;
  top: 0;
  left: 0;
}

/*
	stretched thumbnail or div placeholder element (see below)
	style is added to avoid flickering in webkit/blink when layers overlap
*/
.pswp__img--placeholder {
  -webkit-backface-visibility: hidden;
}

/*
	div element that matches size of large image
	large image loads on top of it
*/
.pswp__img--placeholder--blank {
  background: #222;
}

.pswp--ie .pswp__img {
  width: 100% !important;
  height: auto !important;
  left: 0;
  top: 0;
}

/*
	Error message appears when image is not loaded
	(JS option errorMsg controls markup)
*/
.pswp__error-msg {
  position: absolute;
  left: 0;
  top: 50%;
  width: 100%;
  text-align: center;
  font-size: 14px;
  line-height: 16px;
  margin-top: -8px;
  color: #CCC;
}

.pswp__error-msg a {
  color: #CCC;
  text-decoration: underline;
}

[data-photo-swipe] [data-inner-html] iframe {
  pointer-events: none;
}

/*! PhotoSwipe Default UI CSS by Dmitry Semenov | photoswipe.com | MIT license */
/*

	Contents:

	1. Buttons
	2. Share modal and links
	3. Index indicator ("1 of X" counter)
	4. Caption
	5. Loading indicator
	6. Additional styles (root element, top bar, idle state, hidden state, etc.)

*/
/*

	1. Buttons

 */
/* <button> css reset */
.pswp__button {
  width: 44px;
  height: 44px;
  position: relative;
  background: none;
  cursor: pointer;
  overflow: visible;
  -webkit-appearance: none;
  display: block;
  border: 0;
  padding: 0;
  margin: 0;
  float: right;
  opacity: 0.75;
  -webkit-transition: opacity 0.2s;
  transition: opacity 0.2s;
  -webkit-box-shadow: none;
  box-shadow: none;
}

.pswp__button:focus,
.pswp__button:hover {
  opacity: 1;
}

.pswp__button:active {
  outline: none;
  opacity: 0.9;
}

.pswp__button::-moz-focus-inner {
  padding: 0;
  border: 0;
}

/* pswp__ui--over-close class it added when mouse is over element that should close gallery */
.pswp__ui--over-close .pswp__button--close {
  opacity: 1;
}

.pswp__button,
.pswp__button--arrow--left:before,
.pswp__button--arrow--right:before {
  background: url(../images/photoswipe-controls.png) 0 0 no-repeat;
  background-size: 264px 88px;
  width: 44px;
  height: 44px;
}

@media (-webkit-min-device-pixel-ratio: 1.1), (-webkit-min-device-pixel-ratio: 1.09375), (min-resolution: 105dpi), (min-resolution: 1.1dppx) {
  /* Serve SVG sprite if browser supports SVG and resolution is more than 105dpi */
  .pswp--svg .pswp__button,
  .pswp--svg .pswp__button--arrow--left:before,
  .pswp--svg .pswp__button--arrow--right:before {
  }
  .pswp--svg .pswp__button--arrow--left,
  .pswp--svg .pswp__button--arrow--right {
    background: none;
  }
}

.pswp__button--close {
  background-position: 0 -44px;
}

.pswp__button--share {
  background-position: -44px -44px;
}

.pswp__button--fs {
  display: none;
}

.pswp--supports-fs .pswp__button--fs {
  display: block;
}

.pswp--fs .pswp__button--fs {
  background-position: -44px 0;
}

.pswp__button--zoom {
  display: none;
  background-position: -88px 0;
}

.pswp--zoom-allowed .pswp__button--zoom {
  display: block;
}

.pswp--zoomed-in .pswp__button--zoom {
  background-position: -132px 0;
}

/* no arrows on touch screens */
.pswp--touch .pswp__button--arrow--left,
.pswp--touch .pswp__button--arrow--right {
  visibility: hidden;
}

/*
	Arrow buttons hit area
	(icon is added to :before pseudo-element)
*/
.pswp__button--arrow--left,
.pswp__button--arrow--right {
  background: none;
  top: 50%;
  margin-top: -50px;
  width: 70px;
  height: 100px;
  position: absolute;
}

.pswp__button--arrow--left {
  left: 0;
}

.pswp__button--arrow--right {
  right: 0;
}

.pswp__button--arrow--left:before,
.pswp__button--arrow--right:before {
  content: '';
  top: 35px;
  background-color: rgba(0, 0, 0, 0.3);
  height: 30px;
  width: 32px;
  position: absolute;
}

.pswp__button--arrow--left:before {
  left: 6px;
  background-position: -138px -44px;
}

.pswp__button--arrow--right:before {
  right: 6px;
  background-position: -94px -44px;
}

/*

	2. Share modal/popup and links

 */
.pswp__counter,
.pswp__share-modal {
  -webkit-user-select: none;
  -moz-user-select: none;
  -ms-user-select: none;
  user-select: none;
}

.pswp__share-modal {
  display: block;
  background: rgba(0, 0, 0, 0.5);
  width: 100%;
  height: 100%;
  top: 0;
  left: 0;
  padding: 10px;
  position: absolute;
  z-index: 1600;
  opacity: 0;
  -webkit-transition: opacity 0.25s ease-out;
  transition: opacity 0.25s ease-out;
  -webkit-backface-visibility: hidden;
  will-change: opacity;
}

.pswp__share-modal--hidden {
  display: none;
}

.pswp__share-tooltip {
  z-index: 1620;
  position: absolute;
  background: #FFF;
  top: 56px;
  border-radius: 2px;
  display: block;
  width: auto;
  right: 44px;
  -webkit-box-shadow: 0 2px 5px rgba(0, 0, 0, 0.25);
  box-shadow: 0 2px 5px rgba(0, 0, 0, 0.25);
  -webkit-transform: translateY(6px);
  -ms-transform: translateY(6px);
  transform: translateY(6px);
  -webkit-transition: -webkit-transform 0.25s;
  transition: transform 0.25s;
  -webkit-backface-visibility: hidden;
  will-change: transform;
}

.pswp__share-tooltip a {
  display: block;
  padding: 8px 12px;
  color: #000;
  text-decoration: none;
  font-size: 14px;
  line-height: 18px;
}

.pswp__share-tooltip a:hover {
  text-decoration: none;
  color: #000;
}

.pswp__share-tooltip a:first-child {
  /* round corners on the first/last list item */
  border-radius: 2px 2px 0 0;
}

.pswp__share-tooltip a:last-child {
  border-radius: 0 0 2px 2px;
  display: none;
  pointer-events: none;
}

.pswp__share-modal--fade-in {
  opacity: 1;
}

.pswp__share-modal--fade-in .pswp__share-tooltip {
  -webkit-transform: translateY(0);
  -ms-transform: translateY(0);
  transform: translateY(0);
}

/* increase size of share links on touch devices */
.pswp--touch .pswp__share-tooltip a {
  padding: 16px 12px;
}

a.pswp__share--facebook:before {
  content: '';
  display: block;
  width: 0;
  height: 0;
  position: absolute;
  top: -12px;
  right: 15px;
  border: 6px solid transparent;
  border-bottom-color: #FFF;
  -webkit-pointer-events: none;
  -moz-pointer-events: none;
  pointer-events: none;
}

a.pswp__share--facebook:hover {
  background: #3E5C9A;
  color: #FFF;
}

a.pswp__share--facebook:hover:before {
  border-bottom-color: #3E5C9A;
}

a.pswp__share--twitter:hover {
  background: #55ACEE;
  color: #FFF;
}

a.pswp__share--pinterest:hover {
  background: #CCC;
  color: #CE272D;
}

a.pswp__share--download:hover {
  background: #DDD;
}

/*

	3. Index indicator ("1 of X" counter)

 */
.pswp__counter {
  position: absolute;
  left: 0;
  top: 0;
  height: 44px;
  font-size: 13px;
  line-height: 44px;
  color: #FFF;
  opacity: 0.75;
  padding: 0 10px;
}

/*

	4. Caption

 */
.pswp__caption {
  position: absolute;
  left: 0;
  bottom: 0;
  width: 100%;
  min-height: 44px;
}

.pswp__caption small {
  font-size: 11px;
  color: #BBB;
}

.pswp__caption__center {
  text-align: left;
  max-width: 420px;
  margin: 0 auto;
  font-size: 13px;
  padding: 10px;
  line-height: 20px;
  color: #CCC;
}

.pswp__caption--empty {
  display: none;
}

/* Fake caption element, used to calculate height of next/prev image */
.pswp__caption--fake {
  visibility: hidden;
}

/*

	5. Loading indicator (preloader)

	You can play with it here - https://codepen.io/dimsemenov/pen/yyBWoR

 */
.pswp__preloader {
  width: 44px;
  height: 44px;
  position: absolute;
  top: 0;
  left: 50%;
  margin-left: -22px;
  opacity: 0;
  -webkit-transition: opacity 0.25s ease-out;
  transition: opacity 0.25s ease-out;
  will-change: opacity;
  direction: ltr;
}

.pswp__preloader__icn {
  width: 20px;
  height: 20px;
  margin: 12px;
}

.pswp__preloader--active {
  opacity: 1;
}

.pswp__preloader--active .pswp__preloader__icn {
  /* We use .gif in browsers that don't support CSS animation */
  background: url(../images/preloader.gif) 0 0 no-repeat;
}

.pswp--css_animation .pswp__preloader--active {
  opacity: 1;
}

.pswp--css_animation .pswp__preloader--active .pswp__preloader__icn {
  -webkit-animation: clockwise 500ms linear infinite;
  animation: clockwise 500ms linear infinite;
}

.pswp--css_animation .pswp__preloader--active .pswp__preloader__donut {
  -webkit-animation: donut-rotate 1000ms cubic-bezier(0.4, 0, 0.22, 1) infinite;
  animation: donut-rotate 1000ms cubic-bezier(0.4, 0, 0.22, 1) infinite;
}

.pswp--css_animation .pswp__preloader__icn {
  background: none;
  opacity: 0.75;
  width: 14px;
  height: 14px;
  position: absolute;
  left: 15px;
  top: 15px;
  margin: 0;
}

.pswp--css_animation .pswp__preloader__cut {
  /*
			The idea of animating inner circle is based on Polymer ("material") loading indicator
			 by Keanu Lee https://blog.keanulee.com/2014/10/20/the-tale-of-three-spinners.html
		*/
  position: relative;
  width: 7px;
  height: 14px;
  overflow: hidden;
}

.pswp--css_animation .pswp__preloader__donut {
  -webkit-box-sizing: border-box;
  box-sizing: border-box;
  width: 14px;
  height: 14px;
  border: 2px solid #FFF;
  border-radius: 50%;
  border-left-color: transparent;
  border-bottom-color: transparent;
  position: absolute;
  top: 0;
  left: 0;
  background: none;
  margin: 0;
}

@media screen and (max-width: 1024px) {
  .pswp__preloader {
    position: relative;
    left: auto;
    top: auto;
    margin: 0;
    float: right;
  }
}

@-webkit-keyframes clockwise {
  0% {
    -webkit-transform: rotate(0deg);
    transform: rotate(0deg);
  }
  100% {
    -webkit-transform: rotate(360deg);
    transform: rotate(360deg);
  }
}

@keyframes clockwise {
  0% {
    -webkit-transform: rotate(0deg);
    transform: rotate(0deg);
  }
  100% {
    -webkit-transform: rotate(360deg);
    transform: rotate(360deg);
  }
}

@-webkit-keyframes donut-rotate {
  0% {
    -webkit-transform: rotate(0);
    transform: rotate(0);
  }
  50% {
    -webkit-transform: rotate(-140deg);
    transform: rotate(-140deg);
  }
  100% {
    -webkit-transform: rotate(0);
    transform: rotate(0);
  }
}

@keyframes donut-rotate {
  0% {
    -webkit-transform: rotate(0);
    transform: rotate(0);
  }
  50% {
    -webkit-transform: rotate(-140deg);
    transform: rotate(-140deg);
  }
  100% {
    -webkit-transform: rotate(0);
    transform: rotate(0);
  }
}

/*

	6. Additional styles

 */
/* root element of UI */
.pswp__ui {
  -webkit-font-smoothing: auto;
  visibility: visible;
  opacity: 1;
  z-index: 1550;
}

/* top black bar with buttons and "1 of X" indicator */
.pswp__top-bar {
  position: absolute;
  left: 0;
  top: 0;
  height: 44px;
  width: 100%;
}

.pswp__caption,
.pswp__top-bar,
.pswp--has_mouse .pswp__button--arrow--left,
.pswp--has_mouse .pswp__button--arrow--right {
  -webkit-backface-visibility: hidden;
  will-change: opacity;
  -webkit-transition: opacity 333ms cubic-bezier(0.4, 0, 0.22, 1);
  transition: opacity 333ms cubic-bezier(0.4, 0, 0.22, 1);
}

/* pswp--has_mouse class is added only when two subsequent mousemove events occur */
.pswp--has_mouse .pswp__button--arrow--left,
.pswp--has_mouse .pswp__button--arrow--right {
  visibility: visible;
}

.pswp__top-bar,
.pswp__caption {
  background-color: rgba(0, 0, 0, 0.5);
}

/* pswp__ui--fit class is added when main image "fits" between top bar and bottom bar (caption) */
.pswp__ui--fit .pswp__top-bar,
.pswp__ui--fit .pswp__caption {
  background-color: rgba(0, 0, 0, 0.3);
}

/* pswp__ui--idle class is added when mouse isn't moving for several seconds (JS option timeToIdle) */
.pswp__ui--idle .pswp__top-bar {
  opacity: 0;
}

.pswp__ui--idle .pswp__button--arrow--left,
.pswp__ui--idle .pswp__button--arrow--right {
  opacity: 0;
}

/*
	pswp__ui--hidden class is added when controls are hidden
	e.g. when user taps to toggle visibility of controls
*/
.pswp__ui--hidden .pswp__top-bar,
.pswp__ui--hidden .pswp__caption,
.pswp__ui--hidden .pswp__button--arrow--left,
.pswp__ui--hidden .pswp__button--arrow--right {
  /* Force paint & create composition layer for controls. */
  opacity: 0.001;
}

/* pswp__ui--one-slide class is added when there is just one item in gallery */
.pswp__ui--one-slide .pswp__button--arrow--left,
.pswp__ui--one-slide .pswp__button--arrow--right,
.pswp__ui--one-slide .pswp__counter {
  display: none;
}

.pswp__element--disabled {
  display: none !important;
}

.pswp--minimal--dark .pswp__top-bar {
  background: none;
}

.progress-bar-circle {
  display: inline-block;
  position: relative;
  text-align: center;
  line-height: 1.2;
}

.progress-bar-circle canvas {
  vertical-align: middle;
}

.progress-bar-circle span {
  position: absolute;
  top: 48%;
  left: 50%;
  font-weight: 700;
  font-size: 30px;
  line-height: 38px;
  -webkit-transform: translate(-50%, -50%);
  transform: translate(-50%, -50%);
}

.progress-bar-circle span:after {
  content: "%";
}

.progress-bar-circle-primary span {
  color: #42a4ff;
}

.select2 {
  width: 100% !important;
}

.select2-container {
  box-sizing: border-box;
  display: inline-block;
  margin: 0;
  position: relative;
  vertical-align: middle;
}

.select2-container .select2-selection--single {
  box-sizing: border-box;
  cursor: pointer;
  display: block;
  height: 50px;
  user-select: none;
  -webkit-user-select: none;
}

.select2-container .select2-selection--single .select2-selection__rendered {
  display: block;
  padding-left: 20px;
  padding-right: 20px;
  overflow: hidden;
  text-overflow: ellipsis;
  white-space: nowrap;
}

.select2-container .select2-selection--single .select2-selection__clear {
  position: relative;
}

.select2-container[dir="rtl"] .select2-selection--single .select2-selection__rendered {
  padding-left: 20px;
  padding-right: 20px;
}

.select2-container .select2-selection--multiple {
  box-sizing: border-box;
  cursor: pointer;
  display: block;
  min-height: 32px;
  user-select: none;
  -webkit-user-select: none;
}

.select2-container .select2-selection--multiple .select2-selection__rendered {
  display: inline-block;
  overflow: hidden;
  padding-left: 20px;
  text-overflow: ellipsis;
  white-space: nowrap;
}

.select2-container .select2-search--inline {
  float: left;
}

.select2-container .select2-search--inline .select2-search__field {
  box-sizing: border-box;
  border: none;
  margin-top: 5px;
  padding: 0;
}

.select2-container .select2-search--inline .select2-search__field::-webkit-search-cancel-button {
  -webkit-appearance: none;
}

.select2-dropdown {
  background-color: #fff;
  border: 1px solid #313132;
  border-radius: 4px;
  box-sizing: border-box;
  display: block;
  position: absolute;
  left: -100000px;
  width: 100%;
  z-index: 1051;
}

.select2-results {
  display: block;
}

.select2-results__options {
  list-style: none;
  margin: 0;
  padding: 0;
}

.select2-results__option {
  padding: 2px 10px;
  font-size: 14px;
  transition: .3s;
  user-select: none;
  -webkit-user-select: none;
}

.select2-results__option[aria-selected] {
  cursor: pointer;
}

.select2-container--open .select2-dropdown {
  left: 0;
}

.select2-container--open .select2-dropdown--above {
  border-bottom: none;
  border-bottom-left-radius: 0;
  border-bottom-right-radius: 0;
}

.select2-container--open .select2-dropdown--below {
  border-top: none;
  border-top-left-radius: 0;
  border-top-right-radius: 0;
}

.select2-search--dropdown {
  display: block;
  padding: 4px;
}

.select2-search--dropdown .select2-search__field {
  width: 100%;
  padding: 4px;
  box-sizing: border-box;
}

.select2-search--dropdown .select2-search__field::-webkit-search-cancel-button {
  -webkit-appearance: none;
}

.select2-search--dropdown.select2-search--hide {
  display: none;
}

.select2-close-mask {
  border: 0;
  margin: 0;
  padding: 0;
  display: block;
  position: fixed;
  left: 0;
  top: 0;
  min-height: 100%;
  min-width: 100%;
  height: auto;
  width: auto;
  opacity: 0;
  z-index: 99;
  background-color: #fff;
  filter: alpha(opacity=0);
}

.select2-hidden-accessible {
  border: 0 !important;
  clip: rect(0 0 0 0) !important;
  height: 1px !important;
  margin: -1px !important;
  overflow: hidden !important;
  padding: 0 !important;
  position: absolute !important;
  width: 1px !important;
}

.select2-container--bootstrap {
  display: block;
}

.select2-container--bootstrap .select2-selection {
  background-color: #f5f5f5;
  border: 1px solid #dbdbdb;
  border-radius: 0;
  color: #313132;
  font-family: "Open Sans", Helvetica, Arial, sans-serif;
  font-size: 14px;
  outline: 0;
}

.select2-container--bootstrap .select2-search--dropdown .select2-search__field {
  background-color: #f5f5f5;
  border: 1px solid #dbdbdb;
  border-radius: 0;
  color: #313132;
  font-family: "Open Sans", Helvetica, Arial, sans-serif;
  font-size: 14px;
}

.select2-container--bootstrap .select2-search__field {
  outline: 0;
  font-size: 14px;
}

.select2-container--bootstrap .select2-search__field::-webkit-input-placeholder {
  color: #999;
}

.select2-container--bootstrap .select2-search__field:-moz-placeholder {
  color: #999;
}

.select2-container--bootstrap .select2-search__field::-moz-placeholder {
  color: #999;
  opacity: 1;
}

.select2-container--bootstrap .select2-search__field:-ms-input-placeholder {
  color: #999;
}

.select2-container--bootstrap .select2-results__option[role=group] {
  padding: 0;
}

.select2-container--bootstrap .select2-results__option[aria-disabled=true] {
  color: #ccc;
  cursor: not-allowed;
}

.select2-container--bootstrap .select2-results__option[aria-selected=true] {
  background-color: #f5f5f5;
  color: #242425;
}

.select2-container--bootstrap .select2-results__option--highlighted[aria-selected] {
  background-color: #42a4ff;
  color: #313132;
}

.select2-container--bootstrap .select2-results__option .select2-results__option {
  padding: 10px 20px;
}

.select2-container--bootstrap .select2-results__option .select2-results__option .select2-results__group {
  padding-left: 0;
}

.select2-container--bootstrap .select2-results__option .select2-results__option .select2-results__option {
  margin-left: -44px;
  padding-left: 88px;
}

.select2-container--bootstrap .select2-results__option .select2-results__option .select2-results__option .select2-results__option {
  margin-left: -88px;
  padding-left: 132px;
}

.select2-container--bootstrap .select2-results__option .select2-results__option .select2-results__option .select2-results__option .select2-results__option {
  margin-left: -132px;
  padding-left: 176px;
}

.select2-container--bootstrap .select2-results__option .select2-results__option .select2-results__option .select2-results__option .select2-results__option .select2-results__option {
  margin-left: -176px;
  padding-left: 220px;
}

.select2-container--bootstrap .select2-results__option .select2-results__option .select2-results__option .select2-results__option .select2-results__option .select2-results__option .select2-results__option {
  margin-left: -220px;
  padding-left: 264px;
}

.select2-container--bootstrap .select2-results__group {
  color: #ccc;
  display: block;
  padding: 13px 44px;
  font-weight: 700;
  font-size: 16px;
  line-height: 1.875;
  white-space: nowrap;
}

.select2-container--bootstrap.select2-container--focus .select2-selection, .select2-container--bootstrap.select2-container--open .select2-selection {
  -webkit-transition: border-color ease-in-out 0.15s, box-shadow ease-in-out 0.15s;
  -o-transition: border-color ease-in-out 0.15s, box-shadow ease-in-out 0.15s;
  transition: border-color ease-in-out 0.15s, box-shadow ease-in-out 0.15s;
  border-color: #66afe9;
}

.select2-container--bootstrap.select2-container--open .select2-selection .select2-selection__arrow b {
  border-color: transparent transparent #42a4ff transparent;
  border-width: 0 5px 5px 5px;
}

.select2-container--bootstrap.select2-container--open.select2-container--below .select2-selection {
  border-bottom-right-radius: 0;
  border-bottom-left-radius: 0;
}

.select2-container--bootstrap.select2-container--open.select2-container--above .select2-selection {
  border-top-right-radius: 0;
  border-top-left-radius: 0;
}

.select2-container--bootstrap .select2-selection__clear {
  color: #313132;
  cursor: pointer;
  float: right;
  font-weight: 400;
  margin-right: 10px;
}

.select2-container--bootstrap .select2-selection__clear:hover {
  color: #42a4ff;
}

.select2-container--bootstrap.select2-container--disabled .select2-selection {
  border-color: #dbdbdb;
  -webkit-box-shadow: none;
  box-shadow: none;
}

.select2-container--bootstrap.select2-container--disabled .select2-selection,
.select2-container--bootstrap.select2-container--disabled .select2-search__field {
  cursor: not-allowed;
}

.select2-container--bootstrap.select2-container--disabled .select2-selection,
.select2-container--bootstrap.select2-container--disabled .select2-selection--multiple .select2-selection__choice {
  background-color: #f9f9f9;
}

.select2-container--bootstrap.select2-container--disabled .select2-selection__clear,
.select2-container--bootstrap.select2-container--disabled .select2-selection--multiple .select2-selection__choice__remove {
  display: none;
}

.select2-container--bootstrap .select2-dropdown {
  border-color: #66afe9;
  overflow-x: hidden;
}

.select2-container--bootstrap .select2-results > .select2-results__options {
  max-height: 200px;
  overflow-y: auto;
}

.select2-container--bootstrap .select2-selection--single {
  text-align: left;
  height: 50px;
  line-height: 50px;
  padding: 0 15px;
}

.select2-container--bootstrap .select2-selection--single .select2-selection__arrow {
  position: absolute;
  bottom: 0;
  right: 44px;
  top: 0;
}

.select2-container--bootstrap .select2-selection--single .select2-selection__arrow b:before {
  position: absolute;
  top: 50%;
  font-weight: 400;
  margin-top: -10px;
  right: 0;
  height: 20px;
  line-height: 20px;
  content: '\e313';
  font-family: 'Material Icons';
  font-size: 20px;
}

.select2-container--bootstrap .select2-selection--single .select2-selection__rendered {
  color: #313132;
  padding: 0;
}

.select2-container--bootstrap .select2-selection--single .select2-selection__placeholder {
  color: #999;
}

.select2-container--bootstrap .select2-selection--multiple {
  min-height: 50px;
}

.select2-container--bootstrap .select2-selection--multiple .select2-selection__rendered {
  box-sizing: border-box;
  display: block;
  line-height: 24;
  list-style: none;
  margin: 0;
  overflow: hidden;
  padding: 0;
  width: 100%;
  text-overflow: ellipsis;
  white-space: nowrap;
}

.select2-container--bootstrap .select2-selection--multiple .select2-selection__placeholder {
  color: #999;
  float: left;
  margin-top: 5px;
}

.select2-container--bootstrap .select2-selection--multiple .select2-selection__choice {
  color: #313132;
  background: #000;
  border: 1px solid #000;
  border-radius: 3px;
  cursor: default;
  float: left;
  margin: 0;
  padding: 0 13px;
}

.select2-container--bootstrap .select2-selection--multiple .select2-search--inline .select2-search__field {
  background: transparent;
  padding: 0 44px;
  height: 48px;
  line-height: 24;
  margin-top: 0;
  min-width: 5em;
}

.select2-container--bootstrap .select2-selection--multiple .select2-selection__choice__remove {
  color: #313132;
  cursor: pointer;
  display: inline-block;
  font-weight: bold;
  margin-right: 6.5px;
}

.select2-container--bootstrap .select2-selection--multiple .select2-selection__choice__remove:hover {
  color: #42a4ff;
}

.select2-container--bootstrap .select2-selection--multiple .select2-selection__clear {
  margin-top: 13px;
}

.select2-container--bootstrap.input-sm, .input-group-sm > .select2-container--bootstrap.form-control,
.input-group-sm > .select2-container--bootstrap.input-group-addon,
.input-group-sm > .input-group-btn > .select2-container--bootstrap.btn, .select2-container--bootstrap.input-lg, .input-group-lg > .select2-container--bootstrap.form-control,
.input-group-lg > .select2-container--bootstrap.input-group-addon,
.input-group-lg > .input-group-btn > .select2-container--bootstrap.btn {
  border-radius: 0;
  font-size: 12px;
  height: auto;
  line-height: 1;
  padding: 0;
}

.select2-container--bootstrap.input-sm .select2-selection--single, .input-group-sm > .select2-container--bootstrap.form-control .select2-selection--single,
.input-group-sm > .select2-container--bootstrap.input-group-addon .select2-selection--single,
.input-group-sm > .input-group-btn > .select2-container--bootstrap.btn .select2-selection--single,
.input-group-sm .select2-container--bootstrap .select2-selection--single,
.form-group-sm .select2-container--bootstrap .select2-selection--single {
  border-radius: 3px;
  font-size: 12px;
  height: 38px;
  line-height: 1.5;
  padding: 9px 39px 9px 27px;
}

.select2-container--bootstrap.input-sm .select2-selection--single .select2-selection__arrow b, .input-group-sm > .select2-container--bootstrap.form-control .select2-selection--single .select2-selection__arrow b,
.input-group-sm > .select2-container--bootstrap.input-group-addon .select2-selection--single .select2-selection__arrow b,
.input-group-sm > .input-group-btn > .select2-container--bootstrap.btn .select2-selection--single .select2-selection__arrow b,
.input-group-sm .select2-container--bootstrap .select2-selection--single .select2-selection__arrow b,
.form-group-sm .select2-container--bootstrap .select2-selection--single .select2-selection__arrow b {
  margin-left: -9px;
}

.select2-container--bootstrap.input-sm .select2-selection--multiple, .input-group-sm > .select2-container--bootstrap.form-control .select2-selection--multiple,
.input-group-sm > .select2-container--bootstrap.input-group-addon .select2-selection--multiple,
.input-group-sm > .input-group-btn > .select2-container--bootstrap.btn .select2-selection--multiple,
.input-group-sm .select2-container--bootstrap .select2-selection--multiple,
.form-group-sm .select2-container--bootstrap .select2-selection--multiple {
  min-height: 38px;
}

.select2-container--bootstrap.input-sm .select2-selection--multiple .select2-selection__choice, .input-group-sm > .select2-container--bootstrap.form-control .select2-selection--multiple .select2-selection__choice,
.input-group-sm > .select2-container--bootstrap.input-group-addon .select2-selection--multiple .select2-selection__choice,
.input-group-sm > .input-group-btn > .select2-container--bootstrap.btn .select2-selection--multiple .select2-selection__choice,
.input-group-sm .select2-container--bootstrap .select2-selection--multiple .select2-selection__choice,
.form-group-sm .select2-container--bootstrap .select2-selection--multiple .select2-selection__choice {
  font-size: 12px;
  line-height: 1.5;
  margin: 8px 0 0 13.5px;
  padding: 0 9px;
}

.select2-container--bootstrap.input-sm .select2-selection--multiple .select2-search--inline .select2-search__field, .input-group-sm > .select2-container--bootstrap.form-control .select2-selection--multiple .select2-search--inline .select2-search__field,
.input-group-sm > .select2-container--bootstrap.input-group-addon .select2-selection--multiple .select2-search--inline .select2-search__field,
.input-group-sm > .input-group-btn > .select2-container--bootstrap.btn .select2-selection--multiple .select2-search--inline .select2-search__field,
.input-group-sm .select2-container--bootstrap .select2-selection--multiple .select2-search--inline .select2-search__field,
.form-group-sm .select2-container--bootstrap .select2-selection--multiple .select2-search--inline .select2-search__field {
  padding: 0 27px;
  font-size: 12px;
  height: 36px;
  line-height: 1.5;
}

.select2-container--bootstrap.input-sm .select2-selection--multiple .select2-selection__clear, .input-group-sm > .select2-container--bootstrap.form-control .select2-selection--multiple .select2-selection__clear,
.input-group-sm > .select2-container--bootstrap.input-group-addon .select2-selection--multiple .select2-selection__clear,
.input-group-sm > .input-group-btn > .select2-container--bootstrap.btn .select2-selection--multiple .select2-selection__clear,
.input-group-sm .select2-container--bootstrap .select2-selection--multiple .select2-selection__clear,
.form-group-sm .select2-container--bootstrap .select2-selection--multiple .select2-selection__clear {
  margin-top: 9px;
}

.select2-container--bootstrap.input-lg .select2-selection--single, .input-group-lg > .select2-container--bootstrap.form-control .select2-selection--single,
.input-group-lg > .select2-container--bootstrap.input-group-addon .select2-selection--single,
.input-group-lg > .input-group-btn > .select2-container--bootstrap.btn .select2-selection--single,
.input-group-lg .select2-container--bootstrap .select2-selection--single,
.form-group-lg .select2-container--bootstrap .select2-selection--single {
  border-radius: 50px;
  font-size: 18px;
  height: 57.2px;
  line-height: 1.33333;
  padding: 15.6px 62px 15.6px 47px;
}

.select2-container--bootstrap.input-lg .select2-selection--single .select2-selection__arrow, .input-group-lg > .select2-container--bootstrap.form-control .select2-selection--single .select2-selection__arrow,
.input-group-lg > .select2-container--bootstrap.input-group-addon .select2-selection--single .select2-selection__arrow,
.input-group-lg > .input-group-btn > .select2-container--bootstrap.btn .select2-selection--single .select2-selection__arrow,
.input-group-lg .select2-container--bootstrap .select2-selection--single .select2-selection__arrow,
.form-group-lg .select2-container--bootstrap .select2-selection--single .select2-selection__arrow {
  width: 5px;
}

.select2-container--bootstrap.input-lg .select2-selection--single .select2-selection__arrow b, .input-group-lg > .select2-container--bootstrap.form-control .select2-selection--single .select2-selection__arrow b,
.input-group-lg > .select2-container--bootstrap.input-group-addon .select2-selection--single .select2-selection__arrow b,
.input-group-lg > .input-group-btn > .select2-container--bootstrap.btn .select2-selection--single .select2-selection__arrow b,
.input-group-lg .select2-container--bootstrap .select2-selection--single .select2-selection__arrow b,
.form-group-lg .select2-container--bootstrap .select2-selection--single .select2-selection__arrow b {
  border-width: 5px 5px 0 5px;
  margin-left: -5px;
  margin-left: -15.6px;
  margin-top: -2.5px;
}

.select2-container--bootstrap.input-lg .select2-selection--multiple, .input-group-lg > .select2-container--bootstrap.form-control .select2-selection--multiple,
.input-group-lg > .select2-container--bootstrap.input-group-addon .select2-selection--multiple,
.input-group-lg > .input-group-btn > .select2-container--bootstrap.btn .select2-selection--multiple,
.input-group-lg .select2-container--bootstrap .select2-selection--multiple,
.form-group-lg .select2-container--bootstrap .select2-selection--multiple {
  min-height: 57.2px;
}

.select2-container--bootstrap.input-lg .select2-selection--multiple .select2-selection__choice, .input-group-lg > .select2-container--bootstrap.form-control .select2-selection--multiple .select2-selection__choice,
.input-group-lg > .select2-container--bootstrap.input-group-addon .select2-selection--multiple .select2-selection__choice,
.input-group-lg > .input-group-btn > .select2-container--bootstrap.btn .select2-selection--multiple .select2-selection__choice,
.input-group-lg .select2-container--bootstrap .select2-selection--multiple .select2-selection__choice,
.form-group-lg .select2-container--bootstrap .select2-selection--multiple .select2-selection__choice {
  font-size: 18px;
  line-height: 1.33333;
  border-radius: 4px;
  margin: 14.6px 0 0 23.5px;
  padding: 0 15.6px;
}

.select2-container--bootstrap.input-lg .select2-selection--multiple .select2-search--inline .select2-search__field, .input-group-lg > .select2-container--bootstrap.form-control .select2-selection--multiple .select2-search--inline .select2-search__field,
.input-group-lg > .select2-container--bootstrap.input-group-addon .select2-selection--multiple .select2-search--inline .select2-search__field,
.input-group-lg > .input-group-btn > .select2-container--bootstrap.btn .select2-selection--multiple .select2-search--inline .select2-search__field,
.input-group-lg .select2-container--bootstrap .select2-selection--multiple .select2-search--inline .select2-search__field,
.form-group-lg .select2-container--bootstrap .select2-selection--multiple .select2-search--inline .select2-search__field {
  padding: 0 47px;
  font-size: 18px;
  height: 55.2px;
  line-height: 1.33333;
}

.select2-container--bootstrap.input-lg .select2-selection--multiple .select2-selection__clear, .input-group-lg > .select2-container--bootstrap.form-control .select2-selection--multiple .select2-selection__clear,
.input-group-lg > .select2-container--bootstrap.input-group-addon .select2-selection--multiple .select2-selection__clear,
.input-group-lg > .input-group-btn > .select2-container--bootstrap.btn .select2-selection--multiple .select2-selection__clear,
.input-group-lg .select2-container--bootstrap .select2-selection--multiple .select2-selection__clear,
.form-group-lg .select2-container--bootstrap .select2-selection--multiple .select2-selection__clear {
  margin-top: 15.6px;
}

.select2-container--bootstrap.input-lg.select2-container--open .select2-selection--single, .input-group-lg > .select2-container--bootstrap.select2-container--open.form-control .select2-selection--single,
.input-group-lg > .select2-container--bootstrap.select2-container--open.input-group-addon .select2-selection--single,
.input-group-lg > .input-group-btn > .select2-container--bootstrap.select2-container--open.btn .select2-selection--single {
  /**
     * Make the dropdown arrow point up while the dropdown is visible.
     */
}

.select2-container--bootstrap.input-lg.select2-container--open .select2-selection--single .select2-selection__arrow b, .input-group-lg > .select2-container--bootstrap.select2-container--open.form-control .select2-selection--single .select2-selection__arrow b,
.input-group-lg > .select2-container--bootstrap.select2-container--open.input-group-addon .select2-selection--single .select2-selection__arrow b,
.input-group-lg > .input-group-btn > .select2-container--bootstrap.select2-container--open.btn .select2-selection--single .select2-selection__arrow b {
  border-color: transparent transparent #313132 transparent;
  border-width: 0 5px 5px 5px;
}

.input-group-lg .select2-container--bootstrap.select2-container--open .select2-selection--single {
  /**
     * Make the dropdown arrow point up while the dropdown is visible.
     */
}

.input-group-lg .select2-container--bootstrap.select2-container--open .select2-selection--single .select2-selection__arrow b {
  border-color: transparent transparent #313132 transparent;
  border-width: 0 5px 5px 5px;
}

.select2-container--bootstrap[dir="rtl"] .select2-selection--single {
  padding-left: 56px;
  padding-right: 44px;
}

.select2-container--bootstrap[dir="rtl"] .select2-selection--single .select2-selection__rendered {
  padding-right: 0;
  padding-left: 0;
  text-align: right;
  /* 1 */
}

.select2-container--bootstrap[dir="rtl"] .select2-selection--single .select2-selection__clear {
  float: left;
}

.select2-container--bootstrap[dir="rtl"] .select2-selection--single .select2-selection__arrow {
  left: 44px;
  right: auto;
}

.select2-container--bootstrap[dir="rtl"] .select2-selection--single .select2-selection__arrow b {
  margin-left: 0;
}

.select2-container--bootstrap[dir="rtl"] .select2-selection--multiple .select2-selection__choice,
.select2-container--bootstrap[dir="rtl"] .select2-selection--multiple .select2-selection__placeholder {
  float: right;
}

.select2-container--bootstrap[dir="rtl"] .select2-selection--multiple .select2-selection__choice {
  margin-left: 0;
  margin-right: 22px;
}

.select2-container--bootstrap[dir="rtl"] .select2-selection--multiple .select2-selection__choice__remove {
  margin-left: 2px;
  margin-right: auto;
}

.has-warning .select2-dropdown,
.has-warning .select2-selection {
  border-color: #ffb142;
}

.has-warning .select2-container--focus .select2-selection,
.has-warning .select2-container--open .select2-selection {
  -webkit-box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.075), 0 0 6px #ffdba8;
  box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.075), 0 0 6px #ffdba8;
  border-color: #ff9c0f;
}

.has-warning.select2-drop-active {
  border-color: #ff9c0f;
}

.has-warning.select2-drop-active.select2-drop.select2-drop-above {
  border-top-color: #ff9c0f;
}

.has-error .select2-dropdown,
.has-error .select2-selection {
  border-color: #ff4242;
}

.has-error .select2-container--focus .select2-selection,
.has-error .select2-container--open .select2-selection {
  -webkit-box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.075), 0 0 6px #ffa8a8;
  box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.075), 0 0 6px #ffa8a8;
  border-color: #ff0f0f;
}

.has-error.select2-drop-active {
  border-color: #ff0f0f;
}

.has-error.select2-drop-active.select2-drop.select2-drop-above {
  border-top-color: #ff0f0f;
}

.has-success .select2-dropdown,
.has-success .select2-selection {
  border-color: #5cb85c;
}

.has-success .select2-container--focus .select2-selection,
.has-success .select2-container--open .select2-selection {
  -webkit-box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.075), 0 0 6px #a3d7a3;
  box-shadow: inset 0 1px 1px rgba(0, 0, 0, 0.075), 0 0 6px #a3d7a3;
  border-color: #449d44;
}

.has-success.select2-drop-active {
  border-color: #449d44;
}

.has-success.select2-drop-active.select2-drop.select2-drop-above {
  border-top-color: #449d44;
}

.input-group .select2-container--bootstrap {
  display: table;
  table-layout: fixed;
  position: relative;
  z-index: 2;
  float: left;
  width: 100%;
  margin-bottom: 0;
}

.input-group.select2-bootstrap-prepend .select2-container--bootstrap .select2-selection {
  border-bottom-left-radius: 0;
  border-top-left-radius: 0;
}

.input-group.select2-bootstrap-append .select2-container--bootstrap .select2-selection {
  border-bottom-right-radius: 0;
  border-top-right-radius: 0;
}

.select2-bootstrap-append .select2-container--bootstrap,
.select2-bootstrap-append .input-group-btn,
.select2-bootstrap-append .input-group-btn .btn,
.select2-bootstrap-prepend .select2-container--bootstrap,
.select2-bootstrap-prepend .input-group-btn,
.select2-bootstrap-prepend .input-group-btn .btn {
  vertical-align: top;
}

.form-control.select2-hidden-accessible {
  position: absolute !important;
  width: 1px !important;
}

.form-inline .select2-container--bootstrap {
  display: inline-block;
}

.mag-host {
  position: relative;
  -webkit-user-select: none;
  -moz-user-select: none;
  -ms-user-select: none;
  -o-user-select: none;
  user-select: none;
}

.mag-zoomed-container {
  position: absolute;
  height: 100%;
  width: 100%;
  left: 0;
  top: 0;
  overflow: hidden;
}

.mag-zoomed-container > * {
  position: absolute;
}

.mag-noflow {
  position: absolute;
  height: 100%;
  width: 100%;
  left: 0;
  top: 0;
  z-index: 2;
  overflow: hidden;
}

.mag-noflow > * {
  position: absolute;
}

.mag-zoomed img {
  display: block;
  width: 100%;
  height: 100%;
}

.mag-zone {
  position: absolute;
  height: 100%;
  width: 100%;
  left: 0;
  top: 0;
  z-index: 2;
}

[mag-thumb] {
  top: 0;
  left: 0;
}

[mag-thumb] img {
  display: block;
  height: auto;
  max-width: 100%;
}

.mag-lens {
  position: absolute;
  z-index: 2;
}

[mag-zoom] {
  display: none;
}

.mag-js [mag-zoom][mag-toggle="false"] {
  display: block;
}

[mag-flow="inline"] {
  display: inline-block;
  position: relative;
  width: auto;
  height: auto;
}

[mag-flow="inline"] .mag-thumb {
  position: relative;
}

[mag-theme="default"].mag-zoomed-bg {
  background: black;
}

[mag-theme="default"] .mag-lens {
  box-shadow: 0 0 4px black;
  border: 1px solid white;
  background: rgba(255, 255, 255, 0.25);
  -webkit-box-sizing: border-box;
  -moz-box-sizing: border-box;
  box-sizing: border-box;
}

[mag-theme="default"][mag-position-event="move"] {
  cursor: crosshair;
}

[mag-theme="default"][mag-position="drag"],
[mag-theme="default"][mag-position-event="hold"] {
  cursor: move;
  cursor: -webkit-grab;
  cursor: -moz-grab;
  cursor: grab;
}

[mag-theme="default"][mag-position="drag"].mag--dragging,
[mag-theme="default"][mag-position-event="hold"].mag--dragging {
  cursor: -webkit-grabbing;
  cursor: -moz-grabbing;
  cursor: grabbing;
}

.img-thumbnail {
  width: 100%;
}

.img-thumbnail > div {
  width: 100%;
}

/*
* @subsection   Magnific Popup
*/
.mfp-bg {
  top: 0;
  left: 0;
  width: 100%;
  height: 100%;
  z-index: 1042;
  overflow: hidden;
  position: fixed;
  background: #0b0b0b;
  opacity: 0.8;
  filter: alpha(opacity=80);
}

.mfp-wrap {
  top: 0;
  left: 0;
  width: 100%;
  height: 100%;
  z-index: 1043;
  position: fixed;
  outline: none !important;
  -webkit-backface-visibility: hidden;
}

.mfp-container {
  text-align: center;
  position: absolute;
  width: 100%;
  height: 100%;
  left: 0;
  top: 0;
  padding: 0 8px;
  -webkit-box-sizing: border-box;
  -moz-box-sizing: border-box;
  box-sizing: border-box;
}

.mfp-container:before {
  content: '';
  display: inline-block;
  height: 100%;
  vertical-align: middle;
}

.mfp-align-top .mfp-container:before {
  display: none;
}

.mfp-content {
  position: relative;
  display: inline-block;
  vertical-align: middle;
  margin: 0 auto;
  text-align: left;
  z-index: 1045;
}

.mfp-inline-holder .mfp-content,
.mfp-ajax-holder .mfp-content {
  width: 100%;
  cursor: auto;
}

.mfp-ajax-cur {
  cursor: progress;
}

.mfp-zoom-out-cur, .mfp-zoom-out-cur .mfp-image-holder {
  cursor: -moz-zoom-out;
  cursor: -webkit-zoom-out;
  cursor: zoom-out;
}

.mfp-zoom {
  cursor: pointer;
  cursor: -webkit-zoom-in;
  cursor: -moz-zoom-in;
  cursor: zoom-in;
}

.mfp-auto-cursor .mfp-content {
  cursor: auto;
}

.mfp-close,
.mfp-arrow,
.mfp-preloader,
.mfp-counter {
  -webkit-user-select: none;
  -moz-user-select: none;
  user-select: none;
}

.mfp-close:hover {
  cursor: pointer;
  color: #ECECEC;
}

.mfp-loading.mfp-figure {
  display: none;
}

.mfp-hide {
  display: none !important;
}

.mfp-preloader {
  color: #CCC;
  position: absolute;
  top: 50%;
  width: auto;
  text-align: center;
  margin-top: -0.8em;
  left: 8px;
  right: 8px;
  z-index: 1044;
}

.mfp-preloader a {
  color: #CCC;
}

.mfp-preloader a:hover {
  color: #FFF;
}

.mfp-s-ready .mfp-preloader {
  display: none;
}

.mfp-s-error .mfp-content {
  display: none;
}

button.mfp-close, button.mfp-arrow {
  overflow: visible;
  cursor: pointer;
  background: transparent;
  border: 0;
  -webkit-appearance: none;
  display: block;
  outline: none;
  padding: 0;
  z-index: 1046;
  -webkit-box-shadow: none;
  box-shadow: none;
}

button::-moz-focus-inner {
  padding: 0;
  border: 0;
}

.mfp-close {
  width: 44px;
  height: 44px;
  line-height: 44px;
  position: absolute;
  right: 0;
  top: 0;
  text-decoration: none;
  text-align: center;
  opacity: 0.65;
  filter: alpha(opacity=65);
  padding: 0 0 18px 10px;
  color: #FFF;
  font-style: normal;
  font-size: 28px;
  font-family: Arial, Baskerville, monospace;
}

.mfp-close:hover, .mfp-close:focus {
  opacity: 1;
  filter: alpha(opacity=100);
}

.mfp-close:active {
  top: 1px;
}

.mfp-close-btn-in .mfp-close {
  color: #333;
}

.mfp-image-holder .mfp-close,
.mfp-iframe-holder .mfp-close {
  color: #FFF;
  right: -6px;
  text-align: right;
  padding-right: 6px;
  width: 100%;
}

.mfp-counter {
  position: absolute;
  top: 0;
  right: 0;
  font-size: 0;
  display: none;
}

.mfp-arrow {
  position: absolute;
  opacity: 0.65;
  filter: alpha(opacity=65);
  margin: 0;
  top: 50%;
  margin-top: -55px;
  padding: 0;
  width: 90px;
  height: 110px;
  -webkit-tap-highlight-color: transparent;
}

.mfp-arrow:active {
  margin-top: -54px;
}

.mfp-arrow:hover, .mfp-arrow:focus {
  opacity: 1;
  filter: alpha(opacity=100);
}

.mfp-arrow:before, .mfp-arrow:after,
.mfp-arrow .mfp-b,
.mfp-arrow .mfp-a {
  content: '';
  display: block;
  width: 0;
  height: 0;
  position: absolute;
  left: 0;
  top: 0;
  margin-top: 35px;
  margin-left: 35px;
  border: medium inset transparent;
}

.mfp-arrow:after,
.mfp-arrow .mfp-a {
  border-top-width: 13px;
  border-bottom-width: 13px;
  top: 8px;
}

.mfp-arrow:before,
.mfp-arrow .mfp-b {
  border-top-width: 21px;
  border-bottom-width: 21px;
  opacity: 0.7;
}

.mfp-arrow-left {
  left: 0;
}

.mfp-arrow-left:after,
.mfp-arrow-left .mfp-a {
  border-right: 17px solid #FFF;
  margin-left: 31px;
}

.mfp-arrow-left:before,
.mfp-arrow-left .mfp-b {
  margin-left: 25px;
  border-right: 27px solid #3F3F3F;
}

.mfp-arrow-right {
  right: 0;
}

.mfp-arrow-right:after,
.mfp-arrow-right .mfp-a {
  border-left: 17px solid #FFF;
  margin-left: 39px;
}

.mfp-arrow-right:before,
.mfp-arrow-right .mfp-b {
  border-left: 27px solid #3F3F3F;
}

.mfp-iframe-holder {
  padding-top: 40px;
  padding-bottom: 40px;
}

.mfp-iframe-holder .mfp-content {
  line-height: 0;
  width: 100%;
  max-width: 900px;
}

.mfp-iframe-holder .mfp-close {
  top: -40px;
}

.mfp-iframe-scaler {
  width: 100%;
  height: 0;
  overflow: hidden;
  padding-top: 56.25%;
}

.mfp-iframe-scaler iframe {
  position: absolute;
  display: block;
  top: 0;
  left: 0;
  width: 100%;
  height: 100%;
  box-shadow: 0 0 8px rgba(0, 0, 0, 0.6);
  background: #000;
}

/* Main image in popup */
img.mfp-img {
  width: auto;
  max-width: 100%;
  height: auto;
  display: block;
  line-height: 0;
  -webkit-box-sizing: border-box;
  -moz-box-sizing: border-box;
  box-sizing: border-box;
  padding: 40px 0 40px;
  margin: 0 auto;
}

/* The shadow behind the image */
.mfp-figure {
  line-height: 0;
}

.mfp-figure:after {
  content: '';
  position: absolute;
  left: 0;
  top: 40px;
  bottom: 40px;
  display: block;
  right: 0;
  width: auto;
  height: auto;
  z-index: -1;
  box-shadow: 0 0 8px rgba(0, 0, 0, 0.6);
  background: #444;
}

.mfp-figure small {
  color: #BDBDBD;
  display: block;
  font-size: 12px;
  line-height: 14px;
}

.mfp-figure figure {
  margin: 0;
}

.mfp-bottom-bar {
  margin-top: -36px;
  position: absolute;
  top: 100%;
  left: 0;
  width: 100%;
  cursor: auto;
}

.mfp-title {
  text-align: left;
  line-height: 18px;
  color: #F3F3F3;
  word-wrap: break-word;
  padding-right: 36px;
}

.mfp-image-holder .mfp-content {
  max-width: 100%;
}

.mfp-gallery .mfp-image-holder .mfp-figure {
  cursor: pointer;
}

@media screen and (max-width: 800px) and (orientation: landscape), screen and (max-height: 300px) {
  /**
       * Remove all paddings around the image on small screen
       */
  .mfp-img-mobile .mfp-image-holder {
    padding-left: 0;
    padding-right: 0;
  }
  .mfp-img-mobile img.mfp-img {
    padding: 0;
  }
  .mfp-img-mobile .mfp-figure:after {
    top: 0;
    bottom: 0;
  }
  .mfp-img-mobile .mfp-figure small {
    display: inline;
    margin-left: 5px;
  }
  .mfp-img-mobile .mfp-bottom-bar {
    background: rgba(0, 0, 0, 0.6);
    bottom: 0;
    margin: 0;
    top: auto;
    padding: 3px 5px;
    position: fixed;
    -webkit-box-sizing: border-box;
    -moz-box-sizing: border-box;
    box-sizing: border-box;
  }
  .mfp-img-mobile .mfp-bottom-bar:empty {
    padding: 0;
  }
  .mfp-img-mobile .mfp-counter {
    right: 5px;
    top: 3px;
  }
  .mfp-img-mobile .mfp-close {
    top: 0;
    right: 0;
    width: 35px;
    height: 35px;
    line-height: 35px;
    background: rgba(0, 0, 0, 0.6);
    position: fixed;
    text-align: center;
    padding: 0;
  }
}

@media all and (max-width: 900px) {
  .mfp-arrow {
    -webkit-transform: scale(0.75);
    transform: scale(0.75);
  }
  .mfp-arrow-left {
    -webkit-transform-origin: 0;
    transform-origin: 0;
  }
  .mfp-arrow-right {
    -webkit-transform-origin: 100%;
    transform-origin: 100%;
  }
  .mfp-container {
    padding-left: 6px;
    padding-right: 6px;
  }
}

.mfp-ie7 .mfp-img {
  padding: 0;
}

.mfp-ie7 .mfp-bottom-bar {
  width: 600px;
  left: 50%;
  margin-left: -300px;
  margin-top: 5px;
  padding-bottom: 5px;
}

.mfp-ie7 .mfp-container {
  padding: 0;
}

.mfp-ie7 .mfp-content {
  padding-top: 44px;
}

.mfp-ie7 .mfp-close {
  top: 0;
  right: 0;
  padding-top: 0;
}
 .rd-google-map .overlay {display:none;}
@media (min-width:992px)
{
	.rd-navbar-static.rd-navbar-corporate .rd-navbar-inner{padding-top:0px;}
	.rd-navbar-static.rd-navbar-corporate .rd-navbar-middle-panel, .rd-navbar-static.rd-navbar-center .rd-navbar-middle-panel{padding:30px 40px;max-width:1250px;margin:auto;}
	.rd-navbar-static.rd-navbar-dark, .rd-navbar-fullwidth.rd-navbar-dark, .rd-navbar-sidebar.rd-navbar-dark,.rd-navbar-static.rd-navbar-dark::before, .rd-navbar-static.rd-navbar-dark::after, .rd-navbar-fullwidth.rd-navbar-dark::before, .rd-navbar-fullwidth.rd-navbar-dark::after, .rd-navbar-sidebar.rd-navbar-dark::before, .rd-navbar-sidebar.rd-navbar-dark::after{background:none;}
	.rd-navbar-outer-panel.toggle-original-elements {
    background: #217ed3 none repeat scroll 0 0;
    padding: 0 40px;
}
.rd-navbar-static.rd-navbar-corporate .rd-navbar-nav-wrap, .rd-navbar-static.rd-navbar-center .rd-navbar-nav-wrap {
    margin: auto;
    max-width: 1170px;
}
.block-wrap-list .block-wrap .unit-body  a,.block-wrap-list .block-wrap .unit-body  span{color:#1772C6}
.page  .unit-left .icon-venice-blue-filled{background:#1772C6}
.rd-navbar-static .rd-navbar-inner, .rd-navbar-fullwidth .rd-navbar-inner{max-width:none;padding:0px;}
 .rd-google-map .overlay {background:transparent;
position:relative;
top:400px; 
margin-top:-400px;display:block; }
.rd-navbar-static.rd-navbar-corporate .rd-navbar-nav-wrap, .rd-navbar-static.rd-navbar-center .rd-navbar-nav-wrap{padding:0px;border:0px;}
.rd-navbar-static.rd-navbar-corporate .rd-navbar-nav-wrap .rd-navbar-nav > li, .rd-navbar-static.rd-navbar-center .rd-navbar-nav-wrap .rd-navbar-nav > li{padding:0px;margin-left:0px;margin-right:25px;}
.rd-navbar-static .rd-navbar-nav > li > a, .rd-navbar-fullwidth .rd-navbar-nav > li > a{padding:20px 20px 20px 0;display:inline-block;z-index:3;}
.rd-navbar-static .rd-navbar-submenu-toggle::after, .rd-navbar-fullwidth .rd-navbar-submenu-toggle::after{right:20px;z-index:1}
.page .section-40.section-lg-64{}
}
.range.range-sm-center {
    margin-top: 30px;
	padding-bottom:30px;
}
.theme-h3 {
    margin-bottom: 10px;
}
.bottombar p{margin-top:10px}
        #bottombar {
            bottom: 0;
            float: right;
            position: fixed;
            right: 0px;
            z-index: 99999;
			display:none;
        }

        .bb_open {
            background-color:#000000;
            border-radius: 5px 5px 0 0;
            float: right;
            height: 25px;
            width: 300px;
        }

        .bottombar, .bottombarL {
            float: right;
            margin-bottom: 0;
            padding: 0;
        }

        .bb_close a, .bb_closeL a {
            background: url("../images/catefish_02.png") no-repeat scroll 6px 7px #000000;
            border-radius: 3px 3px 3px 3px;
            float: right;
            height: 20px;
            margin: 0 5px 5px;
            width: 22px;
			cursor: pointer;
        }

        .exit-catfish {
            border-right: 1px solid #FFFFFF;
            color: #FFFFFF;
            cursor: pointer;
            display: block;
            float: left;
            font-family: arial;
            font-size: 15px;
            font-weight: bold;
            height: 25px;
            line-height: 25px;
            text-align: center;
            width: 25px;
        }

        .lnk-catfish {
            background: url("../images/catefish_01.png") no-repeat scroll 7px 7px transparent;
            border-left: 1px solid #FFFFFF;
            float: right;
            height: 25px;
            width: 25px;
			cursor: pointer;
        }

        .bb_open marquee {
            float: left;
            height: 25px;
            line-height: 25px;
            text-align: center;
            width: 245px;
        }

        .marquee-lnk {
            color: #FFFFFF !important;
            display: inline;
            float: left;
            font-weight: bold;
            height: 25px;
            line-height: 25px;
            padding-left: 10px;
            text-decoration: none;
        }
		.theme-item {
    color: #ffffff !important;
    display: block;
    line-height: 18px;
    margin-bottom: 12px;
    overflow: hidden;
	padding:0px 12px;	
	font-size:13px;
	font-weight:bold;
}
.theme-item img {
    float: left;
    margin-right: 10px;
	height:50px;
	width:auto;
	border:1px solid #ffffff;
}
.bottombar {
    background: rgba(0, 0, 0, 0.7) none repeat scroll 0 0;
    line-height: 18px;
	padding-bottom:10px !important;
}
.theme-h3{ background: #000000 none repeat scroll 0 0;
    height: 35px;
    line-height: 30px;}
.theme-h3 img{}
#bottombar{width:280px;}
.bottombar p a {
    background: #f55e25 none repeat scroll 0 0;
    border-radius: 10px;
    display: inline-block;
    font-family: helvetica;
    font-size: 14px;
    font-weight: bold;
    line-height: normal;
    padding: 8px 17px;
    text-decoration: none !important;
}
