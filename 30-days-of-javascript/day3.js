// 2704. To Be Or Not To Be
/**
 * @param {string} val
 * @return {Object}
 */
var expect = function(val) {
    return  {
        toBe :  (test_val) =>  {
            if (val !== test_val) {
                throw new Error("Not Equal");
            }else  {
                return true
            }
        },
        notToBe : (test_val) => {
            if (val === test_val) {
                throw new Error("Equal")
            }else {
                return true
            }
        }
    }
};

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */