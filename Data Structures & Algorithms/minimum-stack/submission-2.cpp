class MinStack {
public:
    stack<int>s;
    stack<int>t;
    int min;
    MinStack() {
        
    }
    
    void push(int val) {
        if(t.empty() || val <= t.top()){
            t.push(val);
        }
        s.push(val);
    }
    
    void pop() {
        if(s.top()==t.top()){
            t.pop();
        }
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return t.top();
    }
};
