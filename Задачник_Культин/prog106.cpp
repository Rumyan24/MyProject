// Фото - вычисляет цену заказа печати фотографий

#include "stdio.h"
#include "conio.h"
void main()
{
  int k; // количество фотографий
  int f; // формат: 1 - 9х12; 2 - 12х15; 3 - 18х24

  float cena;     // цена за 1 шт
  float sum;      // сумма
  float discount; // скидка
  float itog;

  printf("\nФОТО\n");

  printf("Формат:\n");
  printf("1 - 9х12\n");
  printf("2 - 12х15\n");
  printf("3 - 18х24\n");
  printf("Ваш выбор ->");

  scanf("%i",&f);
  switch ( f )
  {
    case 1: cena = 3.50; break;
    case 2: cena = 5.00; break;
    case 3: cena = 8.50; break;

    default: cena = 0; break;
  }


  printf("Количество (шт.) -> ");
  scanf("%i",&k);



  if ( cena != 0 )
  {
    sum = k * cena;
    printf("\nЦена за шт.: %3.2f руб.", cena);
    printf("\nКоличество: %i шт.", k);
    if ( k > 10 )
    {
      discount = sum * 0.1;
      itog = sum - discount;
      printf("\nСумма: %3.2f руб",sum);
      printf("\nСкидка: %3.2f руб", discount);
      printf("\nК оплате: %3.2f руб",itog);

    }
    else
      printf("\nК оплате: %3.2f руб.", sum);
  }
  else
    printf("\nНеправильно указан код материала");

  printf("\n\nДля завершения нажмите <Enter>");
  getch();
}

