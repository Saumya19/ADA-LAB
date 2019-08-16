#include<iostream>
using namespace std;
int binary_sr(int a[],int N, int x)
{
	int low = 0, high = N - 1;
	int cnt=0;
	int first=0,last=N,mid=0;
	while (low <= high)
	{
		int mid = (low + high)/2;
		if (x == a[mid])
		{
			for(int i=mid;i<N;i++)
            {
                if(a[i]==x)
                {
                    cnt++;
                    last=i;
                }
                else
                    break;
            }
            for(int j=mid;j>-1;j--)
            {
                if(a[j]==x)
                {
                    cnt++;
                    first=j;
                }
                else
                    break;
            }
		cout<<first<<"\t"<<last<<"\t"<<(cnt-1)<<endl;break;
		}
		else if (x < a[mid])
			high = mid - 1;
		else {
			low = mid + 1;
		}


      }
      if(low>high)
         cout<<"-1 -1 0";

}
int main()
{
	int n,a[10];
	cin>>n;
	for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
	int target,i;
	cin>>target;
	int index = binary_sr(a, n, target);
	return 0;
}
