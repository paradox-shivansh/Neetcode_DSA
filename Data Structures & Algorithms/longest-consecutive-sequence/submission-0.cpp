class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_map<int, int> mp;
        int longest = 0;

        for (auto num : nums) {
            mp[num]++;
        }

        for (auto num : mp) {

            int n = num.first;

            // n is the beginning of a sequence
            if (mp.find(n - 1) == mp.end()) {

                int start = n;
                int cnt = 1;

                while (mp.find(start + 1) != mp.end()) {
                    start++;
                    cnt++;
                }

                longest = max(longest, cnt);
            }
        }

        return longest;
    }
};