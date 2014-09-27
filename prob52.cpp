//Problem 12 Highly divisible triangular number
//Nicholash Bedi
#include<iostream>
#include<sstream>
#include<cmath>
#include<cstdlib>
#include<fstream>
#include<iomanip>
#include<sstream>
using namespace std;

string tostring(int f)
{
    string a;
	stringstream out;
	out << f;
	a = out.str();
    return a;
}

int length(int n)
{
	int length =1;
	while(n /= 10)
		length ++;
	return length;
	
}

int main()
{
	int number = 87695;
	cout << tostring(number)[1] << endl;
	
	return EXIT_SUCCESS;
}
