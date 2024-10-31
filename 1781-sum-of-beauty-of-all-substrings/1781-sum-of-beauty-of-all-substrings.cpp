class Solution {
public:
    int beautySum(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            vector<int>m(26,0);
            for(int j=i;j<s.size();j++){
                int mx=0,mn=1e6;
                m[s[j]-'a']++;
                for(int c=0;c<=25;c++){
                     mx=max(mx,m[c]);
                     if (m[c])mn=min(mn,m[c]);
                }
               
               // cout<<mx<<" "<<mn<<endl;
                ans+=mx-mn;
            }
            
        }
        return ans;
    }
};