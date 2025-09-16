class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int count=0,l,r,n=people.size();
        for(int l=0,r=n-1;l<=r;){
            if(people[l]+people[r]<=limit){
                count++;
                l++;
                r--;
            }
            else{
                count++;
                r--;
            }
        }
        return count;
    }
};