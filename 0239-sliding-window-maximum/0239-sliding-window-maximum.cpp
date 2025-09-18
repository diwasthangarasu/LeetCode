class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> a;  
        vector<int> res;
        int n = nums.size();

        for (int r = 0,l=0; r < n; r++) {
            while (!a.empty() && nums[r] >= nums[a.back()]) {
                a.pop_back();
            }
            a.push_back(r);
            if (a.front() < l) {
                a.pop_front();   
            }
            if (r-l+1==k) {
                res.push_back(nums[a.front()]);
                l++;
            }
        }
        return res;
    }
};
