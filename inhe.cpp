#include<iostream>

using namespace std;

class shape
{
    protected:
    int h,l;
    public:
    shape(){
        h=10;
        l=5;
    }
   shape(int x,int y){
   h=x;
   l=y;
   }
   
 };
class rect:public shape
{
    public:
    rect()
    {
        h=15;
        l=5;
    }
    
    rect(int x,int y):shape(x,y){

        h=x;
        l=y;
    }
    int area(){
        return(h*l);
    }
};
class tri:public shape{
    public:
    tri()
    {
       h=10;
        l=5;     }
    
    tri(int x, int y):shape(x,y){
      h=x;
        l=y;
    }
    int area(){
        return (0.5*h*l);
    }
};
int main()
{
    rect r1;
    cout<<r1.area();
    rect r(2,3);
        cout<<"\n"<<r.area();
        tri t1;
        cout<<endl<<t1.area();
    tri t(3,2);

    cout<<"\n"<<t.area();
    return 0;
   
}


