#include<iostream>
using namespace std;
class time{
private:
int hour , min , sec;
public:
void gettime();
int convertsec();

};
int main(){
time ti;
ti.gettime();
cout<<ti.convertsec();  //display results
return 0;
}
void time::gettime(){ // takes input here
cout<<"enter hour:\n";
cin>>hour;
cout<<"enter minute:\n";
cin>>min;
cout<<"enter second:\n";
cin>>sec;

}
int time::convertsec(){//convert hour , minutes , seconds to seconds
return (hour*3600 + min*60 +sec);

}
