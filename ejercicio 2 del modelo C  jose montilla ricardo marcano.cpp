#include <iostream>

using namespace std;

char opc;

int main() {
    do{
	
     int precio = 0; 
     int cantdcarros = 0;
     int cont = 1;
     int ventM = 0;
int precio50k=0;
int precio75ky145k=0;
int precio185k=0;

cout<<"ingrese la cantidad de carros que fueron comprados : ";
cin>>cantdcarros;

while(cont<=cantdcarros){/*aqui se ingresa el precio de los carros*/
cout<<"ingrese el precio del carro : ";
cin>>precio;


if(precio <= 50000){/*con cada if se agrupa el precio segun las reglas establecidas*/
	precio50k = precio50k + precio;
}
if( precio >= 75000 && precio <= 145000){
precio75ky145k = precio75ky145k + precio;
}if(precio>= 185000){
precio185k = precio185k + precio;
}
if(precio> ventM){/*aqui determinamos si el nuevo precio es mayor o menor que el anterior*/
	ventM = precio;
}

cont++;
}
cout<<"el precio de los carros con precios cercanos a 50k son  : "<<precio50k<<endl;
cout<<"el precio de los carros entre 75k y 145k a  son  : "<<precio75ky145k <<endl;
cout<<"el precio de los carros mayores a 185k son  : "<<precio185k <<endl;
cout<<"el precio mas alto fue : "<<ventM<<endl;

                
cout<<"si desea volver a iniciar ingrese Y : ";
cin>>opc;
}while( opc== 'y' || opc == 'Y');
    

    return 0;
}
