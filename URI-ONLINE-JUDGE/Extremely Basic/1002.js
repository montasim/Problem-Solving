var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
    
var RADIUS = parseFloat(lines.shift());
var VOLUME = (4.0 / 3) * 3.14159 * (RADIUS * RADIUS * RADIUS);
   
console.log('VOLUME = ' + VOLUME.toFixed(3));