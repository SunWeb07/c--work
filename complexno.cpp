#include<iostream>
using namespace std;

class complex{

    private:
    int re;
    int im;
    public:
    void display();
    complex(double r, double i) { re = r; im = i; }
friend complex operator +(complex, complex);
friend complex operator >>();
friend complex operator <<();


    
};

complex operator +(complex x, complex y)
{
return complex(x.re + y.re, x.im + y.im);
}