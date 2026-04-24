#include <iostream>
using namespace std;
int main() {
    int num, suma = 0, contador = 0, mayores5 = 0;
    cout <<"--ANALISIS DE USO DIGITAL--" << endl;
    cout << "Ingrese el numero: ";
    cin >> num;
    while (num > 0) {
        int dig = num % 10;
        suma += dig;
        contador++;
        if (dig > 5)
            mayores5++;
        num /= 10;
    }
    cout << "Total de horas: " << suma << endl;
    cout << "Apps con mas de 5 horas: " << mayores5 << endl;
    cout << "Promedio: " << (float)suma / contador << endl;
    return 0;
}