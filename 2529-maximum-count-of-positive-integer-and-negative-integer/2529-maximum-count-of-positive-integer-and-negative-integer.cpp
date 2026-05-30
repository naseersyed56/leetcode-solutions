class Solution {
public:
    int maximumCount(vector<int>& nums) {

        int end =nums.size()-1 ,count =0 , count_negative =0;

        for(int i =0;i<=end ;i++){

            if(nums[i]<0)count_negative++;
        
             else if(nums[i]>0) count++;
        }
        if(count_negative < count)return count;
        return count_negative;
        
        }
          
        
    };
