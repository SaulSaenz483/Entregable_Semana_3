//
// Created by N00183949 on 3/3/2026.
//

#ifndef CALCULADORAEXTENSIBLE_SUMA_H
#define CALCULADORAEXTENSIBLE_SUMA_H
#include <iostream>

#include "IOperacion.h"
using namespace std;

class Suma : public IOperacion
{
public:
    double calculadora(double a, double b) override;
};

#endif //CALCULADORAEXTENSIBLE_SUMA_H