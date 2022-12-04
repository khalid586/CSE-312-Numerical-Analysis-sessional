#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define rep(i,a,b) for(int i = a ; i < b ; i++)
#define endl '\n'

#define int long long 
#define all(x) x.begin(),x.end()

double f(double x){
     double ans = 1/(sqrt(x+1)); // val of x  , x = 1 / sqrt(x + 1) . we got it after solving the eqn
     return ans;
}
int givenFunc(int x){
     int ans = x*x*x + x*x -1; // given func
     return ans;
}
void solve(int t){
     int st   , end  ;

     rep(i,-100,101){
          if(givenFunc(i) * givenFunc(i+1) < 0){
               st = i ;
               end = i + 1;
               break;
          }
     }
     for(double i = st + 0.1 ; i <= end ; i += 0.1){
          double ans = i;
          rep(j , 1 , 101){
                ans = f(ans);
                cout << ans << ' ';
          }
          cout << endl;
     }
}
int32_t main()
{
   int t = 1; 
   // cin >> t; 
   rep(i,1,t+1) solve(i);
   
   return 0;
}

