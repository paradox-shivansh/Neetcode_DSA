class Solution {
public:
    int calPoints(vector<string>& operations) {
        
        stack<int> s;
        
        for(auto ch : operations) {
            
            if(ch == "C") {
                s.pop();
            }
            
            else if(ch == "D") {
                s.push(s.top() * 2);
            }
            
            else if(ch == "+") {
                
                int first = s.top();
                s.pop();
                
                int second = s.top();
                
                s.push(first);
                s.push(first + second);
            }
            
            else {
                // Convert string to integer
                s.push(stoi(ch));
            }
        }
        
        int result = 0;
        
        while(!s.empty()) {
            result += s.top();
            s.pop();
        }
        
        return result;
    }
};