#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int id, nasc;
	
	printf ("Digite o ano de seu nascimento");
	scanf ("%d", &nasc);
	id=2019-nasc;
	if (id>=18){
		printf ("Atingiu a maioridade");
	}
	else {
		printf ("Nao atingiu");
	}
	return 0;
}
