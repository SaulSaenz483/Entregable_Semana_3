//
// Created by N00183949 on 6/3/2026.
//

#ifndef CALCULADORAEXTENSIBLE_DIVISION_H
#define CALCULADORAEXTENSIBLE_DIVISION_H
#include "IOperacion.h"

class Division : public IOperacion
{
public:
    double calculadora(double a, double b) override;

};
#endif //CALCULADORAEXTENSIBLE_DIVISION_H