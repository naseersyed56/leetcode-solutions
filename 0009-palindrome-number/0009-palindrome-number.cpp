class Solution {
public:
    bool isPalindrome(int x) {
      
     long long rev =0;

      if( x<0 ||(x%10==0 && x!=0 ))return false;

      for(int j =x; j!=0 ;j/=10){
          
          rev =rev * 10+j%10;
      }
       return( x == rev);
         

    }
};
