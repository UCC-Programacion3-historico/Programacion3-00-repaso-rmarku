#include <cmath>
#include "Cuadrado.h"


float Cuadrado::getDiagonal() {
    return sqrt(Alto*Alto+Ancho*Ancho);

}

float Cuadrado::getSuperficie() {
    return Alto * Ancho;
}

float Cuadrado::getPerimetro() {

    return Alto * 2 + 2 * Ancho;
}