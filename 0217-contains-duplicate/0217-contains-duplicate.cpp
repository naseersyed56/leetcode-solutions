class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        

        unordered_map<int ,int>l;
        for(int k : nums){
            l[k]++;
        }
        for(pair<int,int> f : l){
            if(f.second >1)return true;
        }

        return false;
    }
};