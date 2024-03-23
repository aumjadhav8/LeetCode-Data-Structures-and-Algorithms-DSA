//1389. Create Target Array in the Given Order

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {

        vector<int>target(nums.size());
        int i=0;
        while(i<nums.size())
        {
            target.insert(target.begin()+index[i],nums[i]);
            i++;
        }
    target.resize(nums.size());
        return target;
    }
};