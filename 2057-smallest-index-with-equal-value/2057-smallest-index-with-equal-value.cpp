class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int len = nums.size();
        int ans = -1;
        for(int x = 0; x< len;x++){
            if(x % 10 == nums[x]){
                ans = x; 
                break;
            }
        }
    return ans;
    }
};