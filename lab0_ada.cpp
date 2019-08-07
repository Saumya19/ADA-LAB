#include<iostream>
using namespace std;
int main()
{
	int x,n,max,i;
	cout<<"enter the number of elements";
	cin>>n;
	int a[n];
	cout<<"enter  elements";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	max=a[0];
	for(int i=0;i<n;i++)
	{
		if(max<a[i])
			max=a[i];
	}
	cout<<"maximum of n elements is"<<max;
	return 0;
}