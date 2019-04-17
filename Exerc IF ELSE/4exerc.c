#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float n1, n2;
	
	printf ("Digite um valor ");
	scanf ("%f", &n1);
	printf ("Digite um valor ");
	scanf ("%f", &n2);
	
	if (n1>n2) {
		printf ("O maior valor e %f ", n1);
		printf ("O menor valor e %f", n2);
	}
	else {
		printf ("O maior valor e %f ", n2);
		printf ("O menor valor e %f", n1);
	}
	return 0;
}
