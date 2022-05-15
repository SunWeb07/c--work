#include<iostream>
using namespace std;
struct node{
int info;
node *lc;
node *rc;
}*root;
class BST{
    public:
    void inserted(node *,node *);
    void inorder(node *);
    void preorder(node *);
    void postorder(node *);
    BST(){
        root=NULL;
    }
};

void BST::inserted(node *r,node *n)
{
 if(root==NULL)
    {
     root=n;
    return;
    }

if(r!=NULL){
    if(r->info==n->info){
        cout<<"element already exist";
    }
    else if(r->info>n->info){
        if(r->lc!=NULL){
            inserted(r->lc,n);

        }
        else{
            r->lc=n;
            return;
        }

    }
    else if(r->info<n->info){
    if(r->rc!=NULL){
    inserted(r->rc,n);
    }
    else{
    r->rc=n;
    return;
        }
    }

}
return;

}



void BST::inorder(node *r){
    if(root==NULL){
        cout<<"tree is empty";
        return;
    }
    else if(r!=NULL){
        inorder(r->lc);
        cout<<r->info;
        inorder(r->rc);

    }
    return;
}


void BST::preorder(node *r){
    if(root==NULL){
        cout<<"tree is empty";
        return;
    }
    else if(r!=NULL){
         cout<<r->info;
        preorder(r->lc);
       
        preorder(r->rc);

    }
    return;
}

void BST::postorder(node *r){
    if(root==NULL){
        cout<<"tree is empty";
        return;
    }
    else if(r!=NULL){
    
        postorder(r->lc);
       
        postorder(r->rc);
     cout<<r->info;
    }
    return;
}




int main()
{
    int choice;
    BST bst;
node *temp;
    while(1){
        cout<<"-------------------------------------------------"<<endl;
        cout<<"operation on binary search tree";
        cout<<"\n-------------\n";
        cout<<"1.inserted\n";
        cout<<"2.inorder\n";
        cout<<"3.preorder\n";
        cout<<"4.postorder\n";
        cout<<"5.exit\n";
        cout<<"enter the choice\n";
        cin>>choice;
        switch (choice)
        {
        case 1: temp =new node;
                cout<<"enter the element to be inserteded";
             cin>>temp->info;
             temp->lc=NULL;
            temp->rc=NULL;
             bst.inserted(root,temp);
               break;
        case 2:cout<<"inorder tranversal is";
               bst.inorder(root);

                     break;
        case 3: cout<<"preorder traversal is";
                     bst.preorder(root);
                     break;
         case 4:cout<<"postorder traversal is ";
                        bst.postorder(root);
                            break;
        case 5:cout<<"exit";
                    exit(1);
     
        }
    }
    return 0;
}