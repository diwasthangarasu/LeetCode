class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int m=0;
        for(int i:nums){
            if(i==1) {
                count++;
                if(m<count)
                m=count;
        }
            else{
                count=0;
            }
        }
        return m;

    }
};