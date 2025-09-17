class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        int a,b;
        for(string c:tokens){
            if(c=="+"){
                a=s.top();
                s.pop();
                b=s.top();
                s.pop();
                s.push(a+b);
            }
            else if(c=="-"){
                a=s.top();
                s.pop();
                b=s.top();
                s.pop();
                s.push(b-a);
            }
            else if(c=="*"){
                a=s.top();
                s.pop();
                b=s.top();
                s.pop();
                s.push(a*b);
            }
            else if(c=="/"){
                a=s.top();
                s.pop();
                b=s.top();
                s.pop();
                s.push(b/a);
            }
            else{
                int i=stoi(c);
                s.push(i);
            }
            
            
        }
        return s.top();
    }
};