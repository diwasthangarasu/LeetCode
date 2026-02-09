class Solution {
    public void gameOfLife(int[][] board) {
        int m = board.length;
        int n = board[0].length;
        int[][] copy = new int[m+2][n+2];
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                copy[i+1][j+1] = board[i][j];
            }
        }
        
        int count = 0;
        for(int i=0;i<m+2;i++){
            for(int j=0;j<n+2;j++){
                if((i>0 && j>0) && (i<m+1 && j<n+1) ){
                    count = copy[i-1][j]+copy[i+1][j]+copy[i][j-1]+copy[i][j+1]+copy[i-1][j-1]+ copy[i+1][j+1]+copy[i+1][j-1]+ copy[i-1][j+1];

                    if(copy[i][j]==1 && count<2) board[i-1][j-1] = 0;
                    else if(copy[i][j]==1 && count>2 && count<=3) board[i-1][j-1] = 1;
                    else if(copy[i][j]==1 && count>3) board[i-1][j-1] = 0;
                    else if(copy[i][j]==0 && count==3 ) board[i-1][j-1] = 1;
                    else board[i-1][j-1] = copy[i][j];
                    count =0;
                }
            }
        }

    }
    
}