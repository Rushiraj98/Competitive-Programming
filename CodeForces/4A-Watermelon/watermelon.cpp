//   Mar/26/2021 12:58UTC+5.5	rushirajchavan	4A - Watermelon	GNU C++14	Accepted	62 ms	0 KB
//   https://codeforces.com/problemset/problem/4/A

#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	if(n%2==0 && n>2){
	    std::cout << "YES" << std::endl;
	}
	else
	    std::cout << "NO" << std::endl;
}
