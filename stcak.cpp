//Program to implement stack operations using arrays
using namespace std;
template<class T>
class Stack
{
    T *stack;
    int top;
    int capacity;
  public:
    Stack(int stackCapacity=10);
    ~Stack()
    {
           delete [] stack;
    }
    bool IsEmpty();
    bool IsFull();
    void push(const T& item);
    void pop();
    T & peek();
    void display();
};    
template<class T>
Stack<T>::Stack(int stackCapacity)
{
    capacity=stackCapacity;
    if (capacity<1)
       throw "stack capacity must be greater than 0";
    stack=new T[capacity];
    top=-1;
       
}
template<class T>
bool Stack<T>::IsEmpty()
{
    return (top==-1);
}    
template<class T>
bool Stack<T>::IsFull()
{
    return (top==capacity-1);
}  
template <class T>
void Stack<T>::push(const T& item)
{
    if (IsFull())
    { 
         throw "stack is full";
         
    }
    top=top+1;
    stack[top]=item;
}
template <class T>
void Stack<T>::pop()
{
    if (IsEmpty())
    {
        throw "stack underflow";
    }
    stack[top].~T();
    top=top-1;
}
template <class T>
T & Stack<T>::peek()
{
    if (IsEmpty())
    {
    throw "stack is empty";
    }
    return stack[top];
}
template <class T>
void Stack<T>::display()
{
    int i;
    cout<<"Stack elements are"<<endl;
    for(i=top;i>=0;i--)
    {
        
      cout<<stack[i]<<endl;  
    }
}
int main()
 {
     Stack<char> s(5);
     s.push('A');
    s.push('B');
    s.push('C');
     cout<<s.peek()<<endl;
     s.pop();
     cout<<s.peek();
     s.push('D');
     s.display();
     return 0;
 }     

