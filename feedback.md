# 📌 Retroalimentación del Código

El código proporcionado funciona correctamente para imprimir triángulos rectángulos de asteriscos, pero no cumple con todos los requisitos del enunciado.  Aquí te dejo un feedback más detallado y sugerencias para mejorarlo:

**Puntos Positivos:**

* La función `imprimirTriangulo` está bien implementada y genera correctamente los triángulos.
* El código es claro y fácil de entender.
* Usa correctamente los bucles `for` anidados para controlar las filas y columnas de asteriscos.

**Puntos a Mejorar:**

* **No solicita la entrada del usuario:** El programa imprime tres triángulos de alturas fijas (3, 2 y 3).  Debe modificarse para pedir al usuario que ingrese las tres alturas.
* **No valida la entrada:**  El enunciado especifica que las alturas deben ser enteros *positivos*. El código no verifica si el usuario ingresa valores negativos o cero.  Esto podría causar problemas.

**Sugerencias de Mejora:**

```cpp
#include <iostream>

using namespace std;

void imprimirTriangulo(int altura) {
    if (altura <= 0) {
        return; // O mostrar un mensaje de error al usuario
    }
    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int altura1, altura2, altura3;

    cout << "Ingrese la altura del primer triángulo: ";
    cin >> altura1;

    cout << "Ingrese la altura del segundo triángulo: ";
    cin >> altura2;

    cout << "Ingrese la altura del tercer triángulo: ";
    cin >> altura3;


    imprimirTriangulo(altura1);
    imprimirTriangulo(altura2);
    imprimirTriangulo(altura3);

    return 0;
}
```

**Explicación de las mejoras:**

* **Solicitud de entrada:** Se agregaron líneas de código para solicitar al usuario las alturas de los tres triángulos usando `cin`.
* **Validación básica:**  Se incluyó una condición dentro de `imprimirTriangulo` para manejar alturas no positivas.  En este caso, simplemente retorna sin imprimir nada, pero se podría mostrar un mensaje de error al usuario.

**Recomendaciones adicionales:**

* **Manejo de errores más robusto:** Se podría implementar un manejo de errores más completo, por ejemplo, verificando si la entrada del usuario es realmente un número entero y volviendo a solicitarla si no lo es.
* **Modularidad:**  Para entradas más grandes,  se podría considerar el uso de un bucle para solicitar las alturas y almacenarlas en un array, en lugar de tener tres variables separadas.


Con estas modificaciones, el código cumplirá con los requisitos del enunciado y será más robusto.
