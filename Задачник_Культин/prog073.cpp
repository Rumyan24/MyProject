// Вычисление дохода по вкладу 
#include <stdio.h>
#include <conio.h>
void main()
{
  float summ;    // сумма вклада
  int srok;      // срок вклада
  float stavka;  // процентная ставка
  float dohod;   // доход по вкладу

  printf("\nВычисление дохода по вкладу\n");
  printf("Введите исходные данные:\n");
  printf("Сумма вклада (руб.) -> ");
  scanf("%f", &summ);
  printf("Срок вклада (дней) -> ");
  scanf("%i", &srok);
  printf("Процентная ставка (годовых) -> ");
  scanf("%f", &stavka);
  dohod = summ * stavka/365/100 * srok; // 365 - кол-во дней в году
  summ = summ + dohod;

  printf("----------------------------------\n");
  printf("Доход: %9.2f руб.\n", dohod);
  printf("Сумма по окончании срока вклада: %9.2f руб.\n",summ);

  printf("\nДля завершения нажмите <Enter>");
  getch();
}

