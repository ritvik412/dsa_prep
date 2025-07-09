class Solution {
public:
    int missingNumber(vector<int>& nums) {
        /*Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.*/

        // create duplicate with 0 to n, compare it with original
        vector <int> dup(nums.size()+1);
        for(int i = 0; i < nums.size()+1; i++){
                
            dup[i] = i;
        }
                     
        sort(nums.begin(),nums.end());

        for(int i = 0 ; i < nums.size();i++){
            if(dup[i] != nums[i]){
                return dup[i];
            }
        }

        // If all 0..n-1 are present, then the missing one is n
        return dup[nums.size()]; 

    }
};
