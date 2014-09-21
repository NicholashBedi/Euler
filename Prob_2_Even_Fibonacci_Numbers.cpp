#include<cmath>
#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;

int main()
{
	int sum = 0; 
	vector<int> fib(2);
	fib[0] = 1;
	fib[1] = 2;
	
	
	while (fib.back() < 4e6)
	{
		if (fib.back() % 2 == 0)
		sum += fib.back();
		
		fib.push_back(fib[fib.size()-2]+fib[fib.size()-1]);
	}
	cout << sum << endl;
	
	return EXIT_SUCCESS;
}
