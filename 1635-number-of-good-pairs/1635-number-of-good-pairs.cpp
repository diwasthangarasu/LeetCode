class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int> mp;
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(mp.contains(nums[i])){
                mp[nums[i]]+=1;
                c+=mp[nums[i]];
            }
            else
            mp[nums[i]]=0;
        }
        return c;
    }
};