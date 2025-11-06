// Implement Quick Sort, a Divide and Conquer algorithm, to sort an array, arr[] in ascending order.
// Given an array arr[], with starting index low and ending index high, complete the functions partition() and quickSort().
// Use the last element as the pivot, so that all elements less than or equal to the pivot come before it, and elements greater than the pivot follow it.

// Note: low and high are inclusive.

// Examples:

// Input: arr[] = [4, 1, 3, 9, 7]
// Output: [1, 3, 4, 7, 9]
// Explanation: After sorting, all elements are arranged in ascending order.
void quickSort(vector<int>& arr, int low, int high) {
  // code here
    if(low >= high){
        return;
    }
    int pivot = high;
    int i = low-1;
    int j = low;
    while(j<pivot){
        if(arr[j] < arr[pivot]){
            i++;
            swap(arr[i], arr[j]);
        }
        j++;
    }
    i++;
    swap(arr[i], arr[pivot]);
    quickSort(arr,low,i-1);
    quickSort(arr,i+1,high);
}
