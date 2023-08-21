#include <iostream>
using namespace std;

int main() {
    int n;
    int suma = 0;

    
    cout<< "Ingrese un número N: ";
    cin>>n;


    for (int i = 1; i <=n; ++i) {
        suma += i;
    }

   
    cout<<"La suma de los primeros " << n << " números naturales es: " <<suma<<endl;

    return 0;
}

