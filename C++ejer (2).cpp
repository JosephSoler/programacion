
#include <iostream>

using namespace std;

int main(){

    int n;
    cout<<"Ingrese el número entre 1 a 12 para mostrar la tabla de multiplicar de dicho número: "<<endl;
    cin>>n;
    cout<<endl;
    
    
    for(int i=1; i<=12; i++){
        cout<<n<<" x " <<i<<" = "<<n*i<<endl;
        
    }
    
    
    
}
