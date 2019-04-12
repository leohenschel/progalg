#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float seg, horas, minutos;
	
	printf ("Qual o valor em segundos? \n");
	scanf ("%f", &seg);
	
	minutos=(seg/60);
	printf ("O valor em minutos e %f \n", minutos);
	
	horas=(seg/3600);
	printf ("O valor em horas e %f \n", horas);
	return 0;
}
