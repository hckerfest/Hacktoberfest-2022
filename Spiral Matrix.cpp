vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> ans;
        int dir = 0;
        int L = 0;
        int T = 0;
        int R = matrix[0].size()-1;
        int B = matrix.size()-1;
        while(L<=R && T<=B)
        {
            if(dir==0)
            {
              for(int i=L;i<=R;i++)
              {
                 ans.emplace_back(matrix[T][i]); 
              }
              T++;
            }
            if(dir==1)
            {
              for(int i=T;i<=B;i++)
              {
                 ans.emplace_back(matrix[i][R]); 
              }  
              R--;
            }
            if(dir==2)
            {
              for(int i=R;i>=L;i--)
              {
                  ans.emplace_back(matrix[B][i]);  
              }  
              B--;
            }
            if(dir==3)
            {
              for(int i=B;i>=T;i--)
              {
                  ans.emplace_back(matrix[i][L]); 
              }
              L++;
            }
          dir = (dir+1)%4;
        }
        return ans;
    }
