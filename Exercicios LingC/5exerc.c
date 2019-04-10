#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float horast, horasnom, bonuspfilho, valorh, horastrab, valorbruto, valorliquido;
	
	printf ("Quantas horas foram trabalhadas no dia? \n");
	scanf ("%f", &horast);
	
	printf ("Quantas horas foram trabalhadas no mes?\n");
	scanf ("%f", &horasnom);
	
	printf ("Quantos filhos voce tem? \n");
	scanf ("%f", &bonuspfilho);
	bonuspfilho=300;
	
	valorbruto=(horast*horasnom);
	valorliquido=(horast*horasnom)+bonuspfilho;
	
	printf ("O valor bruto e %f \n", valorbruto);
	printf ("O valor liquido e %f \n", valorliquido);
	return 0;
}
