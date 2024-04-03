class Solution {
public:
    int strStr(string haystack, string needle) {
        int index = 0;
        int haystackIndex = 0;
        int needleIndex = 0;
        while(haystackIndex < haystack.length() && needleIndex < needle.length()){
            if(haystack[haystackIndex] == needle[needleIndex]){
                haystackIndex++;
                needleIndex++;
            }
            else{
                haystackIndex = index + 1;
                needleIndex = 0;
                index = haystackIndex;
            }
        }
        if(needleIndex == needle.length()){
            return index;
        }
        else{
            return -1;
        }
    }
};
