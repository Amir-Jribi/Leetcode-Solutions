class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefix(n,0),suffix(n,0);
        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
            prefix[i]=nums[i];
            prefix[i]*=prefix[i-1];
        }
        suffix[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            suffix[i]=nums[i];
            suffix[i]*=suffix[i+1];
        }
        
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            int left=1,right=1;
            if ((i-1)>=0){
                left=prefix[i-1];
            }
            if ((i+1)<n){
                right=suffix[i+1];
            }
            ans[i]=left*right;
        }
        return ans;
    }
};