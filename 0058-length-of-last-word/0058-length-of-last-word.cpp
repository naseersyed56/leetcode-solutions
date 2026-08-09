class Solution {
public:
    int lengthOfLastWord(string s) {
        
     int count =0,leng =s.size()-1;

     for(int k=leng ;k>=0;k--){

      if(s[k] != ' '){
        count++;
      }else if(count>0){
        return count;
      }
     }
     return count;
    }
};