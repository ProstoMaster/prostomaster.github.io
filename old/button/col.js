2345
function getRandomInt(min, max) {
    min = Math.ceil(min);
    max = Math.floor(max);
    return Math.floor(Math.random() * (max - min + 1)) + min;
}

let randomInt1 = getRandomInt(1000, 5000);
let randomInt2 = getRandomInt(1000, 5000);
let randomInt3 = getRandomInt(1000, 5000);

let randomInt4 = getRandomInt(60, 240);



let timerId1 = setInterval(() =>document.getElementById("all").innerHTML =
Math.floor(Math.random() * 50), randomInt1);

let timerId2 = setInterval(() => document.getElementById("complete").innerHTML =
Math.floor(Math.random() * 100), randomInt2);

let timerId3 = setInterval(() =>document.getElementById("result").innerHTML =
getRandomInt(60, 240), randomInt3);

