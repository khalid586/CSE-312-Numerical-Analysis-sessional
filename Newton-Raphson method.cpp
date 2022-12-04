#include <bits/stdc++.h>
using namespace std;

double primeFunc(double x){ // Prime of given function which you have to get by differentiating the given function
     double ans = 3 + sin(x); 
     return ans;
}

double givenFunc(double x){
     double ans = 3*x - cos(x) - 1; // given func
     return ans;
}
void solve(){
     double a   , b ;
     for(int i = -100 ; i < 101 ; i++){
          if(givenFunc(i) * givenFunc(i+1) < 0){
               a = i + 1 , b = i;
               break;
          }
     }

     double x = a; // we can assign b also (both will give you correct result . It might take a few more iterations to get the correct resutl. That's it .) 
     cout << a << endl;
     for(int i = 1 ; i < 100 ; i++){
          double f_x = givenFunc(x) , f_prime_x = primeFunc(x); //It has been done in order to avoid malfunctioning
          x = x - (f_x/ f_prime_x);
          cout <<  x << '\n';
     }
     
}

int32_t main()
{
     solve();
     return 0;
}

