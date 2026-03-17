#include <stdio.h>
int main () {
float edad, semestre, numero;
char nombre [20], carrera[20];
printf ("Ingrese el nombre del estudiante: ");
scanf ("%s", nombre);
printf ("Ingrese la edad del estudiante: ");
scanf ("%f", &edad);
printf ("Ingrese la carrera del estudiante: ");
scanf ("%s", carrera);
printf ("Ingrese el semestre del estudiante: ");
scanf ("%f", &semestre);
printf ("Ingrese el numero de celular: ");
scanf ("%f", &numero);
printf ("Datos Personales: \n");
printf ("Nombre: %s\n", nombre);
printf ("Edad: %.0f\n", edad);
printf("Carrera: %s\n", carrera);
printf ("Semestre: %.0f\n", semestre);
printf ("Numero: %.0f\n", numero);
return 0;
}
