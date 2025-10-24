#include <iostream>

using namespace std;

int main() {

int precio = 0;
int precioT = 0;
int cantdropa = 0;
int cont = 1;

cout<<"cual es la cantidad de ropa que se desea comprar? : ";
cin>>cantdropa;

while(cantdropa <= 0){
    cout<<"no es posible que la cantidad de ropa sea 0, ingrese la cantidad de ropa real : ";
    cin>>cantdropa;
}

while(cont <= cantdropa){
    cout<<"ingrese el precio de la prenda de ropa : ";
    cin>>precio;
    
    precioT = precio + precioT;
    
    cont++;
}

cout<<"El precio por toda la ropa es : "<<precioT<<endl;



    return 0;
}
