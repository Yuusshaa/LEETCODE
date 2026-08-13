class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int row = mat.size();
        int column = mat[0].size();
        vector<vector<int>> temp(row, vector<int>(2));
        
        for(int x = 0; x < row; x++){
            int count = 0;
            for(int y = 0; y < column; y++){
                if(mat[x][y] == 1){
                    count++;
                }
            }
            temp[x][0] = count;
            temp[x][1] = x;
        }
        
        sort(temp.begin(), temp.end());
        
        vector<int> ans;
        for(int i = 0; i < k; i++){
            ans.push_back(temp[i][1]);
        }
        
        return ans;
    }
};