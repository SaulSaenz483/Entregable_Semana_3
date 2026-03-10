# Actividad 2 – Principios SOLID en el diseño

## Jerarquía de figuras

Se plantea una clase base `Figura` que representa una figura geométrica general y tiene un método `calcularArea()`.  
De esta clase heredan `Circulo` y `Rectangulo`, donde cada una implementa su propio cálculo del área según sus atributos.

        Figura
          |
    --------------
    |            |
Circulo      Rectangulo



## S (Single Responsibility)

Cada clase tiene una responsabilidad clara. `Figura` solo define el comportamiento general de las figuras, mientras que `Circulo` y `Rectangulo` se encargan de calcular su propia área.

## O (Open/Closed)

El diseño permite agregar nuevas figuras sin tener que modificar las que ya existen. Por ejemplo, se podría crear una clase `Triangulo` que herede de `Figura` y simplemente implemente su propio cálculo de área.

## L (Liskov Substitution)

Las clases hijas pueden usarse en lugar de la clase base sin afectar el funcionamiento. Por ejemplo, un `Circulo` o un `Rectangulo` pueden tratarse como `Figura` y llamar al método `calcularArea()` sin problemas.


---

# Actividad 3 – KISS / YAGNI

## Ejemplo que viola el principio

Imaginemos una clase `Calculadora` que además de hacer operaciones básicas también guarda historial, exporta resultados a archivos y tiene funciones estadísticas. Si el programa solo necesita hacer operaciones simples, todo ese código extra termina haciendo la clase más complicada de lo necesario.

## Versión más simple

Una versión más simple sería una `Calculadora` que solo tenga los métodos básicos:

- `sumar`
- `restar`
- `multiplicar`
- `dividir`

## Justificación

Esta versión es más fácil de entender y mantener porque solo tiene lo que realmente se necesita. Sigue el principio **KISS** porque el diseño se mantiene simple, y también **YAGNI** porque no se agregan funcionalidades que probablemente nunca se van a usar.
