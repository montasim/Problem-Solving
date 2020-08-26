var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var A = parseFloat(lines.shift());
var B = parseFloat(lines.shift());
var C = parseFloat(lines.shift());

var MEDIA = ((2 * A) + (3 * B) + (5 * C)) / 10;

console.log('MEDIA = ' + MEDIA.toFixed(1));