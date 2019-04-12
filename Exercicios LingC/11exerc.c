#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float cent, metros, dec, mili;
	
	printf ("Qual o valor em cm?");
	scanf ("%f", &cent);
	
	metros=(cent/100);
	printf ("O valor em metro e %f \n", metros);
	
	dec=(cent/10);
	printf ("O valor em decimetros e %f \n", dec);
	
	mili=(cent*10);
	printf ("O valor em milimetros e %f \n", mili);
	
	return 0;
}
