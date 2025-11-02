// You are given two arrays a[] and b[], return the Union of both the arrays in any order.
// The Union of two arrays is a collection of all distinct elements present in either of the arrays. If an element appears more than once in one or both arrays, it should be included only once in the result.
// Note: Elements of a[] and b[] are not necessarily distinct.
// Note that, You can return the Union in any order but the driver code will print the result in sorted order only.

// Examples:

// Input: a[] = [1, 2, 3, 2, 1], b[] = [3, 2, 2, 3, 3, 2]
// Output: [1, 2, 3]
// Explanation: Union set of both the arrays will be 1, 2 and 3.
class Solution {
  public:
    void insertAns(vector<int>& ans, int ele){
        if(ans.empty() || ans.back()!=ele){
            ans.push_back(ele);
        }
    }

    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        vector<int> ans;
        int n = a.size(), m = b.size();
        int i = 0, j = 0;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        while(i < n && j < m){
            if(a[i] < b[j]){
                insertAns(ans, a[i]);
                i++;
            }
            else if(a[i] > b[j]){
                insertAns(ans, b[j]);
                j++;
            }
            else{
                insertAns(ans, a[i]);
                i++;
                j++;
            }
        }
        
        while(i < n){
            insertAns(ans, a[i]);
            i++;
        }
        
        while(j < m){
            insertAns(ans, b[j]);
            j++;
        }
        
        return ans;
    }
};
// TC :- o(nlogn) + o(mlogm) = o(nlogn + mlogm)
// SC:- o(n+m);
