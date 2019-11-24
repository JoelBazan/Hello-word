#include<stdlib.h>
#include <stdio.h>
const int n = 5;
int main()
{
	int a[n], indice, limite, pivote;
	indice = 0;
	while (indice < n) {
		printf("Captura a [%d]; ", indice);
		scanf_s("%d", &a[indice]);
		indice++;
	}
	printf("\n El arreglo original es: ");
	indice = 0;
	while (indice < n) {
		if (indice > 0)printf(", ");
		printf("%d", a[indice]);
		indice++;
	}
	printf("\n");
	indice = 0;
	limite = n-1;
	while (limite > 0) {
		while (indice < limite) {
			if (a[indice] < a[indice] + 1) {
				pivote = a[indice+1];
				a[indice + 1] = a[indice];
				a[indice] = pivote;
			}
			indice++;
		}
		limite = limite - 1;
		indice = 0;
	}
	printf("\n El arreglo ordenado es:");
	indice = 0;
	while (indice < n) {
		if (indice > 0)printf(",");
		printf("%d", a[indice]);
		indice++;
	}
	printf("\n");
}