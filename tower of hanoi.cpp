#include<bits/stdc++.h>
using namespace std;
void tower(int n,char from_rod,char to_rod,char aux_rod)
{
if(n==0){
   return ;
}
    tower(n-1,from_rod,aux_rod,to_rod);
    cout<<" move disk "<< n <<" from rod "<< from_rod <<" to rod "<< to_rod <<endl;
    tower(n-1,aux_rod,to_rod,from_rod);
}
int main(){
    int num;
cout<<"enter the number of disks"<<endl;
cin>>num;
tower(num,'A','C','B');
return 0;
}
