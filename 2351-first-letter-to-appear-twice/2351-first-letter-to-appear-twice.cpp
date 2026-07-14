class Solution {
public:
    char repeatedCharacter(string s) {

        unordered_map<char ,int > k;

        for(int i=0 ;i<s.size();i++){

            if(k.find(s[i]) != k.end()){

                 return s[i];

            }

            k[s[i]]=i;
        }
        return '\0';
        
    }
};