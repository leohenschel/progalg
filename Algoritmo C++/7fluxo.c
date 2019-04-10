#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float celsius, kelvin;
	
	printf ("Digite a temperatura em Celsius\n");
	scanf ("%f", &celsius);
	
	kelvin=celsius+273.15;
	
	printf ("O valor em kelvin e %2.2f\n", kelvin);
	printf ("Tecle enter ou esc para sair do dos\n");
	
	
	return 0;
}
