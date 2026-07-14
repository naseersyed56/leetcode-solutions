class Solution {
public:
    char repeatedCharacter(string s) {

        
       unordered_map<char ,int> r{};

      for(int i=0 ;i<s.size();i++){

        if(r.find(s[i]) !=r.end()){
             
             return s[i];
            
        }
        r[s[i]]++;
      }
        return ' ';
    }
};