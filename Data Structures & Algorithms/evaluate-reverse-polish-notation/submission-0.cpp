class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack<int> st;

        for(int i=0; i<tokens.size(); i++){

            if(tokens[i]=="+"){

                int f = st.top();
                st.pop();

                int s = st.top();
                st.pop();

                st.push(s+f);

            }
            else if(tokens[i]=="*"){

                int f = st.top();
                st.pop();

                int s = st.top();
                st.pop();

                st.push(s*f);

            }
            else if(tokens[i]=="-"){

                int f = st.top();
                st.pop();

                int s = st.top();
                st.pop();

                st.push(s-f);

            }
            else if(tokens[i]=="/"){

                int f = st.top();
                st.pop();

                int s = st.top();
                st.pop();

                st.push(s/f);

            }
            else{

                st.push(stoi(tokens[i]));

            }
        }

        return st.top();
    }
};