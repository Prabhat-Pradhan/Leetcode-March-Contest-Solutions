class Solution {
public:
    int digArtifacts(int n, vector<vector<int>>& art, vector<vector<int>>& dig) {
        int res = 0;
        bool grid[1000][1000] = {false};
        for(int i=0;i<dig.size();i++)
        {
            grid[dig[i][0]][dig[i][1]]=true;
        }
        for(int i=0;i<art.size();i++)
        {
            int startrow = art[i][0];
            int endrow = art[i][2];
            int startcol = art[i][1];
            int endcol = art[i][3];
            bool flag = true;
            for(int k = startrow;k<=endrow;k++)
            {
                for(int j = startcol;j<=endcol;j++)
                {
                    if(grid[k][j]==false)
                    {
                        flag = false;
                        break;
                    }
                }
            }
            if(flag)
                res++;
        }
        return res;
    }
};