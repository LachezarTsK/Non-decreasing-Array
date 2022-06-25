
/**
 * @param {number[]} nums
 * @return {boolean}
 */
var checkPossibility = function (nums) {
    let oneCorrectionMade = false;

    for (let i = 1; i < nums.length; ++i) {
        if (nums[i - 1] > nums[i]) {

            if (oneCorrectionMade) {
                return false;
            }
            oneCorrectionMade = true;

            if (i - 2 < 0 || nums[i - 2] <= nums[i]) {
                nums[i - 1] = nums[i];
            } else {
                nums[i] = nums[i - 1];
            }
        }
    }
    return true;
};
