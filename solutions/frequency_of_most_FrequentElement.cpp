class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        /*You are given an integer array nums and an integer k. In one operation, 
          you can choose an index of nums and increment the element at that index by 1.
          Return the maximum possible frequency of an element after performing at most k operations.*/
      
        sort(nums.begin(),nums.end()); // sorted array for us to work with

        long long windowSum = 0; //using long long as it can exceed the 32-bit integer values
        int left = 0, right = 0;
        int result = 1; // atleast frequency of 1 is possible
     
        while(right < nums.size()){

            windowSum += nums[right]; 

            // window length = right - left + 1
            while((long long)nums[right]*(right - left + 1) > windowSum + k){ 
                 
                windowSum -=nums[left];
                ++left;
            }

            result = max(result, right - left + 1);
            
            ++right;
        }
        
        return result;
    }
};
