// 2621. Sleep


// runtime 56ms memory 48.1MB
/**
 * @param {number} millis
 * @return {Promise}
 */
async function sleep(millis) {
    await new Promise(resolve => {
        setTimeout(resolve, millis)
        }
    );
}


/** 
 * let t = Date.now()
 * sleep(100).then(() => console.log(Date.now() - t)) // 100
 */