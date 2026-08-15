class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        for(int i=1;i<triangle.size();i++)
          {
           for(int j=0;j<triangle[i].size();j++)
                {
                 if(j==0)
                  {
                     triangle[i][j]=triangle[i][j]+triangle[i-1][j];
                  }
                 else if(j==triangle[i].size()-1)
                  {
                     triangle[i][j]=triangle[i][j]+triangle[i-1][j-1];
                  }
                 else
                  {
                     triangle[i][j]=triangle[i][j]+min(triangle[i-1][j-1],triangle[i-1][j]);
                  }
                }
         }
       int sz=triangle.size()-1;
       int ans = triangle[sz][0];
        for (int j = 1; j < triangle[sz].size(); j++) {
            if (triangle[sz][j] < ans) {
                ans = triangle[sz][j];
            }
}
        return ans;
    }
};