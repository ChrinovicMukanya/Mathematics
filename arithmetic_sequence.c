#include <stdio.h>

int main(int argc, char * argv[])
{	
	//Formula = d = a2 - a1
	//Formula = An = a1 +(n-1)d
	//Formula = Sn = n/2(2(a1)
	
	int seq[] = {5,12,19,26};
	
	int d;
	d = seq[1] - seq[0];
	int a1;
	a1 = seq[0];

	//Find value of 10th term
	
	int n = 10;
	
	int a10;
	a10 = a1 + ( (n -1) * d);
	printf("value of 10th term = %d\n", a10);
	
	//Find sum of first  10 values
	
	int _Sn;
	int _n = 10;
	_Sn = (n /2)*((a1 *2) + ((_n -1) *d));
	printf("Sum of 10th terms = %d\n", _Sn);
}
