class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int,int> mp;

        for(auto n: nums){
            mp[n]++;
        }

        while(k>0){
            int maximum = 0;
            int maxkey;

            for(auto pair:mp){
                if(pair.second>maximum){
                    maximum = pair.second;
                    maxkey = pair.first;
                }           
            }

            result.push_back(maxkey);
            mp.erase(maxkey);
            k--;
        }

        return result;

    }
};
