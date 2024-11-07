class Solution {
    public int[] nextGreaterElement(int[] nums1, int[] nums2) {
        int N=10000+5;
        int [] ans = new int[N];
        Arrays.fill(ans,-1);
        Stack<Integer> st = new Stack<>();
        for(int elem:nums2){
            while(!st.isEmpty()){
                int up=st.peek();
                if (up<elem){
                    ans[up]=elem;
                    st.pop();
                }
                else {
                    break;
                }
            }
            st.push(elem);
        }
        int[] res = new int[nums1.length];
        int i=0;
        for(int elem:nums1){
            res[i]=ans[elem];
            i++;
        }
        return res;
        
    }
}