class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>answer;
        for(int bitmask=0;bitmask<(1<<n);bitmask++){
            vector<int>temp;
            for(int i=0;i<n;i++){
                if ((1<<i)&bitmask) temp.push_back(nums[i]);
            }
            answer.push_back(temp);
        }
	    return answer;    
    }
};