class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {

        unordered_map<int ,int>k;
        for(int i=0 ;i<nums.size();i++){
            k[nums[i]]++;
        }
        vector<int> num;
        for(auto g: k){
            if(g.second == 1){

                num.push_back(g.first);

            }
        }
        return num;
        
    }
};