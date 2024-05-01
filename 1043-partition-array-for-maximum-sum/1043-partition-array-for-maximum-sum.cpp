class Solution {
public:
    int N=502;
    long long dp[502][502];
    // dp on ranges
    // divide the array into consecutive ranges 
    // dp[l][r] is sufficient in our case
    // knowing the range we can know the max
    // adding the max into memoization is not necessary 
    // claculating the answer for (l,r) is independant for previous range (..,l-1)
    // when we calculate solve(2,2)
    // solve(0,1)
    // ch1=solve(2,2,arr[2])+(2)*mx;
    // we doesnt care if we came from (1,1) or (0,1)
    // dp[l][r] is the largest sum i can obtain in the suffix (l,n-1) where numbers from l to r in same range
    long long solve(vector<int>& arr, int k, int l, int r, int mx) {
        int n = arr.size();
        if (r - l + 1 > k) {
            return -1e15;
        }
        if (r == n) {
            if (l == n) return 0;
            else return -1e15;
        }
        long long &ret = dp[l][r];
        if (ret != -1) return ret;
        long long ch1 = solve(arr, k, l, r + 1, max(mx, ((r+1)<n)*arr[min(r + 1,n-1)]));
        long long ch2 = solve(arr, k, r + 1, r + 1, ((r+1)<n)*arr[min(r + 1,n-1)]) + mx * (r - l + 1);
        ret = max(ch1, ch2);
        return ret;
    }
    
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        memset(dp, -1, sizeof(dp));
        return solve(arr, k, 0, 0, arr[0]);
    }
};
