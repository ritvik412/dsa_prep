class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    /*Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.*/
    unordered_map <int,int> mpp;

    bool ok = false;

    for(int i = 0 ; i < nums.size(); i++){

        mpp[nums[i]]++;

        if(mpp[nums[i]] >= 2){
            ok = true;
            break;
        }else{
            continue;
        }
        
    } 

    return ok; 
    }
};
