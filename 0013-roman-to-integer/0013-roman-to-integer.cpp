class Solution {
public:
    int romanToInt(string s) {
      
      int sum=0;


      unordered_map<char,int> MP;

      MP['I']=1;
      MP['V']=5;
      MP['X']=10;
      MP['L']=50;
      MP['C']=100;
      MP['D']=500;
      MP['M']=1000;


      for(int i=0;i<s.size();i++){
        if(i<s.size()-1){
        if(MP[s[i]]<MP[s[i+1]])
        sum-=MP[s[i]];
        else
        sum+=MP[s[i]];
      }else sum+=MP[s[i]];
      }
      return sum;

    }       
        
};