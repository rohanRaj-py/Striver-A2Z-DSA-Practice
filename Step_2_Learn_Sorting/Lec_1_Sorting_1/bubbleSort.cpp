// Given an array, arr[]. Sort the array using bubble sort algorithm.

// Examples :

// Input: arr[] = [4, 1, 3, 9, 7]
// Output: [1, 3, 4, 7, 9]
// Explanation: After Sorting the array in ascending order of their values is [1, 3, 4, 7, 9].

class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        // code here
        int n = arr.size();
        for(int i=0;i<n-1;i++){
            for(int j=0;j<(n-i-1);j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j], arr[j+1]);
                }
            }
        }
    }
};

// TC:-o(n^2)
// SC:-o(1)
