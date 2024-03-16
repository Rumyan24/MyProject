// Вычисление стоимости поездки на автомобиле
#include <stdio.h>
#include <conio.h>
void main()
{
    float rast;  // расстояние
    float potr;  // потребление бензина на 100 км. пути
    float cena;  // цена одного литра бензина
    float summ;  // стоимость поездки

    printf("\nВычисление стоимости поездки на автомобиле\n");
    printf("Расстояние (км) -> ");
    scanf("%f",&rast);
    printf("Расход бензина (литров на 100 км.) -> ");
    scanf("%f",&potr);
    printf("Цена литра бензина (руб.) -> ");
    scanf("%f",&cena);
    summ = 2 * potr/100 * rast * cena;
    printf("Поездка обойдется в %6.2f руб.",summ);

    printf("\n\nДля завершения нажмите <Enter>");
    getch();
}

