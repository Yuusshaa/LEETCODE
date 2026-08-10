class Solution {
public:
    bool isPalindrome(string s) {
        string palin = "";
        for(int x = 0;x<s.length();x++){
            if ((s[x] >= 'a' && s[x] <= 'z') || (s[x] >= 'A' && s[x] <= 'Z')|| (s[x]>='0' && s[x]<='9')){
                palin+= tolower(s[x]);;
            }
        }
        string test = palin;
        reverse(test.begin(),test.end());

        if(test==palin){
            return true;
        }
        else{
            return false;
        }
    }
};