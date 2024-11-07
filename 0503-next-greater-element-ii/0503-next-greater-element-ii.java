class Solution {
    public int[] nextGreaterElements(int[] nums) {
        ArrayList <Integer> tmp = new ArrayList<>();
        for(int elem:nums){
            tmp.add(elem);
        }
        for(int elem:nums){
            tmp.add(elem);
        }
        Stack<Integer> st = new Stack <>();
        Stack<Integer> idx = new Stack <>();
        int[] res = new int[nums.length];
        Arrays.fill(res,-1);
        int i=0;
        for(int elem:tmp){
            
            while(!st.isEmpty()){
                int up=st.peek();
                int id=idx.peek();
                if (up<elem){
                    st.pop();
                    idx.pop();
                    if (id<nums.length){
                        res[id]=elem;
                    }
                }
                else break;
            }
            st.push(elem);
            idx.push(i);
            i++;
        }
        return res;
    }
}