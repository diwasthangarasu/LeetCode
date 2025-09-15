class Solution {
public:
    void reversearray(vector<int>& nums,int l,int r){
        while(l<r){
            int temp=nums[l];
            nums[l]=nums[r];
            nums[r]=temp;
            l++;
            r--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        reversearray(nums,0,nums.size()-1);
        reversearray(nums,0,k-1);
        reversearray(nums,k,nums.size()-1);
    }
};