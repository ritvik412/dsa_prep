#include <bits/stdc++.h>
class Solution {
public:
    bool isPalindrome(string s) {
    /*A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing 
      all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.
      Given a string s, return true if it is a palindrome, or false otherwise.*/
      
    // two pointer approach
    int i= 0;
    int j = s.size() - 1;

    // skipping non-alphanumeric elements
    while(i <= j){
        if(!isalnum(s[i])){
            i++;
            continue;
        }
        if(!isalnum(s[j])){
            j--;
            continue;
        }

        if(tolower(s[i])!=tolower(s[j])) return false;
        else{
            i++;
            j--;
        }
    }

    return true;
} 
};
