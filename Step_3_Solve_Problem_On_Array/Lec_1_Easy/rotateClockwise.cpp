// problem:- Given an array arr[]. Rotate the array to the left (counter-clockwise direction) by d steps, where d is a positive integer.
//           Do the mentioned change in the array in place.
// Input: arr[] = [1, 2, 3, 4, 5], d = 2
// Output: [3, 4, 5, 1, 2]
// Explanation: when rotated by 2 elements, it becomes 3 4 5 1 2
class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotate(vector<int>& arr,int s,int e){
        while(s<e){
            swap(arr[s], arr[e]);
            s++;
            e--;
        }
    }
    void rotateArr(vector<int>& arr, int d) {
        // code 
        int n = arr.size();
        d = d%arr.size();
        rotate(arr, 0, d-1);
        rotate(arr, d,n-1);
        rotate(arr, 0, n-1);
    }
};
// TC:- o(n)
// SC:- o(1)
