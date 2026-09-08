class Solution {
public:
    bool isValid(string s) {
        stack<char>c;
        // if((s.size())%2 !=0) return false;
        for(int i=0;i<s.size();i++){

            if(s[i]=='[' || s[i]=='{' || s[i]=='('){
                c.push(s[i]);
            }else{
                if(c.empty()) return false;
                if(s[i]==']' && '['!=c.top()) return false;
                if(s[i]=='}' && '{'!=c.top()) return false;
                if(s[i]==')' && '('!=c.top()) return false;
                c.pop();
            }
        }

        return c.empty();

    }
};
