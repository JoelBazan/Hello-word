#include <stdio.h>
#include <stdlib.h>
const int n = 5;

void Captura(int arreglo[]) {
	int ind;
	ind = 0;
	while (ind < n) {
		printf("Captura a[%d]: ", ind);
		scanf_s("%d", &arreglo[ind]);
		ind++;
	}
}
void Mostrar(int arre[]) {
	int indi;
	indi = 0;
	while (indi < n) {
		if (indi > 0)printf(", ");
		printf("%d", arre[indi]);
		indi++;
	}
}
	void(ordenar(int ar[])) {
		int indice, limite, pivote;
			indice = 0;
		limite = n - 1;
		while (limite > 0) {
			if (ar[indice] < ar[indice + 1]) {
				pivote = ar[indice + 1];
				ar[indice + 1] = ar[indice];
				ar[indice] = pivote;
			}
			indice++;
	{
		
		}
			limite--;
			indice = 0;
		}
	indice = 0;
	while (indice < n) {
		if (indice > 0) printf(",");
		printf("%d", ar[indice]);
		indice++;
	}
	}
	int main() {
		int a[n];
			Captura(a);
		printf("\nEl arreglo original es:");
		Mostrar(a);
		printf("\n");
		ordenar(a);
		printf("\nEl arreglo ordenado es:");
		Mostrar(a);
		printf("\n");
	}