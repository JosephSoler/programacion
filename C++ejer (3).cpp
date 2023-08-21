#include <iostream>
using namespace std;

int main()
{
    int num, numi;

    cout << "Ingrese un número: ";
    cin >> num;

    while (num>0) 
    {
        int digito = num % 10;
        numi = numi * 10 + digito;
        num=num / 10;
    }

    cout << "El número invertido es: " << numi << endl;

    return 0;
}
