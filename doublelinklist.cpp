#include<iostream>
//creating a double linked list
using namespace std;
struct node {
    int data;
    node *pre;
    node *succ;

}*start=NULL,*last=NULL;
class dou{

    public:
    void* creatlist(int value);
    void display();
    void insert(int value);
    void deletion();

};
void *dou::creatlist(int value){
    node *t=new node;
    node *temp;
    t->data=value;
    t->succ=NULL;
     t->pre=NULL;
    if(start==NULL){
        start=t;
        last=t;
    }
    else{
    last->succ=t;
    t->pre=last;
    last=t;

}  
}

void dou::display(){

    node *t;
    t=start;
    while(t!=NULL){
        cout<<t->data<<"<-->";
        t=t->succ;
    }
    cout<<"NULL";
}
void dou::insert(int value){
    node *t=new node;
    char ch;
    int i,pos;
    node *temp;
    t->data=value;
    t->succ=NULL;
    cout<<"\n do you want to insert at begin/end/ at any position"<<endl;
    cin>>ch;
    if (ch=='b'){
       temp = start; 

        start = t; 

        start->succ = temp;
        }
        else if(ch=='e'){
            temp=start;
while(temp->succ!=NULL)
temp=temp->succ;
t->succ=NULL;
temp->succ=t;
        }
        else if(ch=='i'){
            cout<<'enter the position'<<endl;
            cin>>pos;
            i=1;
            temp=start;
            node *t1;

            while((temp!=NULL)&&(i<pos)){
                t1=temp;
                temp=temp->succ;
                i++;
             }
                        
                           t->succ=temp;
                           t1->succ=t->succ;
        }


}/*
void dou::deletion(){
    node *t1,*t;
    t=start;
    cout<<"do you want to delete it at begin/end/at any position"<<endl;
    char cho;
              cin>>cho;
              if(cho=='b'){
                  t=start;
                  start=start->succ;
                  delete t;
              }
else if(cho=='e')
{
    
    while(t->succ!=NULL)
    {t1=t;
    t=t->succ;
    }
    t1->succ=NULL;
   }   else if(cho=='i')
{
    cout<<"enter the position of the node"<<endl;
   
   int pos;
    cin>>pos;
    int i=1;
  
    while((t->succ!=NULL)&&(i<pos))
    {
        t1=t;
        t=t->succ;
        i++;
    }
    t1->succ=t->succ;
    


}

}*/
int main(){

    int choice,value,pos;
    dou d1;
    while(1){
        cout<<endl<<"operations on dou linked list"<<endl;
        cout<<"1.creation"<<endl;
        cout<<"2.insertion"<<endl;
             cout<<"3.deletion"<<endl;
             cout<<"4.display"<<endl;
        cout<<"5.exit"<<endl<<"enter the choice"<<endl;
        cin>>choice;    
        switch (choice)
        {
        case 1:cout<<"enter the value"<<endl;
              cin>>value;
              d1.creatlist(value);
              break;
             /* case 2:cout<<"enter the value"<<endl;
              cin>>value;
              d1.insert(value);
              break;
              case 3:
              
              d1.deletion();
              break;*/
    case 4:cout<<"dou linked list is"<<endl;
            
              d1.display();
              break;
        case 5:cout<<"exiting";
                exit(1);
   
       
        }

    }
   
    return 0;
}