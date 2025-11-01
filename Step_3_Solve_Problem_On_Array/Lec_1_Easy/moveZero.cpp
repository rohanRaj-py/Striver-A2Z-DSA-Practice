// problem:- Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Example 1:

// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]

class Solution {
public:
    void moveZeroes(vector<int>& nums
    ) {
       int i = -1;
       int j = 0;
       while(j<nums.size()){
        if(nums[j]!=0){
            i++;
            swap(nums[i], nums[j]);
        }
        j++;
       }
    }
};

// TC:-o(n)
// SC:-o(1)
