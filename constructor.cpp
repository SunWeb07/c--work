#include<iostream>
#include<string.h>
using namespace std;
class car
{
    private:
    int no;
char name[15];
public: 
car ()//default constructor
  {no = 10;
strcpy (name, "tata");
  } 
car (int x, char y[])//parameterized constructor
{   
no = x;  
strcpy (name, y);} 
car (const car & obj)//copy constructor
  {no = obj.no;
strcpy (name, obj.name);  } 
void print()
{cout <<  "\n"<<name<<"\t"<<no<< endl;
} 
};

int main ()
{
  car c;//default constructor is called
  c.print ();
  car c1 (11, "maruti");//parameterized constructor is called
  c1.print ();
  car c2 (c);//copy constructor is called
  c2.print ();
}
