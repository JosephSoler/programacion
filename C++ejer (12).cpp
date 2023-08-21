#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

int main() {
    
    srand(static_cast<unsigned int>(time(0)));

    
    vector<int> numeros(10);

    
    for (int i = 0; i < 10; i++) {
        numeros[i] = rand() % 100 + 1; 
    }

    
    sort(numeros.begin(), numeros.end());

    
    cout << "Elementos del vector ordenados de menor a mayor: ";
    for (int i = 0; i < 10; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    
    int mas_bajo = numeros[0];
    int mas_alto = numeros[numeros.size() - 1];

   
    cout << "Numero mas bajo: " << mas_bajo << endl;
    cout << "Numero mas alto: " << mas_alto << endl;

   
    int suma = 0;
    for (int i = 0; i < 10; i++) {
        suma += numeros[i];
    }
    double promedio = static_cast<double>(suma) / numeros.size();

   
    cout << "Promedio de los numeros: " << promedio << endl;

    return 0;
}

