#include <stdio.h>
int main() {
    char nombre[50];
    float sueldo_basico, bono = 0, descuento_afp, impuesto_rciva = 0, salario_neto;
    int antiguedad;
    printf("Ingrese el nombre del trabajador: ");
    scanf(" %[^\n]", nombre); 
    printf("Ingrese los años de antiguedad: ");
    scanf("%d", &antiguedad);
    printf("Ingrese el sueldo basico: ");
    scanf("%f", &sueldo_basico);

    if (antiguedad > 5) {
        bono = sueldo_basico * 0.10;
    }

    descuento_afp = (sueldo_basico + bono) * 0.1271;

    if (sueldo_basico + bono > 9500) {
        impuesto_rciva = (sueldo_basico + bono - 9500) * 0.13;
    }

    salario_neto = sueldo_basico + bono - descuento_afp - impuesto_rciva;

    printf("\nNombre del trabajador: %s\n", nombre);
    printf("Sueldo neto: %.2f Bs\n", salario_neto);

    return 0;
}
