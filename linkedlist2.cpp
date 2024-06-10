#include<bits/stdc++.h>
using namespace std;
class node{
public:
int data;
node* next;
node()
{
    data=0;
    next=NULL;
}
node(int d)
{
    data=d;
}
};
class linkedlist{
public:
    node* head;
    linkedlist()
    {
        head=NULL;
    }
    linkedlist(node* n)
    {
        head=n;
    }
    node* nodeExists(int d)
    {
        node* temp=NULL;
        node* ptr=head;
        while(ptr!=NULL)
        {
            if(ptr->data==d)
            {
                temp=ptr;
            }
            ptr=ptr->next;
        }
        return temp;
    }
    void appendnode(node* n)
    {
        if(nodeExists(n->data)!=NULL)
        {
            cout<<"node already exists"<<endl;
        }
        else{
            if(head==NULL)
            {
                head=n;
                cout<<"node appended"<<endl;
            }
            else
            {
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
    void print()
    {
        if(head==NULL)
        {
            cout<<"no node in linked list"<<endl;
        }
        else{
            cout<<"linked list values"<<endl;
            node* temp=head;
            while(temp!=NULL)
            {
                cout<<temp->data<<endl;
                temp=temp->next;
            }
        }
    }
    void prependnode(node* n)
    {
        if(nodeExists(n->data)!=NULL)
        {
            cout<<"node already exists"<<endl;

        }
        else{
            n->next=head;
            head=n;
            cout<<"node prepended"<<endl;
        }
    }
    void insertmiddle(int d,node* n)
    {
        node*ptr=nodeExists(d);
        if(ptr==NULL)
        {
            cout<<"no node exists with data"<<d<<endl;
        }
        else
        {
            n->next=ptr->next;
            ptr->next=n;
            cout<<"node inserted"<<endl;
        }
    }
void deletenode(int d)
    {
    	if(head==NULL)
    	{
    		cout<<"list is empty"<<endl;
		}
		else if(head!=NULL)
		{
			if(head->data==d)
			{
				head=head->next;
				cout<<d<<"node unlinked"<<endl;
			}
			else
			{
				node* temp=NULL;
				node* prevptr=head;
				node* currentptr=head->next;
				while(currentptr!=NULL)
				{
					if(currentptr->data==d)
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
					cout<<d<<"node unlinked"<<endl;
				}
				else
				{
					cout<<d<<"node doesn't exist"<<endl;
				}
			}
		}
	}
};
int main()
{
    linkedlist l;
    int option,data1,d1;
    do{
        cout<<"1.add node in the end"<<endl;
        cout<<"2.print"<<endl;
        cout<<"3.insert node in the beginning"<<endl;
        cout<<"4.insert node in any place"<<endl;
        cout<<"5.delete"<<endl;
        cin>>option;
        node* n1=new node();
        switch(option)
        {
        case 1:
            cout<<"enter data to add node in the end"<<endl;
            cin>>data1;
            n1->data=data1;
            l.appendnode(n1);
            break;
        case 2:
            l.print();
         break;
        case 3:
            cout<<"enter data of node to insert in the beginning"<<endl;
            cin>>data1;
            n1->data=data1;
            l.prependnode(n1);
            break;
        case 4:
            cout<<"enter data of the node after which you want to add new node"<<endl;
            cin>>d1;
            cout<<"enter data of the node"<<endl;
            cin>>data1;
            n1->data=data1;
            l.insertmiddle(d1,n1);
            break;
        case 5:
            	cout<<"enter the node to be deleted"<<endl;
            	cin>>d1;
            	l.deletenode(d1);
            	break;
        }
    }
    while(option!=0);
        return 0;
}
