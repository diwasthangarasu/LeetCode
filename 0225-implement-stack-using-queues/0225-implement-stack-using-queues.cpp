class MyStack {
public:
    queue<int> qu;
    MyStack() {
        
    }
    
    void push(int x) {
        qu.push(x);
    }
    
    int pop() {
        int s=qu.size(),a;
        for(int i=0;i<qu.size();i++){
            if(i==s-1){
                a= qu.front();
            }
            else{
                qu.push(qu.front());
            }
            qu.pop();
            
        }
        return a;
    }
    
    int top() {
        return qu.back();
    }
    
    bool empty() {
        return qu.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */