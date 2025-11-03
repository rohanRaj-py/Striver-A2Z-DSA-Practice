// Given two positive integers a and b, find GCD of a and b.

// Note: Don't use the inbuilt gcd function

// Examples:

// Input: a = 20, b = 28
// Output: 4
// Explanation: GCD of 20 and 28 is 4

class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        if(b==0){
            return a;
        }
        return gcd(b, a%b);
    }
};
