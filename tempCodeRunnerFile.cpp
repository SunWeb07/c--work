#include<iostream>
using namespace std;
template <class t>
class sort{
    private:
    t a[10];
    t element;
    public:
   
    void readarray(t );
    void selectsort(t);
    void display(t);
   


};
template <class t>
void sort<t>::readarray(t n){
int i ;


for(i=0;i<n;i++)
cin>>a[i];

}
template <class t>
void sort<t>::display(t n){
int i=0;
for(i=0;i<n;i++){
    cout<<"\t"<<a[i];
}
cout<<endl;
}
template <class t>
void sort<t>::selectsort(t n){
    int min=0;
    int i,j;
    t tem;
    for(i=0;i<n;i++){
        min=i;
        for(j=i+1;j<=n-1;j--)
        {
            if(a[j]>a[min]){
                min=j;
                if(min!=i){
                    tem=a[i];
                    a[i]=a[min];
                    a[min]=tem;
                }
            }
        }
    }
    
}

int main(){
    sort <int> li;
    sort <double> lf;
    sort <char> lc;

    int n;
    cout<<"enter the size of array\n";
    cin>>n;
    // cout<<"enter the integer element\n";
    // li.readarray(n);
    // li.selectsort(n);
    //  li.display(n);
    
    cout<<"enter the characters element\n";
    lc.readarray(n);
    lc.selectsort(n);
    lc.display(n);
    cout<<"enter the floating element\n";
    lf.readarray(n);
    lf.selectsort(n);
    lf.display(n);
   
 return 0;

}