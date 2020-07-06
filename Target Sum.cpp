class Solution {
    
    int ways;

void  go(int pos, int value , int cur_sum , vector<int>& arr , int sz) {

	
	if (pos> sz) {
		if (cur_sum == value)ways++;
		return;
		
	}
	else {

		go(pos + 1, value, cur_sum + arr[pos],arr,sz);
		go(pos + 1, value, cur_sum - arr[pos],arr,sz);
	}
	
}
    
    
public:
    int findTargetSumWays(vector<int>& arr, int S) {
        ios_base::sync_with_stdio(false);
	cin.tie(NULL);
        int sz = arr.size()-1;
        go(0,S,0,arr,sz);
        return ways;
        
    }
};