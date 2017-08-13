#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{

	char x[100];
	int n, i;
	float elem, total = 0;

	printf("intrduzca la cantidad de elmentos:\n");
	fgets(x, sizeof(x), stdin);
	sscanf(x, "%d", &n);
	memset(x, 0, sizeof(x));

	for (i = 0; i < n; ++i) {
		printf("%d) Intrduzca un numero:\n", i + 1);
		fgets(x, sizeof(x), stdin);
		sscanf(x, "%f", &elem);
		memset(x, 0, sizeof(x));

		total += elem;
	}
	total /= n;

	printf("el promedio es: %f\n", total);

	return 0;
}
