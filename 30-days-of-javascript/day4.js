//  2664. Counter II

/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
// var createCounter = function(init) {
//     let i = 0
//     return {
//     increment : () => init + ++i,
//     decrement : () => init  + --i,
//     reset : () =>  {
//     i = 0;
//     return init
// }
//     }
  
// };
var createCounter = function(init) {
    let next = init
    return {
        increment : () => ++ next   ,
        decrement : () => --next,
        reset : () => (next = init)
    }
  
};

// 0(1)
// var createCounter = function(init) {
//    let newResult = init;
//     const oldInput = init;
//     const increment = () => {
//         newResult = newResult+1;
//         return newResult;
//     };

//     const decrement = () => {
//         newResult = newResult-1;
//         return newResult;
//     }
    
//     const reset = () => {
//         newResult = oldInput;
//         return newResult;
//     }

//     return {
//         increment,
//         decrement,
//         reset,
//     }
  
// };



/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */