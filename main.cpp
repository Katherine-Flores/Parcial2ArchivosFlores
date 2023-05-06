#include <iostream>
#include <fstream>
#include <filesystem>
#include <windows.h>
#include <string>

using namespace std;

int main() {
    int opc;
    cout << "Bienvenido al Programa de Manejo de Archivos" << endl;
    do {
        cout << "------------------------------------------------------------------------" << endl;
        cout << "Elija una opcion a realizar" << endl;
        cout << "[1] Crear Archivos" << endl;
        cout << "[2] Buscar Archivo menos pesado" << endl;
        cout << "[0] Salir" << endl;
        cin >> opc;
        switch (opc) {
            case 1:
                cout << "Opcion seleccionada -> Crear Archivos" << endl;
                break;
            case 2:
                cout << "Opcion seleccionada -> Buscar Archivo menos pesado" << endl;
                break;
            case 0:
                cout << "Gracias por Utilizar el Programa" << endl;
                break;
            default:
                cout << "Opcion incorrecta, vuelva a intentarlo" << endl;
                break;
        }
    } while (opc != 0);
    return 0;
}

