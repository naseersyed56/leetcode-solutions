class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        vector<int>k;
        unordered_set<int>l;

        for(int i=0 ;i<nums1.size();i++){
            l.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){

            if(l.find(nums2[i])!= l.end()){

                k.push_back(nums2[i]);
                l.erase(nums2[i]);
            }
        }
        return k;

        
    }
};