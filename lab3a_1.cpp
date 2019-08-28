#include<iostream>
using namespace std;
int findPivot(int a[],int l,int h)
{
int pivot=a[l],i=l+1,j=h;
int temp;
while(1)
{
while(a[i]<=pivot&&i<=h)
{i++;}
while(a[j]>=pivot&&j>=l)
{j--;}
if(i<j)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
else
{
temp=a[l];
a[l]=a[j];
a[j]=temp;
return j;
}
}
}
void qs(int a[],int l,int h)
{
int pi;
if(l<h)
{
pi=findPivot(a,l,h);
qs(a,l,pi-1);
qs(a,pi+1,h);
}
}
int main()
{
int n;
cout<<"enter the value of n:"<<endl;
cin>>n;
int a[n];
cout<<"enter the array elements:"<<endl;
for(int i=0;i<n;i++)
cin>>a[i];
qs(a,0,n-1);
cout<<"after sorting:"<<endl;
for(int i=0;i<n;i++)
cout<<a[i]<<"\t";
return 0;
}
