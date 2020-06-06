
#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

using  ll = long long int;
#define bug cout <<"-----------------"<<endl


// stair climbing problem 
// number of ways to climb the n-th stair
int dp[1006];

int go(int n) {

	if (n == 0 or n==1)return 1;

	if (dp[n] != -1) return dp[n];

	else
	return dp[n] = go(n - 1) + go(n - 2);

}



int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	for (int i = 0; i <= 1000; i++)dp[i] = -1;
	cout << go(3) << endl;
	
	return 0;
}
