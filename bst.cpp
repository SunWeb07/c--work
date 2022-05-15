#include <iostream>

using namespace std;
struct node
{
int info;
node *lchild;
node *rchild;
} * root;
class BST
{
public:
void insert(node * ,node *);
void inorder(node *);
void preorder(node *);
void postorder(node *);
BST()
{
root = NULL;
}
};
void BST::insert(node *r,node *newnode)
{
if (root==NULL)
{
root=newnode;
return;
}
if(r!=NULL)
{
if (r->info==newnode->info)
{
cout<<"Element already exists";
return;
}
else if (r->info>newnode->info)
{
if (r->lchild!=NULL)
insert(r->lchild,newnode);
else
{
r->lchild=newnode;
return;
}
}
else if(r->info<newnode->info)
{
if(r->rchild!=NULL)
insert(r->rchild,newnode);
else
{
r->rchild=newnode;
return;
}
}
}
return;
}
void BST::inorder(node *r)
{
if (root==NULL)
{
cout<<" Tree is Empty";
return;
}
else if (r!=NULL)
{
inorder(r->lchild);
cout<<r->info;
inorder(r->rchild);
}
return;
}
void BST::preorder(node *r)
{
if (root==NULL)
{
cout<<" Tree is Empty";
return;
}
else if (r!=NULL)
{
cout<<r->info;
preorder(r->lchild);
preorder(r->rchild);
}
return;
}
void BST::postorder(node *r)
{
if (root==NULL)
{
cout<<" Tree is Empty";
return;
}
else if (r!=NULL)
{
postorder(r->lchild);
postorder(r->rchild);
cout<<r->info;
}
return;
}


int main()
{
int choice;
node *temp;
BST bst;
while(1)
{
cout<<"----------------------------\n";
cout<<"Operations on BST";
cout<<"\n -------------------------";
cout<<"\n 1: Insert";
cout<<"\n 2:Inorder";
cout<<"\n 3:Preorder";
cout<<"\n 4:Postorder";
cout<<"\n 5:Exit";
cout<<"\n Enter the choice";
cin>>choice;
switch(choice)
{
case 1: temp = new node;
cout<<"\n Enter the element to be inserted";
cin>>temp->info;
temp->lchild=NULL;
temp->rchild=NULL;
bst.insert(root,temp);
break;
case 2: cout<<"\n Inorder Traversal is";
bst.inorder(root);
cout<<"\n";
break;
case 3: cout<<"\n Preorder Traversal is";
bst.preorder(root);
cout<<"\n";
break;
case 4: cout<<"\n Postorder Traversal is";
bst.postorder(root);
cout<<"\n";
break;
case 5: exit(1);
}
}
return 0;
}