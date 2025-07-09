class Solution {
public:
    bool isPalindrome(int x) {
        // Given an integer x, return true if x is a palindrome, and false otherwise.
       
        int duplicate = x;
        long revNum = 0;
        if(x < 0) return false ;

        while(x!=0){
            
            int lastdigit = x%10;
            
            x = x/10;
            revNum = (revNum*10)+lastdigit;

        }

        if(revNum == duplicate){
            return true;
        }else{
            return false;
        }
        
    }
};
