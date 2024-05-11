#include <stdio.h>
#include <string.h>
#include <stdlib.h>
sdvshjadv
int main(int argc, char * argv[])
{
	int numberLimit = strtol(argv[1], NULL, 10);
	const int multipleOf = strtol(argv[2], NULL, 10);

	int x = 0;
	while (x < numberLimit - 1){
		if (( x % multipleOf) == 0){
			printf("%d\n", x);
			++x;
		}
	}
}
