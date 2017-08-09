#include "Geometria.h"

int Geometria::getAlto() const {
    return Alto;
}

void Geometria::setAlto(int Alto) {
    Geometria::Alto = Alto;
}

int Geometria::getAncho() const {
    return Ancho;
}

void Geometria::setAncho(int Ancho) {
    Geometria::Ancho = Ancho;
}

Geometria::Geometria(int Al, int Anc) {
    Alto = Al;
    Ancho = Anc;
}