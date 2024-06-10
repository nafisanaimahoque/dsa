#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int key,data;
    node* next;
    node()
    {
key=0;
data=0;
next=NULL;
    }
    node(int k,int d)
    {
        key=k;
        data=d;
    }
    };
    class SinglyLinkedList{
public:
    node* head;
    SinglyLinkedList()
{
    head=NULL;
}
SinglyLinkedList(node* n)
{
    head=n;
}
node* nodeExists(int k)
{
    node* temp=NULL;
    node* ptr=head;
    while(ptr!=NULL)
    {
        if(ptr->key==k)
        {
            temp=ptr;
        }
        ptr=ptr->next;
    }
    return temp;
}
void appendnode(node* n)
{
    if(nodeExists(n->key)!=NULL)
    {
        cout<<"node already exists with key value"<<n->key<<"append another node"<<endl;
    }
    else{
        if(head==NULL)
        {
            head=n;
            cout<<"node appended"<<endl;
        }
        else{
node* ptr=head;
while(ptr->next!=NULL)
{
    ptr=ptr->next;
}
        ptr->next=n;
        cout<<"node appended"<<endl;
    }
}
}
void prependnode(node* n)
{
    if(nodeExists(n->key)!=NULL)
    {
        cout<<"node already exists"<<n<<endl;
    }
    else
    {
        n->next=head;
        head=n;
        cout<<"node prepended"<<endl;
    }
}
void insertnode(int k,node *n)
{
    node* ptr=nodeExists(k);
    if(ptr==NULL)
    {
    cout<<"no node exists with key value"<<k<<endl;
    }
    else
    {
        if(nodeExists(n->key)!=NULL)
        {
            cout<<"node already exists with key value"<<n->key<<"insert another"<<endl;
        }
        else
        {
            n->next=ptr->next;
            ptr->next=n;
            cout<<"node inserted"<<endl;
        }
    }
}
void deletenode(int k)
{
    if(head==NULL)
    {
        cout<<"linked list empty"<<endl;
    }
    else if(head!=NULL)
    {
      if(head->key==k)
      {
          head=head->next;
          cout<<"node unlinked with key"<<k<<endl;
      }
      else
      {
          node*temp=NULL;
          node* prevptr=head;
          node* currentptr=head->next;
          while(currentptr!=NULL)
          {
              if(currentptr->key==k)
              {
                  temp=currentptr;
                  currentptr=NULL;
              }
              else
              {
                  prevptr=prevptr->next;
                  currentptr=currentptr->next;
              }
          }
          if(temp!=NULL)
          {
              prevptr->next=temp->next;
              cout<<"node unlinked with key value"<<k<<endl;
          }
          else{
            cout<<"node doesn't exist with key value"<<k<<endl;
          }
      }
    }
}
void updatenode(int k,int d)
{
    node* ptr=nodeExists(k);
    if(ptr!=NULL)
    {
        ptr->data=d;
        cout<<"node doesn't exist with key value"<<k<<endl;
    }
}
void print()
{
    if(head==NULL)
    {
        cout<<"no nodes in linked list"<<endl;
    }
    else
    {
        cout<<"lined list values"<<endl;
        node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->key<<","<<temp->data<<endl;
            temp=temp->next;
        }
    }
}
};

int main()
{
    SinglyLinkedList s;
    int option,key1,k1,data1;
    do
    {
        cout<<"what operation you want?0 to exit"<<endl;
        cout<<"1.add node at the end"<<endl;
        cout<<"2.add node at the beginning"<<endl;
        cout<<"3.insert node after a certain node"<<endl;
        cout<<"4.delete node by key"<<endl;
        cout<<"5.update node by key"<<endl;
        cout<<"6.print"<<endl;
        cin>>option;
        node* n1=new node();
        switch(option)
        {
        case 0:
            break;
        case 1:
            cout<<"enter key and data to add node in the end"<<endl;
            cin>>key1;
            cin>>data1;
            n1->key=key1;
            n1->data=data1;
            s.appendnode(n1);
            break;
        case 2:
            cout<<"enter key and data to add node in the beginning"<<endl;
            cin>>key1;
            cin>>data1;
            n1->key=key1;
            n1->data=data1;
            s.prependnode(n1);
            break;
        case 3:
            cout<<"enter key of existing node after which you want to add new node"<<endl;
            cin>>k1;
            cout<<"enter key and data of new node"<<endl;
            cin>>key1;
            cin>>data1;
            n1->key=key1;
            n1->data=data1;
            s.insertnode(k1,n1);
            break;
        case 4:
            cout<<"enter the key of the node to be deleted"<<endl;
            cin>>k1;
            s.deletenode(k1);
            break;
        case 5:
            cout<<"enter key and new data  to be updated"<<endl;
            cin>>key1;
            cin>>data1;
            s.updatenode(key1,data1);
            break;
        case 6:
            s.print();
            break;

        }
    }
    while(option!=0);
    return 0;
}
