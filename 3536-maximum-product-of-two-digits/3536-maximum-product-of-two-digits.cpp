class Solution {
public:
    int maxProduct(int n) {
        int maxi=INT_MIN,s_maxi=INT_MIN;

   int product =0;
        while(n){
      int k=n%10;

      if( k> maxi){
        s_maxi = maxi;
        maxi = k;
      }else if( k>s_maxi  ){
        s_maxi = k;
      }
       n/=10;
        }
    
        return  s_maxi*maxi;
        
    }
};