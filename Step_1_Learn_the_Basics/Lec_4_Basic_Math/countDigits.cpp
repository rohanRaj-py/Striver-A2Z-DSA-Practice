// Given a natural number n. You have to find the number of digits in it and return it.

// Examples:

// Input: n = 12
// Output: 2
// Explanation: 12 has 2 digit

class Solution {
  public:
    int countDigits(int n) {
        // code here
        int cnt = 0;
        while(n!=0){
            cnt++;
            n = n/10;
        }
        return cnt;
    }
};

// TC:- o(1)
// SC:- o(1)
