#include<bits/stdc++.h>
using namespace std;
int x[20],counti=0;
bool place(int,int);
void nqueens(int k,int n);
int main(){
int n;
cout<<"enter n:";
cin>>n;
nqueens(1,n);
return 0;
}

void nqueens(int k,int n){
for(int i=1;i<=n;i++){
if(place(k,i)){
x[k]=i;
if(k==n){
for(int j=1;j<=n;j++){
cout<<j<<"th queen at:"<<x[j]<<endl;
}
}
else{
nqueens(k+1,n);
}
}
}
}
bool place(int k,int i){
for(int j=1;j<=k-1;j++){
if((x[j]==i) or(abs(x[j]-i)==abs(j-k)))
{
return false;
}
}
return true;
}

