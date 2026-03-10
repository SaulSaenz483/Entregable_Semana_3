//
// Created by N00183949 on 3/3/2026.
//

#ifndef CALCULADORAEXTENSIBLE_CALCULADORA_H
#define CALCULADORAEXTENSIBLE_CALCULADORA_H
#include <iostream>

#include "IOperacion.h"
using namespace std;

class Calculadora : public IOperacion
{
private:

    IOperacion* oP = nullptr;

public:

    void setOperacion(IOperacion* operacion);
    double ejecutar(double a, double b);
    double calculadora(double a, double b) override;
};


#endif //CALCULADORAEXTENSIBLE_CALCULADORA_H