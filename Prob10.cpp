/* 
Problem 10 Summation of Primes
Nicholash Bedi
*/

#include<iostream>
#include<sstream>
#include<cmath>
#include<cstdlib>
#include<fstream>
#include<iomanip>
using namespace std;

bool isPrime(int num)
{
	if(num < 2)
	{
		return false;
	}
	if(num == 2)
	{
		return true;
	}
	if(num % 2 == 0)
	{
		return false;
	}

		
	for(int x = 3; x < sqrt(num) + 1; x+=2)
	{
		if(num%x == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	long long int sum = 2;
	for (int x = 3; x <= 2e6; x+=2)
	{
		if(isPrime(x) == true)
			sum += x;
	}
	cout << sum << endl;
	return EXIT_SUCCESS;
}

/*
142913828922

--------------------------------
Process exited after 1.083 seconds
*/
