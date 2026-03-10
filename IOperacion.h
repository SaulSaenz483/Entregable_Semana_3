//
// Created by N00183949 on 3/3/2026.
//

#ifndef CALCULADORAEXTENSIBLE_IOPERACION_H
#define CALCULADORAEXTENSIBLE_IOPERACION_H
#include <iostream>
using namespace std;
class IOperacion
{
public:
    virtual double calculadora(double a, double b) = 0;
    virtual ~IOperacion() = default;
};


#endif //CALCULADORAEXTENSIBLE_IOPERACION_H