class Solution {
public:
    int maxArea(vector<int>& height) {
        
 int max_area=0,start =0,end = height.size()-1;

 while(start<end){

    int min_h =min(height[start],height[end]);
    
    int width = end-start;

    int water_store= width*min_h;

    max_area= max(max_area ,water_store);

    if(height[start]<height[end])start++;
    else end--;

 }
 
   return max_area;
    }
};