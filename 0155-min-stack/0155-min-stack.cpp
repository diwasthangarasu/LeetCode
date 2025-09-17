class MinStack {
public:
    int mn;
    int topp=-1;
    vector<pair<int,int>> st;
    MinStack() {

    }
    
    void push(int val) {
        if(st.empty()){
            mn=val;
        }
        else mn= min(st[topp].second,val);
        st.push_back({val,mn});
        topp++;
    }
    
    void pop() {
        st.pop_back();
        topp--;
    }
    
    int top() {
        return st.back().first;
    }
    
    int getMin() {
        return st.back().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */