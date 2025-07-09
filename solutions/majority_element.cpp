class Solution {
public:
    int majorityElement(vector<int>& nums) { // count > (n/2)
      
        sort(nums.begin(), nums.end());
        return nums[nums.size()/2];
        // as the element appears more than n/2 it will take the middle point
                                    
    }
};
