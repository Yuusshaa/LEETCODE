class Solution {
public:
    int countCommas(int n) {
    int sum=0;
    for(int i=1000;i<=n;i++){
        sum+=1;
    }    
     return sum;
    }
};