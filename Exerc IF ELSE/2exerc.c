#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	
	printf ("Digite o valor do numero inteiro: ");
	scanf ("%d", &num);
	
	if (num%2 == 0) { 
	printf ("O numero e par ");
	}
	else {
	printf ("O numero e impar ");
	}
	return 0;
}
