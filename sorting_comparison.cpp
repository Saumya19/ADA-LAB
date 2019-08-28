#include<iostream>
using namespace std;
void selection(int a[],int n)
{
    int i,temp,mini,j,cmp=0;
    for(i=0;i<n;i++)
    {
        mini=i;
        for(j=i+1;j<n;j++)
        {
            cmp++;
            if(a[j]<a[mini])
            {
                mini=j;
            }

        }
        temp=a[i];
        a[i]=a[mini];
        a[mini]=temp;
    }
 cout<<"after selection sort:"<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<"\t";
cout<<"number of comparisons:"<<"\t"<<cmp<<endl;
}
void bubble(int a[],int n)
{
    int i,j,temp,cmp=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            cmp++;
            if(a[j+1]<a[j])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
cout<<"after bubble sort:"<<endl;
for(int i=0;i<n;i++)
cout<<a[i]<<"\t";
cout<<"number of comparisons:"<<"\t"<<cmp<<endl;

}
void combine(int a[],int l,int mid,int h,int &cmp)
{
int c[h+1];
int i=l,k=l,j=mid+1;
while(i<=mid&&j<=h)
{
    cmp++;
    if(a[i]<a[j])
        c[k++]=a[i++];
    else
        c[k++]=a[j++];
}
if(i>mid)
{
    while(j<=h)
        c[k++]=a[j++];

}
if(j>mid)
{
while(i<=mid)
    c[k++]=a[i++];
}
for(i=l;i<h;i++)
{
    a[i]=c[i];
}

}
void split(int a[],int l,int h,int &cmp)
{
    if(l<h)
    {
        int mid=(l+h)/2;
        split(a,l,mid,cmp);
        split(a,mid+1,h,cmp);
        combine(a,l,mid,h,cmp);


    }
}
void merge_sort(int a[],int n)
{
    int cmp=0;
     split(a,0,n-1,cmp);
    cout<<"after merge sort:"<<endl;
for(int i=0;i<n;i++)
cout<<a[i]<<"\t";
cout<<"number of comparisons:"<<"\t"<<cmp<<endl;

}
int main()
{
    int n,*a,c;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    a = new int [n];
    cout<<"enter the array elements:"<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
        selection(a,n);
        bubble(a,n);
        merge_sort(a,n);
    return 0;
}
