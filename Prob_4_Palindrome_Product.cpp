#include<cmath>
#include<iostream>
#include<cstdlib>
#include<vector>
#include<string>
#include<sstream>
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

string tostring(int f)
{
    string a;
	stringstream out;
	out << f;
	a = out.str();
    return a;
}


int main()
{
	int max = 0;
	for (int i = 1; i < 100; i++)
	{
		for (int j = 1; j < 100; j++)
		{
			
			if (ispan(tostring(i*j)) == true)
			{
				if (max < i*j)
				{
					max = i*j;
				}
			}
		}
	}
	cout << max << endl;
	return EXIT_SUCCESS;
}
