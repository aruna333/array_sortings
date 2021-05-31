#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];//6,4,3,1,2
	}
	//logic for bubble sort
	int swapped=0;
	for(i=0;i<n-1;i++)//i=0
	{
		for(int j=0;j<n-1;j++)//j=0,1,2,3
		{
		  if(arr[j]>arr[j+1])//6>4 yes
		   {
			swap(arr[j],arr[j+1]);
			swapped=1;
		   }
	    }
	    if(swapped==0)
	    {
	    	break;
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
