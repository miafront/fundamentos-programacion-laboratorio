#include <stdio.h>
int main (){
	float area, volumen, radio, altura;
	printf ("\n        EL CILINDRO   \n");
	printf ("Ingrese el radio del cilindro: ");
	scanf ("%f", &radio);
	printf ("Ingrese la altura del cilindro: ");
	scanf ("%f", &altura);
	area = 2 * 3.1416 * radio * altura;
	volumen = 3.1416 * radio * radio * altura;
	printf ("El area lateral del cilindro es: %.2f\n", area);
	printf ("El volumen del cilindro es: %.2f\n", volumen);

	return 0;
	
}
