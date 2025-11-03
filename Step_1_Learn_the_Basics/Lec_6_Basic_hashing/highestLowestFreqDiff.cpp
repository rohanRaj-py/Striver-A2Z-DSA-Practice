// Given an array arr[] of positive integers which may contain duplicate elements, return the frequency of each distinct element.

// Examples:

// Input: arr[] = [1, 2, 2, 3, 3, 5]
// Output: [[1, 1], [2, 2], [3, 2], [5, 1]]
// Explaiantion: Here element 1 and 5 occur 1 times, 2 and 3 occur 2 times.

class Solution {
  public:
    vector<vector<int>> countFreq(vector<int>& arr) {
        // code here
        vector<vector<int>> ans;
        map<int,int> mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        for(auto it:mp){
            ans.push_back({it.first, it.second});
        }
        return ans;
    }
};
