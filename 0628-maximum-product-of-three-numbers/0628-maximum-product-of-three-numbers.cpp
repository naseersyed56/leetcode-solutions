class Solution {
public:
    int maximumProduct(vector<int>& nums) {

        sort(nums.begin(),nums.end());
     
        int max_p=0,max_s=0 ,n =nums.size()-1,maxi =0;
        

        max_p =nums[0]*nums[1]*nums[nums.size()-1];
        max_s=nums[n]*nums[n-1]*nums[n-2];

        maxi =max( max_p, max_s);
        

        return maxi;
        
    }
};