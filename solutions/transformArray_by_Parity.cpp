class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
    /*You are given an integer array nums. Transform nums by performing the following operations in the exact order specified:
      Replace each even number with 0.
      Replace each odd numbers with 1.
      Sort the modified array in non-decreasing order.
      Return the resulting array after performing these operations.*/
      
    for(int i = 0; i < nums.size(); i++){
        if(nums[i]%2 == 0){
            nums[i] = 0;
        }else if(nums[i]%2!=0){
            nums[i] = 1;
        }



    }
    sort(nums.begin(),nums.end());

    return nums;
    }
};
