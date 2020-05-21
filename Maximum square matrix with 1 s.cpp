// problem link - https://leetcode.com/problems/maximal-square/



#include<bits/stdc++.h>

using namespace std;


#define ll long long int
#define bug cout <<"-----------------"<<endl





int main() {
	

	vector < vector <char > > matrix = {

		{'1' ,'0' ,'1' ,'0', '0'},
		{'1', '0' ,'1' ,'1' ,'1'},
	       {'1', '1', '1', '1', '1'},
	       {'1', '0', '0', '1', '0' }

	};


	//special case -> if matrix size == 0  , return 0 ;

	int row = matrix.size();
	int col = matrix[0].size();


	//cout << row << " " << col << endl;


	int  grid[100][100];
	memset(grid, false, sizeof grid);
	for (int i = 1; i <=row; i++) {
		for (int j = 1; j <= col; j++) {
			grid[i][j] = (matrix[i-1][j-1]) -48;
		}
	}



	int  ans[100][100] = { 0 };
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
	int mx = -1;
	
	for (int i = 1; i <= row+1; i++) {
		for (int j = 1; j <= col+1; j++) {

			mx = max(ans[i][j], mx);

		}
		//cout << endl;
	}

	cout << mx * mx << endl;

	//solve();
	
	/*int kase;

	cin >> kase;

	while (kase--)
	{
		
		solve();
	}*/
	
	
	return 0;
}