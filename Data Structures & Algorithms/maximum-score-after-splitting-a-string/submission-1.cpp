class Solution {
public:
    int maxScore(string s) {
        int ones=0;
        for(auto ch:s){
            if(ch=='1')ones++;
        }
        int score=0;
        int zero=0;

        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='0'){
                zero++;
            }else{
                ones--;
            }
            score=max(score, zero+ones);
        }
        return score;
    }
};