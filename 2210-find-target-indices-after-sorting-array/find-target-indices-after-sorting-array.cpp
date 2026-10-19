class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> answer;
        int len = nums.size();
        for(int x = 0; x< len;x++){
            if(nums[x] == target){
                answer.push_back(x);
            }
        }
    
    return answer;
    }
};