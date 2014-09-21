#include<cmath>
#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;

bool isPrime(int num){
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
	int max = 0;
	long long num = 600851475143;
	for (int i = (sqrt(num) + 1); i > 2; i--)
	{
		if (num % i == 0)
		{
			if (isPrime(i)==true)
			{
				if (max < i)
				{
					max = i;	
				}
				
			}
			if ( isPrime(num/i)==true)
			{
				if (max < num/i)
				{
					max = num/i;
				}
				
			
			}
		}
	}
	cout << max << endl;
	
	return EXIT_SUCCESS;
}
