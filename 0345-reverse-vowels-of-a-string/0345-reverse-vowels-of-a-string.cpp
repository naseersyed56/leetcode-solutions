class Solution {
public:
     bool isvowel (char c){
           
            if(  c =='a' || c =='e' || c== 'i' || c=='o' ||c== 'u'||c== 'A' ||c=='E' ||c=='I' ||c=='O' ||c=='U')
                    return true;
                   return false;
     }
      string reverseVowels(string s) {

     int start =0 ,end=s.size()-1;

       while(start<end){

        if(isvowel(s[start]) && isvowel(s[end])){

                  char d =s[start];
                    s[start] =s[end];
                    s[end] =d;
                    start++,end--;
        }else if(!isvowel(s[start]))start++;
        else end--;
    }
    return s;
    }

          
        
        
    };
