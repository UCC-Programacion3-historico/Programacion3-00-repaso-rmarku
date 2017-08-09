#include "Color.h"


uint32_t Color::getColor() {
    uint32_t tmp = 0;

    tmp = rojo * 256 * 256;
    tmp += verde * 256;
    tmp += azul;
    return tmp;
}

void Color::tenirColor(uint8_t rojo, uint8_t verde, uint8_t azul) {
    this->rojo += rojo;
    this->verde += verde;
    this->azul += azul;

}