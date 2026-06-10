class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {

        for(int i=0 ;i<heights.size();i++){

           int min_heig =i;
            for(int j=i+1 ;j<heights.size();j++){
                if( heights[j] >heights[min_heig]){
                    min_heig = j;
                }
            }
            string _swap =names[min_heig];
            names[min_heig] =names[i];
            names[i] = _swap;
            
            int _swap_n =heights[min_heig];
            heights[min_heig] =heights[i];
            heights[i] = _swap_n;
        }
        return names;
      
    }
};