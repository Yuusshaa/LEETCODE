class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int len = nums.size();
        
        vector<long long> squares(len);
        for (int i = 0; i < len; i++) {
            long long val = nums[i];
            squares[i] = val * val;
        }
        
        sort(squares.begin(), squares.end());
        
        long long sum = 0;
        int half = len / 2;
        
        for (int i = 0; i < half; i++) {
            sum -= squares[i];
        }
        for (int i = half; i < len; i++) {
            sum += squares[i];
        }
        
        return sum;
    }
};