class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int n=nums.size();
	map<int,int>index;
	for(int i=0;i<n;i++) index[nums[i]]=i;
	vector<int>ans;
// red black tree
	for(int i=0;i<n;i++){
		int res=target-nums[i];
		if (index[res] && index[res]!=i){
			ans={i,index[res]};
			break;
		}
	}
	return ans;
    }
};