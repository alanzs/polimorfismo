// multiply.h
#pragma once
#include "operacion.h"

class Multiplicacion : public Operacion {
public:
    double calcular(int x, int y) const override {
        return x * y;
    }
};
