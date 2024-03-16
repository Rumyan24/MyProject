// Доход по вкладу
#include "stdio.h"
#include "conio.h"

void main()
{

  float sum;     // сумма вклада
  int period;    // срок

  float percent; // процент, зависит от суммы
  float profit;  // доход

  float total;   // сумма в конце срока вклада
  printf("\nДОХОД\n");

  printf("Сумма, руб. -> ");
  scanf("%f",&sum);

  printf("Срок вклада, мес. -> ");
  scanf("%i",&period);

  if ( sum < 5000)
    percent = 10;
  else
    percent = 13;

  profit = sum * percent/100/12 * period;
  total = sum + profit;

  printf("\nСумма: %3.2f руб.", sum);
  printf("\nСрок вклада: %i мес.", period);
  printf("\nПроцент годовой: %2.2f", percent);
  printf("\nДоход: %3.2f руб.", profit);
  printf("\nСумма в конце срока вклада: %3.2f руб.", total);

  printf("\n\nДля завершения нажмите <Enter>");
  getch();
}

