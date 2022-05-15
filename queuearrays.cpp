#include<iostream>
using namespace std;
template<class T>
class Queue
{
    T *queue;
    int r,f;
    int capacity;
  public:
    Queue(int QueueCapacity=10);
    ~Queue()
    {
           delete [] queue;
    }
    bool IsEmpty();
    bool IsFull();
    void enQueue(const T& item);
    void deQueue();
    T & peek();
    void display();
};    
template<class T>
 Queue<T>::Queue(int QueueCapacity)
{
    capacity=QueueCapacity;
    if (capacity<1)
       throw "Queue capacity must be greater than 0";
    queue=new T[capacity];
    r=-1;
    f=-1;
       
}
template<class T>
bool Queue<T>::IsEmpty()
{
    return (r==-1&&f==-1);
}    
template<class T>
bool Queue<T>::IsFull()
{
    return (r==capacity-1);
}  
template <class T>
void Queue<T>::enQueue(const T& item)
{ if (IsFull())
    {  throw "Queue is full";        
    }
    else if(IsEmpty()){
        f=0;
        r=0;
        queue[r]=item;
    }
    else{
    r=r+1;
    queue[r]=item;
}
}
template <class T>
void Queue<T>::deQueue()
{if (IsEmpty())
    {  throw "Queue underflow";
    }   queue[f].~T();
    f=f+1;}
template <class T>
T & Queue<T>::peek()
{ if (IsEmpty())
    {
    throw "Queue is empty";
    }
    return queue[f];}
template <class T>
void Queue<T>::display()
{int i;
    cout<<"\nQueue elements are"<<endl;
    for(i=f;i<r+1;i++)
    {  cout<<queue[i]<<endl;  
    }}
int main()
 { Queue<int> s(5);
     s.enQueue(1);
    s.enQueue(2);
    s.enQueue(3);
    s.display();
     cout<<"peek value is "<<s.peek()<<endl;
     s.deQueue();
     cout<<"peek value is "<<s.peek();
     s.enQueue(4);
     s.display();
     return 0;
 }     

