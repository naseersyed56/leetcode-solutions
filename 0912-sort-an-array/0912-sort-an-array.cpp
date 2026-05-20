class Solution {
public:
void merge_all(vector<int>&nums , int start , int mid , int end){

    int low =start ;
    int right =mid+1;
    vector<int>temp;

    while(low<=mid  && right <= end){

        if(nums[low]<=nums[right]){

            temp.push_back(nums[low]);
            low++;
        }else{
            temp.push_back(nums[right]);
            right++;
        }
  }
  while(low<=mid){
    temp.push_back(nums[low++]);
  
  }
  while(right <=end){

    temp.push_back(nums[right++]);
   
  }

  for(int i=start ;i<=end ;i++){

    nums[i]=temp[i-start];
  }
  
}
void mergesort(vector<int>&nums , int start , int end){
    if(start>= end) return ;

    int mid =(start+end)/2;

    mergesort(nums ,start ,mid);
    mergesort(nums ,mid+1,end);

    merge_all(nums ,start , mid ,end);

}
    vector<int> sortArray(vector<int>& nums) {
        
        int start =0;

          
          mergesort( nums , start ,nums.size()-1);

          return nums;
    }
};