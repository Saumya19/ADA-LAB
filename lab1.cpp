#include<iostream>
using namespace std;
int sqrt_fun(int x)
{
  if(x<2)
   return x;
int low=1,high=x;
int res;
while(low<=high)
{
int mid=(low+high)/2;
if(mid*mid==x)
return mid;
else if(mid*mid<x)
{
low=mid+1;
res=mid;
}
else
high=mid-1;
}
return res;
}
int main()
{
int x;
cout<<"x=";
cin>>x;
cout<<sqrt_fun(x);
return 0;
}
