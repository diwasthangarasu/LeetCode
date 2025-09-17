class Solution {
public:
    string removeDuplicates(string str) {
        string res="";
        for(char c : str){
            bool add=true;
            while(!res.empty() && res.back() == c){
                res.pop_back();
                add=false;
            }
            if(add)
            res.push_back(c); 

        }
        return res;
    }
};
