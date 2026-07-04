class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
     int idx=0;
        for(int i=0 ;i<strs[0].size();i++){
            bool check=true;
            for(int j=1;j<strs.size();j++){
    
                if(i>=strs[j].size()){
                    check =false;
                    break;
                }
        
                    if(strs[0][i]==strs[j][i]){
                }else{
                    check =false;
                    break;
                }
            }
            if(!check)
                    break;
                
                  idx++;
            }
       
      
             return strs[0].substr(0 ,idx) ;
        }

       
        
    };
