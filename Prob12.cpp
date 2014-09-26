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
	while(numdiv < 500)
	{
		numdiv = 0;
		
		trinum += counter;
		for (double div = 1.0; div < sqrt(trinum) + 1.0; div++)
		{
			if(trinum/div == int(trinum/div))
			{
				if(sqrt(trinum) == div)
				{
					numdiv += 1;
					//cout << div << endl;
				}
					
				else
				{
					numdiv += 2;
					//cout <<"Divisors: " << div << " and " << trinum/div << endl;
				}
			}
		}
		counter += 1;
		//cout << trinum << " has this many divisors: " << numdiv << endl;
	} 
	
	cout << trinum <<endl;
	return EXIT_SUCCESS;

}

/*
76576500

--------------------------------
Process exited after 0.7964 seconds
*/

