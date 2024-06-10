#include<iostream>
#include<string>
using namespace std;
class Stack{
private:
int top;
int arr[5];
public:
Stack()
{
top=-1;
for(int i=0;i<5;i++)
{
arr[i]=0;
}
}
bool isEmpty(){
if(top==-1)
return true;
else
return false;
}
bool isFull(){
if(top==4)
return true;
else
return false;
}
void push(int val){
if(isFull()){
cout<<"Stack overflow"<<endl;
}
else if(val<0){
cout<<"enter positive numbers only"<<endl;
}
else
{
top++;
arr[top]=val;
}
}
int pop(){
if(isEmpty()){
    cout<<"stack underflow"<<endl;
    return 0;
}
else{
    int popvalue=arr[top];
    arr[top]=0;
    top--;
    return popvalue;
    }
}
int count(){
return (top+1);
}
void display(){
cout<<"all values in stack are"<<endl;
for(int i=4;i>=0;i--){
    cout<<arr[i]<<" ";
}
}
};
int main()
{
    Stack s1;
    int option,position,value;
    do{
    	cout<<endl;
        cout<<"what you want to perform,0 to exit"<<endl;
        cout<<"1. push"<<endl;
        cout<<"2. pop"<<endl;
        cout<<"3. underflow"<<endl;
        cout<<"4.overflow"<<endl;
        cout<<"5.count"<<endl;
        cout<<"6.display"<<endl;
        cin>>option;
        switch(option){
    case 1:
        cout<<"enter an item to push"<<endl;
        cin>>value;
        s1.push(value);
        break;
    case 2:
        cout<<"popped value"<<s1.pop()<<endl;
        break;
    case 3:
        if(s1.isEmpty())
            cout<<"stack is underflow"<<endl;
        else
            cout<<"stack is not empty"<<endl;
        break;
    case 4:
        if(s1.isFull())
            cout<<"stack is overflow"<<endl;
        else
            cout<<"stack is not full"<<endl;
        break;
    case 5:
      cout<<"number of items in the stack are"<<s1.count()<<endl;
      break;
    case 6:
        s1.display();
        break;
        }
    }
    while(option!=0);
    return 0;

}
