#include<iostream>
using namespace std;
struct node
{
int data;
node *next;
}*r=NULL,*f=NULL;

class linkedqueue{

public:
void enqueue(int v);
void display();
int dequeue();

};
void linkedqueue::enqueue(int v){
    node *temp=new node;
    temp->data=v;
    temp->next=NULL;
if(r==NULL&&f==NULL)
{
r=temp;
f=temp;
}
else{
r->next=temp;
r=temp;
}
}


int linkedqueue:: dequeue(){
    node *t;
    int d;
    if(f==NULL&&r==NULL){
       cout<<" queue underflow\n";
       exit(1);
    }
  else{
        t=f;
         d=t->data;
        f=f->next;
        delete(t);
  }
    return d;
}

void linkedqueue::display(){
    node *t;
    t=f;
    while(t!=NULL)
    {
        cout<<t->data<<"->";
        t=t->next;
    }
}

int main(){
    int choice,value,t;
    linkedqueue st;
    while(1){
        cout<<"\nqueue operation \n";
cout<<"1.enqueue \n";
cout<<"2.dequeue \n";
cout<<"3.display \n";
cout<<"4.exit \n";
cin>>choice;
switch(choice){
    case 1:cout<<"\n enter the value of node to be inserted\n";
    cin>>value;
    st.enqueue(value);
    break;
      case 2: t=st.dequeue();
      cout<<"item id deleted"<<t;
    break;
      case 3:st.display();
    break;
      case 4:exit(1);
}
    }
}
    
