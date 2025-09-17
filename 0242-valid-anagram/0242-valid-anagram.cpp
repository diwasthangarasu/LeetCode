class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> mp;
        for (char i:s){
            mp[i]++;
        }
        for(char k: t){
            mp[k]--;
            if(mp[k]==0) mp.erase(k);
        }
        return mp.empty();
    }
};