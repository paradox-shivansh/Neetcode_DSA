class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        int n = temperatures.size();
        vector<int> result(n, 0);
        stack<int> s;

        for(int i=0;i<temperatures.size();i++){
            while(!s.empty() && temperatures[s.top()]<temperatures[i]){
                int pop=s.top();
                result[pop]=i-pop;
                s.pop();
            }
            s.push(i);
        }
        return result;
    }
};