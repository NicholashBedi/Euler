#include<iostream>
#include<cmath>
#include<cstdlib>
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
	long int x = 0 ;
	long int num = 2;
	while (x!=10001)
	{
		if( isPrime(num)==true )
			x++;
		num++;
	}
	cout << num - 1 << endl;
}
