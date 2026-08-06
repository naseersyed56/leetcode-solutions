class Solution {
public:
    int maxArea(vector<int>& height) {
        
 int max_area =0, start =0,end=height.size()-1;

 while(start<end){
       
       int min_height = min(height[start],height[end]);

    int weidth = end -start;


    max_area=max(max_area , weidth*min_height);

    if(height[start]<height[end])start++;
    else
    end--;
 }
    return max_area;
    }
};