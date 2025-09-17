class Solution {
public:
    string removeOuterParentheses(string s) {
        string res="";
        int count=0;
        for(char c:s){
            if( c == '(' && count++) res+='(';
            else if(c==')' && --count ) res+=')';
        }
        return res;

    }
};