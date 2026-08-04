class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector <int> ans;
        for(int x = 1;x<nums.size();x++){
            if(nums[x] - nums[x-1] > 1){
                for(int y = 1;y < nums[x] - nums[x-1];y++){
                    ans.push_back(nums[x-1] + y);
                }
            }
        }
        return ans;
    }
};