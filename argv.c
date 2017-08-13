#include <stdio.h>

int suma( int a, int b ) {
	int s;

	s = a + b;

	return s;
}


int main(int argc, char const *argv[])
{

	int i;

	for ( i = 1; i < argc; i++ ) {
		printf ( "argv[%d] = %s\n", i, argv[i] );
	}

	printf ( "%d\n", suma( 3, 4));
	
	return 0;
}