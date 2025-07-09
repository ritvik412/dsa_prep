class Solution {
public:
    int lengthOfLongestSubstring(string s) {
   
/* approach: create a sliding window from start to i that contains no duplicates, then       ensure that when a duplicate element is encounter we reset start to the current index and record the string length, return the maximum length finally */

    unordered_map <char,int> lastSeen; // counts character occurences

    int start = 0 , maxLen = 0;  // for the start of a window , to count maxLength of a substring
    
    for(int i = 0 ; i < s.size(); i++){

        char c = s[i];
    
        // checking if c is in the current window
        if(lastSeen.count(c) && lastSeen[c] >= start ){//checks if key exists & value is relevant
            start = lastSeen[c]+1;
        } 

        maxLen = max(maxLen, i - start+ 1); // window size = i-start+1
        
        lastSeen[c] = i; // where we last saw char c


    }
    // mpp.count(c) checks whether the character c exists as a key in the unordered map
    // whereas mpp[c] accesses the value at index c in the map

    return maxLen;
  
    }
};
