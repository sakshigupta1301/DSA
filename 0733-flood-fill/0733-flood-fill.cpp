class Solution {
public:

     void dfs(vector<vector<int>>& images,int r,int c,int oldcolor,int newcolor){
      int n = images.size();
       int m = images[0].size();

       if(r<0 || r>=n || c<0 || c>=m)
       return;

       if(images[r][c]!=oldcolor)
       return;

       images[r][c]=newcolor;
       dfs(images,r-1,c,oldcolor,newcolor);
       dfs(images,r+1,c,oldcolor,newcolor);
       dfs(images,r,c-1,oldcolor,newcolor);
       dfs(images,r,c+1,oldcolor,newcolor);
     }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
       int oldcolor=image[sr][sc];
        if(oldcolor==color){
            return image;
        }
        dfs(image,sr,sc,oldcolor,color);
        return image;
    }
};