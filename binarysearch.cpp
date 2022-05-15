#include<iostream>
using namespace std;
template <class t>
class searchb{
    private:
    t a[10];
    t element;
    public:
   
    void readarray(t );

    void bsearch(t);


};
template <class t>
void searchb<t>::readarray(t n){
int i ;
cout<<"\nenter the array element\n";
for(i=0;i<n;i++)
cin>>a[i];
cout<<"enter the element to be searched for -- ";
cin>>element;
}

template <class t>
void searchb<t>::bsearch(t n){
int l,b,m,i,f=0;
l=n-1;
b=0;

while(b<=l){
    m=(l+b)/2;
{
    if(a[m]==element){
        f=1;
        break;
    }
    else if(element>a[m])
    b=m+1;
    else 
    l=m-1;
}
}

if(f==1)
    cout<<"the element is present at posistion "<<m;
    else
    {
        cout<<"element not found";
    }
}
int main(){
   

searchb <int> bi;
    searchb <float> bf;
    searchb <char> bc;
    int n;
    cout<<"enter the size of array\n";
    cin>>n;
    cout<<"enter the integer element\n";
    
    
    cout<<"enter the integer element\n";
    bi.readarray(n);
    bi.bsearch(n);
    
    cout<<"enter the characters element\n";
    bc.readarray(n);
    bc.bsearch(n);
    
    cout<<"enter the floating element\n";
    bf.readarray(n);
    bf.bsearch(n);
 return 0;

}