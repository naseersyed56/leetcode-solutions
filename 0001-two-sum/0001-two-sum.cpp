class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

     unordered_map<int,int>s;
     vector<int>k;


     for(int i =0;i<nums.size();i++){

        int a = target -nums[i];
        if(s.find(a) != s.end()){
            k.push_back(s[a]);
            k.push_back(i);
            return k;
        }
       s[nums[i]]=i; 
     }

     return k;
    }
};