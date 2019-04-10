#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float n1, n2, n3, n4, media;
	
	printf ("Digite a nota do 1 bimestre \n");
	scanf ("%f", &n1);
	
	printf ("Digite a nota do 2 bimestre \n");
	scanf ("%f", &n2);
	
	printf ("Digite a nota do 3 bimestre \n");
	scanf ("%f", &n3);
	
	printf ("Digite a nota do 4 bimestre \n");
	scanf ("%f", &n4);
	
	media=(n1+n2+n3+n4)/4;
	printf ("A media do aluno no ano e %f \n", media);
	return 0;
}
