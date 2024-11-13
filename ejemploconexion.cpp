// ejemploconexion.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "funciones.h"  // Incluir el archivo de cabecera

using namespace std;

int main() {
    // Llamar a las funciones definidas en funciones.cpp
    saludar();  // Llama a la función saludar

    int resultado = sumar(5, 3);  // Llama a la función sumar
    cout << "El resultado de la suma es: " << resultado << endl;

    return 0;
}