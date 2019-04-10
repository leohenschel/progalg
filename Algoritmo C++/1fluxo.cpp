#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float a, perimetro;
	
	printf ("Digite o valor do lado");
	scanf ("%f", &a);
	
	perimetro= (4*a);
	
	printf ("O perimetro e: %f ", perimetro);
	
	
	return 0;
}
