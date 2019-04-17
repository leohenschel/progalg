#include <stdio.h>
#include <stdlib.h>
#include


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a, b, c, x1, x2, delta;
	
	printf ("Escreva o valor de a:");
	scanf ("%f", &a);
	printf ("Escreva o valor de b:");
	scanf ("%f", &b);
	printf ("Escreva o valor de c:");
	scanf ("%f", &c);
	
	delta = pow(b,2) - (4 * a) * c;
	printf("\n O valor de delta e: %f", delta);
	x1= (-b + sqrt(delta)) / 2 * a;
	x2= (-b - sqrt(delta)) / 2 * a;
	printf("\n O valor de X1 e: %f", x1);
	printf("\n O valor de X2 e: %f ", x2);
	return 0;
}
