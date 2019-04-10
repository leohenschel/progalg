#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float nasc, anoa, idadehj, id2050;
	
	printf ("Digite o ano de seu nascimento: \n");
	scanf ("%f", &nasc);
	
	printf ("Digite o ano atual: \n");
	scanf ("%f", &anoa);
	idadehj=(anoa-nasc);
	
	printf ("A idade atual e %f \n", idadehj);
	id2050=(2050-nasc);
	printf ("A idade que voce tera em 2050 sera: %f \n", id2050);
	
	
	
	return 0;
}
