#include<iostream>
//creating a circu linked list
using namespace std;
struct node {
    int data;
    node *next;

}*start=NULL;
class circu{

    public:
    void* creatlist(int value);
    void display();
    void insert(int value);
    void deletion();

};
void *circu::creatlist(int value){
    node *t=new node;
    node *temp;
    t->data=value;
    t->next=NULL;
    if(start==NULL){
        start=t;
        t->next=t;
    }
    else{
    temp=start;
while(temp->next!=start)
temp=temp->next;    
     temp->next=t;
     t->next=start;
}  
}

void circu::display(){

    node *t;
    t=start;
    while(t->next!=start){
        cout<<t->data<<"->";
        t=t->next;
    }
    cout<<t->data;
    t=t->next;
    cout<<"->"<<t->data;

}
void circu::insert(int value){
    node *t=new node;
      node *t1;
    char ch;
    int i,pos;
    node *temp;
    t->data=value;
    t->next=NULL;
    cout<<"\n do you want to insert at begin/end/ at any position"<<endl;
    cin>>ch;
    if (ch=='b'){
       t->next=start;
       temp=start;
       while(temp->next!=start)
       temp=temp->next;


       temp->next=t;
       start=t;

        }
        else if(ch=='e'){
            temp=start;
while(temp->next!=start)
temp=temp->next;
t->next=start;
temp->next=t;
        }
        else if(ch=='i'||'I'||'p'||'P'){
            cout<<"enter the position"<<endl;
            cin>>pos;
            i=1;
            temp=start;
          

            while((temp->next!=start)&&(i<pos)){
                t1=temp;
                temp=temp->next;
                i++;
             }
                        

t1->next=t;
t->next=temp;
        }


}
void circu::deletion(){
    node *t1,*t;
    t=start;
    cout<<"do you want to delete it at begin/end/at any position"<<endl;
    char cho;
              cin>>cho;
              if(cho=='b'){
               if(start == NULL)  
    {  
       cout<<"Underflow";  
    }  
    else if(start->next == start)  
    {  
        start = NULL;  
       
         
    }  
      
    else  
    {     
        t1 = start;   
        t=start;
        while(t1 -> next != start)  
            t1 = t1 -> next;   
        t1->next = start->next;  
        free(start);  
        start = t1->next;  
     
    }  
              }
else if(cho=='e')
{
    
    while(t->next!=NULL)
    {t1=t;
    t=t->next;
    }
    t1->next=NULL;
   }   else if(cho=='i')
{
    cout<<"enter the position of the node"<<endl;
   
   int pos;
    cin>>pos;
    int i=1;
  
    while((t->next!=NULL)&&(i<pos))
    {
        t1=t;
        t=t->next;
        i++;
    }
    t1->next=t->next;
    


}

}
int main(){

    int choice,value,pos;
    circu s1;
    while(1){
        cout<<endl<<"operations on circu linked list"<<endl;
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
              s1.creatlist(value);
              break;
              case 2:cout<<"enter the value"<<endl;
              cin>>value;
              s1.insert(value);
              break;
              case 3:
              
              s1.deletion();
              break;
    case 4:cout<<"circu linked list is"<<endl;
            
              s1.display();
              break;
        case 5:cout<<"exiting";
                exit(1);
   
       
        }

    }
   
    return 0;
}