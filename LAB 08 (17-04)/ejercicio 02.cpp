#include <iostream>
using namespace std;
int main() {
	int num, mayor = 0, menor = 9, repeticiones = 0;
	cout <<"--DETECCION DE CONSUMO MAXIMO--" << endl;
	cout << "Ingrese el numero: ";
	cin >> num;
	int aux = num;
	while (aux > 0) {
		int dig = aux % 10;
		if (dig > mayor)
			mayor = dig;
		if (dig < menor)
			menor = dig;
		aux /= 10;
	}
	aux = num;
	while (aux > 0) {
		if (aux % 10 == mayor)
			repeticiones++;
		aux /= 10;
	}
	cout << "Mayor consumo: " << mayor << endl;
	cout << "Menor consumo: " << menor << endl;
	cout << "Veces que se repite el mayor: " << repeticiones << endl;
	return 0;
}