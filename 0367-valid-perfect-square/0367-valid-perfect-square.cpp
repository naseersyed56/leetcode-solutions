class Solution {
public:
    bool isPerfectSquare(int num) {

       // int k=num%10;
        //if(k ==2|| k==3|| k==7 ||k==8 )return false;
        //else{
           int start =0 , end =num;

           while(start<=end){

            long long  mid =start +(end-start)/2;

            long long sqr =mid *mid;

            if(sqr ==num)return true;

           
            else if(sqr> num) end =mid-1;
            else
                start = mid+1;
                                
           }
           return false;
           
        
    }
};