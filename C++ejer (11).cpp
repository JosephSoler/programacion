#include <iostream>
using namespace std;

int main() {
    int valores[10];
    int positivos = 0;
    int negativos = 0;
    int nulos = 0;

    cout << "Ingrese 10 valores separados por espacios: ";

    
    for (int i = 0; i < 10; i++) {
        cin >> valores[i];

        if (valores[i] > 0) {
            positivos++;
        } else if (valores[i] < 0) {
            negativos++;
        } else {
            nulos++;
        }
    }

    // Mostrar los resultados
    cout << "Cantidad de valores positivos: " << positivos << endl;
    cout << "Cantidad de valores negativos: " << negativos << endl;
    cout << "Cantidad de valores nulos: " << nulos << endl;

    return 0;
}

