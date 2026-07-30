class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
         
           int c = grid[0].size();
        int w =grid.size();
         vector<int>u(w*c);
          vector<int>u2 (w*c);
      

        for(int i=0 ;i<grid.size();i++){

            for(int j=0;j<grid[0].size();j++){
                 
                 //to convert 2d into 1d
              int r = (i*c)+j;
              u[r]=grid[i][j];

            }
        }
          int as= u.size();
        for(int i=0; i<as; i++){
              int j= (i+k)%as;
              u2[j]=u[i];
        }
         int index=0;
       for(int i=0 ;i<w;i++){

        for(int j=0;j<c;j++){

            grid[i][j]=u2[index];

           index++;
        }
       }
        
        return grid;
    }
};