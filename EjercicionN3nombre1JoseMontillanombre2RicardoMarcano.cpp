#include <iostream>
#include <string>
using namespace std;

int main() {
    int cantidad;
    string nombre, nombreMasAlto, nombreMasBajo;
    float altura, sumaAlturas, alturaMasAlta, alturaMasBaja;
    char repetir;
    system("color 0A");

    do {
        sumaAlturas = 0;
        alturaMasAlta = 0;
        alturaMasBaja = 0;
//solicitud del listado
        cout << "¿Cuántos deportistas deseas ingresar? ";
        cin >> cantidad;

        for (int i = 1; i <= cantidad; i++) {
            cout << "Nombre del deportista n" << i << ": ";
            cin >> nombre;
            cout << "Altura de " << nombre << " : ";
            cin >> altura;

            cout << nombre << " mide " << altura << " metros" << endl;

            sumaAlturas += altura;

            if (i == 1) {
                alturaMasAlta = altura;
                alturaMasBaja = altura;
                nombreMasAlto = nombre;
                nombreMasBajo = nombre;
            } else {
                if (altura > alturaMasAlta) {
                    alturaMasAlta = altura;
                    nombreMasAlto = nombre;
                }
                if (altura < alturaMasBaja) {
                    alturaMasBaja = altura;
                    nombreMasBajo = nombre;
                }
            }
        }
//salida de resultados
        cout << "Resultados: ";
        cout << "El deportista mas alto es " << nombreMasAlto << " con " << alturaMasAlta << " metros" << endl;
        cout << "El deportista mas bajo es " << nombreMasBajo << " con " << alturaMasBaja << " metros" << endl;
        cout << "El promedio de altura es: " << (sumaAlturas / cantidad) << " metros" << endl;
//repetir secuencia
        cout << "\n¿Deseas ingresar otro listado? (s/n): ";
        cin >> repetir;

    } while (repetir == 's' || repetir == 'S');

    
}

