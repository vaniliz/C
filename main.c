#include <stdio.h>
#include <stdlib.h>


int main()
{
    int pageviews=0;

    pageviews=pageviews+1;
    printf("page views: %d \n", pageviews);
    pageviews=pageviews+1;
    printf("page views: %d \n", pageviews);
    pageviews=pageviews+1;
    printf("page views: %d \n", pageviews);

    float balance=100.00;

    balance *= 1.1;
    printf("\nBalance: %f \n", balance);
    balance *= 1.1;
    printf("Balance: %f \n", balance);
    balance *= 1.1;
    printf("Balance: %f \n", balance);

    return 0;
}
