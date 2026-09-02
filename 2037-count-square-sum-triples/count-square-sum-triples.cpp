class Solution {
public:
    int countTriples(int n) {
        int count = 0;
        for(int x = 1; x <= n;x++){
            for(int y = 1; y <= n;y++){
                for(int z = 1; z <= n;z++){
                    if((pow(x,2) + pow(y,2))==(pow(z,2))){
                        count++;
                    }
                }
            }
        }
    return count;
    }
};