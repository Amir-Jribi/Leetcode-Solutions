class Solution {
public:
    int climbStairs(int n) {
//         dp[i]->number of ways to climb to the ith stair
//         we can reach (i)th stair by reaching (i-1)th stair or (i-2)th stair
//         so number of ways to climb to the ith stair
//         equal to number of ways to reach (i-1)th stair + (i-2)th stair
        if (n==1){
            return 1;
        }
         if (n==1){
            return 2;
        }
        int dp[n+1];
        dp[1]=1;
        dp[2]=2;
        for(int i=3;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};