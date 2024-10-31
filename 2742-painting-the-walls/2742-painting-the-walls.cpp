class Solution {
public:
    static const int N=1000000,M=1005;
    int n;
    long long c[N],t[N];
    long long dp[M][M];

    long long solve(int i,int j){
	if (j<=0){
		return 0;
	}
	if (i==n){
		return 1e17;
	}
	long long& ret=dp[i][j];
	if (ret!=-1) return ret;
	long long ans=1e17;
	ans=min(ans,c[i]+solve(i+1,j-1-t[i]));
	ans=min(ans,solve(i+1,j));
	return ret=ans;
}
    int paintWalls(vector<int>& cost, vector<int>& time) {
        memset(dp,-1,sizeof dp);
        n=cost.size();
        for(int i=0;i<n;i++) c[i]=cost[i];
        for(int i=0;i<n;i++) t[i]=time[i];
	    return solve(0,n);
        
    }
};