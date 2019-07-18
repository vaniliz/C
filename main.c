#include <stdio.h>
#include <stdlib.h>

int main()
{
 printf("%s is the best person ever\n", "This User");/* %s es sustituido por strings*/
 printf("%s is the best %s ever\n","This User","programmer" );
 printf("I ate %d corndog last night\n", 9);/* %d es sustituido por un numero entero*/
 printf("El numero Pi vale %f\n", 3.14159);/* %f es sustituido por un numero decimal*/
 printf("El numero Pi vale %.4f\n", 3.14159);
 printf("El numero Pi vale %.2f\n", 3.14159);/*El .# despues del % indica el numero de decimales que se mostraran en pantalla*/
    return 0;
}
