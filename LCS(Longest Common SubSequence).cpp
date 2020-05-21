//Bismillah_hir_rahmanir_rahim

/// algo video = https://www.youtube.com/watch?v=43P0xZp3FU4


#include<bits/stdc++.h>
using namespace std;


int main()
{

    string str1,str2;
    cin>>str1>>str2;
    int len1 = str1.length();
    int len2 = str2.length();

    int mat [len1+1][len2+1];
    for(int i=0; i<=len1; i++)
    {
        mat[i][0]=0;
    }
    for(int i=0; i<=len2; i++)
    {
        mat[0][i]=0;
    }


    for(int i=1; i<=len1; i++)
    {
        for(int j=1; j<=len2; j++)
        {
            if(str1[i-1]==str2[j-1])
            {
                mat[i][j] = mat[i-1][j-1]+1;

            }
            else
            {
                mat[i][j] = max(mat[i-1][j],mat[i][j-1]);
            }
        }
    }



    cout<<"The length is:";
    cout<<mat[len1][len2]<<endl;


    //int index = mat[len1][len2];/// lcs er length
//    char LCS[index+1];
//    LCS[index] = '\0';


    string extra = "";

    int i = len1,j=len2;
    while(i>0 && j>0)
    {
        if(str1[i-1] == str2[j-1])
        {
            extra.push_back(str1[i-1]);
            //LCS[index-1]=str1[i-1];
            i--;
            j--;
            //index--;
        }
        else if(mat[i-1][j] > mat[i][j-1])
        {
            i--;
        }
        else
        {
            j--;
        }
    }
    reverse(extra.begin(),extra.end());

    cout<<"LCS is: "<<extra<<endl;

    return 0;
}

