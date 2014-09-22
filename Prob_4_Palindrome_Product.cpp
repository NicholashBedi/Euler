#include<cmath>
#include<iostream>
#include<cstdlib>
#include<vector>
#include<sstream>
using namespace std;

bool ispan(string a)
{
	int len = a.length();
	for(int i = 0; i < len/2; i++)
	{
		if ( a[i] != a[len-1-i])
		return false;
	}
	return true;
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
	for (int i = 1; i < 1000; i++)
	{
		for (int j = 1; j < 1000; j++)
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

/*

906609

--------------------------------
Process exited after 0.9928 seconds with return value 0
Press any key to continue . . .

*/
