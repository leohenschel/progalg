#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int a, b, c, delta, x1, x2;
	
	printf("\n Digite o valor de A: ");
	scanf("%d", &a);
	printf("\n Digite o valor de B: ");
	scanf("%d", &b);
	printf("\n Digite o valor de C: ");
	scanf("%d", &c);
	
	delta = pow(b,2) - (4 * a) * c;
	printf("\n O valor de delta e: %d", delta);
	x1= (-b + sqrt(delta)) / 2 * a;
	x2= (-b - sqrt(delta)) / 2 * a;
	printf("\n O valor de X1 e: %d", x1);
	printf("\n O valor de X2 e: %d \n", x2);
	return 0;
}
