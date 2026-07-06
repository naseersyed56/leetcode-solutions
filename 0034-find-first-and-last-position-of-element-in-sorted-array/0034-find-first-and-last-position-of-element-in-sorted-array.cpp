class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        if(nums.empty())return{-1 ,-1};
    
        int start =0,end=nums.size()-1,first=-1,second=-1;

       while(start<=end){

            int mid =start+(end-start)/2;

            if(nums[mid]==target){

                first =mid;
                end=mid-1;
            }else if(nums[mid]<target)start =mid+1;
        else {
            end =mid-1;
        }
        }
        start=0,end=nums.size()-1;

           while(start<=end){

            int mid =start+(end-start)/2;

            if(nums[mid]==target){

                second=mid;
                start=mid+1;
            }else if(nums[mid]<target)start=mid+1;

        else {
            end =mid-1;
        }
        }
        return {first ,second};
    }
};