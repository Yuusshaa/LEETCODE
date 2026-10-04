class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int freq[26] = {0};

        for (int i = 0; i < tasks.size(); i++) {
            freq[tasks[i] - 'A']++;
        }

        priority_queue<int> pq;

        for (int i = 0; i < 26; i++) {
            if (freq[i] > 0) {
                pq.push(freq[i]);
            }
        }

        queue<pair<int, int>> q;

        int time = 0;

        while (!pq.empty() || !q.empty()) {
            time++;

            if (!q.empty() && q.front().second == time) {
                pq.push(q.front().first);
                q.pop();
            }

            if (!pq.empty()) {
                int remaining = pq.top();
                pq.pop();

                remaining--;

                if (remaining > 0) {
                    q.push({remaining, time + n + 1});
                }
            }
        }

        return time;
    }
};