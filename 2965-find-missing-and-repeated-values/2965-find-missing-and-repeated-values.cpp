class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        
        unordered_set<int>m;
        vector<int>ans;

        int n =grid.size();
        int a ,b ,actual_sum =0,expected_sum=0;
        for(int i=0; i<n;i++){
            for(int j=0 ;j<n;j++){
                actual_sum += grid[i][j];

                if(m.find(grid[i][j]) != m.end()){
                              a=grid[i][j];
                              ans.push_back(a);

                }
                m.insert(grid[i][j]);
            }
        }
        expected_sum =(n*n)*(n*n+1)/2;
        b =expected_sum + a -actual_sum;
        ans.push_back(b);


             return ans;
    }
};