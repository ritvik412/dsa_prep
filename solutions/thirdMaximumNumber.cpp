class Solution {
public:
    int thirdMax(vector<int>& nums) {
        /*Given an integer array nums, return the third distinct maximum number in this array. 
          If the third maximum does not exist, return the maximum number.*/
      
        sort(nums.begin(),nums.end()); // sort the dynamic array

        //third distinct maximum for  array with n elements :
        // n-1 --> 1st, n-2 --> 2nd and n-3 --> 3rd

        int count = 1; // count for distinct elements
        int prevElement = *(nums.end()-1); // last element

        for(int i = int(nums.size())-2 ; i>=0 ; i--){

            if(nums[i] != prevElement){
                count++;
                prevElement = nums[i]; //updating the previous element
            

                if(count == 3){
                    return prevElement;
                }
            }
        }
        return *(nums.end()-1); // (n-1)th element i.e last index

    }
};
