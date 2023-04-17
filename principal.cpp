#include <iostream>
#include "funciones.cpp"
using namespace std;

void preguntas(int talla, int ano);
int edad(int talla, int ano);

int main()
{
    int talla, ano, edadPersona;
    talla = 0;
    ano = 0;
    
    preguntas(talla, ano);
    edadPersona = edad(talla, ano);
    cout << "Tu edad es: " << edadPersona << endl;
    return 0;
}
