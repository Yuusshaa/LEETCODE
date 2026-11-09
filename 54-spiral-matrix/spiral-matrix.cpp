class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        vector<int> ans;

        int left, right, top, bottom;

        left = top = 0;
        right = matrix[0].size() - 1;
        bottom = matrix.size() - 1;

        while (left <= right && top <= bottom)
        {
            // 1. Left to Right
            for (int i = left; i <= right; i++)
                ans.push_back(matrix[top][i]);

            top++;

            // 2. Top to Bottom
            for (int i = top; i <= bottom; i++)
                ans.push_back(matrix[i][right]);

            right--;

            // 3. Right to Left
            if (top <= bottom)
            {
                for (int i = right; i >= left; i--)
                    ans.push_back(matrix[bottom][i]);

                bottom--;
            }

            // 4. Bottom to Top
            if (left <= right)
            {
                for (int i = bottom; i >= top; i--)
                    ans.push_back(matrix[i][left]);

                left++;
            }
        }

        return ans;
    }
};