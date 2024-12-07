class Solution {
public:
    static const int N=1005;
    int dp[N][N];
    string s1,s2;
    int solve(int i,int j){
        if (j>=s2.size() || i>=s1.size()){
            return 0;
        }
        int& ret=dp[i][j];
        if (ret!=-1) return ret;
        int ans=0;
        if (s1[i]==s2[j]){
            ans=max(ans,1+solve(i+1,j+1));
        }
        ans=max(ans,solve(i+1,j));
        ans=max(ans,solve(i,j+1));
        return ret=ans;
    }
    int longestCommonSubsequence(string text1, string text2) {
        s1=text1;
        s2=text2;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                dp[i][j]=-1;
            }
        }
        int res = solve(0,0);
        return res;
        
    }
};