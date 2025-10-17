#include <iostream>

using namespace std;

/*realizar un programa que permita convertir de metros a decimetros, centimetros, hectometros, kilometro y decametros, tambien debe permitir que se repita el calculo si el usuario
lo desea*/

int main() {

float metros=0;
char opc;
char calculo;
float decimetros=0;
float centimetros=0;
float hectometros=0;
float kilometros=0;
float decametros=0;


do{
    cout<<"\nIngrese el tipo de calculo (a = decimetros, b = centimetros,  c = hectometros,  d = kilometros,  e = decametros ) : ";
    cin>>calculo;
    
    metros=0;
    
    switch(calculo){
        
        case'a':
    cout<<"\nIngrese la cantidad de metros que desea transformar : ";
    cin>>metros;
        decimetros = metros * 10;
        cout<<"\nEl cambio de metros a decimetros : "<<decimetros<<endl;
        break;
        
    case'b':
    cout<<"\nIngrese la cantidad de metros que desea transformar : ";
    cin>>metros;
        centimetros = metros * 100;
        cout<<"\nEl cambio de metros a centimetros : "<<centimetros<<endl;
        break;
    
    case'c':
    cout<<"\nIngrese la cantidad de metros que desea transformar : ";
    cin>>metros;
        hectometros = metros/100;
        cout<<"\nEl cambio de metros a hectometros : "<<hectometros<<endl;
        break;
        
    case'd':
    cout<<"\nIngrese la cantidad de metros que desea transformar : ";
    cin>>metros;
        kilometros = metros/1000;
        cout<<"\nEl cambio de metros a kilometros : "<<kilometros<<endl;
        break;
        
    case'e':
    cout<<"\nIngrese la cantidad de metros que desea transformar : ";
    cin>>metros;
    decametros = metros/10;
        cout<<"\nEl cambio de metros a decametros : "<<decametros<<endl;
        break;
    
    }
    cout<<"\nDesea continuar ingrese Y, si no es el caso ingrese cualquier letra :";
    cin>>opc;
}while(opc == 'y' || opc == 'Y');
    return 0;
}
