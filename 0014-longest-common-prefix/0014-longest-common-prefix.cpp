class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        vector<char>s1;
        bool check =true;

        for(int i=0 ;i<strs[0].size();i++){

            for(int j=0 ;j<strs.size();j++){

                if(strs[0][i]!= strs[j][i]){
                    check =false;
                    break;
                }
            }
            if(check)
            s1.push_back(strs[0][i]);
            else {
                break;
            }
        }
        string s2(s1.begin(),s1.end());
         return s2;

    }
       
        
    };
