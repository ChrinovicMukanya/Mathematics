#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	//TWO BY TWO MATRIX
	int array[2][2] = {
		{3,2,},
		{2,1,}
	};

	const int determinant = (array[0][0] * array[1][1]) - (array[0][1] * array[1][0]);//Calculation 
	printf("%d\n", determinant);



}
