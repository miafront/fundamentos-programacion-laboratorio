#include <stdio.h>

int main() {
    float lab1, lab2, lab3, examen, proyecto;
    float nota_final;
    printf("Ingrese la nota de la practica de laboratorio 1: ");
    scanf("%f", &lab1);
    printf("Ingrese la nota de la practica de laboratorio 2: ");
    scanf("%f", &lab2);
    printf("Ingrese la nota de la practica de laboratorio 3: ");
    scanf("%f", &lab3);
    printf("Ingrese la nota del examen teorico: ");
    scanf("%f", &examen);
    printf("Ingrese la nota del proyecto final: ");
    scanf("%f", &proyecto);
    nota_final = lab1 * 0.15 + lab2 * 0.15 + lab3 * 0.15
                 + examen * 0.35 + proyecto * 0.20;
    printf("La nota final ponderada es: %.2f\n", nota_final);

    return 0;
}
