#ifndef REPASO_CALCULADORA_H
#define REPASO_CALCULADORA_H


template<class T>

class Calculadora {
private:
    T A;
    T B;
public:
    T getB() const {
        return B;
    }

    void setB(T B) {
        Calculadora::B = B;
    }

    T getA() const {
        return A;
    }

    void setA(T A) {
        Calculadora::A = A;
    }

    T sumar() {
        return A + B;
    }

    T restar() {
        return A - B;
    }

    T multiplicar() {
        return A * B;
    }

    T dividir() {
        return A / B;
    }
};


#endif //REPASO_CALCULADORA_H
