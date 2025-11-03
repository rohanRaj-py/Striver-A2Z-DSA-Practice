// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

// Example 1:

// Input: x = 123
// Output: 321
class Solution {
public:
    int reverse(int x) {
        long long rev = 0;
        while(x!=0){
            int r = x%10;
            rev = rev*10+r;
            x = x/10;
        }
        return (rev>=INT_MIN && rev<=INT_MAX)? rev:0;
    }
};
// TC:- o(1)
// SC:- o(1)
