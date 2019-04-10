#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float r, area;
	
	printf ("Digite o valor do raio: ");
	scanf ("%f", &r);
	
	area=3.14*(r*r);
	
	printf("A area e: %f", area);
	return 0;
}
