//Matrix diagonal sum
//Time complexity:O(n^2)
//space complexity:O(1)
#include <vector>
using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n= mat.size();
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j){
                    if((n%2!=0)&&(i== n/2))  sum+=mat[i][n/2];
                    else if(n%2!=0)    sum+=mat[i][j]+mat[i][n-1-j];
                    else  sum+=mat[i][j]+mat[i][n-1-j];   
                }
            }
        }
        return sum;
    }
};