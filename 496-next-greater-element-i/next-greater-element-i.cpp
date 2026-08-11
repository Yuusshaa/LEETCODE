class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int len = nums2.size();
        int len1 = nums1.size();
        vector<int> ans;

        for(int x = 0; x < len1; x++){
            int temp = nums1[x];
            int matchIndex = -1;

            for(int y = 0; y < len; y++){
                if(nums2[y] == temp){
                    matchIndex = y;
                    break;
                }
            }

        
            int result = -1;
            for(int y = matchIndex + 1; y < len; y++){
                if(nums2[y] > temp){
                    result = nums2[y];
                    break;
                }
            }

            ans.push_back(result);
        }

        return ans;
    }
};