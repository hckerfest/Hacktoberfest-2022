//Unique path II 
//LeetCode 63: https://leetcode.com/problems/unique-paths-ii/description/
class Solution {
    public int uniquePathsWithObstacles(int[][] A) {
        int i,j,up,left,m,n;
        m=A.length;
        n=A[0].length;
        if(A[0][0]==1)
            return 0;
        int[][] dp=new int[m][n];
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++){
                if(i==0 && j==0)
                    dp[i][j]=1;
                else if(A[i][j]==1)
                    dp[i][j]=0;
                else{
                    up=0;
                    left=0;
                    if(i>0)
                    up=dp[i-1][j];
                    if(j>0)
                    left=dp[i][j-1];
                    dp[i][j]=up+left;
                }
            }
        }
        return dp[m-1][n-1];
    }
}