#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1, n2, dife;
	printf ("Digite um valor ");
	scanf ("%d", &n1);
	printf ("Digite um valor ");
	scanf ("%d", &n2);
	
	if (n1>n2) {
		dife=n1-n2;
	printf ("A diferenca e %d ", dife);
	}
	else {
	dife=n2-n1;
	printf ("A diferenca e %d", dife);	
	}
	return 0;
}
