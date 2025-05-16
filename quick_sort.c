#include<stdio.h>
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int partition(int arr[],int low,int high)
{
	int pivot=arr[high];
	int j,i=low-1;
	for(j=low;j<=high-1;j++)
	{
		if(arr[j] < pivot)
		{
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[high]);
	return i+1;
}
void quick_sort(int arr[],int low,int high)
{
	if(low<high)
	{
		int a=partition(arr,low,high);
	quick_sort(arr,low,a-1);//left part
	quick_sort(arr,a+1,high);//right part
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
	quick_sort(arr,0,n-1);
	printf("after sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
