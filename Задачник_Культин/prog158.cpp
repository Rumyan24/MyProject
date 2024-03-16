// Подсчет ненулевых элементов массива
// (доступ к элементам по номеру)
#include <stdio.h>
#include <conio.h>

#define SIZE 5 // размер массива
void main()
{
    int a[SIZE];  //массив
    int n = 0;    // кол-во ненулевых эл-тов
    int i;        // индекс

    printf("\nВведите массив целых чисел.\n");
    printf("После ввода каждого числа ");
    printf("нажимайте <Enter>\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("a[%i] ->",i+1);
        scanf("%i", &a[i]);
        if (a[i] != 0)  n++;
    }
    printf("В массиве %i ненулевых элемента.\n", n);
    printf("\nДля завершения нажмите <Enter>");
    getch();
}

