class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,1);
        int left=1,right=1;
//         reduce memory complexity 
//         instead of using 2 vectors to store the prefix and the suffix
//         we use just our array ans
//         and make 2 loops 
//         one for the left part 
//         and one for the right part
        for(int i=0;i<n;i++){
            ans[i]*=left;
            left*=nums[i];
        }
        for(int i=n-1;i>=0;i--){
            ans[i]*=right;
            right*=nums[i];
        }
        return ans;
        
    }
};