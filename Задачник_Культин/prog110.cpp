// Определение стоимости междугороднего
// телефонного разговора
#include <stdio.h>
#include <conio.h>
void main()
{
    int kod;     // код города
    float cena;  // цена минуты
    int dlit;    // длительность разговора
    float summ;  // стоимость разговора

    printf("\nВычисление стоимости разговора по телефону.\n");
    printf("Введите исходные данные:\n");
    printf("Длительность разговора (целое кол-во минут) ->");
    scanf("%i", &dlit);
    puts("Код города");
    puts("Владивосток\t432");
    puts("Москва\t\t495");
    puts("Мурманск\t815");
    puts("Самара\t\t846");
    printf("->");
    scanf("%i", &kod);

    printf("Город: ");
    switch (kod)
    {
      case 432: puts("Владивосток");
                cena = 2.2;
                break;
      case 495:  puts("Москва");
                cena = 1;
                break;
      case 815: puts("Мурманск");
                cena = 1.2;
                break;
      case 846: puts("Самара");
                cena = 1.4;
                break;
      default:  printf("Неверно введен код.");
                cena = 0;
    }
    if (cena != 0) {
       summ = cena * dlit;
       printf("Цена минуты: %i руб.\n", cena);
       printf("Стоимость разговора: %3.2f руб.\n", summ);
    }
    printf("\nДля завершения нажмите <Enter>");
    getch();
}

