//problem:Given an array arr[]. The task is to find the largest element and return it.
// Input: arr[] = [1, 8, 7, 56, 90]
// Output: 90

class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int maxi = INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i] > maxi){
                maxi = arr[i];
            }
        }
        return maxi;
    }
};

// Time Complexity:- o(n)
// Space Complexity:- o(1)
