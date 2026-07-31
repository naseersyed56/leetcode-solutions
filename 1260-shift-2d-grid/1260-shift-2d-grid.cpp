class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int q) {
         
        int r = grid.size();
        int c= grid[0].size() ;

        vector<int>id(r*c),hd(r*c);

//converting 2d array to 1d array
      int inde =0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
             id[inde++]=grid[i][j];
            }
        }
        int k =id.size();
        //moving arrays
    for(int i=0;i<k;i++){
       hd[(i+q)%k]=id[i];
    }
  int index=0;
    for(int i=0 ;i<r;i++){
  for(int j=0;j<c;j++){

    grid[i][j]=hd[index];
    index++;
  }
    }
     return grid;

   }

};