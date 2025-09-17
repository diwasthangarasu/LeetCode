class MyQueue {
public:
    stack<int> st;
    MyQueue() {
        
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        int n=st.size(),a;
        stack<int> st2;
        for(int i=0;i<n;i++){
            if(i==n-1) a=st.top();
            else st2.push(st.top());
            st.pop();
        }
        for(int i=0;i<n-1;i++){
            st.push(st2.top());
            st2.pop();
        }
        return a;
    }
    
    int peek() {
        int n=st.size(),a;
        stack<int> st2;
        for(int i=0;i<n;i++){
            if(i==n-1) a=st.top();
            else{
                st2.push(st.top());
                st.pop();
            }
        }
        for(int i=0;i<n-1;i++){
            st.push(st2.top());
            st2.pop();
        }
        return a;
    }
    
    bool empty() {
        return st.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */