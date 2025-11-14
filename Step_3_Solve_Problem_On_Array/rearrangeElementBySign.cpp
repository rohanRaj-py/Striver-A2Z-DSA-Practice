// You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.

// You should return the array of nums such that the array follows the given conditions:

// Every consecutive pair of integers have opposite signs.
// For all integers with the same sign, the order in which they were present in nums is preserved.
// The rearranged array begins with a positive integer.
// Return the modified array after rearranging the elements to satisfy the aforementioned conditions.

 

// Example 1:

// Input: nums = [3,1,-2,-5,2,-4]
// Output: [3,-2,1,-5,2,-4]

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        vector<int> ans(nums.size(),0);
        int pos = 0;
        int neg = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                ans[pos*2] = nums[i];
                pos++;
            }
            else{
                ans[neg*2+1] = nums[i];
                neg++;
            }
        }
        return ans;
    }
};
