class Solution {
public:
    int lcs(vector<vector<int>> &memo, string &s, string &t, int i, int j) {
        if (i < 0 || j < 0) return 0;
        if (memo[i][j] != -1) return memo[i][j];
        
        if (s[i] == t[j]) 
            return memo[i][j] = 1 + lcs(memo, s, t, i - 1, j - 1);
        
        return memo[i][j] = max(lcs(memo, s, t, i, j - 1),
                                lcs(memo, s, t, i - 1, j));
    }

    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size();
        int n = text2.size();
        vector<vector<int>> memo(m, vector<int>(n, -1));
        return lcs(memo, text1, text2, m - 1, n - 1);
    }
};
