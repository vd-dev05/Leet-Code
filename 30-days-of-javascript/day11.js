//  2619. Array Prototype Last 



// Input: nums = [null, {}, 3]
// Output: 3
// Explanation: Calling nums.last() should return the last element: 3.

/**
 * @return {null|boolean|number|string|Array|Object}
 */
Array.prototype.last = function() {
    if (!this.length) {
        return -1 
    }
    return this[this.length - 1]
};

/**
 * const arr = [1, 2, 3];
 * arr.last(); // 3
 */