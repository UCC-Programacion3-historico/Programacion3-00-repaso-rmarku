#include <iostream>
#include "Circulo.h"
#include "Cuadrado.h"
#include "Triangulo.h"
#include <cmath>

using namespace std;

int main() {

    Cuadrado c;

    cout << "Diagonal " << c.getDiagonal() << endl;

    c.setAlto(20);
    c.setAncho(20);

    if(c.getDiagonal() != (float) sqrt(20*20+20*20)){
        cout << "No Funciona la Diagonal" << endl;
    }
    c.setAlto(30);
    c.setAncho(30);

    if(c.getDiagonal() != (float) sqrt(30*30+30*30)){
        cout << "No Funciona la Diagonal" << endl;
    }

    cout << "Ejercicio 00/01\n" << endl;
    return 0;
}