class Solution {
public:
    int partition(vector<int>& nums, int start, int end) {
        int pivot = start + (rand() % (end - start + 1));
        int pivotval = nums[pivot];


        int temp = nums[pivot];
        nums[pivot] = nums[end];
        nums[end] = temp;

        int left = start;

        for (int i = start; i < end; i++) {
            if (nums[i] < pivotval) {
                temp = nums[i];
                nums[i] = nums[left];
                nums[left] = temp;
                left++;
            }
        }


        temp = nums[left];
        nums[left] = nums[end];
        nums[end] = temp;

        return left;
    }

    int findKthLargest(vector<int>& nums, int k) {
        int start = 0;
        int end = nums.size() - 1;


        int target = nums.size() - k;

        while (start <= end) {
            int pivotIndex = partition(nums, start, end);

            if (pivotIndex == target) {
                return nums[pivotIndex];
            }
            else if (pivotIndex < target) {
                start = pivotIndex + 1;
            }
            else {
                end = pivotIndex - 1;
            }
        }

        return -1;
    }
};