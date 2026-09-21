class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> p;
        stack<char> y;

        for (int x = 0; x < s.length(); x++) {
            if (s[x] == '#') {
                if (!p.empty()) p.pop();
            } else {
                p.push(s[x]);
            }
        }

        for (int x = 0; x < t.length(); x++) {
            if (t[x] == '#') {
                if (!y.empty()) y.pop();
            } else {
                y.push(t[x]);
            }
        }

        if (p.size() != y.size()) return false;

        while (!p.empty()) {
            if (p.top() != y.top()) return false;
            p.pop();
            y.pop();
        }
        return true;
    }
};