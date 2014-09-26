//Problem 12 Highly divisible triangular number
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
	int trinum = 1;
	int counter = 2;
	int numdiv;
	while(trinum < 30)
	{
		numdiv = 0;
		
		trinum += counter;
		for (int div = 1; div < sqrt(trinum) + 1; div++)
		{
			if(trinum%div == 0)
			{
				if(sqrt(trinum) == div)
					numdiv += 1;
				else
					numdiv += 2;
			}
		}
		counter += 1;
		cout << "1: " << trinum << " has this many divisors: " << numdiv << endl;
	} 
	
	cout << trinum <<endl;
	return EXIT_SUCCESS;

}
