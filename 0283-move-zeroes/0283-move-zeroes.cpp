class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int insertPos = 0;
        for (int x = 0; x < nums.size(); x++) {
            if (nums[x] != 0) {
                nums[insertPos] = nums[x];
                insertPos++;
            }
        }
        while (insertPos < nums.size()) {
            nums[insertPos] = 0;
            insertPos++;
        }
    }
};