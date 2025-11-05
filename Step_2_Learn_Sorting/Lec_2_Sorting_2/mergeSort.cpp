class Solution {
public:
    void merge(vector<int>& nums,int s,int mid,int e){
        vector<int> temp;
        int i = s;
        int j = mid+1;
        while(i<=mid && j<=e){
            if(nums[i]<=nums[j]){
                temp.push_back(nums[i]);
                i++;
            }
            else{
                temp.push_back(nums[j]);
                j++;
            }
        }
        while(i<=mid){
            temp.push_back(nums[i]);
            i++;
        }
        while(j<=e){
            temp.push_back(nums[j]);
            j++;
        }
        for(int i=0;i<temp.size();i++){
            nums[i+s] = temp[i];
        }
    }
void mergeSort(vector<int>& nums,int i,int j){
        if(i<j){
            int mid = (i+j)>>1;
            mergeSort(nums,i,mid);
            mergeSort(nums,mid+1,j);
            merge(nums,i,mid,j);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        int i = 0;
        int j = nums.size()-1;
        mergeSort(nums, i ,j);
        return nums;
        
    }
};
