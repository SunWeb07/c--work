#include<iostream>
using namespace std;
template <class t>
class abc{
    t l,k;
    public:
    void getvalue(){
       cout<<"enter l\n";
        cin>>l;
        cout<<"enter k\n";
        cin>>k;
    }
   t addit(){
       cout<<"\nafter adding it\t";
        return l+k;
    }
    void printit(){
        cout<<"\nvalues are\n";
        cout<<l<<"\t"<<k;
    }
};

int main(){
    abc <int> j;
    abc <string> p;
    j.getvalue();
     p.getvalue();
     j.printit();
    p.printit();
    cout<<j.addit();
        cout<<p.addit();
return 0;
}