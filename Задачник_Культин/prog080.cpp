// Доход
#include "stdio.h"
#include "conio.h"

void main()
{

  float sum;     // сумма
  int period;    // срок

  float percent; // период
  float profit;  // доход

  float total;   // сумма в конце срока вклада

  printf("\nДОХОД\n");


  printf("Сумма, руб. -> ");
  scanf("%f",&sum);

  printf("Срок, мес. -> ");
  scanf("%i",&period);

  if ( sum < 5000)
    percent = 9;
  else
    if ( sum < 10000)
      percent = 11;
    else
      percent = 13;

  profit = sum * percent/100/12 * period;

  total = sum + profit;

  printf("\n---------------------------"); 
  printf("\nСумма: %3.2f руб.", sum);
  printf("\nСрок: %i", period);
  printf("\nПроцент: %3.2f", percent);
  printf("\nДоход: %3.2f руб.", profit);
  printf("\nСумма в конце срока вклада: %3.2f руб.", total);

  printf("\n\nДля завершения нажмите <Enter>");
  getch();
}

