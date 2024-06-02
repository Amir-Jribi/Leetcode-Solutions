class Solution {
public:
    int countPairs(vector<int>& deliciousness) {
        sort(deliciousness.begin(),deliciousness.end());
        map<int,int>m;
        int n=deliciousness.size();
        for(int i=0;i<n;i++) m[deliciousness[i]]++;
        int ans=0;
        int mod=1e9+7;
        for(int i=0;i<n;i++){
            for(int bit=0;bit<=21;bit++){
                if ((1<<bit)==(2*deliciousness[i])){
                    // cout<<deliciousness[i]<<endl;
                    ans+=(m[deliciousness[i]]-1);
                    ans%=mod;
                    // cout<<ans<<endl;
                }   
                else if ((1<<bit)>=deliciousness[i]){
                    int k=(1<<bit)-deliciousness[i];
                    
                    if (m[k]) {
                        // cout<<k<<endl;
                        ans+=m[k];
                    }
                    ans%=mod;
                }
            }
            m[deliciousness[i]]--;
        }
        return ans;
        
    }
};