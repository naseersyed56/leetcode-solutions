class Solution {
public:
    bool isPalindrome(int x) {
      
     long long rev =0;

     if(x<0 || x%10==0 && x !=0)return false;

     for(int g=x ;g!=0;g/=10){
        
        rev =rev*10 +g%10;
     }
     return(rev == x);

    }
};
