#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int T, n, b, m, ans, problems; 
  cin>>T;
  while(T--){
    cin>>n>>b>>m;
    ans = 0;
    problems = 0;
    while(n){
      problems = (n+1)/2; 
      ans += problems*m;
      n-=problems;
      m*=2;
      if(n){
        ans+=b;
      }
    }
    std::cout << ans << std::endl;
  }
	return 0;
}
