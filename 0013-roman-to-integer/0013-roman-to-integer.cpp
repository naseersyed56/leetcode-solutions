class Solution {
public:
    int romanToInt(string s) {
       int sum =0;

       unordered_map<char,int>L;

       L['M']=1000;
       L['D']=500;
       L['C']=100;
       L['L']=50;
       L['X']=10;
       L['V']=5;
       L['I']=1;

       for(int i=0 ;i<s.size();i++){

        if( i<s.size()-1){
            if(L[s[i]]<L[s[i+1]])sum-=L[s[i]];
        else sum+=L[s[i]];
       }else sum+=L[s[i]];
    }
    return sum;
    }       
        
};