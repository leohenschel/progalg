#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float vol, r;
	
	printf("\n Digite o raio da esfera: ");
	scanf("%f", &r);
	
	vol = (4 * 3.14 * pow(r, 3)) / 3;
	printf("O volume da esfera e: %f \n", vol);
	return 0;
}
