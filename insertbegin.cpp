#include<iostream>
using namespace std;
int main(){

    int n;
 
    cout<<"enter no.of element";
    cin>>n;
       int arr[n];
    for (size_t i = 0; i < n; i++)
    {
        cout<<"enter array element";
        cin>>arr[i];
        /* code */
    }
    int k;
    cout<<"enter k";
    cin>>k;
   
    for (size_t i = 0; i < n; i++)
    {
      
        cout<<arr[i]<<"\t";
        /* code */
    }
    cout<<endl;
    for( size_t i=0;i<n;i++)
{ arr[i++]=arr[i];
     }
     
     arr[0]=k;
     n++;
     
      
    for (size_t i = 0; i < n; i++)
    {
    cout<<arr[i]<<"\t";
        /* code */
    }


}

