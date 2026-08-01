class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int siz =nums.size();
            
            vector<int>z(siz);

        for(int i=0 ;i<siz;i++){
           
           z[(i+k)%siz] =nums[i];
            
        }

        nums=z;
        return;
        
    }
};