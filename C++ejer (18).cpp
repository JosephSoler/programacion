#include <iostream>
using namespace std;

int calcularSumaNaturales(int limite) {
    int suma = 0;

    for (int i = 1; i <= limite; i++) {
        suma += i;
    }

    return suma;
}

int main() {
    int limite;

    cout << "Ingrese el numero limite: ";
    cin >> limite;

    int suma = calcularSumaNaturales(limite);

    cout << "La suma de los " << limite << " primeros numeros naturales es: " << suma << endl;

    return 0;
}

