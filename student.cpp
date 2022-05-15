#include<iostream>
#include<string.h>
using namespace std;

class student
{
int roll;
char name[20];
public:
student()
{
roll=2;
strcpy(name, "YYY");
}
student(int x,char y[])
{
roll=x;
strcpy(name,y);
}
student(const student &obj)
{
roll=obj.roll;
strcpy(name,obj.name);}
void display()
{
cout<<"students roll no is "<<roll<<"\tstudentsname is "<<name<<endl;
}
};
int main(){
student s1;
student s(1,"XXX");
student s2(s);
s.display();
s2.display();
s1.display();
return 0;
}