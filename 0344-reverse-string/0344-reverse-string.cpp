class Solution {
public:
    void reverseString(vector<char>& s) {

       


     // vector <char> k;
        for(int i =0 ,l=s.size()-1;   i<l ;i++,l--){
            
            char temp =s[i];
                 s[i] =s[l];
                 s[l] =temp;

           
        }
        
    }
};