class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
        int l=0;
        int r=n.size()-1;
        while(l<r){
            int s=n[l]+n[r];
            if(s==target) return{l+1,r+1};
            if(s<target)l++;
            else r--;
        }
        return {-1,-1};
    }
};