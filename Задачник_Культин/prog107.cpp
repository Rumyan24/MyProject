// Бензин - вычисляет стоимость заправки автомобиля

#include "stdio.h"
#include "conio.h"
void main()
{
  int m; // марка бензина: 1 - 92; 2 - 95; 3 - 98; 4 - DT
  float cena; // цена за 1 литр

  float litr; // литров
  float sum;  // сумма

  printf("\nБЕНЗИН\n");

  printf("Марка бензина:\n");
  printf("1 - 92\n");
  printf("2 - 95\n");
  printf("3 - 98\n");
  printf("3 - DT\n");
  printf("Ваш выбор ->");

  scanf("%i",&m);
  switch ( m )
  {
    case 1: cena = 17.50; break;
    case 2: cena = 20.30; break;
    case 3: cena = 25.40; break;
    case 4: cena = 18.50; break;

    default: cena = 0; break;
  }

  printf("Литров -> ");
  scanf("%f",&litr);

  if ( cena != 0 )
  {
    sum = litr * cena;
    printf("\nЦена за литр: %3.2f руб.", cena);
    printf("\nЛитров: %3.2f", litr);
    printf("\nК оплате: %3.2f руб.", sum);
  }
  else
    printf("\nНеправильно указан код топлива");

  printf("\n\nДля завершения нажмите <Enter>");
  getch();
}

