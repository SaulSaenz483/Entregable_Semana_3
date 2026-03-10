//
// Created by N00183949 on 3/3/2026.
//

#ifndef CALCULADORAEXTENSIBLE_RESTA_H
#define CALCULADORAEXTENSIBLE_RESTA_H
#include <iostream>

#include "IOperacion.h"
using namespace std;

class Resta : public IOperacion
{
public:
    double calculadora(double a, double b) override;
};
#endif //CALCULADORAEXTENSIBLE_RESTA_H