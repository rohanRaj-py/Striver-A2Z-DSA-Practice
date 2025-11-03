// Given an integer x, return true if x is a palindrome, and false otherwise.

 

// Example 1:

// Input: x = 121
// Output: true
// Explanation: 121 reads as 121 from left to right and from right to left
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long rev = 0;
        int num = x;
        while(x!=0){
            int r = x%10;
            rev = rev*10+r;
            x = x/10;
        }
        if(rev == num){
            return true;
        }
        return false;
    }
};
// TC:- o(1)
// SC:- o(1)
