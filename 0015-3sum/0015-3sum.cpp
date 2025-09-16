class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> s;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-2;i++){
            int l=i+1;
            int r=n-1;
            
            while(l<r){
                int sum=nums[i]+nums[l]+nums[r];
                if(sum<0){
                    l++;
                }
                else if(sum>0) r--;
                else{
                    s.insert({nums[l],nums[r],nums[i]});
                    l++;
                    r--;
                }
            }
        }
        vector<vector<int>> result(s.begin(),s.end());
        return result;
    }
};