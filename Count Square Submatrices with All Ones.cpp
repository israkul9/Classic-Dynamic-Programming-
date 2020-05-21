
//https://leetcode.com/problems/count-square-submatrices-with-all-ones/

class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        
        
        int row = matrix.size();
	int col = matrix[0].size();

        if(row==0)return 0;

	//cout << row << " " << col << endl;


	int  grid[500][500];
	memset(grid, false, sizeof grid);
	for (int i = 1; i <=row; i++) {
		for (int j = 1; j <= col; j++) {
			grid[i][j] = (matrix[i-1][j-1]) ;
		}
	}



	int  ans[500][500] = { 0 };
	memset(ans, 0, sizeof ans);



	for (int i = 2; i <= row+1; i++) {
		for (int j = 2; j <= col+1; j++) {
			
			if (grid[i-1][j-1] == 0) {
				ans[i][j] = 0;
			}
			else if(grid[i-1][j-1]==1) {

				int up = ans[i - 1][j];
				int left = ans[i][j - 1];
				int diago = ans[i - 1][j - 1];

				ans[i][j] = min({ up ,left , diago }) + 1;


			}

			}
		
		}
	
	int res = 0;
	for (int i = 1; i <= row+1; i++) {
		for (int j = 1; j <= col+1; j++) {

			if (ans[i][j] > 0) res += ans[i][j];

		}
		
	}

	return res;
        
        
        
        
    }
};