class Solution {
public:
    string decodeString(string s) {
        stack<int> nums;
        stack<string> c;
        string current = "";
        int number=0;

        for(auto ch:s){
          
          if(isdigit(ch)){
            number = number*10 + (ch-'0');
          }else if(ch=='['){
            // strat encodeing
            nums.push(number);
            c.push(current);
            number=0;
            current="";
          }else if(ch==']'){
            // end encoding
            int k = nums.top();
            nums.pop();
            string previous = c.top();
            c.pop();
            while (k--) {
                previous += current;
            }
            current = previous;
          }else{
            current += ch;
          }
        }
        
        return current;
    }
};