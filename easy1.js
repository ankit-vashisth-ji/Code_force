/**
 * @param {string} s
 * @return {number}
 */
var scoreOfString = function(s) {
    let sum =0;

    for(i =0;i<s.length-1;i++){
        sum += Math.abs(s[i].charCodeAt() - s[i+1].charCodeAt());
       
    }
    return sum;

};

// console.log(scoreOfString("hello"))
// console.log(scoreOfString("zaz")) 
// console.log(scoreOfString("za"))
// console.log(scoreOfString("zajksdnajkdnkjdns"))
// console.log(scoreOfString(new Array(100).fill("a").join("")))


