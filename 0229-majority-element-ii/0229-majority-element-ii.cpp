class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1=0,count2=0,candidate1,candidate2;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(count1==0 && nums[i]!=candidate2) candidate1=nums[i];
            else if(count2==0 && nums[i]!=candidate1) candidate2=nums[i];
            if(candidate1==nums[i]) count1++;
            else if(candidate2==nums[i]) count2++;
            else {
                count1--;
                count2--;
            }
        }
        count1 = count2 = 0;
        for (int num : nums) {
            if (num == candidate1) count1++;
            else if (num == candidate2) count2++;
        }

        vector<int> result;
        if (count1 > n/3) result.push_back(candidate1);
        if (count2 > n/3) result.push_back(candidate2);

        return result;
    }
};