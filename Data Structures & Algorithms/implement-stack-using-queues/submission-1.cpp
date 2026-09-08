class MyStack {
public:
    queue<int> q1;
    // queue<int> q2;

    MyStack() {
        
    }
    
    void push(int x) {
        // putting elements in the q2
        q1.push(x);
        int n=q1.size()-1;
        while(n--){
            q1.push(q1.front());
            q1.pop();
        }
    }
    
    int pop() {
        int value = q1.front();
        q1.pop();
        return value;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
        
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