class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        unordered_map<int ,int> o;

        for(int i=0 ;i<nums.size();i++){

            if(o.find(nums[i]) != o.end()){

                if(i-o[nums[i]] <= k){

                    return true;
                }
            }
            o[nums[i]] =i;
        }
        return false;

       }
};