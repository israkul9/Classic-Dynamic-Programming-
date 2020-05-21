/*

Bismillah_hir_rahmanir_rahim

*/

#include <bits/stdc++.h>
#include<string>
#include <sstream>
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;
typedef long double ld;

#define inf ( ll  )( 1e18 + 100 )
#define bug cout <<"--------------------------\n"



#define POPCOUNT __builtin_popcountll
#define RIGHTMOST __builtin_ctzll
#define LEFTMOST(x) (63-__builtin_clzll((x)))
#define NUMDIGIT(x,y) (((vlong)(log10((x))/log10((y))))+1)

#define FIO         ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

#define PI          2*acos(0.0)
#define MOD         1000000007
#define endl        '\n'
#define yes         cout << "yes" << endl
#define no          cout << "no" << endl
#define YES         cout << "YES" << endl
#define NO          cout << "NO" << endl
#define LCM(a, b)   ((a)*(b)) / GCD(a, b)
#define LIMIT(a, b) (a>=1 && a<=n && b>=1 && b<=m)
#define INPUT       freopen("input.txt", "r", stdin);
#define OUTPUT      freopen("output.txt", "w", stdout);
#define PRINT(a)    for(auto i : a) cout << i << " "; cout << endl;


int month[] = {31,28,31,30,31,30,31,31,30,31,30,31};
string lowerCase = "abcdefghijklmnopqrstuvwxyz";
string upperCase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

/// Graph moves
/// const int fx[] = {+1,+1,+0,-1,-1,-1,+0,+1}; /// King's move
/// const int fy[] = {+0,+1,+1,+1,+0,-1,-1,-1}; /// King's move



/// int dx[] = {122222,0, 0, +1, -1};
/// int dy[] = {122222,+1, -1, 0, 0};   //4 Direction Array

///int dx[] = {0, 0, -1, +1, -1, -1, +1, +1}, dy[] = {-1, +1, 0, 0, -1, +1, -1, +1}; //8 Direction Array

///int dx[] = {-2, -2, -1, -1, +1, +1, +2, +2}, dy[] = {-1, +1, -2, +2, -2, +2, -1, +1}; //Knight Moves

///int dx[]={-1,-1,+0,+1,+1,+0};int dy[]={-1,+1,+2,+1,-1,-2}; ///Hexagonal Direction


template <typename T>
std::string NumberToString ( T Number )
{
    std::ostringstream ss;
    ss << Number;
    return ss.str();
}


int arr[11] ;

int dp[11][11];



int n ;
int LIS (  int cur, int last_pos )
{
    if(cur > n)return 0 ;


    if( dp[cur][last_pos] != -1 )
        return dp[cur][last_pos] ;

    int nibo = 0, nibona = 0, ans = 0 ;

    nibona = LIS( cur + 1, last_pos );

    if( arr[ cur ] > arr[ last_pos ] )
    {
        nibo = LIS( cur + 1, cur ) + 1;
    }

    ans = max(  nibo, nibona);
    dp[cur][last_pos]  = ans;

    return  dp[cur][last_pos];

}


int main()
{


    cin >> n ;

    arr[0] = -11111;
    for(int i = 1 ; i <= n ; i++)
    {
        cin >> arr[i];
    }

    memset(dp, -1, sizeof dp);
    cout << LIS(1,0) <<endl;


    //  memset(dp, -1, sizeof dp);


    return 0;

}

