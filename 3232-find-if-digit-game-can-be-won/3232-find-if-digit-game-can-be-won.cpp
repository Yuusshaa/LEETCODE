class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int single = 0;
        int doubleint = 0;
        int len = nums.size();
        for(int x = 0;x< len ;x++){
            if(nums[x] >= 10){
                doubleint += nums[x];
            }
            if(nums[x] <10){
                single+= nums[x];
            }
        }
        if(single < doubleint ||single > doubleint ){
            return true;
        }
        else{
            return false;
        }
    }
};