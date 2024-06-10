#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[100],low,mid,high,i,num,target;
cout<<"define the size of array"<<endl;
cin>>num;
cout<<"enter values of sorted array"<<endl;
for(i=0;i<num;i++){
cout<<"arr["<<i+1<<"]=";
cin>>arr[i];
}
low=0;
high=num-1;
cout<<"define a value to be searched"<<endl;
cin>>target;
while(low<=high){
mid=(low+high)/2;
if(arr[mid]==target)
{
cout<<"element is found at index "<<(mid+1);
exit(0);
}
else if(target>arr[mid])
{
low=mid+1;
}
else if(target<arr[mid]){
high=mid -1;
}
}
cout<<"the number is not found"<<endl;
return 0;
}
