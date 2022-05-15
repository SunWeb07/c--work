#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

node *create(int x);
node * insert_end(node *head, int x);
node *insert_beg(node *head, int x);
node *insert_any(node *head,int x);
int main()
{
    node *head = NULL;
    head = insert_end(head, 10);
    head = insert_end(head, 20);
    head = insert_end(head, 30);
    display(head);
    head = insert_beg(head, 15);
    display(head);
    head=insert_any(head,40);
    display(head);

}
node *create(int x)
{
    node *new = (node *)malloc(sizeof(node));
    new -> data = x;
    new -> next = NULL;
    return new;
}
node * insert_end(node *head, int x)
{
    node *new = create(x);
    node *temp = head;

    if(!head)
    {
        head = new;
        return head;
    }
    while(temp -> next)
    {
        temp = temp -> next;
    }
    temp -> next = new;
    return head;
}

node *insert_beg(node *head, int x)
{
    node *new = create(x);
    new -> next = head;
    head = new;
    return head;
}

void display(node *head)
{
    if(!head)
    {
        printf("No node to display\n");
        return;
    }
    node *temp = head;
    while(temp)
    {
        printf("|%d| -> ", temp -> data);
        temp = temp -> next;
    }
    printf("N\n");
}






node *insert_any(node *head ,int value) 

{ 

    int  pos, counter = 0;  

    

    struct node *temp, *s, *ptr; 

    temp = create(value); 

    
     printf("Enter the postion at which node to be inserted: "); 

  scanf("%d",pos);

    int i; 

    s = head;//head is one node where first data address as heading node 

    while (s != NULL) 

    { 

        s = s->next; 

             counter++; 

    } 

    if (pos == 1) 

    { 

        if (s == NULL) 

        { 

            head = temp; 

            head->next = NULL; 

        } 

        else 

        { 

            ptr = s; 

            s = temp; 

            head->next = ptr; 

        } 

    } 

   else if (pos > 1  && pos <= counter) 

    { 

       

        for (i = 1; i < pos; i++) 

        { 

            ptr = s; 

            s = s->next; 

        } 

        ptr->next = temp; 

        temp->next = s; 

    } 

    else 

    { 

        printf("Positon out of range"); 

    } 

return head;
}
