class Solution {
public:
    string simplifyPath(string path) {

        stack<string> s;
        string current;

        for (int i = 0; i <= path.size(); i++) {

            // Process when we reach '/' or end of string
            if (i == path.size() || path[i] == '/') {

                if (current == "" || current == ".") {
                    // Do nothing
                }
                else if (current == "..") {
                    // Go to parent directory
                    if (!s.empty()) {
                        s.pop();
                    }
                }
                else {
                    // Normal directory
                    s.push(current);
                }

                current = "";
            }
            else {
                current += path[i];
            }
        }

        // Construct answer
        string result;

        while (!s.empty()) {
            result = "/" + s.top() + result;
            s.pop();
        }

        if (result == "") {
            return "/";
        }

        return result;
    }
};