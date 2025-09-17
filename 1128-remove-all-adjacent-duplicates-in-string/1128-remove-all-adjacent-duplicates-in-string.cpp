class Solution {
public:
    string removeDuplicates(string str) {
        stack<char> st;
        for(char c : str){
            if(!st.empty() && st.top() == c){
                st.pop();
                continue; 
            }
            st.push(c); 

        }
        string res = "";
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
