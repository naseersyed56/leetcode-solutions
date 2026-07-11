class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxi=0;
        for(int i=0 ;i<s.size();i++){
              int  count=0;
             unordered_set<char> w;
            for(int j=i;j<s.size();j++){

                if(w.find(s[j]) ==w.end()){
                   w.insert(s[j]);
                    count++;
                }else{
                    break;
                }
            }
             maxi =max(count , maxi );

        }
        return maxi;
    }
    }; 
    
