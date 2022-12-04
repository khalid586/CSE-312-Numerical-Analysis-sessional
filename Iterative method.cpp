#include <bits/stdc++.h>
using namespace std;

//#define int long long 


double f(double x){
     double ans = 1/(sqrt(x+1)); // val of x  , x = 1 / sqrt(x + 1) . we got it after solving the eqn
     return ans;
}
double givenFunc(int x){
     double ans = x*x*x + x*x -1; // given func
     return ans;
}

void solve(){
     double st   , end  ;

     for(int i = -100 ; i < 100 ; i++){
          if(givenFunc(i) * givenFunc(i+1) < 0){
               st = i ;
               end = i + 1;
               break;
          }
     }
     for(double i = st + 0.1 ; i <= end ; i += 0.1){
          double ans = i;
          for(int i = 1 ; i < 100 ; i++){
                ans = f(ans);
                cout << ans << ' ';
          }
          cout << endl;
     }
}
int32_t main()
{
     solve();
     return 0;
}

