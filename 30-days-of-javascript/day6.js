//  2723. Add Two Promises 

// Runtime 42ms memory 49.6ms
/**
 * @param {Promise} promise1
 * @param {Promise} promise2
 * @return {Promise}
 */
var addTwoPromises = async function(promise1, promise2) {
    const [r1,r2] = await Promise.all([promise1, promise2])
    return r1 + r2
  
};

/**
 * addTwoPromises(Promise.resolve(2), Promise.resolve(2))
 *   .then(console.log); // 4
 */