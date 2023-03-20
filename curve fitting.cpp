#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    cin >> n;

    double x[n] , y[n] , sumOf_xy = 0, sumX = 0,sumY = 0 , sum_of_x_sq = 0;   
    
    for (int i = 0; i < n; ++i)
    {
        cin >> x[i];
    }

    for (int i = 0; i < n; ++i)
    {
        cin >> y[i];
    }

    for (int i = 0; i < n; ++i)
    {
        sumOf_xy += (x[i]*y[i]);
        sumX += x[i]; 
        sumY += y[i];
        sum_of_x_sq += (x[i] * x[i]);
    }

    double a = (n * sumOf_xy - sumX * sumY) / (n * sum_of_x_sq - sumX * sumX);

    double b = (sumY/n) - a *(sumX/n);
    cout << "Values are: a = " << a << ", b = " <<  b << '\n';


    return 0;
}


