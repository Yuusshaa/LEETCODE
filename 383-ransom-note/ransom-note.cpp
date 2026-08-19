class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int len1 = ransomNote.length();
        int len2 = magazine.length();

        if(len1 > len2){return false;}
        
        for(int x = 0; x< len1;x++){
            bool contains = false;
            for(int y = 0; y< len2;y++){
                if(ransomNote[x] == magazine[y]){
                    contains = true;
                    magazine[y] = ' ';
                    break;
                }
                
            }
                if(contains == false){
                    return false;
                }
        }



    return true;
    }
};