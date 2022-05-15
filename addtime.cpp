#include <iostream>
using namespace std;//class time is defined here
class time
{
private:
  int hour, min, sec;
public:
  void gettime();
 time addtim(time s1,time s2);
 void putTime();
};/*gettime member function is called by object to take input as hour , minutes and seconds to get time format*/
void time::gettime ()
{
cout << " enter :hour" << endl;
  cin >> hour;
   cout << "enter :minutes" << endl;
   cin>>min;
     cout << "enter :second" << endl;
    cin>>sec;
}/* puttime member is called by object to print in time format*/
void time::putTime(void)
{
    cout << endl;
    cout << "Time after add: ";
    cout << hour << ":" << min << ":" << sec << endl;
}// logic to adding time is written here
time time::addtim(time s1, time s2)
{
   time total;
  sec = s1.sec + s2.sec;
  min = s1.min + s2.min + (sec / 60);
  hour = s1.hour + s2.hour + (min / 60);
  min = min % 60;
  sec = sec % 60;
return total;
}
int main ()
{ 
  time t1;
  time t2;
  time t3;
  t1.gettime();
  t1.putTime();
  t2.gettime();
  t2.putTime();
  t3.addtim(t1,t2);
  t3.putTime();
return 0;
}