class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // O(1) space complexity , we didnt add any further space , just manipulating the origin array
        int index=-1,n=nums.size();
        for(int i=n-2;i>=0;i-- ){
            if (nums[i]<nums[i+1]){
                index=i;
                break;
            }
        }
        if (index==-1){
            reverse(nums.begin(),nums.end());
            return;
            // return nums;
        }
        
        for(int i=n-1;i>index;i--){
            if (nums[i]>nums[index]){
                swap(nums[i],nums[index]);
                break;
            }
        }
        reverse(nums.begin()+index+1,nums.end());
        // return nums;
    }
};