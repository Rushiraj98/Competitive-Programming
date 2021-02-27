#include<bits/stdc++.h>
using namespace std;

int main() {
  int T, n, a, b,cumm_a=0, cumm_b=0, w, l; //w=winner, l=lead 
  scanf("%d", &T);
  
  while(T--){
    scanf("%d", &a);
    scanf("%d", &b);
    
    cumm_a+=a; //cummulative score for player 1
    cumm_b+=b; //cummulative score for player 2
    
    if(abs(cumm_a-cumm_b)>=l){
      l=abs(cumm_a-cumm_b); //cummulative lead
      
      w=cumm_a>cumm_b ? 1:2; //winner based on cummulative lead
    }
  }
  printf("%d %d", w, l);
	return 0;
}
