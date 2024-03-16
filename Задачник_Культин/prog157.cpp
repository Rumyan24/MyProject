// Ввод, вывод и обработка массива
#include <stdio.h>
#include <conio.h>
void main()
{
int a[7]; // массив
   int sum;  // сумма элементов массива
   float m;  // среднее арифметическое	

   int j;

   printf("\nВвод массива целых чисел");
   printf("После ввода каждого числа нажмите <Enter>\n");

   // ввод массива
   for ( j = 0; j < 7; j++)
   {
           printf("na[%i] -> ", j);
           scanf("%i",&a[j]);  	                        
   }

   // вывод массива
   printf("\nМассив: \n");
   for ( j = 0; j < 7; j++)
   {
           printf("%i   ", a[j]);                      
   }

   sum = 0;
   // вычислить сумму элементов
   for ( j = 0; j < 7; j++)
   {
            sum = sum + a[j]; 
   }
   
   m = sum / 7;
   
   printf("Среднее арифметическое: %f", m);

   printf("\nДля завершения нажмите <Enter>");
   getch();
}


