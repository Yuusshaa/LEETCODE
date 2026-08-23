class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if (s.size() != goal.size()) {
            return false;
        }

        int n = s.size();

        if (s == goal) {
            vector<int> count(26, 0);
            for (char c : s) {
                count[c - 'a']++;
                if (count[c - 'a'] > 1) {
                    return true; 
                }
            }
            return false; 
        }

        vector<int> mismatches;
        for (int i = 0; i < n; i++) {
            if (s[i] != goal[i]) {
                mismatches.push_back(i);
            }
        }

        if (mismatches.size() != 2) {
            return false;
        }

        int i = mismatches[0];
        int j = mismatches[1];
        return (s[i] == goal[j] && s[j] == goal[i]);
    }
};