#include<iostream>
using namespace std;
int main(){
int arr[50],n,i,j,x;
cout<<"enter the size of array ";
cin>>n;
cout<<"enter "<<n<<" numbers ";
for(i=0;i<n;i++)
cin>>arr[i];
for(i=0;i<(n-1);i++){
for(j=0;j<(n-i-1);j++){
if (arr[j]>arr[j+1])
{
x=arr[j];
arr[j]=arr[j+1];
arr[j+1]=x;
}
}
}
cout<<"after sorting the array is "<<endl;
for(i=0;i<n;i++)
cout<<arr[i]<<" "<<endl;
return 0;
}
