// Доход по вкладу
#include "stdio.h"
#include "conio.h"

void main()
{
 
    float value;
    int period;
    float rate;
    float profit;

    printf("value->");
    scanf("%f",&value);

    printf("period->");
    scanf("%i",&period);

    switch ( period )
    {
        case 3:  rate=9.0; break;
        case 6:  rate=11.5; break;
        case 12: rate=13.5; break;
        case 18: rate=15.0; break;
        case 24: rate=18.0; break;
        case 36: rate=24; break;
        default: period = 0;
    }
    
    if ( period !=0 )
    {
        printf("\nrate: %6.2f", rate );
        profit = value * rate/100/12 * period;
        printf("\nprofit: %6.2f", profit);
    }
    else
        printf("Not valid period");


    printf("<Enter>");
    getch();
}

