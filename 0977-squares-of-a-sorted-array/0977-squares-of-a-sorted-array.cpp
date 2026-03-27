class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n =nums.size();

        vector<int>ans(n);
       // sort(nums.begin(),nums.end());
        int start =0;
        int end =nums.size()-1;
        int index =nums.size()-1;
        while(start <=end){
            if(abs(nums[start])>abs(nums[end])){
               
                ans[index]=nums[start]*nums[start];
                start++;
            }else{
                ans[index]=nums[end]*nums[end];
               end--;
               
            }
            index--;


        }
        return ans;
    }
};