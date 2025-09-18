class Solution {
public:
    int characterReplacement(string s, int k) {
        int res=0;
        int maxFreq =0;
        map<char,int> mp;
        for(int l=0 ,r=0;r<s.size();r++){
            mp[s[r]]++;
            maxFreq=max(maxFreq,mp[s[r]]);
            while(r-l+1-maxFreq > k){
                mp[s[l++]]--;
                
            }
            res=max(res,r-l+1);
        }
        return res;
    }
};