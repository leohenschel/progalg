#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float n1, n2, soma;
	
	printf ("Escreva um valor: ");
	scanf ("%f", &n1);
	printf ("Escreva um valor: ");
	scanf ("%f", &n2);
	soma=(n1+n2);
	
	if (n1+n2>25){
		printf ("A soma dos numeros e maior que 25");
	}
	else {
	printf ("%f", soma);
	}
	return 0;
}
