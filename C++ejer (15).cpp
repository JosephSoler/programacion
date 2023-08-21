#include <iostream>
using namespace std;

bool esVocal(char letra) {
	
    // Convertir la letra a minúscula para facilitar la comparación
    
    letra = tolower(letra);

    // Verificar si la letra es una vocal
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        return true;
    } else {
        return false;
    }
}

int main() {
    char letra;

    cout << "Ingrese una letra del alfabeto: ";
    cin >> letra;

    // Verificar si la letra es vocal o consonante
    if (esVocal(letra)) {
        cout << "La letra es una vocal. " << endl;
    } else {
        cout << "La letra es una consonante. " << endl;
    }

    return 0;
}

