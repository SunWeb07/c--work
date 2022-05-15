#include<iostream>
using namespace std;
template <class t>
class searchl{
    private:
    t a[10];
    t element;
    public:
    void readarray(t );
    void lsearchl(t);
};
template <class t>
void searchl<t>::readarray(t n){
int i ;
cout<<"\nenter the array element\n";
for(i=0;i<n;i++)
cin>>a[i];
cout<<"enter the element to be searched for -- ";
cin>>element;
}
template <class t>
void searchl<t>::lsearchl(t n){
    int f=0,i;
    for( i=0;i<n;i++){
        if(a[i]==element)
        {
            f=1;
            break;
        }
    }if(f==1)
    cout<<"the element is present at posistion \n"<<i;
    else
    {
        cout<<"element not found";
    }
    
}
int main(){
    searchl <int> li;
    searchl <float> lf;
    searchl <char> lc;
    int n;
    cout<<"enter the size of array\n";
    cin>>n;
    cout<<"enter the integer element\n";
    li.readarray(n);
    li.lsearchl(n);
    cout<<"enter the characters element\n";
    lc.readarray(n);
    lc.lsearchl(n); 
    cout<<"enter the floating element\n";
    lf.readarray(n);
    lf.lsearchl(n);
 return 0;
}