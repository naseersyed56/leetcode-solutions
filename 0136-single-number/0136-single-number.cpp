class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        unordered_map<int ,int>mp;


        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int k=0;
        for(auto j : mp){
            if(j.second ==1){
                k=j.first;

            }
        }
        return k;

    }
};