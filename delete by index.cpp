#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array "<<endl;
    cin>>n;
int arr[n],i,loc;
cout<<"enter "<<n<<" elememnts of array"<<endl;
for(i=0;i<n;i++){
cin>>arr[i];
}
cout<<"enter the location of element to be deleted";
cin>>loc;
--loc;
for(i=loc;i<=(n-1);i++){
arr[i]=arr[i+1];
}
cout<<"after deletion array is "<<endl;
for(i=0;i<n-1;i++){
cout<<arr[i]<<" "<<endl;
}
return 0;
}
