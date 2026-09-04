class Solution {
public:

    string encode(vector<string>& strs) {
    string encoded;

    for(string word : strs) {
        encoded += to_string(word.size()) + "#" + word;
        //hash tells about that everything is the lenghth of the string
        //[length]#[word] this is the format for encoding
        //to_string is used for typecasting the number(intiger) to string
    }

    return encoded;
}

    vector<string> decode(string s) {
        vector<string> decoded_strs;
        int i=0;
        while(i<s.size()){
            int j=i;
            while(s[j] != '#'){
                j++;
            }


            // get length of the string
            int length = stoi(s.substr(i, j - i));
            // get actual word
            string word = s.substr(j+1,length);
            decoded_strs.push_back(word);

            i=j+1+length;
        }

        


        return decoded_strs;
        
    }
};
