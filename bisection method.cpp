#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i = a ; i < b ; i++)

int givenFunc(int x){
     int ans = x*x - 4*x -10; // given func
     return ans;
}
void solve(){
     double a   , b ;
     rep(i,-100,101){
          if(givenFunc(i) * givenFunc(i+1) < 0){
               if(givenFunc(i) < 0) a = i , b = i + 1;
               else                 a = i + 1 , b = i;
               break;
          }
     }

     rep(j , 1 , 101){
          double c = (a + b)/2;
          if(givenFunc(c) < 0)     a = c;
          else                     b = c;
          cout <<  c << '\n';
     }
     
}
int32_t main()
{
     solve();
     return 0;
}

