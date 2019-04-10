#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a, b, area;
	
	printf ("Qual a base \n");
	scanf ("%f", &a);
	
	printf ("Qual a altura \n");
	scanf ("%f", &b);
	
	area=(a*b)/2;
	printf ("A area e \n %f", area);
	
	
	
	return 0;
}
