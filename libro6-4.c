#include <stdio.h>

int main(int argc, char const *argv[]){

char x [100];
float total1, z; 
int total2;
int cuartos , decena, quintos;

printf("Introdusca un monto menor a $1:\n");
fgets(x, sizeof(x),stdin );
sscanf( x, "%f", & total1 );

z = total1;
total1 *= 100;
total2 = total1 ;


if (total2 <= 99){

    cuartos = total2 / 25;
    total2 %= 25;
    decena = total2 / 10;
    total2 %= 10;
    quintos = total2 / 5;
    total2 %= 5;

    printf("Para formar $%f se necesitan:\n%d Monedas de 25 centavos.\n%d Monedas de 10 centavos.\n%d Monedas de 5 centavos.\n%d Monedas de un centavo.\n",z , cuartos, decena, quintos, total2);

} else {
    printf("Error el valor que udted introdujo es mayor a $1 \n");

}
  
    return 0;
}