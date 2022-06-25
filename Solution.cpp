
#include <vector>
using namespace std;

class Solution {
    
public:
    bool checkPossibility(vector<int>& nums) {

        bool oneCorrectionMade = false;

        for (int i = 1; i < nums.size(); ++i) {
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
    }
};
