class Solution {
public:
    void sortColors(vector<int>& nums) {
        
       int s=nums.size();
        for(int i=0 ; i<s;i++){

            int min_idx =i;

            for(int j=i+1 ;j<s ;j++){

                if(nums[j]<nums[min_idx])
                    min_idx =j;
            }
            int _swap =nums[min_idx];
            nums[min_idx] =nums[i];
            nums[i] =_swap; 
        }
    }
};