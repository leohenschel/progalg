#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float kg, multa;
	printf ("Quantos kg foi pescado? ");
	scanf ("%f", &kg);
	
	if (kg>50){
		multa=(kg-50)*4;
		printf ("O valor da multa e %f", multa);
	}
	else {
		printf ("Peso dentro do limite");
	}
	return 0;
}
