// Таблица перевода температуры из градусов Цельсия
// в градусы Фаренгейта
#include "stdio.h"
#include "conio.h"
void main()
{
  float t1,t2,dt; // диапазон и шаг
  float c,f;      // градусы Цельсия и Фаренгейта
  int n;          // число строк в таблице

  printf("t1->");
  scanf("%f",&t1);

  printf("t2->");
  scanf("%f",&t2);

  printf("dt->");
  scanf("%f",&dt);

    n = (t2 - t1)/dt + 1;
  
  c = t1;
  
  printf("\n----------------\n");
  printf("\n  C      F\n");
  printf("\n----------------\n");
  for (int i=0; i<n; i++)
  {
    f = (float)9/5 * c + 32;
    printf("%5.2f  %5.2f\n", c,f);    
    c = c + dt;
  }
    printf("\n----------------\n");

  printf("\nДля завершения нажмите <Enter>\n");

  getch();
}

