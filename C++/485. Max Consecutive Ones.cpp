//485. Max Consecutive Ones

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int currentCount = 0;
        int maxCount = 0;

        for (int value : nums) {
            if (value == 1) {
                ++currentCount;
            } else {

                maxCount = max(maxCount, currentCount);
                currentCount = 0;
            }
        }
        return max(maxCount, currentCount);
    }
};