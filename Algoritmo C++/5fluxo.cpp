#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float peso, altura, imc;
	
	printf ("Digite o seu peso\n");
	scanf ("%f", &peso);
	
	printf ("Digite sua altura\n");
	scanf ("%f", &altura);
	
	imc=peso/(altura*altura);
	
	printf ("Seu imc e igual a: %2.2f\n", imc);
	printf ("Tecle enter para sair do DOS\n");
	return 0;
}
