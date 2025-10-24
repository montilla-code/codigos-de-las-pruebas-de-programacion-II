#include <iostream>
using namespace std;

int main() {
    int a, b, i, j;
    char opcion;
    system("color 0A");

    do {
    	//solicitud de rango
        cout << "Ingrese el inicio del rango: "<<endl;
        cin >>a;
        cout << "Ingrese el fin del rango: "<<endl;
        cin >>b;

        cout << "Pares: "<<endl;
        i = a;
        while (i <= b) {
            if (i % 2 == 0) {
                cout << i << " "<<endl;
            }
            i++;
        }

        cout << "Primos: "<<endl;
        i = a;
        while (i <= b) {
            if (i > 1) {
                j = 2;
                while (j < i && i % j != 0) {
                    j++;
                }
                if (j == i) {
                    cout << i << " "<<endl;
                }
            }
            i++;
        }
//repetir secuencia
        cout << " Desea repetir? (s/n): "<<endl;
        cin >> opcion;
        cout << " "<<endl;

    } while (opcion == 's' || opcion == 'S');

    return 0;
}

