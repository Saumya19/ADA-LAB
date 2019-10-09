#include<iostream>
#include<cstring>
using namespace std;
int max(int a,int b)
{
 return (a>b?a:b);
}
void lcs(string x,string y,int m,int n)
{
int l[m+1][n+1];
for(int i=0;i<=m;i++)
{
for(int j=0;j<=n;j++)
{
if(i==0||j==0)
l[i][j]=0;
else if(x[i-1]==y[j-1])
l[i][j]=l[i-1][j-1]+1;
else
l[i][j]=max(l[i-1][j],l[i][j-1]);
}
}
int index=l[m][n];
char lcs[index+1];
lcs[index]='\0';
int i=m,j=n;
while(i>0&&j>0)
{
if(x[i-1]==y[j-1])
{
lcs[index-1]=x[i-1];
i--;
j--;
index--;
}
else if(l[i-1][j]>l[i][j-1])
i--;
else
j--;
}
cout<<"longest common susequence of"<<x<<" and  "<<y<<" is "<<lcs<<endl;
}
int main()
{
string x,y;
cout<<"enter the first string:";
cin>>x;
cout<<"enter the second string:";
cin>>y;
int m=x.length();
int n=y.length();
lcs(x,y,m,n);
return 0;
}


