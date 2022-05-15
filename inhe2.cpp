
#include <iostream>

using namespace std;


class mother {


    public:
    mother(){
        cout<<"mother class is here";
    }
    void display()
    {
        cout<<"different for mother"<<endl;
    }
};
class daughther:public mother

{
     public:
    daughther()
    {
        cout<<"\ndaughter class is here";
    }
    
   
    void display()
    {
        cout<<"\ndifferent for daughter"<<endl;
    }
};
int main()
{

    daughther d;
    d.display();


    return 0;
}




