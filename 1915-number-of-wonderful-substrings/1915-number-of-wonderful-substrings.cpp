class Solution {
public:
    long long wonderfulSubstrings(string word) {
        long long ans=0,mask=0;
        map<int,int>m;
        m[0]=1;
        
        for(int i=0;i<word.size();i++){
            mask^=(1<<(word[i]-'a'));
            ans+=m[mask]; // even
            for(int j=0;j<10;j++){
                // if (((1<<j)^mask)==0){
                //     ans++;
                // }
                ans+=m[(1<<j)^mask]; //odd
            }
            m[mask]++;
        }
        return ans;
        
    }
};