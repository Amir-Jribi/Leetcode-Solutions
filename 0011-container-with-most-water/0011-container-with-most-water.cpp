class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0,r=n-1,ans=0;
        // for a range [l,r] -> ans will be (r-l+1)*min(a[l],a[r])
        // there is no point in keeping the minimum element (because the value that we calac for the min)
        // is the maximum possible         
        // so to have a better answer we have to keep the pointer on the maximum element
        // and change the pointer on the minimum element         
        
        while(l<r){
            ans=max(ans,(r-l)*min(height[l],height[r]));
            if (height[l]<height[r]) l++;
            else r--;
        }
        return ans;
    }
};