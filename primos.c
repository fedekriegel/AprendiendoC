#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{

	char n1[7];
	float n2;
	int limite, i, x;

	printf("Digite un numero entre 0 y 9999999\n");
	fgets(n1, sizeof(n1), stdin);
	sscanf(n1, "%d", &x);

	n2 = sqrt(x);
	limite = n2;

	for (i = 2; i <= limite; ++i) {

		if ((x % i) == 0) {

			printf("No es primo\n");
            printf("lo divide: %d\n",i );
			break;
		}

	}

	if (i == limite + 1) {
		printf("ES UN NUMERO PRIMO\n");

	}

	return 0;
}
