class MyQueue {
    private:
    stack<int>s;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        stack<int>st;
        while(s.size()!=1){
            st.push(s.top());
            s.pop();
        }
        int x=s.top();
        s.pop();
    while(st.size()!=0){
        s.push(st.top());
            st.pop();
    }
        return x;
    }
    
    int peek() {
        
        stack<int>st;
        while(s.size()!=1){
            st.push(s.top());
            s.pop();
        }
       int t=s.top();
    while(st.size()!=0){
        s.push(st.top());
            st.pop();
    }
       
        return t; 
    }
    
    bool empty() {
        if(s.size()==0){
            return true;
        }
        return false;
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