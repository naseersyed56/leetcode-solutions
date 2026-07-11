class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {

        unordered_map<string ,int>u, v;

        for(auto y : words1){

            u[y]++;
        }
        for(auto z : words2){
            v[z]++;
        }
        int count =0;
        for(auto z1 :u){
            if(z1.second ==1){

            if(v.find(z1.first )!=v.end()){
               if( v[z1.first]==1)
                count++;      
        }
        }
        }
       return count;
        
    }
};
