// Проверяет, отсортирован ли массив по возрастанию
#include <stdio.h>
#include <conio.h>
#define HB 5
void main()
{
    int a[HB];   // массив
    int k;       // индекс
    int ok;      // 1 - последовательность неубывающая

    printf("Проверка, упорядочен ли массив\n");
    printf("по возрастанию\n");
    printf("Введите массив (%i целых чисел ", HB);
    printf("в одной строке) и нажмите <Enter>\n");
    for (k = 0; k < HB; k++)
        scanf("%i", &a[k]);

    k = 0;
    ok = 1;
    do  {
        if (a[k] > a[k+1])
            ok = 0;
        k++;
    } while ( k < HB-1 && ok);

    printf("Элементы массива ");
    if ( !ok )
        printf("не ");
    printf("упорядочены по возрастанию\n");

    printf("\nДля завершения работы нажмите <Enter>");
    getch();
}

