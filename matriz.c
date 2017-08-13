#include <stdio.h>

int main(int argc, char const *argv[]){
    
    int i;

    for (i = 0; i <= 32; ++i){
        
        if (i % 4 == 0){
            printf("+-----+-----+-----+-----+-----+-----+-----+-----+\n");                
        } else{
            printf("|     |     |     |     |     |     |     |     |\n");
        }

}
    return 0;
}
