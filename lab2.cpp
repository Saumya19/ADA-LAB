#include<iostream>
using namespace std;
int sorting(int a[],int n)
{
int k;
cout<<"enter the value of n"<<endl;
cin>>n;
cout<<"enter the array elements:"<<endl;
for(int i=0;i<n;i++)
cin>>a[i];
cout<<"enter the value of k"<<endl;
cin>>k;
int min;
	for(int i=0;i<=k;i++)
	{
		min=i;

		for(int j=i+1;j<n-1;j++)
		{
                 if(a[j]<a[min])
		min=j;
		}
	int temp=a[i];
	a[i]=a[min];
	a[min]=temp;
	}
return a[k-1];
}
int main()
{
int a[40],n;
int x=sorting(a,n);
cout<<"kth largest element is:"<<x<<endl;
return 0;
}
