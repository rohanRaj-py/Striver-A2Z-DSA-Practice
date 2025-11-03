// You are given a 3-digit number n, Find whether it is an Armstrong number or not.

// An Armstrong number of three digits is a number such that the sum of the cubes of its digits is equal to the number itself. 371 is an Armstrong number since 33 + 73 + 13 = 371. 

// Examples:

// Input: n = 153
// Output: true
// Explanation: 153 is an Armstrong number since 13 + 53 + 33 = 153. 
// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int num = n;
        long long ams = 0;
        while(n!=0){
            int r = n%10;
            ams = ams + pow(r,3);
            n = n/10;
        }
        if(ams == num){
            return true;
        }
        else{
            return false;
        }
    }
};
// TC:- o(logn)
// SC:- o(1)
