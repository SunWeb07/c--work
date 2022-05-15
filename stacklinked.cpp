#include<iostream>
using namespace std;
struct node
{
int data;
node *next;
}*top =NULL;

class linkedstack{

public:
void push(int v);
void display();
int pop();

};
void linkedstack::push(int v){
    node *temp=new node;
    temp->data=v;
    temp->next=NULL;
if(top==NULL)
{
top=temp;
}
else{
temp->next=top;
top=temp;
}
}


int linkedstack:: pop(){
    node *t;
    int d;
    if(top==NULL){
       cout<<" stack underflow\n";
       exit(1);
    }
  
        t=top;
         d=t->data;
        top=top->next;
        delete(t);
    
    return d;
}

void linkedstack::display(){
    node *t;
    t=top;
    while(t!=NULL)
    {
        cout<<t->data<<"->";
        t=t->next;
    }
}

int main(){
    int choice,value,t;
    linkedstack st;
    while(1){
        cout<<"\nstack operation \n";
cout<<"1.push \n";
cout<<"2.pop \n";
cout<<"3.display \n";
cout<<"4.exit \n";
cin>>choice;
switch(choice){
    case 1:cout<<"\n enter the value of node to be inserted\n";
    cin>>value;
    st.push(value);
    break;
      case 2: t=st.pop();
      cout<<"item id deleted"<<t;
    break;
      case 3:st.display();
    break;
      case 4:exit(1);
}
    }
}
    
