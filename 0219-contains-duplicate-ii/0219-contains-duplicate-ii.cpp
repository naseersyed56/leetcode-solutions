class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

       
        unordered_map<int,int>q;

        for(int i=0;i<nums.size();i++){
            if(q.find(nums[i]) != q.end()){

                if(i-q[nums[i]] <=k)return true;
            }
            q[nums[i]]=i;

        }
        return false;

       }
};