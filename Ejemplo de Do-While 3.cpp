#include<stdio.h>
#include<conio.h>

int main()
{
	int i, numero;
	i=1;
	do {
	printf("Digite un numero entre 1-20: ");
    scanf( "%i", &numero);

	}while ((numero<1) || (numero>20));

	return 0;
}