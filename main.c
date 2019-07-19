#include <stdio.h>
#include <stdlib.h>


int main()
{
    float avgprofit;
    int priceofpumpkin=10.00;
    int sales=59.00;
    int daysworked=7.00;

    avgprofit=((float)priceofpumpkin*(float)sales)/(float)daysworked;
    printf("Average daily profit: $%.2f", avgprofit);

    return 0;
}
