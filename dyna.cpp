

#include<iostream>
using namespace std;
int main(){
int n;
int *poi = new int [n];
int i=0;
cout<<"how many elements you want in array--\b";
cin>>n;
for(i=0;i<n;i++){
 cout<<"enter you elements one by one\t--";
 cin>>*(poi+i);

}
cout<<"elements in array are";
for(i=0;i<n;i++){
 cout<<" \n-- "<<*(poi+i);

}


cout<<"\nyou have your dynamic array\n";
delete poi;
cout<<"the pointer is==="<<*poi<<"error";//this error is cause because we have deeleted the pointer 
//now poi pointer does'nt contain any memory location for any value!!! 

return 0;

}

