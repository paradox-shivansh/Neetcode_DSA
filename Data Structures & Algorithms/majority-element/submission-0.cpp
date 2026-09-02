class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int,int> mp;

        for(auto n:nums){
            mp[n]++;
        }

        int ans;
        for(auto pair:mp){
            if(pair.second > nums.size()/2){
                ans = pair.first;
                break;
            }
        }

        return ans;
    }
};