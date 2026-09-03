class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
         int smallestOdd;
        bool foundOdd = false;

       
        for (int i = 0; i < nums1.size(); i++) {
            if (nums1[i] % 2 != 0) {
                if (foundOdd == false || nums1[i] < smallestOdd) {
                    smallestOdd = nums1[i];
                    foundOdd = true;
                }
            }
        }

    
        if (foundOdd == false) {
            return true;
        }

     
        for (int i = 0; i < nums1.size(); i++) {
            if (nums1[i] % 2 == 0 && nums1[i] < smallestOdd) {
                return false;
            }
        }

        return true;
    }
};