class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        bool ok=false;
        int i=1,n=nums.size();
        for(int j=1;j<n;j++){
            if (nums[j]!=nums[j-1]){
                nums[i]=nums[j];i++;
                ok=true;
            }
            else {
                if (ok || i==1){
                    nums[i]=nums[j];i++;
                    ok=false;
                }
            }
        }
        return i;
    }
};