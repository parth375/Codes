class MyStack {
    private:
    queue<int>dq; 
public:
    MyStack() {
       
    }
    
    void push(int x) {
        dq.push(x);
    }
    
    int pop() {
        queue<int>q;
        while(dq.size()!=1){
            q.push(dq.front());
            dq.pop();
        }
        int x=dq.front();
        dq.pop();
        while(q.size()!=0){
            dq.push(q.front());
            q.pop();
        }
        return x;
    }
    
    int top() {
         queue<int>q;
    while(dq.size()!=1){
            q.push(dq.front());
            dq.pop();
        }
        int t=dq.front();
        dq.pop();
        while(q.size()!=0){
            dq.push(q.front());
            q.pop();
        }
        dq.push(t);
        return t;
    }
    
    bool empty() {
        if(dq.size()==0){
            return true;
        }
        return false;
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