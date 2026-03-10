# Actividad 3 – Principios KISS / YAGNI

## Ejemplo que viola el principio

Supongamos una clase `Calculadora` que incluye muchas funciones avanzadas como estadísticas, historial de operaciones y exportación de resultados, cuando el programa solo necesita realizar operaciones básicas como suma, resta, multiplicación y división. Esto hace que el código sea más complejo de lo necesario.

## Versión más simple

Una versión más simple sería una `Calculadora` que solo tenga los métodos básicos necesarios para el programa:

* `sumar(a, b)`
* `restar(a, b)`
* `multiplicar(a, b)`
* `dividir(a, b)`

## Justificación

La versión simplificada cumple con **KISS** porque mantiene el diseño lo más sencillo posible y fácil de entender. También respeta **YAGNI**, ya que no se agregan funcionalidades que el programa no necesita en ese momento, evitando complejidad innecesaria y código que probablemente nunca se use.
