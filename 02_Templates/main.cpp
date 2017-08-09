#include <iostream>
#include <string>
#include "Calculadora.h"

using namespace std;

int main() {

    Calculadora<int> calInt;
    Calculadora<char> calchar;
    Calculadora<float> calfloat;
    Calculadora<string> calstring;

    // Calculadora de Ints
    calInt.setA(4);
    calInt.setB(5);

    cout << calInt.sumar() << endl;
    cout << calInt.dividir() << endl << endl;

    // Calculadora de chars
    calchar.setA(4);
    calchar.setB(5);

    cout << calchar.sumar() << endl;
    cout << calchar.dividir() << endl << endl;

    // Calculadora de float
    calfloat.setA(4);
    calfloat.setB(5);

    cout << calfloat.sumar() << endl;
    cout << calfloat.dividir() << endl << endl;

    // Calculadora de string
    calstring.setA("Hola ");
    calstring.setB("mundo");

    cout << calstring.sumar() << endl;

    //cout << "Ejercicio 00/02\n" << endl;
    return 0;
}