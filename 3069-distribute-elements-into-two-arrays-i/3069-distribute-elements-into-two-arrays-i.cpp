class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;

        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);


        for(int x = 2;x<nums.size();x++){
            if(arr1.back() > arr2.back()){
                arr1.push_back(nums[x]);
            }
            else{
                arr2.push_back(nums[x]);
            }
        }

        arr1.insert(arr1.end(), arr2.begin(), arr2.end());

        return arr1;

    }
};