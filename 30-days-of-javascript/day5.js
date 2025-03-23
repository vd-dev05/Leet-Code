// 2635. Apply Transform Over Each 

// runtime 53ms memory 49MB
/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    for (let i = 0; i < arr.length; ++i) {
         arr[i] = fn(arr[i], i);
     }
     return arr;
 };