class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

       string sa;

for(int i =0;i<strs[0].size();i++){
    for(int j=0;j<strs.size();j++){

        if(strs[0][i] != strs[j][i]){

            return sa;
        }   
    }
    sa +=strs[0][i];
}

return sa;
    }
};

