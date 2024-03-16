// Жалюзи - вычисляет цену жалюзи 
// в зависимости от размера и материала

#include "stdio.h"
#include "conio.h"
void main()
{
  float w,h; // ширина, высота
  int m;     // материал:
             // 1 - пластик; 2 - текстиль; 3 - алюминий;

  float cena; // цена за 1 кв.м.
  float s;    // площадь
  float sum;  // сумма

  printf("\nЖАЛЮЗИ\n");

  printf("\nШирина (см.) -> ");
  scanf("%f",&w);

  printf("Высота (см.) -> ");
  scanf("%f",&h);

  printf("Материал:\n");
  printf("1 - пластик\n");
  printf("2 - текстиль\n");
  printf("3 - алюминий\n");
  printf("Ваш выбор ->");

  scanf("%i",&m);
  switch ( m )
  {
    case 1: cena = 200; break;
    case 2: cena = 250; break;
    case 3: cena = 350; break;

    default: cena = 0; break;
  }

  if ( cena != 0 )
  {
    s = (w * h) / 10000;
    sum = s * cena;
    printf("\nЦена за кв.м.: %3.2f руб.", cena);
    printf("\nПлощадь: %3.2f кв.м.", s);
    printf("\nК оплате: %3.2f руб.", sum);
  }
  else
    printf("\nНе правильно указан код материала");

  printf("\n\nДля завершения нажмите <Enter>");
  getch();
}

