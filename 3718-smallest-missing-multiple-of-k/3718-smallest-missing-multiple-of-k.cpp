class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int count = 1;
        int len = nums.size();
        int ans = -1;

        while (true) {
            int temp = count * k;
            bool found = false;

            for (int y = 0; y < len; y++) {
                if (nums[y] == temp) {
                    found = true;
                    break;
                }
            }

            if (!found) {
                ans = temp;
                break;
            }

            count++;
        }

        return ans;
    }
};