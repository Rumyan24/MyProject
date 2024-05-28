#include <iostream>
#include <cstdlib>
 
using namespace std;
 
int main(int argc, char** argv) {
    const double n=10000.0;
    double x,y,z;
    int c=0;
    for(int i=0;i<n;i++)
    {
     x=rand()%2001/1000.00-1;
     y=rand()%1001/1000.00;
     z=rand()%2001/1000.00;
     if ((y>=x*x)&&(z<=x*x+y*y))  c=c+1;
}
cout << c << endl;
cout << c/n*4 << endl;
cout << 88/105.0 << endl;
 
    return 0;
}
