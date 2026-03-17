#include <stdio.h>
int main(){
char nombre[20];
float cantidad, total;
printf ("Ingrese el nombre del cliente: ");
scanf ("%s", nombre);
printf ("Cantidad de productos comprados: ");
scanf ("%f", &cantidad);
total= cantidad * 8;
printf ("El total a pagar es: %.0f\n", total);
}
