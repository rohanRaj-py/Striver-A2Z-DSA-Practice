// problem:- Given an integer array nums, rotate the array to the right by k steps, where k is non-negative

// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]
// Explanation:
// rotate 1 steps to the right: [7,1,2,3,4,5,6]
// rotate 2 steps to the right: [6,7,1,2,3,4,5]
// rotate 3 steps to the right: [5,6,7,1,2,3,4]

class Solution {
public:
    void rotateByK(vector<int>& nums,int s,int e){
        while(s<=e){
            swap(nums[s], nums[e]);
            s++;
            e--;
        }
    }
    void rotate(vector<int>& nums, int k) {
       
        k = k%n;
        rotateByK(nums,n-k,n-1);
        rotateByK(nums,0,n-k-1);
        rotateByK(nums, 0, n-1);
    }
};

// TC:- o(n)
// SC:- o(1)
