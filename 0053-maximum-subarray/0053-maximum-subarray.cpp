class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max=nums[0];
        int current=0;
        for(int i:nums){
            current+=i;
            if(current>max) max=current;
            if(current<0) current=0;
        }
        return max;
    }
};