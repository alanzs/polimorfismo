// sum.h
#pragma once
#include "operacion.h"

class Suma : public Operacion {
public:
    double calcular(int x, int y) const override {
        return x + y;
    }
};
