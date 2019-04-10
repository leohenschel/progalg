#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float a, b, soma;
	
	printf ("Digite os valores: ");
	scanf ("%f %f", &a, &b);
	
	soma=a+b;
	
	printf ("A soma e: %f ", soma);
	
	return 0;
}
