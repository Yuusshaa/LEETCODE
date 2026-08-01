class Solution {
public:
    bool isValid(string s) {
        vector<char> openBrackets;

        for (char c : s) {
           
            if (c == '(' || c == '[' || c == '{') {
                openBrackets.push_back(c);
            }

            else {
 
                if (openBrackets.empty()) return false;

                char top = openBrackets.back();

                if ((c == ')' && top != '(') ||
                    (c == ']' && top != '[') ||
                    (c == '}' && top != '{')) {
                    return false; 
                }

                openBrackets.pop_back(); 
            }
        }

        return openBrackets.empty();
    }
};