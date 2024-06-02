class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int ans=0;
        map<int,int>m1,m2;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                m1[nums1[i]+nums2[j]]++;
            }
        }
        for(int j=0;j<nums3.size();j++){
                for(int k=0;k<nums4.size();k++){
                    m2[nums3[j]+nums4[k]]++;
                }
            }
        for(auto u:m1){
            ans+=u.second*m2[-u.first];
             
        }
        return ans;
    }
};