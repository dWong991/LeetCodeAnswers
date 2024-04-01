Given a string s consisting of words and spaces, return the length of the last word in the string.
class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        bool word = false; 
        for(int i = s.size() - 1; i >= 0; i--){
            if(s[i] != ' '){
                word = true;
            }
            if(s[i] == ' ' && word == true){
                break;
            }
            if(word == true){
                len++;
            }
            
        }
        return len;
    }
};
