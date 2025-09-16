class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n= nums1.size();
        vector<int> res(n,-1);
        stack<int> s;
        map<int,int> mp;
        for(int i=nums2.size()-1;i>=0;i--){
            while(!s.empty() && s.top()<=nums2[i]){
                s.pop();
            }
            if(!s.empty()){
                mp[nums2[i]]=s.top();
            }
            s.push(nums2[i]);
        }
        for(int i=0;i<n;i++){
            if (mp.find(nums1[i]) != mp.end()) {
                res[i] = mp[nums1[i]];
            }
        }
        return res;
    }
};