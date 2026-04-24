#include <iostream>
using namespace std;
int main() {
    int intentos = 0;
    cout <<"--VALIDACION DE PIN CON NUMERO DE INTENTOS--" << endl;
    while (intentos < 3) {
        int pin, digitos = 0;
        bool valido = true;
        int anterior = -1;
        cout << "Ingrese el PIN: ";
        cin >> pin;
        int aux = pin;
        while (aux > 0) {
            int dig = aux % 10;
            if (dig == anterior)
                valido = false;
            anterior = dig;
            digitos++;
            aux /= 10;
        }
        if (digitos == 4 && valido) {
            cout << "PIN valido" << endl;
            return 0;
        } else {
            cout << "PIN invalido" << endl;
        }
        intentos++;
    }
    cout << "Cuenta bloqueada" << endl;
    return 0;
}