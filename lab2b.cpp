#include<iostream>
using namespace std;
int main()
{
int a[40],n,k;
cout<<"enter the value of n:"<<endl;
cin>>n;
cout<<"enter the elements of the array:"<<endl;
for(int i=0;i<n;i++)
cin>>a[i];
cout<<"enter the value of k"<<endl;
cin>>k;
	for(int i=0;i<=k;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
			int temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			}

		}
	}
cout<<"k largest element is:";
for(int i=n-1;i>=k+1;i--)
cout<<a[i]<<"\t";
return 0;
}
