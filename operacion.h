// operacion.h
#pragma once

class Operacion {
public:
    virtual double calcular(int x, int y) const = 0;
    virtual ~Operacion() = default;
};
