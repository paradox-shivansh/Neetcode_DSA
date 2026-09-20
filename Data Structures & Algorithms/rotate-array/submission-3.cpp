class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        for(int i=0;i<k;i++){
            nums.insert(nums.begin(),nums[nums.size()-1]);
            nums.erase(nums.begin()+nums.size()-1);
        }
    }
};