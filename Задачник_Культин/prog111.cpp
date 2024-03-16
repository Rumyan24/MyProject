// По дате определяет день недели
#include <stdio.h>
#include <conio.h>
void main()
{
    int day,month,year; // день, месяц, год

    int c,y;            // столетие и год в столетии
    int m;              // месяц по древнеримскому календарю
    int d;              // день недели


    puts("\nОпределение дня недели по дате");
    puts("Введите дату: день месяц год.");
    puts("Например, 5 12 2001");
    printf("->");
    scanf("%i %i %i", &day, &month, &year);

    if (month == 1 || month == 2)
         year--;     // январь и февраль относятся
                     // к предыдущему году

    m = month - 2;       // год начинается с марта
    if (m <= 0) m += 12; // для января и февраля
    // здесь m - номер месяца по римскому календарю
    c = year / 100;
    y = year - c*100;

    d = (day+(13*m-1)/5+y+y/4+c/4-2*c+777)%7;

    switch (d)
    {
      case 1: puts("Понедельник"); break;
      case 2: puts("Вторник");     break;
      case 3: puts("Среда");       break;
      case 4: puts("Четверг");     break;
      case 5: puts("Пятница");     break;
      case 6: puts("Суббота");     break;
      case 0: puts("Воскресенье");
    }
    printf("\nДля завершения нажмите <Enter>\n");

    getch();
}

