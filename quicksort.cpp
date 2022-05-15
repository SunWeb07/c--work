#include<iostream>
using namespace std;
template <class t>
class sort{
    private:
    t a[10];
    t element;
    public:
    void readarray(int );
    void quicksort(int ,int);
    void display(int);
    int partition(int,int);
   };
template <class t>
void sort<t>::readarray(int n){
int i ;
for(i=0;i<n;i++)
cin>>a[i];
}
template <class t>
void sort<t>::display(int n){
int i=0;
for(i=0;i<n;i++){
    cout<<"\t"<<a[i];
}
cout<<endl;
}

template <class t>
int sort<t>::partition(int low,int high){
    
    int i,j;
    i=low;
    j=high+1;
    t t1;
  t v=a[low];
    do{
        do{
            i++;
        }
        while(a[i]<v && i<=high);
        do {
            j--;
        }
        while(v<a[j] );
        if(i<j){
            t1=a[i];
            a[i]=a[j];
            a[j]=t1;
        }
    }while(i<j);
    a[low]=a[j];
    a[j]=v;
return( j);
}

template <class t>
void sort<t>::quicksort(int low,int high){
   int j;
   if(low<high){
   j=partition(low,high);
   quicksort(low,j-1);
   quicksort(j+1,high);
   }
}
int main(){
    sort <int> i;
   sort <string> c;
  int n;
    cout<<"enter the size of array\n";
    cin>>n;
    cout<<"enter the integer element\n";
    i.readarray(n);
    i.quicksort(0,n-1);
     i.display(n);
       cout<<"enter the characters element\n";
     c.readarray(n);
     c.quicksort(0,n-1);
     c.display(n);
    // cout<<"enter the floating element\n";
    // f.readarray(n);
    // f.quicksort(0,n-1);
    // f.display(n);
    return 0;
}