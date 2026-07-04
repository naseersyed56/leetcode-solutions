class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int l=s.size()-1,count=0;
        for(int k=l ;k>=0;k--){

            if(s[k] != ' ')
                count++;
            else if( count>0)
            return count;
        }

        return count;
    }
};