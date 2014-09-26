//problem 8 largest product in a series
#include<iostream>
#include<sstream>
#include<cmath>
#include<cstdlib>
#include<fstream>
#include<iomanip>
using namespace std;


int main()
{
	ifstream fileIn("1000digitnumber.txt");
	
	if (!fileIn)
	{
		cout << "Unable to open file" << endl;
		return EXIT_FAILURE;
	}
	
	long long int maxprod = 1;

	for (int i = 0; i < 76; i++)
	{
		long long int prod = 1;
		for (int j = 0; j < 13; j++)
		{
			char a;
			fileIn >> a;
			int ia = a -'0';
			prod *= ia;
		}
		if (prod > maxprod)
			maxprod = prod;
	}
	fileIn.close();
	
	for(int r = 1; r <= 13; r++)
	{
		ifstream fileIn("1000digitnumber.txt");
		
		for (int x = 0; x < r; x ++)
		{
			char a;
			fileIn >> a;
		}
		for (int k = 0; k < 75; k++)
		{
			long long int prod = 1;
			for (int l = 0; l < 13; l++)
			{
				char a;
				fileIn >> a;
				int ia = a -'0';
				prod *= ia;
			}
			if (prod > maxprod)
			maxprod = prod;
		}
	}
	cout << maxprod << endl;
	
	fileIn.close();
	return EXIT_SUCCESS;
}

/*
23514624000
*/


