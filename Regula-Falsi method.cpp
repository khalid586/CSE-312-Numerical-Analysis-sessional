#include <bits/stdc++.h>
using namespace std;

double f(double x){
     double ans = x * tan(x) + 1;// sample equation
     return ans;
}

int main()
{
 
    double negative , positive ;
    for(double i = -3 ; i < 3 ; i++){

          double ans = f(i) * f(i+1);
          if(ans < 0){
               if(f(i) < 0) negative = i , positive = i+1;
               else  positive = i , negative = i+1;
               break;
          }
    }

    vector<double> results;

    for (int i = 0; i < 100; ++i)
    {
         double result = (positive * f(negative) - negative * f(positive))/(f(negative) - f(positive));
         results.push_back(result);

         if(f(result) < 0) negative = result;
         else              positive = result;

         if(results[results.size()-1] == results[results.size() - 2]) break;
          
    } 

    cout << results[results.size() - 1] << '\n';
    return 0;
}


