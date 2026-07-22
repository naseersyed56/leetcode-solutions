class Solution {
public:
    int maxArea(vector<int>& height) {
        
 int max_area =0;

 int start =0 ,end =height.size()-1;
 while(start<end){

   int  heigh = min(height[start] ,height[end]);

    int weidt = end-start;

    int water_contain = heigh*weidt;

    max_area = max(max_area, water_contain);
   
   if( height[start]<height[end]) start++;
   else end--;
 }
   return max_area;
 
    }
};