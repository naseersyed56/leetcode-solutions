class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int,int>l;

        vector<int>k;

        for(int a1: nums1){
            l[a1]++;
        }
        for(int i=0;i<nums2.size();i++){

            if(l.find(nums2[i])!=l.end()&& l[nums2[i]]>0) {
                  k.push_back(nums2[i]);
                l[nums2[i]]--;
            }
        }

        
        return k;
    }
};