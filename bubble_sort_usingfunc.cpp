#include<bits/stdc++.h>
using namespace std;
void bubblesort(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int flag=0;
	 for(int j=0;j<n-i-1;j++)
	 {
	 	if(a[j]>a[j+1])
	 	{
	 		swap(a[j],a[j+1]);
	 		flag++;
		 }
	   }
	   if(flag==0)
	   {
	   	break;
	   }
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
	bubblesort(a,n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
