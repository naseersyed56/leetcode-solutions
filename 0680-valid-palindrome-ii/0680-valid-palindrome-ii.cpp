class Solution {
public:


bool check(string &s , int l, int r){
    while(l<r){

    if(s[l] != s[r])return false;
    l++;r--;
    }
    return true;
}
    bool validPalindrome(string s) {
        int start =0 ,end=s.size()-1,count=0;

        while(start<end){

            if(!isalnum(s[start])){
                start++;
                continue;
            }   
            if(!isalnum(s[end])){
                end--;
                continue;
            }            
            if(tolower(s[start]) !=tolower(s[end]) ){
                
                return check( s,start+1 ,end)||check(s ,start ,end-1);

            }

            else{
                start++,end--;
            }
    }
    return true;
    }
};