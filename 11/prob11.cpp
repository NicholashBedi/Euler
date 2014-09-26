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
	
	
	//From Right to left
	for(int row = 0; row < 20; row++)				
	{
		for(int coll = 0; coll < 17; coll++)
		{	
			int prod = 1;
			for(int e = 0; e < 4; e++)
			{
				prod*=grid[(row*20)+coll+e];
			}
			if(prod > prodmax)
				prodmax = prod;
		}
	}
//	cout <<"max left to right " << prodmax << endl;
	
	
	//Up down
	for(int row = 0; row < 17; row ++)
	{
		for( int coll = 0; coll < 20; coll++)
		{
			int prod = 1;
			for(int e = 0; e < 4; e++)
			{
				prod*=grid[ (row + e) * 20 + coll];
			}
			if(prod > prodmax)
				prodmax = prod;
		}
	}
//	cout <<"max up down " << prodmax << endl;
	
	//Diagonal right down
	for(int row = 0; row < 17; row ++)
	{
		for( int coll = 20; coll > 3; coll--)
		{
			int prod = 1;
			for(int e = 0; e < 4; e++)
			{
				prod*=grid[(row + e) * 20 + (coll - e)];
			}
			if(prod > prodmax)
				prodmax = prod;
		}
	}
//	cout <<"diag top left " << prodmax << endl;
	
		
	//Diagonal left down
	for(int row = 0; row < 17; row ++)
	{
		for( int coll = 0; coll < 17; coll++)
		{
			int prod = 1;
			for(int e = 0; e < 4; e++)
			{
				prod*=grid[(row + e) * 20 + (coll + e)];
			}
			if(prod > prodmax)
				prodmax = prod;
		}
	}
	cout <<"Max value " << prodmax << endl;
	return EXIT_SUCCESS;

}
/*
Max value 70600674

--------------------------------
Process exited after 0.0585 seconds
*/

