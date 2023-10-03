/*
  Question 709. To Lower Case
  Given a string s, return the string after replacing every uppercase letter with the same lowercase letter.
*/

class Solution {
public:
    string toLowerCase(string s) {
        for(int i = 0; i < s.length(); i++){
            if(int(s[i]) >= 65 && int(s[i]) <= 90){
                s[i] = s[i] + 32;
            }
        }
        return s;
    }
};
