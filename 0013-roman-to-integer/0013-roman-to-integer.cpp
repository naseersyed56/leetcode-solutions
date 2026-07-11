class Solution {
public:
    int romanToInt(string s) {
       int sum =0;

       unordered_map<char ,int> k;
       k['M'] =1000;
       k['D'] =500;
       k['C'] =100;
       k['L'] =50;
       k['X'] =10;
       k['V'] =5;
       k['I']=1;

       for(int i=0 ;i<s.size();i++){
        if(i<s.size()-1){
        if(k[s[i]]<k[s[i+1]])sum-=k[s[i]];
        else sum +=k[s[i]];
       }
       else{
        sum+=k[s[i]];
       }
    }
    return sum;
    }       
        
};