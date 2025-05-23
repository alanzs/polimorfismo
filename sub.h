// sub.h
#pragma once
#include "operacion.h"

class Resta : public Operacion {
public:
    double calcular(int x, int y) const override {
        return x - y;
    }
};
