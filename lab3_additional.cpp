#include<iostream>
using namespace std;
int median(int ar1[],int ar2[],int n)
{

    int i = 0;
    int j = 0;
    int cnt;
    int m1 = -1, m2 = -1;
    for (cnt = 0; cnt <= n; cnt++)
    {
        if (i == n)
        {
            m1 = m2;
            m2 = ar2[0];
            break;
        }
        else if (j == n)
        {
            m1 = m2;
            m2 = ar1[0];
            break;
        }

        if (ar1[i] < ar2[j])
        {
            m1 = m2;
            m2 = ar1[i];
            i++;
        }
        else
        {
            m1 = m2;
            m2 = ar2[j];
            j++;
        }
    }

    return (m1 + m2)/2;
}

int main()
{
    int n1,n2,i;
    cout<<"enter the size of first array"<<endl;
    cin>>n1;
    cout<<"enter the size of second array"<<endl;
    cin>>n2;
    int a[n1],ar[n2];
    if(n1==n2)
    {
        cout<<"enter the array elements of first array in sorted order"<<endl;
        for(i=0;i<n1;i++)
            cin>>a[i];
        cout<<"enter the array elements of second array in sorted order"<<endl;
        for(i=0;i<n2;i++)
            cin>>ar[i];
            cout<<"median of the array after joining is:"<<endl;
            cout<<median(a,ar,n1);

    }
    else
    {
        cout<<"algorithm doesn't work for arrays of invariable sizes!!"<<endl;
    }


    return 0;
}
