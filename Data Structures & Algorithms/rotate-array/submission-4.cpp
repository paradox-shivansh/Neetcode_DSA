class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        // Reverse the whole array
        reverse(nums.begin(), nums.end());
        // Reverse first k element of reversed array
        reverse(nums.begin(), nums.begin() + k);
        // Reverse remaining element of reversed array
        reverse(nums.begin() + k, nums.end());
    }
};