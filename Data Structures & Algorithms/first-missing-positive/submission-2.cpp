class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int, int> mp;

        for (int num : nums) {
            if (num > 0) {
                mp[num]++;
            }
        }

        int ans = 1;

        while (mp.find(ans) != mp.end()) {
            ans++;
        }

        return ans;
    }
};