class Solution {
public:
    bool isValid(string s) {

        stack<char>q;

        for(char k: s){

            if( k=='[' || k =='(' || k=='{'){
                q.push(k);
            }
            else if(q.empty())return false;


        else if(  k==']' && q.top()=='[' ||
                  k== '}' && q.top() =='{' ||
                  k== ')' && q.top() =='(')
                  {
                    q.pop();
                  }
                  else{
                    return false;
                  }
                 
        }
        return q.empty();


      
    }
};