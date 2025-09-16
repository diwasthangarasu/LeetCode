class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i,j, n=nums.size();
        for (i = n - 1; i > 0; i--) {
            if (nums[i] > nums[i - 1]) break;
        }
        i--;
        if(i>=0){
            for(j=n-1;j>i && nums[j]<=nums[i];j--);
            swap(nums[i],nums[j]);
            reverse(nums.begin()+i+1,nums.end());
        }
        else reverse(nums.begin(),nums.end());
    }
};