#include <iostream>

using namespace std;

int main()
{
    int monto, cuotas;
    double interesmensual,totalintereses;
    
    cout<<"Ingrese el  monto del préstamo que desea adquirir:"<<endl;
    cin>>monto;
    
    cout<<"Ingrese la cantidad de cuotas en la que desea pagar el préstamo"<<endl;
    cin>>cuotas;
    

    
    interesmensual=(monto*2)/100;
    
    cout<<"El interes mensual es de:"<<interesmensual<<endl;
    
    totalintereses=interesmensual*cuotas;
    
    cout<<"El total a pagar de intereses es de:"<<totalintereses;
    

    
    
    

    return 0;
}
