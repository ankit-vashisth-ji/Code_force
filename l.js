/**
 * @param {number} num
 * @param {number} t
 * @return {number}
 */
var theMaximumAchievableX = function (num, t) {
    if (t < 1) {
        return num;
    }
    return num + 2 * t;
};

console.log(l(4, 2));
