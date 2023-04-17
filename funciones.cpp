/*1. Adivinar la edad de una persona para esto siga los siguientes pasos:
1) Toma la talla de tus zapatos (no tallas intermedias, sólo números enteros).
2) Multiplica por 5.
3) Suma 50.
4) Multiplica por 20.
5) Suma 1015.
6) Réstale el año en el que naciste.
Los primeros dígitos son la talla de tus zapatos y los últimos dos dígitos son tu edad.*/

#include <iostream>
using namespace std;

void preguntas(int talla, int ano);
int edad(int talla, int ano);

void preguntas(int talla, int ano){
    cout << "Que talla de zapato calzas? (Si es un numero 1/2 redondealo): \n";
    cin >> talla;
    cout << "¿En que ano naciste?";
    cin >> ano;
}

int edad(int talla, int ano){
    int edad = (talla * 5 + 50) * 20 + 1015 - ano;
    return edad;
}
