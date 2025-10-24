#include<iostream>
using namespace std;

int main(){
    system("color 0A");
    int numero, suma=0;
    char opcion;

    do {
        

        //solicitud del numero
        cout << "Ingrese un numero: ";
        cin >> numero;

        for(int i = 1; i < numero; i++){
            if(numero % i == 0){
                suma += i;
            }
        }

        if(suma == numero){
            cout<< "El numero " << numero << " es perfecto" << endl;
        } else {
            cout<<"El numero " << numero << " no es perfecto" << endl;
        }

       //repetir secuencia
        cout<<"Desea verificar otro numero? (s/n): "<<endl;
        cin>>opcion;

    } while(opcion == 's' || opcion == 'S');

  
    return 0;
}

	
