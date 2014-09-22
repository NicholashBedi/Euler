#include<cmath>
#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;

bool ispan(string a)
{
	int len = a.length();
	for(int i = 0; i < len/2; i++)
	{
		if ( a[i] == a[len-1-i])
		return true;
	}
	return false;
}


int main()
{
	cout << ispan("racecar") <<endl;

	return EXIT_SUCCESS;
}
