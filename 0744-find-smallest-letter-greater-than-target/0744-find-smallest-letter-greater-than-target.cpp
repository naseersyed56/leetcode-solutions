class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {



        for(int l :letters){

            if( l  > (int)target){

             char k=(char)l;

              return k;
            
        }
    }
      return(letters[0]);
    }
    
};