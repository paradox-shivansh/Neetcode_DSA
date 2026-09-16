#include <cctype>

class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.size() - 1;

        while (start < end) {

            if (!isdigit(s[start]) && !isalpha(s[start])) {
                start++;
            }
            else if (!isdigit(s[end]) && !isalpha(s[end])) {
                end--;
            }
            else if (tolower(s[start]) != tolower(s[end])) {
                return false;
            }
            else {
                start++;
                end--;
            }
        }

        return true;
    }
};