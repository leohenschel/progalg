#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
float n1, n2, n3, n4, md;
printf ("Digite a primeira nota: ");
scanf ("%f",&n1);
printf ("Digite a segunda nota: ");
scanf ("%f",&n2);
printf ("Digite a terceira nota: ");
scanf("%f", &n3);
printf ("Digite a quarta nota: ");
scanf ("%f", &n4);
md=(n1+n2+n3+n4)/4;
if (md>=7){
	printf("aluno alcancou a media: %.4f \n", md);
	printf ("aprovado");
	}
else {
	printf("aluno nao alcancou a media: %.4f \n", md);
	printf ("reprovado");
	    }
 system("PAUSE");
 return 0;
}

