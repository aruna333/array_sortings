#include<bits/stdc++.h>
using namespace std;//this is unstable sort
void selectionsort(int a[],int n)//time complexity--->o(n^2)
{
	for(int i=0;i<n-1;i++)
	{
		int min_ind=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[min_ind])
			{
				min_ind=j;
			}
		}
		swap(a[i],a[min_ind]);
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	selectionsort(a,n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
