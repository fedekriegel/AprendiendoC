#include <stdio.h>

char nota[100];
int nota_n;

int main()
{
	printf("introdusca la nota:\n");
	fgets(nota, sizeof(nota), stdin);
	sscanf(nota, "%d", &nota_n);

	if (nota_n <= 60) {
		printf("F\n");
	}

	if (nota_n <= 70 && nota_n > 60) {
		printf("D\n");
	}

	if (nota_n <= 80 && nota_n > 70) {
		printf("C\n");
	}

	if (nota_n <= 90 && nota_n > 80) {
		printf("B\n");
	}

	if (nota_n <= 100 && nota_n > 90) {
		printf("A\n");
	}


	return 0;
}
