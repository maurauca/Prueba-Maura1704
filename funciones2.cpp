// 2. Leer un numero y obtener la tabla de multiplicación de dicho número.
#include <iostream>
using namespace std;

void obtener_tabla_multiplicacion(int numero);

void obtener_tabla_multiplicacion(int numero){
    for(int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }
}