#include<iostream>
using namespace std;
int main(){
	int arr[100],i,num,index,n;
	cout<<"define the size of array"<<endl;
	cin>>n;
	cout<<"enter the values of array"<<endl;
	for(i=0;i<n;i++){
	cout<<"arr["<<i<<"]=";
	cin>>arr[i];
	}
	cout<<"enter number to search"<<endl;
	cin>>num;
	for(i=0;i<n;i++)
	{
		if(arr[i]==num){
			index =i;
			break;
		}
	}
cout<<"found at index no."<<index<<endl;
return 0;
}
