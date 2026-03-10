//
// Created by N00183949 on 6/3/2026.
//

#ifndef CALCULADORAEXTENSIBLE_RAIZ_H
#define CALCULADORAEXTENSIBLE_RAIZ_H
#include <cmath>

#include "IOperacion.h"

class Raiz : public IOperacion
{
public:
    double calculadora(double a, double b) override;

};
#endif //CALCULADORAEXTENSIBLE_RAIZ_H