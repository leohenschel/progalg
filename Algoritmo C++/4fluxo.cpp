#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float a, b, m;
	
	printf ("Digite um valor para a variavel A/n ");
	scanf ("%f", &a);
	
	printf ("Digite um valor para a variavel B/n");
	scanf ("%f", &b);
	m=(a+b)/2;
	
	printf ("A media dos valor e: %f\n", m);
	
	return 0;
}
