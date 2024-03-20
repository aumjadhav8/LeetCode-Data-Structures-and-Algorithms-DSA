//1991. Find the Middle Index in Array

class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sumRight = std::accumulate(nums.begin(), nums.end(), 0);
        int sumLeft = 0; 
        // Iterate over the array elements
        for (int i = 0; i < nums.size(); ++i) {
            sumRight -= nums[i]; // Subtract the current element from the right sum as it's under consideration

            // If left sum is equal to right sum, the current index is the pivot index
            if (sumLeft == sumRight) {
                return i; // Return the current index as the pivot index
            }

            sumLeft += nums[i]; // Add the current element to the left sum before moving to the next element
        }

        return -1; // If no pivot index is found, return -1
    
    }
};