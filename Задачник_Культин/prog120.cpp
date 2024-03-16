// Вычисляет сумму первых n целых положительных чисел 
#include <stdio.h>
#include <conio.h>
void main()
{
    int n;     // кол-во суммируемых чисел
    int summ;  // сумма
    int i;     // счетчик циклов

    printf("Вычисление суммы положительных чисел\n");
    printf("Введите количество суммируемых чисел -> ");
    scanf("%i", &n);
    summ = 0;
    for (i = 1; i <= n; i++)
    	summ = summ+i;
    printf("Сумма первых %i целых положительных чисел ",n);
    printf("равна %i", summ);

    printf("\n\nДля завершения нажмите <Enter>");
    getch();
}

