class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int ,int >z;

      
       for(int i=0 ;i<nums.size();i++){

        if(z.find(nums[i]) != z.end()){

         if(i-z[nums[i]]<=k){
            return true;
        }
        }
         z[nums[i]]=i;
        }
               return false;

       }
};