#include <stdio.h>

int main(int argc, char const *argv[])
{

	int i, j;

	printf("+---+---+---+---+---+---+---+---+---+---+\n");
	for (i = 1; i <= 10; i++) {

		for (j = 1; j <= 10; j++) {

			printf("|%3d", j * i);

		}
		printf("|\n");
		printf("+---+---+---+---+---+---+---+---+---+---+\n");
	}




	return 0;
}
