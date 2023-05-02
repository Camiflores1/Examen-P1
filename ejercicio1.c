//Examen Práctico P1
//Realice un programa para hallar cuántos números se debieron haber leído (ingresados por el usuario) para que la suma de los números negativos dé en valor absoluto mayor que 1200.
 
#include <stdio.h>

int main() {
    //inicializamos las variables
   int num, sum = 0, count = 0;
    //Defino que estructuras de repetición voy a usar
   do {
       // se pide al usuario que ingrese un número
      printf("Ingrese un número: ");
      scanf("%d", &num);
      if (num < 0) {
          // Se suma el valor absoluto de los números negativos (suma=suma-num)
         sum -= num; 
      }
