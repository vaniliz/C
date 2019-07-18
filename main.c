#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20]="'User name'";/*char se usa para declarar una variable tipo 'array'
                              name es el nombre de la variable y el numero entre corchetes
                              es el numero de caracteres que sera posible escribir en la variable*/
    printf("My name is %s \n", name);

    name[1]= 'z';/*cambiamos el valor de la posicion 1 's' por 'z'*/
    printf("My name is %s \n", name);

    char food[]="pizza";
    printf("My best food is %s \n", food);

    strcpy(food,"hamburger");/*Para cambiar el valor de una variable array
                            en el primer espacio va la variable que se desaea
                            cambiar y en el segundo el nuevo valor*/
    printf("My best food is %s \n", food);

    return 0;
}
