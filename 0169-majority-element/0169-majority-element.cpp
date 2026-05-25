class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int ,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        

        int max =0;
        int maxi =0;
        for(auto a :mp){

            if(a.second>max){
                maxi =a.first;
                max =a.second;
            }
            }
            return maxi;


        }
    };
