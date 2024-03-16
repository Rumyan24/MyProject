// Программа проверяет знание таблицы умножения
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>  // для доступа к srand и rand
#include <time.h>

void main()
{
   int numb1,numb2; // сомножители
   int res;         // произведение
   int otv;         // ответ испытуемого
   int kol = 0;     // количество правильных ответов
   int i;           // счетчик циклов 
   time_t t;        // текущее время - для инициализации
                    // генератора случайных чисел

   printf("\*** Проверка знания таблицы умножения ***\n");
   printf(" После примера введите ответ и нажмите <Enter>");

   srand((unsigned) time(&t));; // инициализация генератора
                                // случайных чисел

   for (i = 1; i <= 10; i++)  // 10 примеров
   {
      numb1 = rand()%7 + 2 ;  // число от 2 до 9
      numb2 = rand()%7 + 2 ;
      res = numb1 * numb2;
      printf("%iх%i=", numb1, numb2);
      scanf("%i",&otv);
      if (otv == res)
         kol++;
      else printf("Вы ошиблись! %ix%i=%i\nПродолжим...\n",
                    numb1, numb2, res);
   }
   printf("\nПравильных ответов: %i\n", kol);
   printf("Ваша оценка: ");
   switch (kol)
   {
       case 10: puts("5"); break;
       case 9:  puts("4"); break;
       case 8:  puts("4"); break;
       case 7:  puts("3"); break;
       default: puts("2"); break;
   }
   printf("\nДля завершения нажмите <Enter>");
   getch();
}

