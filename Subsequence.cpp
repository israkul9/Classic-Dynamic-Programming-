
#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

using  ll = long long int;
#define bug cout <<"-----------------"<<endl


string main_str = "ahbgdc";

string patt = "abcd";


// i = main string index
// j = pattern string index

void go(int i, int j,string main_str,string patt) {

	if (j == patt.length() ) {
		
		cout << "Subsequence\n";
		 return;
	}

	if (main_str[i] == NULL) {
		cout << "Not found\n";
		return;
		//return false;
	}


	if (patt[j] == main_str[i]) {
		go(i + 1, j + 1,main_str,patt);
	}
	else {
		go(i + 1, j ,main_str,patt);
	}

}

int main()
{
	
 go(0, 0, main_str, patt);
/*f (ans) {
	cout << "YES\n";
}
else {
	cout << "NO\n";
}*/

	return 0;
}
