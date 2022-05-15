#include <iostream> 
using namespace std; 
class complex 
{ 
private: 
	int real, imag; 
public: 
	complex(int r = 0, int i =0) 
	{ real = r; imag = i; } 
	friend ostream & operator << (ostream &out, const complex &c); 
	friend istream & operator >> (istream &in, complex &c); 
    friend complex operator +(complex, complex);
}; 
complex operator +(complex x, complex y)
{
return complex(x.real + y.real, x.imag + y.imag);
}
ostream & operator << (ostream &out, const complex &c) 
{ 
	out << c.real; 
	out << "+i" << c.imag << endl; 
	return out; 
} 
istream & operator >> (istream &in, complex &c) 
{ cout << "Enter Real Part "; 
	in >> c.real; 
	cout << "Enter Imaginary Part "; 
	in >> c.imag; 
	return in; 
} 
int main() 
{ 
complex c1,c2,c3; 
cin >> c1; 
cout << "The 1st complex object is "; 
cout << c1<<endl; 
cin >> c2; 
cout << "The 2nd complex object is "; 
cout << c2<<endl; 
c3=c1+c2;
cout<<"The resultant is "<<c3<<endl;
return 0; 
}
