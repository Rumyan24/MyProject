// Вычисление стоимости покупки
#include <stdio.h>
#include <conio.h>
void main()
{
   float kar,tetr; // цена карандаша и тетради
   int nk,nt;      // количество тетрадей и карандашей
   float summ;     // стоимость покупки }

   printf("\nВычисление стоимости покупки\n");
   printf("Введите исходные данные:\n");
   printf("Цена тетради (руб.) -> ");
   scanf("%f", &tetr);
   printf("Количество тетрадей -> ");
   scanf("%i", &nt);
   printf("Цена карандаша (руб.) -> ");
   scanf("%f", &kar);
   printf("Количество карандашей -> ");
   scanf("%i", &nk);
   summ=tetr*nt + kar*nk;
   printf("\nСтоимость покупки: %6.2f руб.\n", summ);

   printf("\nДля завершения нажмите <Enter>");
   getch();
}

