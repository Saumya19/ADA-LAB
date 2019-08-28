#include<iostream>
using namespace std;
int main(){
cout<<"enter n"<<endl;
int n,i,j,k;
cin>>n;
int a[n];
cout<<"enter array elements:";
for(j=0;j<n;j++)
cin>>a[j];
int min,c;
for(i=0;i<k;i++)
{
min=i;
c++;
for(j=i+1;j<n;j++)
{
 if(a[j]<a[min])
  min=j;
}
int temp;
temp=a[i];
a[i]=a[min];
a[min]=temp;
}
for(int m=0;m<n;m++)
cout<<a[i];
cout<<"comparisons"<<c;
return 0;
}

