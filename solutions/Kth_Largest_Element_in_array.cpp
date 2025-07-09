class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

        sort(nums.begin(),nums.end()); // sorting the dynamic array
    
        // kth largest element in array of n elements:
        // n-1 --> 1st, n-2 --> 2nd , n-3 --> 3rd , .... n-k --> kth largest element

        return *(nums.end() - k);

    }
};
