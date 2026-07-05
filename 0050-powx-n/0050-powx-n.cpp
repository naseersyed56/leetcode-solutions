class Solution {
public:
    double myPow(double x, int n) {
        if(n==0)return 1;
         double base = x; 
           long long power = n;
        double ans =1;

         if(power<0){
            power=-power;
            base=1/x;
         }


    while(power){

        if(power %2 !=0){

            ans =ans*base;
            power--;
        }else{
            base=base*base;

            power =power /2;
            
        }
    }
      return ans;
        
    }
};