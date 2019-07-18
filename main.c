#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*no se debe empezar el nombre de una variable con un numero*/
    /*no se puedne poner espacios en el nombre de la variable*/
    int age;/*int es para declarar numeros enteros*/
    int currentyear;
    int birthyear;

    currentyear=2019;
    birthyear=1998;/*asignamos un valor numerico a la variable*/
    age= currentyear-birthyear;/*se realiza la opreacion para obtener la edad correspondiente*/

    printf("User is %d years old\n",age);/*imprimimos mensaje en pantalla*/
    return 0;
}
