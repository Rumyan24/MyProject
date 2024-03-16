// Кривая Серпинского
#define u 5   // Длина штриха, определяет величину кривой
#define DT 25 // определяет скорость вычерчивания кривой
#define PATHTODRIVER "c:\\borlandc\\bgi\\"

#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

// кривая Серпинского состоит из четырех
// элементов: a,b,c и d
// каждый элемент строит соответствующая функция
void a(int i);
void b(int i);
void c(int i);
void d(int i);

// вычерчивает прямую из текущей точки в заданную
// координаты конца задаются в приращениях
#define linetodxy(dx,dy) lineto(getx()+dx,gety()+dy)

void far lineto(int x2, int y2); // вычерчивает линию по точкам
// заменяет стандартную функцию, чтобы
// видеть процесс вычерчивания кривой Серпинского

// элементы кривой
void a(int i)
{
    if (i > 0)
    {
        a(i-1); linetodxy(u, u);
        b(i-1); linetodxy(2*u,0);
        d(i-1); linetodxy(u, -u);
        a(i-1);
    }
}

void b(int i)
{
    if (i > 0)
    {
        b(i-1);linetodxy(-u,u);
        c(i-1);linetodxy(0, 2*u);
        a(i-1);linetodxy(u,u);
        b(i-1);
    }
}

void c(int i)
{
    if (i > 0)
    {
        c(i-1);linetodxy(-u,-u);
        d(i-1);linetodxy(-2*u,0);
        b(i-1);linetodxy(-u,u);
        c(i-1);
    }
}

void d(int i)
{
    if (i > 0)
    {
        d(i-1);linetodxy(u,-u);
        a(i-1);linetodxy(0,-2*u);
        c(i-1);linetodxy(-u,-u);
        d(i-1);
    }
}

void main(void)
{
   int gdriver = DETECT; // драйвер
   int gmode;            // режим
   int errorcode;        // код ошибки

   initgraph(&gdriver, &gmode, PATHTODRIVER);
   errorcode = graphresult();

   if (errorcode == grOk)
   {
      int p; // порядок кривой
      puts("Программа строит кривую Серпинского.");
      puts("Введите порядок кривой (1-4) и нажмите <Enter>");
        printf("->");
        scanf("%i", &p);
        printf("Кривая Серпинского %i-го порядка\n", p);

        moveto(100,100);

        // кривая Серпинского
        a(p); linetodxy(u,u);
        b(p); linetodxy(-u,u);
        c(p); linetodxy(-u,-u);
        d(p); linetodxy(u,-u);

        puts("Для завершения нажмите <Enter>");
        getch();
        closegraph();
    }

    else
    {
      printf("Ошибка: %d\n", errorcode);
      puts("Для завершения нажмите <Enter>");
      getch();
    }
}

// вычерчивает по точкам линию
// подменим этой функцией стандартную, чтобы
// видеть процесс вычерчивания кривой
#include <dos.h>

void far lineto(int x2, int y2)
{
    int x1,y1;  // координаты начала прямой, x2,y2 -  координаты конца
    int x,y;  // координаты текущей точки
    int dx;   // приращение аргумента
    int dy;   // приращение y при рисовании вертикальной линии
    int color;// цвет линии
    int a,b;  // коэффициенты уравнения прямой
    int n;    // кол-во точек
    int i;

    x1 = getx();
    y1 = gety();
    color = getcolor();

    if ( x1 != x2 )
    {
        // не вертикальная линия
        a = (y2-y1)/(x2-x1);
        b = y1- a * x1;
        n = abs(x2-x1)+1;
        if (x2 > x1)
           dx = 1;
        else
           dx = -1;

      x = x1;
      for (i = 1; i<= n; i++)
      {
        y = a*x + b;
        putpixel(x,y,color);
        delay(DT);
        x += dx;
      }
    }

    else //  вертикальная линия
    {
       n = abs(y2-y1);
       if (y2 > y1)
          dy = 1;
       else dy = -1;

       x = x1;
       y = y1;
       for (i = 1; i<=n; i++)
       {
           putpixel(x, y, color);
           delay(DT);
           y += dy;
       }
    }
    putpixel(x2, y2, color);
    moveto(x2, y2);
}

