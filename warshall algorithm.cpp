#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"enter the size of matrix "<<endl;
cin>>n;
int a[n][n];
int i,j,k;
for(i=0;i<n;i++){
for(j=0;j<n;j++)
{
cin>>a[i][j];
}
}
cout<<endl;
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;
for(k=0;k<n;k++){
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            a[i][j]=a[i][j]+a[i][k]*a[k][j];
        }
    }
}
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(a[i][j]!=0)
            a[i][j]=1;
    
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}
