#include <iostream>
using namespace std;
int main()
{
    cout<<"Algoritmo para calcular áreas"<<endl;
    
    int op,baset,ladoc, lado1, lado2, ht, radio;
    double area, pi=3.1416;
    
    cout<<"1- Área de triángulo"<<endl;
    cout<<"2- Área de cuadrado"<<endl;
    cout<<"3- Área de rectángulo"<<endl;
    cout<<"4- Área de círculo"<<endl;
    cin>>op;
    
    switch (op)
    {
        case 1:
        cout<<"Área de triángulo"<<endl;
        cout<<"Escribe la base del triángulo"<<endl;
        cin>>baset;
        cout<<"Escribe la altura del triángulo"<<endl;
        cin>>ht;
        
        area=(baset*ht)/2;
        
        case 2:
        cout<<"Área de círculo"<<endl;
        cout<<"Escribe el lado del cuadrado"<<endl;
        cin>>ladoc;
        
        
        area=(ladoc*ladoc);
        
        case 3:
        cout<<"Área de rectángulo"<<endl;
        cout<<"Escribe el lado 1 del rectángulo"<<endl;
        cin>>lado1;
        cout<<"Escribe el lado 2 del rectángulo"<<endl;
        cin>>lado2;
        
        
        area=(lado1*lado2);
        
        case 4:
        cout<<"Área de círculo"<<endl;
        cout<<"Escribe el radio del círculo"<<endl;
        cin>>radio;
        
        
        area=(pi*radio*radio);
        
    }
    
        cout<<"El área es: "<<area;
        
        
    }
