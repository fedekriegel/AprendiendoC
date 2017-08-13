#include <stdio.h>
#include <string.h>
#include <math.h>

int main(int argc, char const *argv[]){

    char x[100];
    int  n, i; 
    float elem, total = 0;

    printf("intrduzca la cantidad de elmentos:\n");
    fgets(x, sizeof(x), stdin);
    sscanf(x, "%d", &n);
    memset(x , 0 , sizeof(x));

    for ( i = 0; i < n; ++i){
        printf("%d) Intrduzca un numero:\n", i + 1);
        fgets(x, sizeof(x), stdin);
        sscanf(x, "%f", &elem);
        memset(x , 0 , sizeof(x));

            elem = powf(elem, -1);

            total += elem; 
}

printf("la resistencia es: %f\n",pow(total,-1));

    return 0;
}
