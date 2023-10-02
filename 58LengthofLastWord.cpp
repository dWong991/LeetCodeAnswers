/*
Question 58.
Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximal 
substring
 consisting of non-space characters only.
*/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        bool wordFound = false;
        for(int i = s.size() - 1; i >= 0; i--){
            if(wordFound == true && s[i] == ' '){
                break;
            }
            if(s[i] != ' '){
                wordFound = true;
                length++;
            }
        }
        return length;
    }
};
