class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
        double res =0;
        int total = 0;
        int size = brackets.size();
        for(int i=0; i<size; i++)
        {
            int x = brackets[i][0] - total;
            if(income ==0) break;
            if(x<income) income -= x;
            else {x = income; income =0;}
            res += ((double)x*(brackets[i][1] / 100.0));
             total = brackets[i][0];
        }
        return res;
    }
};