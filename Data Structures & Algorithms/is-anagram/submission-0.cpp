class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length()){
            return false;
        }

        unordered_map<char, int> mp;

        // Count characters in s
        for(char n : s){
            mp[n]++;
        }

        // Remove characters using t
        for(char m : t){

            if(mp.find(m) == mp.end()){
                return false;
            }

            mp[m]--;

            if(mp[m] < 0){
                return false;
            }
        }

        return true;
    }
};