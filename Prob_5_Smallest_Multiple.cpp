#include<cmath>
#include<iostream>
#include<cstdlib>
#include<vector>
#include<sstream>
using namespace std;

int main()
{
	{
		int num =120;
		cout << num << " is divisible by " << endl;
		for(int i = num-1; i > 1; i--)
		{
			if (num%i == 0)
			cout << i << endl;
		}
	}
}
/*
POA

make a list of all factors of each number.
Go through the list and delete all duplicates
the sum of this list should be the smallest number

*/
