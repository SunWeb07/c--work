#include<iostream>
using namespace std;
template <class t>
class sort{
    private:
    t a[10];
    t element;
    public:
    void readarray(int );
    void mergesort(int ,int);
    void display(int);
    void merge(int,int,int);
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
void sort<t>::merge(int low,int high,int mid){
    t c[20];
    int i,j,k;
    i=low;
    j=mid+1;
    k=low;
    while((i<=mid)&&(j<=high)){
      if(a[i]<a[j]){
        c[k]=a[i];
        i++;
      }
      else {
        c[k]=a[j];
        j++;
      }

      
        k++;
    }
    
    while(i<=mid)
    {
            c[k]=a[i];
            k++;
            i++;
    }
    while(j<=high)
    {
            c[k]=a[j];
            k++;
            j++;
    }
    for(i=low;i<k;i++)
    a[i]=c[i];
}
template <class t>
void sort<t>::mergesort(int low,int high){
    int mid;
    if(low<high){
      mid=(low+high)/2;
      mergesort(low,mid);
      mergesort(mid+1,high);
      merge(low,high,mid);
    }
   
}
int main(){
    sort <int> i;
   
  int n;
    cout<<"enter the size of array\n";
    cin>>n;
    cout<<"enter the integer element\n";
    i.readarray(n);
    i.mergesort(0,n-1);
     i.display(n);
    //   cout<<"enter the characters element\n";
    // c.readarray(n);
    // c.mergesort(n);
    // c.display(n);
    // cout<<"enter the floating element\n";
    // f.readarray(n);
    // f.mergesort(n);
    // f.display(n);
    return 0;
}