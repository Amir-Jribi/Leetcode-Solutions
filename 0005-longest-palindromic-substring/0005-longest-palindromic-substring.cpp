class Solution {
public:
    static const int N=1e3+1;
    int n;
    bool dp[N][N];
    bool vis[N][N];
    string str;
    bool isPal(int l,int r){
        if (l>=r) return true;
        if (vis[l][r]) return dp[l][r];
        vis[l][r]=1;
        return dp[l][r]=(str[l]==str[r] & isPal(l+1,r-1));
    }
    string longestPalindrome(string s) {
        str=s;
        memset(vis,0,sizeof vis);
        n=str.size();
        int l=-1,r=-2;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if (isPal(i,j)){
                    if ((j-i+1)>=(r-l+1)){
                        l=i;
                        r=j;
                    }
                }
                
            }
        }
        cout<<l<<" "<<r<<endl;
        return str.substr(l,r-l+1);
        

    }
};