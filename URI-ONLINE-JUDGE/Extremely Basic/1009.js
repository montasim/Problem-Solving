var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
    
var NAME = lines.shift();
var FSALARY = parseFloat(lines.shift());
var TSALES = parseFloat(lines.shift());
var TSALARY = ((TSALES * 15) / 100) + FSALARY;

console.log('TOTAL = R$ ' + TSALARY.toFixed(2));