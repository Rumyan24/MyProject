// Проверка знания истории 
#include <stdio.h>
#include <conio.h>
void main()
{
  int year;   // ответ испытуемого

  printf("\nВ каком году был основан Санкт-Петербург?\n");
  printf("Введите число и нажмите <Enter>");
  printf("-> ");
  scanf("%i", &year);
  if (year == 1703)
      printf("Правильно.");
  else {
      printf("Вы ошиблись, ");
      printf("Санкт-Петербург был основан в 1703 году.\n");
  }

  printf("\nДля завершения нажмите <Enter>");
  getch();
}

