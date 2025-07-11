class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        /*Given an integer array nums sorted in non-decreasing order, remove some duplicates in-place such that each unique element appears at most twice. 
          The relative order of the elements should be kept the same.

        Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. 
        More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. 
        It does not matter what you leave beyond the first k elements.

        Return k after placing the final result in the first k slots of nums.

        Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.*/

        if(nums.empty()) return 0;

        int k = 1; // starting with index 0 
        unordered_map <int,int> mpp;

        mpp[nums[0]]++;
        for(int i = 1 ; i < nums.size(); i++){

            mpp[nums[i]]++;

            if(nums[i] != nums[i-1] || mpp[nums[i]] <= 2){
                nums[k] = nums[i];
                k++;
            }

        }

        return k;
    }
};
