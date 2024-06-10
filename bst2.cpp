#include<bits/stdc++.h>
using namespace std;
class treenode{
public:
    int value;
    treenode* left;
    treenode *right;
    treenode()
    {
        value=0;
        left=NULL;
        right=NULL;
    }
    treenode(int v)
    {
        value=v;
left =NULL;
right=NULL;
    }
    };
    class BST{
public:
    treenode* root;
    BST()
    {
        root=NULL;
    }
    bool isEmpty()
    {
        if(root==NULL)
            return true;
        else{
            return false;
    }
    }
    void insert(treenode *newnode)
    {
        if(root==NULL)
        {
            root=newnode;
            cout<<"value inserted as root node"<<endl;
        }
        else
        {
            treenode *temp=root;
            while(temp!=NULL)
            {
                if(newnode->value==temp->value)
                   {
                       cout<<"value already exists"<<endl;
                       return;
                   }
                   else if((newnode->value<temp->value)&&(temp->left==NULL))
                    {
                        temp->left=newnode;
                        cout<<"value inserted"<<endl;
                        break;
                    }
                    else if(newnode->value<temp->value)
                    {
                        temp=temp->left;
                    }
                    else if((newnode->value>temp->value)&&(temp->right==NULL))
                    {
                        temp->right=newnode;
                        cout<<"value inserted to the right"<<endl;
                        break;
                    }
                    else
                    {
                        temp=temp->right;
                    }
            }
        }
    }


    void preorder(treenode* r)
    {
        if(r==NULL)
            return;
        cout<<r->value<<" ";
        preorder(r->left);
        preorder(r->right);
    }
    void inorder(treenode* r)
    {
        if(r==NULL)
            return;
            inorder(r->left);
        cout<<r->value<<" ";
        inorder(r->right);
    }
    void postorder(treenode* r)
    {
        if(r==NULL)
            return;
    postorder(r->left);
    postorder(r->right);
    cout<<r->value<<" ";
    }
        treenode* search(int val)
    {
        if(root==NULL)
        {
            return root;
        }
        else
            {
                treenode* temp=root;
        while(temp!=NULL)
        {
            if(val==temp->value)
            {
                return temp;
            }
            else if(val<temp->value)
            {
                temp=temp->left;
            }
            else
                {
                    temp=temp->right;
                }
        }
        return NULL;
            }
    }
    };
    int main()
{
    int val;
    int option;
    BST obj;
    do
    {

        cout<<"1.insert"<<endl;
        cout<<"2.search"<<endl;
        cout<<"3.print"<<endl;
        cin>>option;
        treenode *newnode=new treenode();
        switch(option)
        {

            case 1:
cout<<"enter the value of tree node to insert in BST";
cin>>val;
newnode->value=val;
obj.insert(newnode);
break;
            case 2:
                cout<<"enter node to search"<<endl;
                cin>>val;
                newnode=obj.search(val);

if(newnode!=NULL)
{
	cout<<"yes"<<endl;
}
else
{
	cout<<"no"<<endl;
}
        break;

            case 3 :
cout<<"preorder"<<endl;
                obj.preorder(obj.root);
                cout<<endl;
                cout<<"inorder"<<endl;
                obj.inorder(obj.root);
                cout<<endl;
                cout<<"postorder"<<endl;
                obj.postorder(obj.root);
                cout<<endl;
break;
        }
    }

    while(option!=0);
        return 0;
}


