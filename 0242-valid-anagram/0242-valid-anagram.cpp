class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;

        unordered_map<char ,int >k;

        for(int i=0;i<s.size();i++){
            k[s[i]]++;
            k[t[i]]--;
        }
        for(auto ch :  k){

            if(ch.second !=0)return false;

        }
        return true;
    }
};