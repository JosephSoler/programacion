#include <iostream>

using namespace std;

int main() {
    int totalDias, anos, meses, dias;

    cout << "Ingrese la cantidad de días: ";
    cin >> totalDias;

    anos = totalDias / 365;
    totalDias %= 365;

    meses = totalDias / 30;
    dias = totalDias % 30;

    cout << "Equivalente a: " << anos << " años, " << meses << " meses y " << dias << " días." << endl;

    return 0;
}

