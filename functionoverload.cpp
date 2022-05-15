#include<iostream>
using namespace std;

int sum(int x,int y){
    return x+y;
}
int sum(int x,int y,int z){
    return x+y+z;

}
int main(){
int a,b,c;
cout<<"enter three values"<<endl;
cin>>a>>b>>c;

cout<<"the sum of a and b is = "<<sum(a,b)<<endl;
cout<<"here sum fuction with two parameters is executed"<<endl;
cout<<"the sum of a,b,and c is = "<<sum(a,b,c)<<endl;
cout<<"here sum fuction with three parameters is executed"<<endl;
return 0;



}