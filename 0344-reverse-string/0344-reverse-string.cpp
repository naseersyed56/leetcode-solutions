class Solution {
public:
    void reverseString(vector<char>& s) {

        int l=s.size()-1;


     // vector <char> k;
        for(int i =0 ;   i<l ;i++,l--){
            
            char temp =s[i];
                 s[i] =s[l];
                 s[l] =temp;

           
        }
        
    }
};