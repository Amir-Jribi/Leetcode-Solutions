class Solution {
public:
    bool checkPowersOfThree(int n) {
        bool ok=1;
        while(n){
            if (n%3==2) ok=0;
            n/=3;
        }
        return ok;
    }
};