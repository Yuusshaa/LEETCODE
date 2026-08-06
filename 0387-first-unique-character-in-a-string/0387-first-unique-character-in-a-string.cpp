class Solution {
public:
    int firstUniqChar(string s) {
        int len = s.length();
        for (int x = 0; x < len; x++) {
            bool isUnique = true;
            for (int y = 0; y < len; y++) {
                if (y != x && s[y] == s[x]) {
                    isUnique = false;
                    break;
                }
            }
            if (isUnique) return x;
        }
        return -1;
    }
};