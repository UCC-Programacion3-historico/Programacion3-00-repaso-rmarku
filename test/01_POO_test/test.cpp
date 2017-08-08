#include <type_traits>
#include "gtest/gtest.h"
#include "../../01_POO/Geometria.h"
#include "../../01_POO/Cuadrado.h"
#include "../../01_POO/Circulo.h"
#include "../../01_POO/Triangulo.h"

TEST(test_01_POO, SonHeredados) {
    const bool triangulo_h  = std::is_base_of<Geometria, Triangulo>::value;
    const bool cuadrado_h  = std::is_base_of<Geometria, Cuadrado>::value;
    const bool circulo_h  = std::is_base_of<Geometria, Circulo>::value;
    EXPECT_TRUE( triangulo_h );
    EXPECT_TRUE( cuadrado_h );
    EXPECT_TRUE( circulo_h );
}
