class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map<int ,int>mp;
        vector<int>t;

        for(int i=0;i<arr.size();i++){

            mp[arr[i]]++;
        }

        unordered_set<int>a;    
        for(auto j: mp){

            if(a.find(j.second)!= a.end())

                return false;
                else{
                    a.insert(j.second);
                }
            }
        
        return true;

    } 
};