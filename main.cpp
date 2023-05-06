#include <iostream>
#include <fstream>
#include <filesystem>
#include <windows.h>
#include <string>

void crearArchivos(int cantidad);

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
                int cantidad;
                cout << "Ingrese la cantidad de archivos que desea crear" << endl;
                cin >> cantidad;
                crearArchivos(cantidad);
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

void crearArchivos(int cantidad){
    string nombreArchivo = "documento";
    if (cantidad % 2 == 0){
        cout << "Cantidad de Archivos par" << endl;
        for (int i = 0; i < cantidad; ++i) {
            ofstream file;
            file.open("C:/Users/kathe/Documents/par/" + nombreArchivo + to_string(i + 1) + ".txt");

            file.close();
        }
        cout << cantidad << " Archivos creados con Exito" << endl;
    }else{
        cout << "Cantidad de Archivos impar" << endl;
        for (int i = 0; i < cantidad; ++i) {
            ofstream file;
            file.open("C:/Users/kathe/Desktop/impar/" + nombreArchivo + to_string(i + 1) + ".txt");

            file.close();
        }
        cout << cantidad << " Archivos creados con Exito" << endl;
    }
}

