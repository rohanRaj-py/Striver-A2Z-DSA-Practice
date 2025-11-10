// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

// Example 1:

// Input: nums = [3,2,3]
// Output: 3

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele = nums[0];
        int cnt = 1;
        for(int i=0;i<nums.size();i++){
            if(ele == nums[i]){
                cnt++;
            }
            else if(ele !=nums[i]){
                cnt--;
            }
            else{
                cnt = 0;
                ele = nums[i];
            }
        }
        return ele;
    }
};
