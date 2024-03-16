// Вычисление суммы элементов массива (по столбцам)
#include <stdio.h>
#include <conio.h>
#define  ROW 3    // кол-во строк
#define  COL 5    // кол-во столбцов

void main()
{
    int a[ROW][COL]; // массив
    int s[COL];      // сумма элементов
    int i,j;

    printf("\nВведите массив\n");
    printf("После ввода элементов каждой строки,");
    printf("\n%i целых чисел, нажимайте <Enter>\n", COL);
    for (i = 0; i < ROW; i++) // ROW строк
    {
        printf("->");
        for (j = 0; j < COL; j++)
            scanf("%i", &a[i][j]);
     }

    printf("\nВведенный массив\n");
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
            printf("%i " , a[i][j]);
        printf("\n");
    }

    // "очистим" массив s
    for (i = 0; i < COL; i++)
        s[i] = 0;

    // обработка
    for (j = 0; j < COL; j++)     // для каждого столбца
        for (i = 0; i < ROW; i++) // суммируем эл-ты
            s[j] += a[i][j];

    printf("------------------------------\n");
    for (i = 0; i < COL; i++)
        printf("%i ", s[i]);

    printf("\nДля завершения нажмите <Enter>");
    getch();
}

