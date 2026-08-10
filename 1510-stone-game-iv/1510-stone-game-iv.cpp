class Solution {
public:
    bool winnerSquareGame(int n) {
        vector<bool> lol(n + 1, false);
        for (int i = 1; i <= n; i++) {
            for (int k = 1; k * k <= i; k++) {
                if (!lol[i - k * k]) {
                    lol[i] = true;
                    break;
                }
            }
        }
        return lol[n];
    }
};