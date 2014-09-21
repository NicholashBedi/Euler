// sum of multiples of 3 and 5 below 1000
#include <cmath>
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int sum =0;
	for(int n=1; n<1000; n++){
		if (n%3 == 0 || n%5==0){
			sum += n;
			//cout << n << endl;
		}
	}
	cout << sum;
}
/*
Test case n <10
23

With n<1000
233168
*/

