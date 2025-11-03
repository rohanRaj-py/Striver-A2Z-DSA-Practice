// Given an positive integer n, print numbers from 1 to n without using loops.

// Implement the function printTillN() to print the numbers from 1 to n as space-separated integers.

// Examples

// Input: n = 5
// Output: 1 2 3 4 5
// Explanation: We have to print numbers from 1 to 5
class Solution {
  public:
    void printTillN(int n) {
        // code here
        if(n==0){
            return;
        }
        printTillN(n-1);
        cout<<n<<" ";
    }
};
