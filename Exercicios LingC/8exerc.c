#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float res, valorx, valorn, result;
	
	printf ("Digite um valor: \n");
	scanf ("%f", &valorx);
	
	printf ("Digite um outro valor: \n");
	scanf ("%f", &valorn);
	
	res=(valorx*valorn);
	res=res*res;
	printf ("O resultado e: %f", res);
	return 0;
}
