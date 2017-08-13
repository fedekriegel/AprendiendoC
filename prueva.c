#include <stdio.h>
#include <stdlib.h>


int borror (int n, int l ){

	if (l == n ){
		l = -5001;			
	}

return l;

}


int maxi( int valores[10] ){
	int i;
	int max = -5001;

	for (i = 0; i < 10; ++i){
		if (valores[i] > max){
			max = valores[i];
		}
	}

	return max;
}



int main(int argc, char const *argv[]){

	int r, i, k;
	int numer[10];
 	time_t t;

	srand((unsigned) time(&t));

	for (i = 0; i < 10; ++i) {
		r = rand()  % 5000;

		numer[i] = r;
	}
	printf("%d\n\n",numer[9] );

	for (i = 0; i < 10; ++i) {
		printf("%d)  %d\n", i + 1, numer[i]);

	}

	printf("\n");
	for (k = 0; k < 10; ++k){
	 	printf("%d) %d\n",k + 1, maxi (numer));
		
		for (i = 0; i < 10; ++i){
			if (numer[i] == maxi (numer)){	
				numer[i] = borror(maxi(numer), numer[i]);
				break;
			}
		}
	}		

	return 0;
}



