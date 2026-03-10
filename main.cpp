#include "Calculadora.h"
#include "Suma.h"
#include "IOperacion.h"
#include "Resta.h"
#include "Multiplicacion.h"
#include "Division.h"
#include "Raiz.h"
#include "Logaritmo.h"


int main()
{
    Calculadora calc;
    Suma suma;
    Resta resta;
    Multiplicacion multiplicacion;
    Division division;
    Raiz raiz;
    Logaritmo logaritmo;


    cout << "Calcular suma de a y b" << endl;
    calc.setOperacion(&suma);
    cout << calc.ejecutar(3,3) << endl;
    cout << "Calcular resta de a y b" << endl;
    calc.setOperacion(&resta);
    cout << calc.ejecutar(3,3) << endl;
    cout << "Calcular multiplicacion de a y b" << endl;
    calc.setOperacion(&multiplicacion);
    cout << calc.ejecutar(3,3) << endl;
    cout << "Calcular division de a y b" << endl;
    calc.setOperacion(&division);
    cout << calc.ejecutar(3,3) << endl;
    cout << "Calcular raiz de a y b" << endl;
    calc.setOperacion(&raiz);
    cout << calc.ejecutar(3,2) << endl;
    cout << "Calcular logaritmo de a y b" << endl;
    calc.setOperacion(&logaritmo);
    cout << calc.ejecutar(3,3) << endl;



    return 0;
}