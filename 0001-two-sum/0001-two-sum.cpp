class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]=i+1;
        }
        vector<int>ans(2);
        for(int i=0;i<nums.size();i++){
            int needed=target-nums[i];
            if (m[needed] && m[needed]!=(i+1) ){
                ans[0]=i;ans[1]=m[needed]-1;
                break;
            }
        }
        return ans;
    }
};