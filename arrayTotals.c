#include <stdio.h>

int main(int argc, char * argv[])
{
	int array[5][5] = {
			   {1,2,3,4,5},
			   {6,7,8,9,10},
			   {11,12,13,14,15},
			   {16,17,18,19,20},
			   {21,22,23,24,25}
	};
	int x;
	int y;

	int rowSum = 0;//Total rows
	int columnSum = 0;//Total columns

	//Looping through Rows
	for(x = 0; x < 5; ++x){
		for (y = 0; y < 5; ++y){
			rowSum += array[x][y];
		}	
	}

	//Looping through Columns
	for(x = 0; x < 5; ++x){ 
		for(y = 0; y < 5; ++y){
			columnSum += array[y][x];
		}
	}

	printf("Row Total %d\n", rowSum);
	printf("Column Total = %d\n", columnSum);
}
