class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
        int more=max(word1.size(),word2.size());
        int cnt=min(word1.size(),word2.size());
        for(int i=0;i<more;i++){
            if(word1.size()>word2.size()){
                if(i<cnt){
                    result+=word1[i];
                    result+=word2[i];
                }else{
                    result+=word1[i];
                }         
            }else{
                if(i<cnt){
                    result+=word1[i];
                    result+=word2[i];
                }else{
                    result+=word2[i];
                }
            }
        }
        return result;
    }
};