class Solution {
public:
    int reverse(int x) {

        int revNum = 0;
        while(x != 0){
            // eg:7789
            if(revNum > INT_MAX/10 || revNum < INT_MIN/10){
                return 0;
            }
                
            int lastdigit = x % 10; // get remainder 9 in first iteration
    
            x = x/10; // makes it 778 in first iteration
            revNum =(revNum*10)+ lastdigit; // (0*10)+9 = 9
        }

        return revNum;
    }
    //INT_MAX/10 is 2147483647 / 10 = 214748364.

    //If rev > 214,748,364, then rev * 10 is already ≥ 2,147,483,650, which is > INT_MAX.
};
