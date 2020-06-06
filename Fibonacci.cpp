class Solution {
    
    int dp[1006];

int go(int n) {

	if (n <2)return n;

	if (dp[n] != -1) return dp[n];

	else
	return dp[n] = go(n - 1) + go(n - 2);

}
    
public:
    int fib(int n) {
           for (int i = 0; i <= 1000; i++)dp[i] = -1;
        int ans =  go(n);
        
       return ans;
    }
};