#include <stdio.h>

int main(int argc, char * argv[])
{
	// 3 x 3 matrix
	int matrix_array[3][3] = {

		{2, 1, -1},
		{3, 1, -2},
		{1, 0, 4}
	};
	
	int x;
	int y;
	printf("ORIGINAL MATRIX\n");
	
	for (x = 0; x < 3; ++x){
		for (y = 0; y < 3; ++y){
			printf("%d\n", matrix_array[x][y]);
		}
	}
	
	printf("\n\n");
	printf("TRANSPOSE MATRIX\n");
	
	int new_transpose_matrix[3][3];//sets 3 x 3 empty matrix for storing transposed values
		for (x = 0; x < 3; ++x){
			for (y = 0; y < 3; ++y){
				new_transpose_matrix[x][y] = matrix_array[y][x];//Sets matrix B rows to Matrix A columns and matrix B columns to matrix A rows
				printf("%d\n", new_transpose_matrix[x][y]);//prints transposed matrix
			}
		}

}
