/* Perimetro del rectangulo*/
#include <stdio.h>

char ancho[100];
char largo[100];
int largor;
int anchor;

int main()
{

	printf("ingrese el largo del rectangulo: ");
	fgets(largo, sizeof(largo), stdin);
	sscanf(largo, "%d", &largor);

	printf("ingrese el ancho del rectangulo ");
	fgets(ancho, sizeof(ancho), stdin);
	sscanf(ancho, "%d", &anchor);

	printf("el perimetro del rectangulo es: %d\n", 2 * (anchor + largor));

	return 0;
}
