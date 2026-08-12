class Solution {
public:
    int hammingWeight(int n) {
        if (n == 0) return 0; 
    
        string binary = "";
        while (n > 0) {
        binary += to_string(n % 2); 
        n /= 2;                          
    }
    
  

    int ans;
    for(int x = 0; x < binary.length();x++){
        if(binary[x] == '1'){
            ans++;
        }
    }
    return ans;
    }
};