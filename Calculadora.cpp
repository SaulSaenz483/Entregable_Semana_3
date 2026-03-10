//
// Created by N00183949 on 6/3/2026.
//
#include "Calculadora.h"

void Calculadora::setOperacion(IOperacion* operacion)
{
    oP = operacion;
}
double Calculadora::ejecutar(double a, double b) {
    if (oP == nullptr) return 0.0;

    return oP->calculadora(a, b);
}
double Calculadora::calculadora(double a, double b)
{
    return ejecutar(a, b);
}