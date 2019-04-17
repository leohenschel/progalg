#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char s;
	float alt, homem, mulher;
	
	printf ("Digite seu sexo M/F ");
	scanf ("%c", &s);
	
	printf ("Digte sua altura");
	scanf ("%f", &alt);
	
	homem=(72.7*alt)-58;
	mulher=(62.1*alt)-44.7;
	
	if (s=='m') {
	homem=(72.7*alt)-58;
	printf ("Seu peso ideal e %f", homem);	
	}
	else {
	mulher=(62.1*alt)-44.7;
	printf ("Seu peso ideal e %f", mulher);
	
	}
	return 0;
}
