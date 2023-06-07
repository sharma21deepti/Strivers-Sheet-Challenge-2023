#include<cmath>
#include<algorithm>
int getMedian(vector<vector<int>> &matrix)
{
    // Write your code here.
   
    vector<int>res;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
               res.push_back(matrix[i][j]);
            }
        }
        sort(res.begin(),res.end());
//         for(int i=0;i<a*b;i++){
// res[i]=arr[a+]
//         }
       
           int ans=res[res.size()/2];
    
       

    
    return ans;
}