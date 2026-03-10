//
// Created by N00183949 on 6/3/2026.
//

#ifndef CALCULADORAEXTENSIBLE_LOGARITMO_H
#define CALCULADORAEXTENSIBLE_LOGARITMO_H

#include <cmath>
#include "IOperacion.h"

class Logaritmo : public IOperacion
{
public:
        double calculadora(double a, double b) override;
};
#endif //CALCULADORAEXTENSIBLE_LOGARITMO_H