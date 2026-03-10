cmake_minimum_required(VERSION 4.1)
project(CalculadoraExtensible)

set(CMAKE_CXX_STANDARD 20)

add_executable(CalculadoraExtensible main.cpp
        Calculadora.h
        IOperacion.h
        Resta.h
        Suma.h
        Multiplicacion.h
        Division.h
        Raiz.h
        Logaritmo.h
        Multiplicacion.cpp
        Suma.cpp
        Resta.cpp
        Raiz.cpp
        Logaritmo.cpp
        Division.cpp
        Calculadora.cpp
)
