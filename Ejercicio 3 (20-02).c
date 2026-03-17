#include <stdio.h>
int main() {
float dia1, dia2, dia3, dia4, dia5, dia6, dia7, suma;
printf ("Ingrese las ventas del primer dia: ");
scanf("%f", &dia1);
printf ("Ingrese las ventas del segundo dia: ");
scanf("%f", &dia2);
printf ("Ingrese las ventas del tercer dia: ");
scanf ("%f", &dia3);
printf ("Ingrese las ventas del cuarto dia: ");
scanf ("%f", &dia4);
printf ("Ingrese las ventas del quinto dia: ");
scanf("%f", &dia5);
printf ("Ingrese las ventas del sexto dia: ");
scanf("%f", &dia6);
printf ("Ingrese las ventas del septimo dia: ");
scanf ("%f", &dia7);
suma = dia1 + dia2 + dia3 +dia4 + dia5 + dia6 + dia7;
printf("El resultado de la suma es: %.2f\n", suma);
}
