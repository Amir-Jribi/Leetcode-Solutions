class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        int n=nums.size();
        map<long long,long long>m;
        for(int i=0;i<n;i++){
            int x=nums[i];
            vector<long long>digits;
            while(x){
                digits.push_back(x%10);
                x/=10;
            }
            while(digits.size() && digits[0]==0){
                digits.erase(digits.begin());
            } 
            reverse(digits.begin(),digits.end());
            long long k=0,pw=1;
            for(int i=0;i<digits.size();i++){
                k+=digits[i]*pw;
                pw*=10;
            }
            // cout<<nums[i]<<" "<<k<<" "<<digits.size()<<endl;
            m[nums[i]-k]++;
        }
        long long ans=0,mod=1e9+7;
        for(auto u:m){
            cout<<u.first<<" "<<u.second<<endl;
            ans+=((u.second)*(u.second-1))/2;
            ans%=mod;
        }
        return ans;
        
    }
};