// div.h
#pragma once
#include "operacion.h"
using namespace std;

class Division : public Operacion {
public:
    double calcular(int x, int y) const override {
        if (y == 0) 
          throw runtime_error("Dividiste por 0 amigo....mal muy muy mal");
        return x / y;
    }
};
