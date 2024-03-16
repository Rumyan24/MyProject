// Вычисление стоимости покупки с учетом скидки 
#include <stdio.h>
#include <conio.h>
void main()
{
  float summ; // сумма покупки

  printf("\nВычисление стоимости покупки с учетом скидки\n");
  printf("Введите сумму покупки и нажмите <Enter>");
  printf("-> ");
  scanf("%f", &summ);
  if (summ < 500)
      printf("Скидка не предоставляется.\n");
  else {
      printf("Вам предоставляется скидка ");
      if (summ > 1000) {
      printf("5%\n");
      summ = 0.97 * summ;
      }
      else {
      printf("3%\n");
      summ = 0.97 * summ;
      };
      printf("Сумма с учетом скидки: %3.2f руб.\n", summ);
  }

  printf("\nДля завершения нажмите <Enter>");
  getch();
}

