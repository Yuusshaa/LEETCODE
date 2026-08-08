class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<long long> row(rowIndex + 1);
        row[0] = 1;
        for (int k = 1; k <= rowIndex; k++) {
            row[k] = row[k-1] * (rowIndex - k + 1) / k;
        }
        return vector<int>(row.begin(), row.end());
    }
};