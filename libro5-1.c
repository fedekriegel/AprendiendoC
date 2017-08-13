#include <stdio.h>


int main()
{

char minutos_entrada [100]; /* numero que se le pide al user */
int minutos_intermedios; /* valor donde se guarda el numero */
int horas; /*cantidad de horas*/
int minutos_salida; /*cantidad de minutos sobrantes*/


printf("ingrese la cantidad de minutos: ");
fgets(minutos_entrada, sizeof(minutos_entrada), stdin);
sscanf(minutos_entrada, "%d", &minutos_intermedios);

horas = minutos_intermedios / 60;
minutos_salida = minutos_intermedios % 60;

printf("%d minutos son %d hora/s y %d minutos \n",minutos_intermedios, horas, minutos_salida);



	return 0;
}