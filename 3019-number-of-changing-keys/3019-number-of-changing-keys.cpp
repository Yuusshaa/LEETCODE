class Solution {
public:
    int countKeyChanges(string s) {
        int count = 0;
        for(int i = 0; i<s.size()-1; i++)
        {
            int x = s[i] - s[i + 1];
            if(x != 32 && x != -32 && x != 0)
            {
                count ++;
            }
        }
        return count;
    }
};