class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

    unordered_set<int> u;
     vector<int>p;
     int maxi =INT_MIN;
     int mini =INT_MAX;
       
        for(int x :nums){
          u.insert(x);
          maxi = max( maxi ,x);
          mini = min(mini , x);

        }

        for(int i=mini ;i<maxi;i++){
            if(u.find(i) ==u.end() )
            p.push_back(i);
        }
     
      return p;
       


        
    }
};