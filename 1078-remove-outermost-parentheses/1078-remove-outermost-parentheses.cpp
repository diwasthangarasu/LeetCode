class Solution {
public:
    string removeOuterParentheses(string s) {
        string res="";
        int open=0;
        for(char c:s){
            if(c=='('){
                if(open>0){
                    res.push_back(c);
                }
                open++;
            }
            else{
                open--;
                if(open>0) res.push_back(c);
            }


        }
        return res;

    }
};