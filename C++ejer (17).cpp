#include <iostream>
using namespace std;

int invertirNumero(int numero) {
    int numeroInvertido = 0;

    while (numero > 0) {
        int cifra = numero % 10;
        numeroInvertido = numeroInvertido * 10 + cifra;
        numero /= 10;
    }

    return numeroInvertido;
}

int main() {
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    int numeroInvertido = invertirNumero(numero);

    cout << "El numero invertido es: " << numeroInvertido << endl;

    return 0;
}

