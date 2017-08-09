#include "Color.h"

#ifndef REPASO_GEOMETRIA_H
#define REPASO_GEOMETRIA_H

/*
 * Propiedades:
        Alto
        Ancho
        Color
    Métodos:
        getSuperficie
        getPerimetro
 */

class Geometria {
protected:
    int Alto;
    int Ancho;
public:
    Color col;

    Geometria(int Al, int Anc);
    Geometria(){};

    int getAlto() const;

    void setAlto(int Alto);

    int getAncho() const;

    void setAncho(int Ancho);

    virtual float getSuperficie()=0;

    virtual float getPerimetro()=0;
};


#endif //REPASO_GEOMETRIA_H
