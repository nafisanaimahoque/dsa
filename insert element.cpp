#include<iostream>
using namespace std;
int main(){
int arr[100],loc,element,n,i;
cout<<"enter size of array"<<endl;
cin>>n;
cout<<"enter elements"<<endl;
for(i=0;i<n;i++){
cin>>arr[i];
}
cout<<"enter the location to insert"<<endl;
cin>>loc;
cout<<"enter the element to insert"<<endl;
cin>>element;
n++;
for(i=n-1;i>=loc;i--){
arr[i]=arr[i-1];

}
arr[loc-1]=element;
cout<<"after inserting array is"<<endl;
for(i=0;i<n;i++){
cout<<arr[i]<<endl;
}
return 0;
}
