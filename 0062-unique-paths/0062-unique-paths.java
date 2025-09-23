class Solution {
    public int uni(int[][] dp,int a,int b){
        if(a==0 || b==0){
            return dp[a][b]=1;
        }
        if(dp[a][b] != -1){
            return dp[a][b];
        }
        return dp[a][b] = uni(dp,a-1,b)+uni(dp,a,b-1);
    }
    public int uniquePaths(int m, int n) {
        int[][] arr=new int[m][n];
        for(int i=0;i<m;i++){
            Arrays.fill(arr[i],-1);
        }
        return uni(arr,m-1,n-1);
    }
}