#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

int main()
{
	long int sumsqr = 0;
	long int sqrsum = 0;
	for(int i=1; i<101; i++)
	{
		sumsqr += pow(i,2);
		sqrsum += i;
	}
	cout << pow(sqrsum,2) - sumsqr << endl;
	
	return EXIT_SUCCESS;
}
