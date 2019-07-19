#include <stdio.h>
#include <stdlib.h>


int main()
{
    char firstname[20];
    char crush[20];
    int numberofbabies;

    printf("What is your name?\n");
    scanf("%s", firstname);/*scanf es la funcion utilizada para entrada de datos*/

    printf("Who are you going to marry?\n");
    scanf("%s", crush);

    printf("How many kids will you have?\n");
    scanf("%d", &numberofbabies);/*siempre se agrega un & antes de caulquier
                                 variable, excepto arrays*/

        printf("%s and %s are in love an will have %d babies\n", firstname, crush, numberofbabies);

    return 0;
}
