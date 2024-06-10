#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[100],n,i,j,element,del=0;
cout<<"enter the size of array"<<endl;
cin>>n;
cout<<"enter the elements of array"<<endl;
for(i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"enter the element to be deleted"<<endl;
cin>>element;
for(i=0;i<n;i++){
    if(arr[i]==element){
        for(j=i;j<(n-1);j++)
            arr[j]=arr[j+1];

        i--;
        n--;
    }
}
cout<<"after deleting the new array is: "<<endl;
for(i=0;i<n;i++){
    cout<<arr[i]<<" "<<endl;
}
return 0;
}
