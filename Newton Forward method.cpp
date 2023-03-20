#include <bits/stdc++.h>
using namespace std;

int main()
{
  	int n,h; 

 	cout << "Enter the number of inputs and value of h: ";
 	cin >> n >> h;

 	int x[n] , y[n];

 	cout << "Enter the values of x: ";
 	for (int i = 0; i < n; ++i)
 	{
 		cin >> x[i];
 	}

 	cout << "Enter the values of y: ";
 	for (int i = 0; i < n; ++i)
 	{
 		cin >> y[i];
 	}

 	int delY[n-1] , del2Y[n-2] , del3Y[n-3];

 	for (int i = 1; i < n; ++i)
 	{
 		delY[i-1] = y[i] - y[i-1];
 	}

 	for (int i = 1; i < n-1; ++i)
 	{
 		del2Y[i-1] = delY[i] - delY[i-1];
 	}

 	for (int i = 1; i < n-2; ++i)
 	{
 		del3Y[i-1] = del2Y[i] - del2Y[i-1];
 	}

    int x0;
 	cout << "Enter the value of x0 : ";
    cin  >> x0;

    n = (x[0] - x0) / h;

    double ans = y[0] + n*delY[0] + (n*(n-1))/2 * del2Y[0] + (n*(n-1)*(n-2))/6 * del3Y[0];
    cout << ans << '\n';

    
    return 0;
}



