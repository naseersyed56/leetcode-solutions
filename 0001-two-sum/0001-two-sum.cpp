class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

     unordered_map<int,int>k;

     for(int i =0 ; i<nums.size();i++){

      int z= target -nums[i];
      if(k.find(z) != k.end()){
        return{k[z],i};
      }
           k[nums[i]] =i;
        }
     
     return {};
    }
};