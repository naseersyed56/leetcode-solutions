class Solution {
public:
    int romanToInt(string s) {
        
        unordered_map<char,int> K;
        int SUM=0;

     K['I'] =1;
     K['V'] =5;
     K['X'] =10;
     K['L'] =50;
     K['C'] =100;
     K['D']=500;
     K['M']=1000;


for(int i=0;i<s.size();i++){

    if(s[i]){

    if(K[s[i]]>=K[s[i+1]])

        SUM += K[s[i]];
        else
        SUM -=K[s[i]];
    
}else{
    SUM+=K[s[i]];
}
}
                   
return SUM;    
    }       
        
};