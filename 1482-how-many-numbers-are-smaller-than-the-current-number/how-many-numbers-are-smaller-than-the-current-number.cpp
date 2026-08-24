class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int len = nums.size();
        vector<int> ans;

        for(int x = 0; x < len;x++){
            int count = 0;
            for(int y = 0; y < len;y++){
                if(y!= x){
                    if(nums[x] > nums[y]){
                        count++;
                    }
                }
            }
            ans.push_back(count);
        
        }
    return ans;
    }
};