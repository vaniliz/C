#include <stdio.h>
#include <stdlib.h>


int main()
{
    char lastname [20];
    printf("Enter your last name: \n");
    scanf(" %s", lastname);

    //(test) ? trueCode : falseCode ;
    (lastname [0] < 'M') ? printf("Blue Team\n") : printf("Red Team\n");

    int friends = 87;

    printf("I have %d friend%s", friends, (friends!=1) ? "s" : "");

    return 0;
}
