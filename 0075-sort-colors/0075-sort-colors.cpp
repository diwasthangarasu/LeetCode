class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int low,high,mid=0;
        for(low=0,high=n-1;mid<=high;){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }
            else if(nums[mid]==2){
                swap(nums[mid],nums[high]);
                high--;
            }
            else mid++;
        }
    }
};