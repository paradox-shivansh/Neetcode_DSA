class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;

        if (s.size() != t.size()) return false;

        for(auto n : s){
            mp[n]++;
        }

        for(auto m : t){
            if(mp.find(m)==mp.end()){ 
                // the character is not found in the anagram
                return false;
            }

            mp[m]--;

            if(mp[m] < 0) return false;
        }

        return true;
    }
};
