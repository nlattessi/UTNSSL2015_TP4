1. La primera expresión inicializa las variables `nl`y `nc`en `0`. La coma es un operador binario que establece un orden de evaluación a la expresión, definiendo que primero se evalúe el operando de la izquierda y luego el de la derecha. La mayoría de los operadores binarios no tienen definido su orden de evaluación, de ahí la importancia de este operador. Una expresión equivalente es: `nl = nc = 0`

2. Los paréntesis son necesarios ya que puntuan la expresión y permiten evaluarla. De no usarlos no se podría evaluar la expresión, por lo que no la compararía con `EOF` y en definitiva, no tendría mecanismo de corte para el cíclo.

3. Semanticamente, evalua en etapas la expresión del `if` que consiste en la negación de la ejecución de la función `feof` con el argumento *stdin*. De ser verdadera, ejecuta la función `perror` con el argumento *error*. No es necesario entender el comportamiento de `feof` y `perror` (estan definidas en la biblioteca estándar). Pragmáticamente, chequea si la lectura del flujo terminó con error.

4. Imprime el argumento pasado a la salida *stderror* (salida estandar de error).

5. La puedo reemplazar por: `ferror(stdin)`. La semántica de `feof` es que devuelve verdadero cuando se produce el fin del flujo especificado (es decir, el flujo termina de forma correcta); mientras que la de `ferror` es que devuelve verdadero cuando el flujo especificado termina con error. Las expresiones `!feof(stdin)` y `ferror(stdin)` no son mutuamente excluyentes porque hasta no terminar de leer un flujo no se setea el indicar `EOF`. Chequea si la lectura del flujo se realizó de forma correcta.

6. Este formato establece que se imprimirá un *float* con precisión de 1 carácter.

7. Se aplica un *casteo* para que la expresión se evalue mediante un *float* y no sea, entonces, una división entera teniendo así más precisión en el resultado.

10. Este programa no funciona correctamente para una entrada de flujo vacía.

11. No es precisa porque cuenta como carácter el dato `\n` en el ciclo y no considera que las variables contador `nl` y `nc` se inicializan en 0.

12. Se deben imprimir a la salida los valores de las variables: `nl` y `nc` cada aumentada en 1 por su inicialización en 0.