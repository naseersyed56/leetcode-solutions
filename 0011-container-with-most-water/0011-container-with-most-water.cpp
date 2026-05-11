class Solution {
public:
    int maxArea(vector<int>& height) {
        
  int start =0 ,end =height.size()-1 ,max_area = 0;

  while(start <end){

   int height1 = min(height[start] ,height[end]);

   int weidth =end-start;

   int area = height1 *weidth;

  max_area = max(area ,max_area);

if(height[start]<height[end]){
    start++;
}else{
    end--;
}

  }
  return max_area;
    }
};