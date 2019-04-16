#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float vel, temp, dist, li;
	printf("\n Insira o tempo gasto na viagem em horas: ");
	scanf("%f", &temp);
	printf("\n Insira a velociade media em km/h: ");
	scanf("%f", &vel);
	dist = temp * vel;
	li = dist / 12;
	
	printf(" A distancia percorrida foi: %f", dist);
	printf(" A quantidade de litros gasta foi: %f ", li);
	return 0;
}
