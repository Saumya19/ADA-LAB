#include<iostream>
using namespace std;
void combine(int a[],int l,int mid,int h)
{
int c[h+1];
int i=l,j=mid+1,k=l;
while(i<=mid&&j<=h)
{
if(a[i]<a[j])
c[k++]=a[i++];
else
c[k++]=a[j++];
}
while(i>mid&&j<=h)
c[k++]=a[j++];
while(j>h&&i<=mid)
c[k++]=a[i++];
for(int m=l;m<=h;m++)
a[m]=c[m];
}
void ms(int a[],int l,int h)
{
int mid;
if(l<h)
{
 mid=(l+h)/2;
ms(a,l,mid);
ms(a,mid+1,h);
combine(a,l,mid,h);
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
ms(a,0,n-1);
cout<<"after sorting:"<<endl;
for(int i=0;i<n;i++)
cout<<a[i]<<"\t";
return 0;
}
