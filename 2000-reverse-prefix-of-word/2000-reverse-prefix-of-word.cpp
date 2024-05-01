class Solution {
public:
    string reversePrefix(string word, char ch) {
        string ans;
        int st=-1;
        for(int i=0;i<word.size();i++){
            if (word[i]==ch){
                st=i;
                break;
            }
        }
        if (st==-1) return word;
        for(int i=st;i>=0;i--) ans+=word[i];
        for(int i=st+1;i<word.size();i++) ans+=word[i];
        return ans;
    }
};