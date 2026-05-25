class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int ,int> mc;

        for(int i=0 ;i<nums.size();i++){
            mc[nums[i]]++;
        }
        int q=0;
        for(auto p :mc){
            if(p.second ==1){
                q=p.first;
            }
        }
        return q;
        
    }
};