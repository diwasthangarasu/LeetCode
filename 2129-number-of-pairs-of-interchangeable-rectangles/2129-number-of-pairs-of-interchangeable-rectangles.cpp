class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& r) {
        long long count =0;
        map<double,int> mp;
        for(int i=0;i<r.size();i++){
            double r1=(double)r[i][0]/r[i][1];
            if(mp.contains(r1)){
                mp[r1]+=1;
                count+=mp[r1];
            }          
            else{
                mp[r1]=0;
            }
        }
        return count;
    }
};