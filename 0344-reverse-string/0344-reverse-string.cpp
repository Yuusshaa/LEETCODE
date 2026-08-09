class Solution {
public:
    void reverseString(vector<char>& s) {
        int size = s.size();
        char temp;
        for(int x = 0; x<size/2 ;x++){
            temp = s[x];
            s[x] = s[size-x-1];
            s[size-x-1] = temp;
        }
    }
};