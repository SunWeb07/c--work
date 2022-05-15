#include<iostream>
using namespace std;
int main(){
void insertatfirst(int arr[], int n,int k=9);
    int n=5;
    int arr[10]={1,2,3,4,5};
    // cout<<"enter no.of element";
    // cin>>n;
    // for (size_t i = 0; i < n; i++)
    // {
    //     cout<<"enter array element";
    //     cin>>arr[i];
    //     /* code */
    // }
    
   
    // for (size_t i = 0; i < n; i++)
    // {
      
    //     cout<<arr[i];
    //     /* code */
    // }
    int l;
    cout<<"enter number to be inserted";
    //cin>>l;

   insertatfirst(arr,n,l);


}


void insertatfirst(int arr[], int n,int k=9){
          
           for (size_t i = n-1; i >=0; i--)
     {
      
arr[i+1]=arr[i];
    //     /* code */
     }    
     
           n=n+1;
        arr[0]=k;
        cout<<"okok";
 
          for (size_t i = 0; i < n; i++)
     {
      
         cout<<arr[i];
    //     /* code */
     }
return;
}


// void insertatlast(int arr[], int n,int k){
          
       
//         arr[n]=k;
//            n=n+1;
//           for (size_t i = 0; i < n; i++)
//      {
      
//          cout<<arr[i];
//     //     /* code */
//      }
// return;
// }