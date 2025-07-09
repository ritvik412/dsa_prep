class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    /*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.*/
    int n = int(nums.size());

    for(int i = 0 ; i <= n-1 ; i++){
        for(int j = i+1 ; j <= n-1 ; j++){
            if(nums[i] + nums[j] == target){
                return {i,j};
            }

        }
    }

    return {};
    }
};
