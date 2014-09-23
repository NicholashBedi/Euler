//problem 8 largest product in a series
#include<iostream>
#include<sstream>
#include<cmath>
#include<cstdlib>
#include<fstream>
using namespace std;


int main()
{
	ifstream fileIn("1000digitnumber.txt");
	
//	if (!fileIn)
//	{
//		cout << "Unable to open file" << endl;
//		return EXIT_FAILURE;
//	}
//	fileIn.close()
//
//	for (int i = 0; i < 250; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//		
//		}
//	}
//	
//	for (int i = 0; i < 5; i++)
//	{
//		char a = '0';
//		fileIn >> a;
//		cout << a << endl;
//	}
//	cout << endl;
//	
//	fileIn.close();
//	ifstream filein("1000digitnumber.txt");
	
	for (int i = 0; i < 5; i++)
	{
		char a;
		filein >> a;
		int ia = a -'0';				//HOW DOES THIS WORK??
		cout << ia +1  << endl;
	}
	
	
	
}


