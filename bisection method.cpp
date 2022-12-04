#include <bits/stdc++.h>
using namespace std;

int givenFunc(int x){
     int ans = x*x - 4*x -10; // given func
     return ans;
}
void solve(){
     double a   , b ;
     for(int i = -100 ; i < 100 ; i++){
          if(givenFunc(i) * givenFunc(i+1) < 0){
               if(givenFunc(i) < 0) a = i , b = i + 1;
               else                 a = i + 1 , b = i;
               break;
          }
     }

     for(int i = 1; i < 100 ; i++){
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

