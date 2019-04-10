#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float b, a, resultado;
	
	printf ("Primeiro numero\n");
	scanf ("%f", &a);
	printf ("Segundo numero\n");
	scanf ("%f", &b);
	
	resultado=(b*a);
	printf ("Resultado (a*b) e: %f \n \a)", resultado);
	
	return 0;
}
