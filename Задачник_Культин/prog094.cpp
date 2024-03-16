// Проверка умения умножать числа 
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>  // для доступа к srand
#include <time.h>    // для доступа к time
void main()
{
  int m1, m2, p; // сомножители и произведение
  int otv;       // ответ испытуемого
  time_t t;      // текущее время - для инициализации
                 // генератора случайных чисел

  srand((unsigned) time(&t));; // инициализация генератора
                               // случайных чисел

  m1 = rand() % 9 +1;  // остаток от деления rand() на 9 лежит
                       // в диапазоне от 0 до 8
  m2 = rand() % 9 +1;
  p = m1 * m2;
  printf("Сколько будет %ix%i ?\n", m1, m2);
  printf("Введите ответ и нажмите <Enter>");
  printf("-> ");
  scanf("%i", &otv);
  if (p == otv)
      printf("Правильно.");
  else
      printf("Вы ошиблись.\n%ix%i=%i", m1, m2, p);

  printf("\nДля завершения нажмите <Enter>");
  getch();
}

