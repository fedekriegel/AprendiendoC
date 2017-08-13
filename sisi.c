#include <stdio.h>
int main() {
	int i;

	for (i = 0; i < 10; i++) {
		if (i % 2 == 0) {
			printf("i = %d - Par\n", i);
		} else {
			printf("i = %d - Impar\n", i);
		}
	};
    
	return 0;
}
