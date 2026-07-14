class Solution {
public:
    int firstUniqChar(string s) {

        unordered_map<int,int> u;
       for(int i=0 ;i<s.size();i++){ 

              u[s[i]]++;
       }
      

        for(int i=0 ;i<s.size();i++){

            if(u[s[i]]==1)return i;
        }
        return -1;
        
    }
};