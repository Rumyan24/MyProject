// Фото - вычисляет стоимость печати фотографий с учетом
// размера и возможной скидки
#include "stdio.h"
#include "conio.h"
void main()

{
  int format; // формат: 1 - 9х12; 2 - 10х15
  int kol;    // количество

  float cena; // цена за штуку
  float sum;  // сумма

  float discount = 0; // скидка
  float total;    // к оплате

  printf("\nФОТО\n");

  printf("Формат (1 - 9x12; 2 - 10x15) -> ");
  scanf("%i",&format);

  printf("Количество, шт. -> ");
  scanf("%i",&kol);


  if ( format == 1 )
    cena = 2.50;
  else
    cena = 3.20;

  sum = cena * kol;

  if ( kol > 10 )
  {
    discount = sum * 0.05;
    total = sum - discount;
  }

  
  printf("\n-------------------------");
  printf("\nЦена: %3.2f руб.", cena);
  printf("\nКоличество: %i", kol);
  printf("\nСумма: %3.2f руб.", sum);

  if ( discount != 0)
  {
    printf("\nСкидка: %3.2f руб.", discount);
    printf("\nК оплате: %3.2f руб.", total);
  }


  printf("\n\nДля завершения нажмите <Enter>");
  getch();
}

