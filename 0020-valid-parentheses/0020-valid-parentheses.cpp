class Solution {
public:
    bool isValid(string s) {

      stack <char>l;

      for(char j:s){

        if( j == '(' || j =='[' || j=='{' )
            l.push(j);
            else if( l.empty())return false;

            else if( l.top() =='(' && j==')'||
                     l.top() =='[' &&  j==']'||
                     l.top() =='{' &&  j=='}')
                     l.pop();
                     else
                     return false;
      }
      return l.empty();


            


        
      

      
    }
};