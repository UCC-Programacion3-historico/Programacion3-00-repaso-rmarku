#include <stdint.h>

#ifndef REPASO_COLOR_H
#define REPASO_COLOR_H

/*
    **Propiedades:**
        * Rojo
        * Verde
        * Azul

    **Métodos:**
        * getColor
        * tenirColor
 */
class Color {
private:
    uint8_t rojo;
    uint8_t verde;
    uint8_t azul;
public:
    uint32_t getColor();

    void tenirColor(uint8_t rojo, uint8_t verde, uint8_t azul);
};


#endif //REPASO_COLOR_H
