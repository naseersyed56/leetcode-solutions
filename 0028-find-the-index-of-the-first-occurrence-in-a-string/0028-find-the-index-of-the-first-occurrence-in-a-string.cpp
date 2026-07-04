class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()>haystack.size())return-1;

        for(int i=0 ;i<=haystack.size()-needle.size();i++){
            
          int count=0;
            

            for(int j=0 ;j<=needle.size()-1;j++){

                if(haystack[i+j]==needle[j]){
                    count++;
                 if(  count==needle.size())
                    return i;
                 }else{
                    break;
                 }
             }
            }
        
     return -1;

        
    }
};