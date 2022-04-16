#include <iostream>
#include <memory>
#include "Date.h"
using namespace std;

int main() {
	int opc = 0, año = 0;
    int mes = 0;
    int dia = 0;
    int anio = 0;

    cout << "ingresa el mes: ";
    cin >> mes;
    cout << "ingresa el dia: ";
    cin >> dia;
    cout << "ingresa el año: ";
    cin >> anio;
    Date a(mes, dia, anio);


    while (opc != 7) {
        cout << "\n  1- Sumar dia\n  2- Sumar mes\n  3- Sumar año" << endl;
        cout << "  4- Restar dia\n  5- Restar mes\n  6- Restar año\n  7- Salir" << endl;
        cin >> opc;
        switch (opc) {
        default:
            break;
        case 1:
            a.incrementDay();
            std::cout << a << std::endl;
            break;
        case 2:
            a.incrementMes();
            std::cout << a << std::endl;
            break;
        case 3:
            a.incrementYear();
            std::cout << a << std::endl;
            break;
        case 4:
            a.DecrementDay();
            std::cout << a << std::endl;
            break;
        case 5:
            a.DecrementMes();
            std::cout << a << std::endl;
            break;
        case 6:
            a.DecrementYear();
            std::cout << a << std::endl;
            break;
        }
    }
}