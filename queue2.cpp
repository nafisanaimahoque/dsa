#include<bits/stdc++.h>
using namespace std;
class queu{
private:
    int arr[10],front,rear;
public:
    queu(){
    front=-1;
    rear=-1;
    for(int i=0;i<10;i++){
        arr[i]=0;
    }
    }
    bool isEmpty(){
    if(front==-1 && rear==-1)
        return true;
        else
            return false;
    }
    bool isFull(){
    if(rear==9)
        return true;
        else
            return false;
    }
    void enqueue(int val){
        if (isFull())
            cout<<"queue is overflow"<<endl;
        else if(isEmpty()){
            rear=0;
            front=0;
            arr[rear]=val;
        }
        else{
            rear++;
            arr[rear]=val;
        }
    }
    int deque(){
    int x;
    if(isEmpty()){
        cout<<"queue is underflow"<<endl;
    }
    else if(front==rear){
    x=arr[front];
    arr[front]=0;
        rear=-1;
        front=-1;
        return x;
    }
        else{
            x=arr[front];
        arr[front=0];
        front++;
        return x;
        }
    }
    void display(){
    cout<<"all the elements in the queue are:"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    }
    };
    int main(){
    queu q1;
    int option,value;

    do{
        cout<<"enter 1 to enqueue,2 to dequeue,3 to check overflow,4 to check underflow,5 to print,0 to exit"<<endl;
        cin>>option;
        switch(option){
        case 0:
        break;
        case 1:
            cout<<"enter integer to enqueue"<<endl;
            cin>>value;
            q1.enqueue(value);
            break;
        case 2:
            cout<<"dequeued value"<< q1.deque()<<endl;
            break;
        case 3:
            if(q1.isFull())
                cout<<"queue is overflow"<<endl;
            else
                cout<<"queue is not full"<<endl;
            break;
        case 4:
            if(q1.isEmpty())
                cout<<"queue is underflow"<<endl;
            else
                cout<<"queue is not empty"<<endl;
            break;
        case 5:
            q1.display();
            break;
        }
    }
    while(option!=0);
    return 0;
    }
