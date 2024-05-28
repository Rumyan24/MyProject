#include<iostream>
#include <cmath>
using namespace std;
int main(){
// онстанта Ц ускорение свободного падени€ и число pi:
const double g=9.8;
const double pi=3.1415;
//Ќачальные и расчетные параметры задачи
//(скорость, угол и врем€ полета):
double v,alpha,T;
//ћомент времени и координаты:
double t,x,y;
//¬вод параметров:
cout<<"Enter speed v = ";
cin>>v;
cout<<"Enter angel alpha = ";
cin>>alpha;
alpha=alpha*pi/180;
T=2*v*sin(alpha)/g;
cout<<"Enter time t < "<<T<<": ";
cin>>t;
x=v*t*cos(alpha);
y=v*t*sin(alpha)-g*t*t/2;
cout<<"x = "<<x<<"\n";
cout<<"y = "<<y<<"\n";
return 0;
}