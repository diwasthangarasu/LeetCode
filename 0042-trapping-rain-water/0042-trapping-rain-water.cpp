class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> lmax(n);
        int max=height[0];
        for(int i=0;i<n;i++){
            if(height[i]>max) max=height[i];
            lmax[i]=max;
        }
        max = height[n-1];
        vector<int> rmax(n);
        for(int i=n-1;i>=0;i--){
            if(height[i]>max) max=height[i];
            rmax[i]=max;
        }
        int sum=0;
        for(int i=0;i<n;i++){
            int min1=min(lmax[i],rmax[i]);
            sum+=min1-height[i];
        }
        return sum;
    }
};