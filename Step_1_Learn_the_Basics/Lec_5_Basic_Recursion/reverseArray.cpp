// You are given an array of integers arr[]. You have to reverse the given array.

// Note: Modify the array in place.

// Examples:

// Input: arr = [1, 4, 3, 2, 6, 5]
// Output: [5, 6, 2, 3, 4, 1]
// Explanation: The elements of the array are [1, 4, 3, 2, 6, 5]. After reversing the array, the first element goes to the last position
// , the second element goes to the second last position and so on. Hence, the answer is [5, 6, 2, 3, 4, 1].
class Solution {
  public:
    void solve(vector<int>& arr, int i,int j){
        if(i>j){
            return;
        }
        swap(arr[i], arr[j]);
        i++;
        j--;
        solve(arr, i,j);
    }
    void reverseArray(vector<int> &arr) {
        // code here
        int i = 0;
        int j = arr.size()-1;
        solve(arr,i,j);
    }
};
// TC:- o(n)
// SC:- o(1)
