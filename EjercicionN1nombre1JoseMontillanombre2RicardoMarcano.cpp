#include <iostream>
using namespace std;

int main() {
    char repetir = 's';

    while (repetir == 's' || repetir == 'S') {
        cout << "Ingresa la cadena (solo letras mayusculas A-Z): ";

        int numero = 0;
        char letra;
        
        // Leer letra por letra
        letra = cin.get();
        while (letra != '\n') {
            if (letra >= 'A' && letra <= 'Z') {
                numero = numero * 26 + (letra - 'A');
            } else {
                cout << "Caracter invalido.\n";
                numero = 0;
                break;
            }
            letra = cin.get();
        }

        cout << "Numero en base 10: " << numero << "\n";
//repetir secuencia
        cout << "¿Deseas convertir otra cadena? (s/n): ";
        cin >> repetir;
        cin.ignore(); 
    }

    return 0;
}

