class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int l,r;
        double m=-10000,av=0;
        int n=nums.size();
        for(l=r=0;r<n;r++){
            av+=nums[r];
            if(r-l+1==k){
                m=max(m,av/k);
                av-=nums[l++];
            }
        }
        return m;
    }
};