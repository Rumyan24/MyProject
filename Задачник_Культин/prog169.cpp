// Сортировка массива методом "пузырька"
#include <stdio.h>
#include <conio.h>
#define SZ 5
void main()
{
    int a[SZ];
    int i;     // счетчик циклов
    int k;     // текущий индекс элемента массива
    int buf;

    printf("\nСортировка массива методом \"пузырька\"\n");
    printf("Введите массив (в одной строке %i ", SZ);
    printf("целых чисел) и нажмите <Enter>\n");
    for (k = 0; k < SZ; k++)
        scanf("%i", &a[k]);

    printf("Сортировка...\n");
    for (i = 0; i < SZ-1; i++)
    {
        for (k = 0; k < SZ-1; k++)
        {
            if (a[k] > a[k+1])
            {
                // обменяем k-й и (k+1)-й элементы
                buf = a[k];
                a[k] = a[k+1];
                a[k+1] = buf;
             }
        }
        // отладочная печать - состояние
        //  массива после очередного цикла сортировки
        for (k = 0; k < SZ; k++)
            printf("%i ",a[k]);
        printf("\n");
    }

    printf("Массив отсортирован\n");
    for (k = 0; k < SZ; k++)
            printf("%i ",a[k]);

    printf("\n\nДля завершения работы нажмите <Enter>");
    getch();
}

