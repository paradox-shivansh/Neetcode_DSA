class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> res;
        
        unordered_map<int,int> mp;
        for(auto n:nums){
            mp[n]++;
        }

        for(auto pair:mp){
            if(pair.second>(nums.size()/3)){
                res.push_back(pair.first);
            }
        }

        return res;
    }
};