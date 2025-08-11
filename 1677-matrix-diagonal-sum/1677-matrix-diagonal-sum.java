class Solution {
    public int diagonalSum(int[][] mat) {
        int pd=0;
        int sd=0;
        for(int i=0;i<mat.length;i++){
            pd+=mat[i][i];
            int a=i;
            int b=mat[i].length-a-1;
            if(a!=b){
                sd+=mat[a][b];
            }
        }
        return pd+sd;
    }
}