#include<stdio.h>
void merge(int arr[],int low,int mid,int high)
{
	int i,j,k,temp[20];
	i=low,j=mid+1,k=low;
	while(i<=mid && j<=high)
	{
		if(arr[i] < arr[j])
	{
		temp[k]=arr[i];
		k++;
		i++;
	}
	else
	{
		temp[k]=arr[j];
		k++;
		j++;
	}
	}
	while(i<=mid)
	{
		temp[k]=arr[i];
		k++;
		i++;
	}
	while(j<=high)
	{
		temp[k]=arr[j];
		k++;
		j++;
	}
	for(i=low;i<=high;i++)
	{
		arr[i]=temp[i];
	}
}
void merge_sort(int arr[],int low,int high)
{
	if(low<high)
	{
		int mid=(low+high)/2;
	merge_sort(arr,low,mid);//left sub_arry
	merge_sort(arr,mid+1,high);//right sub array
	merge(arr,low,mid,high);
	}
	
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	merge_sort(arr,0,n-1);
	printf("after sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
