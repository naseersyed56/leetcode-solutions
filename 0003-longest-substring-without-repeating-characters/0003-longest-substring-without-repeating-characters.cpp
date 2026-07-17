class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int maxi =0;

      for(int i=0;i<s.size();i++){
        int count =0;

        unordered_set<char> p;
        for(int j=i ;j<s.size();j++){

            if(p.find(s[j]) != p.end())break;
            else{
                p.insert(s[j]);
                count++;
            }
        }
        maxi =max(count ,maxi);
      }
      return maxi;
    }
    }; 
    
