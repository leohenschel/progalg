#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c;
	printf("\n Insira o valor de A ");
	scanf("%d", &a);
	printf("\n Insira o valor de B ");
	scanf("%d", &b);
	c = a;
	a = b;
	b = c;
	
	printf(" O novo valor de A e: %d", a);
	printf(" O novo valor de B e: %d ", b);
	return 0;
}
