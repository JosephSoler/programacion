#include <iostream>
#include <vector>
#include <cstdlib>  // Para la función rand()
#include <ctime>    // Para la función time()

using namespace std;

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    const int tamano = 10;  // Tamaño del vector
    vector<int> numeros(tamano);

    // Inicializar la semilla para generar números aleatorios
    srand(time(0));

    // Llenar el vector con números aleatorios y contar los primos
    int contadorPrimos = 0;
    for (int i = 0; i < tamano; i++) {
        numeros[i] = rand() % 100;  // Generar número aleatorio entre 0 y 99

        if (esPrimo(numeros[i])) {
            contadorPrimos++;
        }
    }

    // Mostrar el vector
    cout << "Vector: ";
    for (int i = 0; i < tamano; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    // Mostrar el resultado
    cout << "Cantidad de números primos en el vector: " << contadorPrimos << endl;

    return 0;
}

