#include <iostream>
using namespace std;

int main() {
    char repetir;

    do {
        int inicioNum, finNum;
        char inicioLetra, finLetra;

     //solicitud de rango  
        cout << "Ingrese el numero inicial del codigo: "<<endl;
        cin >> inicioNum;
        cout << "Ingrese el numero final del codigo: "<<endl;
        cin >> finNum;

        cout << "Ingrese la letra inicial del codigo (mayuscula): "<<endl;
        cin >> inicioLetra;
        cout << "Ingrese la letra final del codigo (mayuscula): "<<endl;
        cin >> finLetra;

     
        cout << "Lista de codigos generados:"<<endl;
        for (int i = inicioNum; i <= finNum; i++) {
            for (char letra = inicioLetra; letra <= finLetra; letra++) {
                cout << letra << i << endl;
            }
        }

      
        cout << "¿Desea generar otra lista? (s/n): "<<endl;
        cin >> repetir;

    } while (repetir == 's' || repetir == 'S');

    return 0;
}

