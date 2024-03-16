// Платежи по кредиту
#include "stdio.h"
#include "conio.h"

void main()
{
    float value; // сумма кредита
    int period;  // срок
    float rate;  // процентная ставка

    float debt; // долг, на начало текущего месяца
    float interest; // плата за кредит (проценты на долг)
    float paying;   // сумма платежа
    float suminterest; // общая плата за кредит

    printf("Сумма, руб.,-> ");
    scanf("%f",&value);

    printf("Срок, мес.,-> ");
    scanf("%i",&period);

    printf("Процентная ставка, годовых-> ");
    scanf("%f",&rate);

    debt = value;
    suminterest = 0;
    printf("-----------------------\n");
    printf("   Долг Процент Платеж\n");
    printf("-----------------------\n");
    for ( int i = 1; i <= period; i++)
    {
        interest = debt * (rate/12/100);
        suminterest += interest;
        paying = value/period + interest;
        printf("%2i  %9.2f  %9.2f  %9.2f\n",
                i,debt,interest, paying);
        debt = debt - value/period;
    }
    printf("-----------------------\n");
    printf("\nВсего процентов: %3.2f",suminterest);
    printf("\n Для завершения нажмите <Enter>");
    getch();

}

