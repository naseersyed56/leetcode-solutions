class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int start1 =0 ,start2 =0 ,end1 =m-1 ,end2 =n-1;
        vector<int>mergedarr;

        while(start1<=end1 && start2 <=end2 ){

            if(nums1[start1]<=nums2[start2]){
                mergedarr.push_back(nums1[start1]);
                start1++;
            }else{
                 mergedarr.push_back(nums2[start2]);
                 start2++;
            }
        }
        while(start1<=end1){
            mergedarr.push_back(nums1[start1]);
                start1++;

        }
        while(start2<=end2){
            mergedarr.push_back(nums2[start2]);
                start2++;

        }
        for(int i=0 ;i<m+n;i++){
            nums1[i]= mergedarr[i];
        }
        
    }
};