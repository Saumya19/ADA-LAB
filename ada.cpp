#include<iostream>
#include<fstream>
using namespace std;
int main()
{
int found,n,key,a[30],t,i;
freopen("b.txt","r",stdin);
cin>>t;
cin>>n>>key;
while(t--){
for(int i=0;i<n;i++)
{
cin>>a[i];
}
int low=0,high=n-1;
int mid=(low+high)/2;
while(low<=high)
{
if(a[mid]==key){
cout<<"1"<<endl;
break;
}
else if(a[mid]<key){
low=mid+1;
}
else{ 
high=mid-1;
}
mid=(low+high)/2;
}
if(low>high)
cout<<"-1"<<endl;
}
return 0;
}
