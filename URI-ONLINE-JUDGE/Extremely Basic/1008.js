var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var NUMBER = parseInt(lines.shift());
var WHOUR = parseInt(lines.shift());
var AMOUNTPH = parseFloat(lines.shift());

var SALARY = WHOUR * AMOUNTPH;

console.log('NUMBER = ' + NUMBER);
console.log('SALARY = U$ ' + SALARY.toFixed(2));