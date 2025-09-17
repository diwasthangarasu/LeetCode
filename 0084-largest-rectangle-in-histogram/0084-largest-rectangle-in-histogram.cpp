class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int m = 0;
        stack<int> s;
        int l,r;
        for (int i = 0; i < n; i++) {
            while(!s.empty() && heights[i]<heights[s.top()]){
                int a=s.top();
                s.pop();
                if(!s.empty()) {
                    l=s.top();
                }
                else l=-1;
                m=max(m,(i-l-1)*heights[a]);
            }
            s.push(i);
        }
        while(!s.empty()){
                int a=s.top();
                s.pop();
                if(!s.empty()){
                    l=s.top();
                }
                else l=-1;
                m=max(m,(n-l-1)*heights[a]);
        }
        return m;
    }
};
