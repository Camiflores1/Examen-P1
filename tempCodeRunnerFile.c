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
      count++;
   } while (sum <= 1200);
   printf("Se debieron ingresar %d números para que la suma de los negativos en valor absoluto sea mayor que 1200.\n", count);
   return 0;
}