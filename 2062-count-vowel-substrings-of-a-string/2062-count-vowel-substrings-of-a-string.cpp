class Solution {
public:
    int countVowelSubstrings(string str) {
        str=str+'z';
        map<char,int>m;
        vector<string>cand;
        int r=0;
        string tmp="";
        for(r=0;r<str.size();r++){
            m[str[r]]++;
            tmp+=str[r];
            for(char c='a';c<='z';c++){
                if (c!='a' && c!='e' && c!='u' && c!='i' && c!='o' && m[c]){
                    if (m['a'] && m['e'] && m['u'] && m['i'] && m['o']) {
                        tmp.erase(tmp.end()-1);
                        cand.push_back(tmp);
                    }
                    // cout<<tmp<<endl;
                    m.clear();
                    tmp="";
                    break;
                }
            }
        }
        
	long long ans=0;
        for(auto u:cand){
            // string u
            int l=0,r=0;
           // cout<<u<<endl;
            map<char,int>cnt;
            for(r=0;r<u.size();r++){
                cnt[u[r]]++;
                while(cnt['a'] && cnt['e'] && cnt['i'] && cnt['o']  && cnt['u'] ){
                    // cout<<l<<" "<<r<<endl;
                    ans+=(u.size()-r);
                    cnt[u[l]]--;
                    l++;
                }
            }
        }
	return ans;
    }
};