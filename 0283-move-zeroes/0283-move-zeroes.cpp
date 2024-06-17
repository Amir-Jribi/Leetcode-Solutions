class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        for(int r=0,l=0;r<n && l<n;){
            while(l<n && nums[l]!=0){
                l++;
            }
            while(r<n && (r<l || nums[r]==0)) r++;
            
            if (l<n && r<n) {
                swap(nums[l],nums[r]);
                l++;r++;
            }
           
            
        }
    }
};