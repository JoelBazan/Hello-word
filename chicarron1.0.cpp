

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c;
	float x1, x2;
	printf("Capure a: ");
	scanf_s("%f", &a);
	printf("Capturar b:");
	scanf_s("%f", &b);
	printf("Capture c:");
	scanf_s("%f", &c);
	if (b * b >= 4 * a * c) {
		x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
			x2 =(-b - sqrt(b * b - 4 * a * c)) / (2 * a);
		printf("Las raices del sistema: %f,5.2f", x1, x2);
	}
	else {
		printf("El valor dado no es real");
	}
}
