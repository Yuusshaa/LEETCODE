class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count = 0;
        for (int x = 0; x < arr1.size(); x++) {
            bool ok = true;
            for (int y = 0; y < arr2.size(); y++) {
                if (abs(arr1[x] - arr2[y]) <= d) {
                    ok = false;
                    break;
                }
            }
            if (ok) count++;
        }
        return count;
    }
};