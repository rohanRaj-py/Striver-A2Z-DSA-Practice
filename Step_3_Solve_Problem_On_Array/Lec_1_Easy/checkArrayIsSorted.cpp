// problem:- Given an array nums, return true if the array was originally sorted in non-decreasing order,
//           then rotated some number of positions (including zero). Otherwise, return false.

// Input: nums = [3,4,5,1,2]
// Output: true
// Explanation: [1,2,3,4,5] is the original sorted array.
// You can rotate the array by x = 2 positions to begin on the element of value 3: [3,4,5,1,2].
class Solution {
public:
    bool check(vector<int>& nums) {
        int cnt = 0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] > nums[i+1]){
                cnt++;
            }
        }
        if(!(nums[0] >= nums[nums.size()-1])){
            cnt++;
        }
        return cnt<=1;
    }
};
// TC:- o(n)
// SC:- o(1)
