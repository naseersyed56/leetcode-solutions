class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {


        int start1 =0 ,start2 =0, end1 =nums1.size()-1,end2=nums2.size()-1;
        vector<double>merged;

        while(start1<=end1  && start2 <=end2){

            if(nums1[start1] <=nums2[start2]){
                merged.push_back(nums1[start1]);
                start1++;
            }else{
                merged.push_back(nums2[start2]);
                start2++; 
            }    
        }
        while(start1<=end1){
             merged.push_back(nums1[start1]);
                start1++;
        }while(start2 <=end2){
                merged.push_back(nums2[start2]);
                start2++; 
            }    
        if(merged.size() %2 !=0){
            int j = merged.size()/2;
            return merged[j];
        }else{
            int k = merged.size()/2;
            double l = (merged[k-1]+merged[k]) /2;
            return l;
        }
    }
};