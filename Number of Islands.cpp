class Solution {
public:
   void dfs(int i,int j,vector<vector<char>>&grid,vector<vector<int>>&vis){

     vis[i][j]=1;
     int row[4]={0,-1,+1,0};
     int col[4]={-1,0,0,+1};
     for(int k=0;k<4;k++){
         int nrow=i+row[k];
         int ncol=j+col[k];
         if(nrow>=0 && nrow<grid.size() && ncol>=0 && ncol<grid[0].size() && vis[nrow][ncol]==0 && grid[nrow][ncol]=='1'){
            dfs(nrow,ncol,grid,vis);
         }
     }
   }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
       int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==0 && grid[i][j]=='1'){
                    dfs(i,j,grid,vis);
                    count++;
                }
            }
        }
        return count;
    }
};
