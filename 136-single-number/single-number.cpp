class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int check=0;
        for(int num : nums)
        {
            check ^= num;
        }
        return check;
    }
};