class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0)return 0;

   
        int maxi=0 ;

        for(int i=0 ;i<s.size();i++){         
        int count =0;

        unordered_set<char> k;
        for(int j=i;j<s.size();j++){
      
        if(k.find(s[j]) ==k.end()){
            k.insert(s[j]);
            count++;
           
        }else{
           
            break;
        }
       }
         maxi=max(maxi ,count);
        }
        return maxi;
    } 
    };
