var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
    
var CODE1 = parseInt(lines.shift());
var NOPRODUCT1 = parseInt(lines.shift());
var PFOUNIT1 = parseFloat(lines.shift());

var CODE2 = parseInt(lines.shift());
var NOPRODUCT2 = parseInt(lines.shift());
var PFOUNIT2 = parseFloat(lines.shift());

var TPRICE = ((NOPRODUCT1 * PFOUNIT1) + (NOPRODUCT2 * PFOUNIT2));

console.log('VALOR A PAGAR: R$ %0.2f' + TPRICE.toFixed(2));