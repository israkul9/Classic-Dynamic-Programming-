#include<bits/stdc++.h>
using namespace std;




int main()
{
    string a,b;
    int l,ll;



    while  (cin>>l>>a>>ll>>b)
    {
//    cin>>a;
//
//    cin>>ll;
//    cin>>b;
//    l=a.length();
//    ll=b.length();
        //cout<<l<<ll;
        int mat[l+1][ll+1]  ;//l/ll matrix ar sathay extra ghor ar jonno 1 add kora hoisy
        for(int i=0; i<=l; i++) //tai l nisi  ulta
        {
            mat[i][0]=i;//pura colum 0 jonno.mane 1st colum upor hoty nich,jar i mane row change hossy..jehato i change hossy.i akhan a row bujay;
        }
        for(int i=0; i<=ll; i++) //tai ll nisi   ulta
        {
            mat[0][i]=i;  //1st row bam hoty dan porjonto...
        }
        for(int i=1; i<=l; i++)
        {
            for(int j=1; j<=ll; j++)
            {
                if(a[i-1]==b[j-1]) //extra row o column nabar jonno..a o b ar hisab ta holo string index ar.a[0] mane 0 no index of a string...b[0] mane o no index of b string.
                {
                    mat[i][j]= mat[i-1][j-1];
                }
                else
                {
                    mat[i][j]=min( min(mat[i-1][j],mat[i][j-1]),mat[i-1][j-1])+1;
                }
            }
        }
        cout<<mat[l][ll];
        cout<<endl;
        memset(mat,false,sizeof(mat));
    }

    ////matrix ar kaj sesh
//    for(int i=0; i<=l; i++)
//    {
//        for(int j=0; j<=ll; j++)
//        {
//            cout<<mat[i][j]<<" ";
//
//        }
//        cout<<endl;
//    }

    //abar matrix ta dakly buja jabe matrix of l/ll ar index man e required answet..
    //cout<<"so the minimum edit distance is :"<<mat[l][ll]<<endl;
}
