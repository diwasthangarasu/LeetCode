class Solution {
public:
    int rec(vector<int> &arr,int a){
        if(a<=2) return a;
        if(arr[a] != -1 ) return arr[a];
        return arr[a] = rec(arr,a-1)+rec(arr,a-2);
    }
    int climbStairs(int n) {
        vector<int> arr(n+1,-1);
        return rec(arr,n);
    }
};