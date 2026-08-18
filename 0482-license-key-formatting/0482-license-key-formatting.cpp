class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        vector<char> temp;

       
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != '-') {
                if (s[i] >= 'a' && s[i] <= 'z') {
                    s[i] = s[i] - 32;
                }

                temp.push_back(s[i]);
            }
        }

        
        reverse(temp.begin(), temp.end());

        string ans = "";

        for (int i = 0; i < temp.size(); i++) {
            ans += temp[i];

            
            if ((i + 1) % k == 0 && i != temp.size() - 1) {
                ans += '-';
            }
        }

        // Reverse the whole answer
        reverse(ans.begin(), ans.end());

        return ans;
    }
};