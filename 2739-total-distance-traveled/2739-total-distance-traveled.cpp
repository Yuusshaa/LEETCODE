class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int check = 0;
        int  distance = 0;
        while(mainTank!= 0){
            distance+= 10;
            mainTank--;
            check++;
            if(check==5 && additionalTank!= 0){
                mainTank++;
                additionalTank--;
                check =0;
            }
        }
    return distance;
    }
};