class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

       string sa;
       bool check =true;

     for(int i=0;i<strs[0].size();i++){

        for(int j=0 ;j<strs.size();j++){

            if(strs[0][i] != strs[j][i]){
                check =false;
                break;
            }
        }
        if(check)
        sa.push_back(strs[0][i]);
        else 
             break;
             
     }
 return sa;
    }       
    };
