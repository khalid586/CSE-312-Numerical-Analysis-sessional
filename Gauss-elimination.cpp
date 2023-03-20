#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a[3][4] = {0.0};

    for (int i = 0; i < 3; ++i)
    {
         for (int j = 0; j < 4; ++j)
         {
              cin >> a[i][j];
         }
    }
    double val = a[1][0]/a[0][0];
    for (int i = 0; i < 4; ++i)
    {
         a[1][i] -=  (a[0][i] * val);
    }


    val = a[2][0] / a[0][0];

    for (int i = 0; i < 4; ++i)
    {
         a[2][i] -=  (a[0][i] * val);
    }



    val = a[2][1] / a[1][1];

    for (int i = 0; i < 4; ++i)
    {
         a[2][i] -=  (a[1][i] * val);
    }

    cout << "The equation is \n";
    for (int i = 0; i < 3; ++i)
    {
         for (int j = 0; j < 4; ++j)
         {
              cout << a[i][j] << ' ' ;
         }
         cout << '\n';
    }

    cout << '\n';

    double z =  a[2][3] / a[2][2];
    double y = (a[1][3] -a[1][2] * z ) / a[1][1];
    double x = (a[0][3] - a[0][1] * y - a[0][2] * z )/a[0][0];

    cout << "The values are : ";
    cout << "x = " << x << ", " << "y = " << y << ", " << "z = " << z << ".\n";
    return 0;
}

