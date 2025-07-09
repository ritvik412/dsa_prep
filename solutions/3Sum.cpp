class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        /*Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] 
          such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
          Notice that the solution set must not contain duplicate triplets.*/
      
        vector <vector<int>> solution;
        int n = nums.size();
        sort(nums.begin(),nums.end());

        for(int i = 0 ; i < n ;i++){
            if(i > 0 && nums[i]== nums[i-1]) continue; // to avoid duplicate current element

            int L = i+1 , R = n-1;
            int target = -nums[i]; // nums[L]+ nums[R] = -nums[i]
            while(L < R){
                int sum = nums[L]+ nums[R] ;

                if(sum > target){
                R--;
                }
                else if(sum < target){
                L++;
                }
                else{
                    solution.push_back({nums[L],nums[R],nums[i]});
                    // While the next L is the same value, move L forward:
                    while (L < R && nums[L] == nums[L+1]) ++L;
                         
                    // While the previous R is the same value, move R backward:
                    while (L < R && nums[R] == nums[R-1]) --R;
                        
                    ++L;
                    --R;
                }
            }
        }

        return solution;
          
    }
};
