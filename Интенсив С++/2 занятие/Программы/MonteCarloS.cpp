#include<cstdio> 
#include<cmath>
#include<ctime>
#include<cstdlib> 
#include<iostream> 
using namespace std;
bool InsideFigure(double x, double y, double a)
{
    return (a*a/ x) < y && y < (2.5*a - x);
}
 
double RandFloat( double b0, double b1)
 
{
    return double(rand()) / RAND_MAX * (b1 - b0) + b0;
}
 
 
    
int main() {
    double a = 0;
    
    cin >> a;   // В дальнейшем нам может понадобиться проверка введённого значения, но сейчас предположим, оно заведомо корректно.
    const double b0 = a/2, b1 = a*2; // Диапазон (одинаковый по осям x и y)
    const double S0 = (b1 - b0)*(b1 - b0);  // Площадь квадрата, в который вписана фигура
    const int N = 100000;  // Общее количество точек
    int n = 0;   // Количество точек внутри фигуры
    
    for(int i=0; i < N; ++i)
    {
        
        if (InsideFigure(RandFloat(b0, b1), RandFloat(b0, b1)))  // Проверяем пару координат на принадлежность фигуре
            ++n;  // Увеличиваем счётчик
    cout << "Monte-Carlo area: " << (S0 * n) / N << endl;
    cout << "Exact area: " << (1.875 - 2*log(2.0))*a*a << endl;
}
    system("pause");
    return 0;
}
