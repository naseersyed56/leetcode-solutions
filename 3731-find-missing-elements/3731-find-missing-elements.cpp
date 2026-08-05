class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
     
     unordered_set<int >l;
     vector<int>k;
    int maxi=INT_MIN;
   int  mini =INT_MAX;

     for(int y: nums){
        l.insert(y);
        maxi =max(maxi ,y);
        mini =min(mini,y);
     }

     for(int i =mini ;i<maxi;i++){

        if(l.find(i) ==l.end()){

            k.push_back(i);
        }
     }

        return k;
    }
};