#include <iostream>

using namespace std;

char opc;

int main() {
    do{
     int precio = 0;
     int cantdcarros = 0;
     int cont = 1;
     int precioT = 0;
     int precioM = 0; 
     
cout<<"ingrese el rango de precio de los carros : ";
cin>>rangdprecios;
cout<<"ingrese la cantidad de carros a comprar : ";
cin>>cantdcarros;

if(precio <= 50000){
    while(cont<=cantdcarros){
    cout<<"ingrese el precio del carro : ";
cin>>precio;

precioT = precioT + precio;

cont++;
    }
}if( precio >= 75000 && precio <= 145000){
while(cont<=cantdcarros){
cout<<"ingrese el precio del carro : ";
cin>>precio;

precioT = precioT + precio;

cont++; 
}
}if(precio>= 185000){
while(cont<=cantdcarros){
cout<<"ingrese el precio del carro : ";
cin>>precio;

precioT = precioT + precio;

cont++;
}

}
        
 cout<<"el precio total a pagar es : "<<precioT<<endl;       
        
        
        
        
cout<<"si desea volver a iniciar ingrese Y : ";
cin>>opc;
}while( opc== 'y' || opc == 'Y');
    

    return 0;
}
