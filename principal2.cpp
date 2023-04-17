#include <iostream>
#include "funciones2.cpp"
using namespace std;

int main() {
    int numero;
    cout << "Ingresa un numero: ";
    cin >> numero;
    obtener_tabla_multiplicacion(numero);
    return 0;
}
