class Solution {
public:
    bool check(char x){
    if(x == 'a'||x == 'e'||x == 'i'||x == 'o'||x == 'u'||x == 'A'||x == 'E'||x == 'I'||x == 'O'||x == 'U'){
            return true;
        }
        else{
            return false;
        }
    }

    string reverseVowels(string s) {
        vector<char> vowels;
        for(int x = 0;x<s.size();x++){
            if(check(s[x])){
                vowels.push_back(s[x]);
            }
        }
        reverse(vowels.begin(),vowels.end());
        for(int x = 0;x<s.size();x++){
            if(check(s[x])){
                s[x] = vowels[0];
                vowels.erase(vowels.begin());
            }
        }
        return s;
    
    
    
    
    }
};