// Сравнение двух целых чисел 
#include <stdio.h>
#include <conio.h>
void main()
{
   int a,b; // сравниваемые числа

   printf("\nВведите в одной строке два целых ");
   printf("числа и нажмите <Enter>");
   printf("->");
   scanf("%i%i", &a, &b);
   if (a == b)
       printf("Числа равны");
   else if (a < b)
          printf("%i меньше %i\n", a, b);
    else  printf("%i больше %i\n", a, b);

    printf("\nДля завершения нажмите <Enter>");
    getch();
}

