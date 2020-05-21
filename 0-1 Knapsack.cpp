/*

Bismillah_hir_rahmanir_rahim

*/
#include <bits/stdc++.h>
using namespace std;
#define ll  long long int
#define inf ( ll  )( 1e18 + 100 )
#define bug cout <<"--------------------------\n"


///int dx[] = {0, 0, -1, +1}, dy[] = {-1, +1, 0, 0}; //4 Direction Array

///int dx[] = {0, 0, -1, +1, -1, -1, +1, +1}, dy[] = {-1, +1, 0, 0, -1, +1, -1, +1}; //8 Direction Array

///int dx[] = {-2, -2, -1, -1, +1, +1, +2, +2}, dy[] = {-1, +1, -2, +2, -2, +2, -1, +1}; //Knight Moves

///int dx[]={-1,-1,+0,+1,+1,+0};int dy[]={-1,+1,+2,+1,-1,-2}; ///Hexagonal Direction


ll bag, items ;

const ll maxn = 2000+4;

ll weight[maxn];
ll values[maxn];

ll dp[maxn][maxn];

ll KNAPSACK( ll jinish, ll tot )
{
    if ( jinish ==  items+1 )
        return 0;


    if(dp[jinish][tot] != -1)
    {
        return dp[jinish][tot];
    }
    else
    {

        ll res1 = 0;
        res1 = KNAPSACK(jinish + 1, tot);
        /// na nile

        ll res2 =  0;
        if( tot - weight[jinish] >= 0 )
        {
            res2 = KNAPSACK( jinish + 1, tot - weight[jinish] ) + values[jinish];
        }
        /// nile

        return   dp[jinish][tot]  = max( res1, res2 );
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    // freopen("input.txt", "r", stdin);




    while ( cin >> bag >> items )
    {
        memset(dp,-1,sizeof dp);


        for(ll i = 1 ; i<=items ; i++)
        {
            cin >> weight[i];
            cin >> values[i];
        }
        cout << KNAPSACK(1, bag) <<endl;
    }
    return 0;
}

