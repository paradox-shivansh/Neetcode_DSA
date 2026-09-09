class MinStack { 
public: 
    stack<int> s; 

    MinStack() { 
        
    } 
    
    void push(int val) { 
        s.push(val); 
    } 
    
    void pop() { 
        s.pop(); 
    } 
    
    int top() { 
        return s.top(); 
    } 
    
    int getMin() { 
        stack<int> t; 
        int minimum = INT_MAX; 

        // traversing the stack to find minimum
        while(!s.empty()) { 
            if(s.top() < minimum) { 
                minimum = s.top(); 
            } 

            t.push(s.top()); 
            s.pop(); 
        } 

        // restoring elements
        while(!t.empty()) { 
            s.push(t.top()); 
            t.pop(); 
        } 

        return minimum; 
    } 
};