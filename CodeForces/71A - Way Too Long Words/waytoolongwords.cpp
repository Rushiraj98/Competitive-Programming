// Mar/26/2021 13:06UTC+5.5	rushirajchavan	71A - Way Too Long Words	GNU C++14	Wrong answer on test 2	15 ms	0 KB
// https://codeforces.com/problemset/problem/71/A

#include <bits/stdc++.h>
using namespace std;

int t, n;

void solve() {
  string str;
	cin>>str;
	if(str.size()<11){
	  std::cout << str << std::endl;
	}
	else{
	  cout<<str[0]<<str.size()-2<<str[str.size()-1]<<"\n";
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>t;
	while(t--){
	  solve();
	}
}
