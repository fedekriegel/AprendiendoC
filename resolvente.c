#include <stdio.h>
#include <math.h>
#include <string.h>


int main(int argc, char const *argv[])
{
	char x[10];
	float a, b, c, discri, compo2;

	printf("Introduzca el valor de: A\n");
	fgets(x, sizeof(x), stdin);
	sscanf(x, "%f", &a);
	memset(x, 0, sizeof(x));

	printf("Introduzca el valor de: B\n");
	fgets(x, sizeof(x), stdin);
	sscanf(x, "%f", &b);
	memset(x, 0, sizeof(x));

	printf("Introduzca el valor de: C\n");
	fgets(x, sizeof(x), stdin);
	sscanf(x, "%f", &c);
	memset(x, 0, sizeof(x));

	discri = pow(b, 2) - 4 * a * c;
	compo2 = -b / (2 * a);
	if (a != 0) {
		if (discri > 0) {
			printf("Primera raiz: %f, Segunda raiz: %f\n",
				   compo2 + sqrt(discri) / (2 * a),
				   compo2 - sqrt(discri) / (2 * a));

		}
		if (discri == 0) {
			printf("Raiz unica: %f\n", compo2);
		}
		if (discri < 0) {
			printf("Primera raiz:%f + i%f, Pegunda raiz: %f - i%f\n",
				   compo2, sqrtf(-discri) / (2 * a), compo2,
				   sqrtf(-discri) / (2 * a));
		}
	} else {
		printf("Error no se puede dividir por 0 \n");
	}
	return 0;


}
