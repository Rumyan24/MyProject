// Проверка умения складывать и вычитать числа
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>  // для доступа к srand и rand
#include <time.h>

#define LEVEL 97+2   // действия над числами от 2 до 99

void main()
{
   int numb1,numb2; // числа
   int op;          // действие над числами:
                    // 0-сложение, 1-вычитание
   char zop;        // знак операции - "плюс" или "минус"
   int res;         // результат
   int otv;         // ответ испытуемого
   int kol = 0;     // количество правильных ответов
   int buf;         // буфер для обмена numb1  и numb2,
                    // в случае если numb1<numb2
   int i;           // счетчик циклов
   time_t t;        // текущее время - для инициализации
                    // генератора случайных чисел

   printf("\nПроверка умения складывать и вычитать числа\n");
   printf("После примера введите ответ и нажмите <Enter>");
   kol = 0;
   srand((unsigned) time(&t));; // инициализация генератора случайных чисел

   for (i = 1; i <= 10; i++)
   {
      // сгенерируем пример
      numb1 = rand() % LEVEL;  // число от 2 до 99
      numb2 = rand() % LEVEL;
      op = rand()%2;        // действие над числами
      if (op == 0)
      {  
         res = numb1 + numb2;
         zop = '+';
      }
      else
      { // Вычитание
         zop = '-';
         if (numb1 < numb2)
         {
           // обменяем numb1 и numb2
           buf = numb2;
           numb2 = numb1;
           numb1 = buf;
         }
         res = numb1 - numb2;
      }
      printf("%i%c%i=", numb1, zop, numb2); // вывести пример
      scanf("%i", &otv);  // получить ответ испытуемого
      if (otv == res)
         kol++;
      else printf("Вы ошиблись. %i%c%i=%i\n",
                     numb1, zop, numb2, res);
   }
   printf("Правильных ответов: %i\n", kol);
   printf("Ваша оценка:\n");
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

