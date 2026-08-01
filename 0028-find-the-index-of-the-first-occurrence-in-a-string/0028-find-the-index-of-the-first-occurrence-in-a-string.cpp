class Solution {
public:
    int strStr(string haystack, string needle) {
        int check = needle.length();
        int len = 0;

        for (int x = 0; x < haystack.length(); x++) {
            if (haystack[x] == needle[len]) {
                len++;
            } else {
                x = x - len; 
                len = 0;
            }

            if (len == check) {
                return x - needle.length() + 1;
            }
        }
        return -1;
    }
};