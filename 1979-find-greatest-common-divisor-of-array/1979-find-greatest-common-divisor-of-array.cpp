class Solution {
public:
    int findGCD(vector<int>& nums) {

        int max=INT_MIN, min=INT_MAX;

        for(int i=0;i<nums.size();i++){

            if(nums[i]>max)max=nums[i];

            if(nums[i]< min)min =nums[i];

        }
        int gcd=0;
        for(int i=1 ;i<= max ;i++){

            if(max %i ==0 && min %i ==0 )
            gcd =i;
        }
        return gcd;


        
        
    }


};