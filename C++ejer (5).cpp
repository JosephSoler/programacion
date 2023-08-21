#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

int main() {
    const int filas = 3;
    const int columnas = 3;
    int matriz[filas][columnas];
    int matrizOrdenada[filas * columnas];

    
    srand(time(0));

    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            matriz[i][j] = rand() % 100;  
        }
    }

    
    cout << "Matriz:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    
    int k = 0;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            matrizOrdenada[k] = matriz[i][j];
            k++;
        }
    }

    for (int i = 0; i < filas * columnas - 1; ++i) {
        for (int j = 0; j < filas * columnas - i - 1; ++j) {
            if (matrizOrdenada[j] > matrizOrdenada[j + 1]) {
                int temp = matrizOrdenada[j];
                matrizOrdenada[j] = matrizOrdenada[j + 1];
                matrizOrdenada[j + 1] = temp;
            }
        }
    }

    k = 0;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            matriz[i][j] = matrizOrdenada[k];
            k++;
        }
    }

    
    cout << "La matriz ordenada:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
