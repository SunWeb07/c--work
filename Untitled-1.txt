#include<iostream>
using namespace std;
template <class T>
class MergeSort
{
    T a[20];
    T element;
     public:
        void readArray(int n );
        void Merge(int low,int high,int mid);
        void displayArray(int n);
        void msort(int low,int high);
};
template<class T>
void MergeSort<T>::readArray(int n)
{
    int i;
    for(i=0;i<n;i++)
    cin>>a[i];
}

 

template<class T>
void MergeSort<T>::displayArray(int n)
{
    int i;
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
}

 

template<class T>
void MergeSort<T>::Merge(int low,int high,int mid)
{
    T c[20];
    int i,j,k;
    i=low;
    j=mid+1;
    k=low;
    
    while((i<=mid)&&(j<=high))
    {
        if(a[i]<a[j])
        {
            c[k]=a[i];
            i++;
        }
        else
        {
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

 

template<class T>
void MergeSort< T>::msort(int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        msort(low,mid);
        msort(mid+1,high);
        Merge(low,high,mid);
    }
    
}
int main( )
{
        MergeSort<int>ms;
        int n;
        cout<<"Enter the value of n:";
        cin>>n;
        cout<<"Enter the array elements:";
        ms.readArray(n);
        ms.msort(0,n-1);
        cout<<"Sorted Array is:";
        ms.displayArray(n);
        return 0;
}