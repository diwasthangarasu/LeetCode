class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size(),l,r,res=INT_MAX,sum=0;
        for(int l=r=0;r<n;r++){
            sum+=nums[r];
            while(sum>=target){
                res=min(res , r-l+1);
                sum-=nums[l++];
            }
        }
        if(res==INT_MAX) return 0;
        return res;
    }
};