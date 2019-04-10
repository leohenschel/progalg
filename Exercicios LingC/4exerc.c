#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float poupanca, juros, meses3;
	
	printf ("Quantia depositada:\n");
	scanf ("%f", &poupanca);
	
	printf ("Quanto rende na poupanca? \n");
	juros=1;
	scanf ("%f", &juros);
	meses3=poupanca+(poupanca/100)*juros;
	meses3=meses3+(meses3/100)*juros;
	meses3=meses3+(meses3/100)*juros;
	
	printf ("O total em 3 meses sera R$ %f \n", meses3);
	return 0;
}
