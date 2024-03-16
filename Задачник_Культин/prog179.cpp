// Доход по вкладу

#include "stdio.h"
#include "conio.h"

void main()
{
  
  // процентная ставка
  float rate[3][6] =
     {
        15.0,16.5,18.0,19.5,21.0,24.0,
        16.5,18.0,19.5,21.0,22.5,24.0,
        18.0,19.5,21.0,22.5,24.0,27.0
     };
  
  float value;  // сумма
  int period;   // срок (месяцев)
  float profit; // доход

  int r,c;
  
  // вывести таблицу
  for (int r=0; r<3 ;r++)
  {
    for(int c=0; c<6; c++)
      printf("%8.2f",rate[r][c]);
    printf("\n");
  }

  printf("Сумма, руб.-> ");
  scanf("%f",&value);

  printf("Срок, мес. -> );
  scanf("%i",&period);

  if ( value <= 10000)
    r = 0;
  else
    if (value <= 300000 )
      r = 1;
    else
       r = 3;

  switch ( period )
  {
    case 3:  c=0; break;
    case 6:  c=1; break;
    case 12: c=2; break;
    case 18: c=3; break;
    case 24: c=4; break;
    case 36: c=6; break;
    default: period = 0;
  }
  
  if ( period !=0 )
  {
    printf("\Процентная ставка: %5.2f, rate[r][c]);
    profit = value * rate[r][c]/100/12 * period;
    printf("\Доход: %6.2f руб.", profit);
  }
  else
    printf("Неправильно указан срок");


  printf("\nДля завершения нажмите <Enter>");
  getch();
}

