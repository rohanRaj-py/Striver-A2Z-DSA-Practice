// Given an integer n. Your task is to calculate the sum of all natural numbers from 1 up to n (inclusive). If n is 0, the sum should be 0.

// Examples:

// Input: n = 3
// Output: 6
// Explanation: The numbers from 1 to 3 are 1, 2, and 3. Their sum is 1 + 2 + 3 = 6.
class Solution {
  public:
    int findSum(int n) {
        // code here
        if(n==1){
            return 1;
        }
        return n + findSum(n-1);
    }
};
