int reverse(int x){

int val = x;
int ans=0, rev =0 ;
while(val!=0){
    rev =val % 10;
    if(ans > INT_MAX/10 || ans <INT_MIN/10){
        return 0;
    }
 ans =ans*10+rev;
 val =val/10;
}
 return ans;
}