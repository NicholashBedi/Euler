//Problem 11 Largest Product in a grid
//Nicholash Bedi
#include<iostream>
#include<sstream>
#include<cmath>
#include<cstdlib>
#include<fstream>
#include<iomanip>
using namespace std;


int main()
{
 //Got grid grid[20*20]

		
		ifstream fingrid("grid.txt");
	
		if(!fingrid)
		{
			return EXIT_FAILURE;
		}
		
		int grid[20*20] = {};
		
		for (int x = 0; x < 20*20; x++)
		{
			int a;
			fingrid >> a;
			grid[x] = a;
		}
		fingrid.close();
	long long int prodmax = 1;
	
	for(int q = 0; q < 20; q++)				//From Right to left
	{
		for(int w = 0; w < 17; w++)
		{	
			int prod = 1;
			for(int e = 0; e < 4; e++)
			{
				prod*=grid[(q*20)+w+e];
			}
			if(prod > prodmax)
				prodmax = prod;
		}
	}
	cout << prodmax << endl;
	
	
	
	return EXIT_SUCCESS;
}

