// You are given an integer n. You need to find all the divisors of n. Return all the divisors of n as an array or list in a sorted order.



// A number which completely divides another number is called it's divisor.


// Examples:
// Input: n = 6

// Output = [1, 2, 3, 6]

// Explanation: The divisors of 6 are 1, 2, 3, 6.
class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> ans;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                ans.push_back(i);
            }
        }
      ans.push_back(n)
        return ans;
    }
};

	
