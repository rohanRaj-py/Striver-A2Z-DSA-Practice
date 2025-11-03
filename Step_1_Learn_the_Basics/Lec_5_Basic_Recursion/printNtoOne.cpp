// Print numbers from N to 1 (space separated) without the help of loops.

// Example 1:

// Input:
// N = 10
// Output: 10 9 8 7 6 5 4 3 2 1

class Solution {
  public:
    void printNos(int n) {
        // code here
        if(n==0){
            return;
        }
        cout<<n<<" ";
        printNos(n-1);
    }
};
