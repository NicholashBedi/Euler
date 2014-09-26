/*
Problem 9 Euler
Special Pythagoran Triplet
Nicholash Bedi
*/
#include<iostream>
#include<sstream>
#include<cmath>
#include<cstdlib>
#include<fstream>
#include<iomanip>
using namespace std;

int main()
{
	for(int a = 1; a < 1000; a++)
	{
		for(int b = 1; b < 1000; b++)
		{
			double c = sqrt(a*a+b*b);
			int d = c;
			if( d == c && a+b+c == 1000  && a < b && b < c)
			{
				cout << a <<" "<< b << " " << d << endl;
				
				cout << fixed << a*b*d << endl;
			}
		}
	}
	
	return EXIT_SUCCESS;
}

/*
Output

200 375 425
31875000

*/
