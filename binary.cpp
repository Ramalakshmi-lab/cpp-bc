#include<bits/stdc++.h>
using namespace std;
int finder(int a[],int t,int n)
{
	int l=0;
	int r=n-1;
	while(l<=r)
	{
		int mid=(l+r)>>1;
		if(a[mid]>=t)
		{
			r=mid-1;
		}
		else
		{
			l=mid+1;
		}
	}
	return l;

}
int main()
{
	int n=5;
	int a[n]={1,3,3,3,5};
    int p=finder(a,3,n);
    cout<<p;
}
