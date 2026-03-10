//
// Created by N00183949 on 6/3/2026.
//

#ifndef CALCULADORAEXTENSIBLE_MULTIPLICACION_H
#define CALCULADORAEXTENSIBLE_MULTIPLICACION_H
#include "IOperacion.h"

class Multiplicacion : public IOperacion
{
public:
        double calculadora(double a, double b) override;
};

#endif //CALCULADORAEXTENSIBLE_MULTIPLICACION_H