const original = [1, 2, 3, 4];
const multiplied = original.map((item) => item * 20);
console.log(`original array: ${original}`);
console.log(`multiplied array: ${multiplied}`)

let original2 = [1, 2, 3, 4];
let clonearray = [...original2];

clonearray[0] = 100;
clonearray[1] = 200;
clonearray[2] = 300;

console.log(`original array: ${original2}`);
console.log(`cloneed array: ${clonearray}`);
