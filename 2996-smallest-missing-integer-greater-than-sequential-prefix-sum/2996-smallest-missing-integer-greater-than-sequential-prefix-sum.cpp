class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int len = nums.size();
        int sum = nums[0];
        int x = 0;
        while(x+1 < len && nums[x+1] == nums[x]+1){
            sum += nums[x+1];
            x++;
        }

        bool found = true;
        while(found){
            found = false;
            for(int i = 0; i < len; i++){
                if(nums[i] == sum){
                    sum++;
                    found = true;
                    break;
                }
            }
        }

        return sum;
    }
};