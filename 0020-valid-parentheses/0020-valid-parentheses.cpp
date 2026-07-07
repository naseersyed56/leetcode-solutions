class Solution {
public:
    bool isValid(string s) {

        stack<char>k;

       for(char z: s){

            if(z =='(' ||z =='['||z=='{')
            k.push(z);
            else if(k.empty())return false;
            else if(z==')' &&k.top()=='(' ||
                     z== ']' && k.top() =='['||
                     z=='}' && k.top() =='{' ){

                        k.pop();
                     }else{
                        return false;
                     }

        }
        return(k.empty());
      
    }
};